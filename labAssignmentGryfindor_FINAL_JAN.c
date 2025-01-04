/*
Nov 2024 - SMT 1 - CS Binus
MID PROJECT | LAB ALGORITHM AND PROGRAMMING
Kelompok Gryffindor
Anggota:
    Melisa Lea Andrea 2802402640
    Nadya Salsabila	2802411790
    Marcellino Adhiwono	2802411134
    Jonathan Elloy Saputra	2802416545

Judul: Harry Potter and The Magic Cook Book
Sinopsis: Help Harry, Hermione, and Ron to solve the mistery behind the magic cook book.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void saveToFile(const char *filename, const char *data) {
    FILE *file = fopen(filename, "a"); 
    if (file == NULL) {
        printf("Gagal membuka file untuk menyimpan data.\n");
        return;
    }
    fprintf(file, "%s\n", data); 
    fclose(file);
    printf("Data berhasil disimpan ke file %s.\n", filename);
}

void readFromFile(const char *filename) {
    FILE *file = fopen(filename, "r"); 
    if (file == NULL) {
        printf("Gagal membuka file untuk membaca data.\n");
        return;
    }
    char line[256];
    printf("Isi file %s:\n", filename);
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line); 
    }
    fclose(file);
    printf("\n");
}

void searchInFile(const char *filename, const char *keyword) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Gagal membuka file untuk pencarian data.\n");
        return;
    }
    char line[256];
    bool found = false;
    printf("Hasil pencarian untuk \"%s\" dalam file %s:\n", keyword, filename);
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, keyword)) { 
            printf("%s", line);
            found = true;
        }
    }
    if (!found) {
        printf("Tidak ditemukan data dengan kata kunci \"%s\".\n", keyword);
    }
    fclose(file);
}

void intro(int *choice){
    printf("Suatu hari, Harry Potter tiba-tiba dipanggil ke ruangan Dumbledore.\n");
    printf("Di sana Dumbledore berkata \"Jangan sekali-kali kau memasuki hutan terlarang.\"\n");
    printf("Harry mengangguk kecil dengan muka penasaran.\n");
    printf("\n");
    printf("Setelah pergi dari ruangan Dumbledore saat melewati lorong, Harry mendengar\n");
    printf("suara aneh dan bertanya-tanya dari mana asal suara tersebut.\n");
    printf("Sesampainya di asrama, Harry menceritakan hal tersebut kepada Ron dan Hermione.\n");
    printf("\"Ya udah ga sih, kita cari tau aja gimana?\" usul Hermione. \n");
    printf("\n");
    printf("Pagi harinya, saat tidak ada kelas saat mereka sedang bermain di halaman\n");
    printf("belakang Hogwarts, mereka melihat ke arah hutan dan merasa sangat penasaran.\n");
    printf("\"Shuuuuu\", suara aneh itu kembali terlintas di telinga Harry saat memandangi hutan.\n");
    printf("Harry pun mengabari kedua temannya dan setelah banyaknya perdebatan,\n");
    printf("mereka memutuskan untuk pergi ke hutan terlarang saat semua orang sudah tidur.\n");
    printf("\n");
    printf("Malam pun tiba dan mereka bertiga menelusuri hutan tersebut. Tiba-tiba mereka\n");
    printf("menemukan sesuatu yang janggal dan membuat mereka penasaran.\n");
    printf("Mereka merasa tertantang dan memutuskan untuk mencari tahu lebih dalam lagi.\n");
    printf("Setelah ditelusuri, mereka menemukan suatu bangunann tua kemudian mereka masuk.\n");
    printf("Pada saat itu juga, semua hal terasa lebih janggal. Di sana, mereka mendengar\n");
    printf("suara aneh dan melihat tulisan dari darah, \"Spooky Delicious Book, Yum\".\n");
    printf("Hermione berkata, \"Harry mungkinkah ini suatu petunjuk?\". Ron menjawab, \"Bisa jadi,\n");
    printf("apakah kalian tidak ingat tentang hilangnya buku mantra ajaib secara misterius\n");
    printf("yang Professor Snape ceritakan di kelas minggu lalu?\". Harry bergumam, \"Hmmm\n");
    printf("hmm hmmm\". Harry kemudian diam sejenak dan berkata, \"Bagaimana jika besok\n");
    printf("kita cari petunjuk lain?\" Ron dan Hermione setuju.\n");
    printf("\n");
    printf("///Mulailah dengan misi ke-1\n");

}

void kehilangan_arah(int *choice){
    char pilihan[10];
    printf("Ketika berjalan ke Hogwarts mereka mendengar suara yang sedikit jelas\n");
    printf("menyebutkan, \"Harry Potter come here.\" Mereka bertiga makin penasaran dan\n");
    printf("memutuskan untuk kembali ke bangunan tua itu. Namun, kali ini pintu terkunci.\n");
    printf("\"Kita trobos saja pintunya. Masakah kalian lelaki tidak bisa mendobraknya?\" protes Hermione.\n");
    printf("\"Ah sudahlah aku sudah mengantuk. Besok aja yaa pliss,\" jawab Ron.\n");
    printf("Mereka akhirnya memutuskan untuk pulang.\n");
    printf("\n");
    printf("Ketika hendak kembali, mereka kehilangan arah. Jalan manakah yang harus mereka pilih? \n");
    printf("\tA. Kanan\n");
    printf("\tB. Kiri\n");
    printf("Tentukan pilihanmu (ketik Kanan/Kiri): \n");

    loop:
    scanf("%s", &pilihan); getchar();

    if(strcmp(pilihan, "1")==0){
        return;
    }

    int length_pilihan=strlen(pilihan);
    for(int i=0; i<length_pilihan; i++){
        pilihan[i]=tolower(pilihan[i]);
    }

    if( (strcmp(pilihan, "kanan")) == 0){
        printf("Harry, Ron, dan Hermione belok ke kanan dan melanjutkan perjalanannya.\n");
        printf("Namun ditengah jalan ada makhluk dengan rupa naga berkepala kucing yang mencegat mereka.\n");
        printf("Harry mengeluarkan mantranya dan berhasil mengalahkannya.\n");
        printf("Saat makhluk itu hendak pergi, sambil menatap mata mereka bertiga,\n");
        printf("ia memberi sebotol minuman manis bertuliskan \"Mokka\".\n");
        printf("\n");
        printf("///Lanjutkan ke misi ke-2\n");
    }else if( (strcmp(pilihan, "kiri")) == 0){
        printf("Harry, Ron, dan Hermione belok ke kiri dan melanjutkan perjalanannya.\n");
        printf("Namun ditengah jalan ada makhluk hitam besar yang menerkam\n");
        printf("mereka dari belakang. Harry mengeluarkan mantranya namun...\n");
        printf("tidak berhasil mengalahkannya.\n");
        printf("Seminggu kemudian, Harry, Ron, dan Hermione ditemukan\n");
        printf("oleh Hagrid dalam kondisi tidak bernyawa.\n");
        printf("\n");
        printf("Maaf, silakan coba lagi!\n\n"
                "//input 1 untuk kembali ke menu\n"
                "Jawabanmu(ketik Kanan/Kiri): ");
        goto loop;
    }else{
        printf("Pilihan tidak valid. Hanya bisa ke kanan atau ke kiri.\n"
                "Ron akhirnya menjadi pembuat keputusan dan memilih (ketik kanan/kiri): \n\n"
                "//input 1 untuk kembali ke menu\n"
                "Jawabanmu: "
            );
			goto loop;
    }
}

void teka_teki(int *choice) {
    int X, Y;
    printf("Sesampainya di Hogwarts, mereka dicegat sang penjaga Hogwarts,");
    printf("kucing bernama Mrs. Norris dan tuannya, Filch. \"Kemana saja kalian? Sudah jam segini.\n");
    printf("Kalian tau kan konsekuensi keluar di jam malam?\". Harry, Ron, dan Hermione merenung.");
    printf("Saat berdiam, Hermione menyadari buku teka-teki yang dipegang oleh\n");
    printf("Filch. \"Buku Teka Teki Mantra Perubah Tongkat?\" tanya Hermione. \"Oh, buku ini.");
    printf("Tadi aku bertemu Snape kebingungan. Jadi, aku mau membantunya.\n");
    printf("Begini saja, kuijinkan kalian lolos. Tapi bantu aku memecahkan teka-teki ini.");
    printf("Lagipula kalian masih baru di sini.\"\n");
    puts(" ");
    printf("Filch pun memperlihatkan mereka isi teka-tekinya.\n");
    puts(" ");
    printf("2, 6, 4, 8, 6, 10, 8, 12, 10, X\nCH3COOH = X\n");
    printf("a, b, 8, c, d\nH2O = Y = a + b + c + d?\n");
    printf("Clue : simpan jawaban ini\n");
    puts(" ");

    loop:
    printf("Jawaban : \n");
    printf("X = ");
    scanf("%d", &X); getchar();
    printf("Y = ");
    scanf("%d", &Y); getchar();
    puts(" ");

    if(X==100 || Y==100){
        return;
    }

    if (X == 14 && Y == 32) {
        printf("Mantap! Mereka berhasil menjawabnya. Filch terkesan dan memberikan mereka\n");
        printf("ijin untuk kembali ke kamar dan memberi mereka permen bertuliskan \"raff\".\n");
        puts(" ");
        printf("///Lanjutkan ke misi ke-3\n");
    } else {
        printf("Filch kecewa karena jawaban salah. Namun ia memberi kesempatan kedua\n\n"
                "//input 100 pada salah satu jawaban untuk kembali ke menu\n"
                );
		goto loop;
        
    }
}

void mantra_flitwick (int *choice){
    char ans_mantra[30];
    char soal_mantra[]="sukgnirdnirg sunioskot";

    //Cara membaca mantranya adalah dengan membalikan huruf demi huruf
    int length_mantra=strlen(soal_mantra);
    char kj_mantra[length_mantra];
    for(int i=0; i<length_mantra; i++){
        kj_mantra[i]=soal_mantra[length_mantra-1-i];
    }

    printf("Pagi harinya, mereka bergegas ke kelas mereka bersama Flitwick.\n");
    printf("Kelas dibuka dengan perkataan Flitwick \"Hari ini, bukan kelas biasa. Aku akan\n");
    puts("memberi kalian pelajaran dari buku ini. Buku ini baru saja ditemukan lagi.");
    puts("Isinya sangatlah penting bagi keberlangsungan sekolah kita. Namun, sekarang");
    puts("buku ini kosong. Tidak ada yang tau cara mengembalikan tulisannya.");
    puts("Maka karena itu aku akan mengajarkan kalian apa yang aku ingat.\"");
    puts(" ");
    puts("Flitwick menulis di papan.");
    puts("\tBaris pertama bertuliskan \"Iskotokiak\" dan");
    printf("\tBaris kedua, \"%s\".\n", soal_mantra);
    puts("");
    puts("Katanya sambil menggerakan tongkat sihirnya ke arah sebuah botol kaca dan");
    puts("berkata \"Kaikotoksi\" dan botol itu berubah menjadi potongan kue yang beracun.");
    puts("\"Sekarang, siapa yang bisa mengubah kayu itu menjadi minuman hijau mematikan?\"");
    puts("Apa yang harus Harry katakan?");
    printf("Jawaban: ");

    loop:
    scanf("%[^\n]", &ans_mantra); getchar();

    if(strcmp(ans_mantra, "1")==0){
        return;
    }

    //mengubah input user jadi huruf kecil semua
    int length_ans_mantra=strlen(ans_mantra);
    for(int i=0; i<length_ans_mantra; i++){
        ans_mantra[i]=tolower(ans_mantra[i]);
    }
    
    if(strcmp(kj_mantra, ans_mantra) == 0){
        printf("\"Bagus Harry, kurasa kau cukup pintar untuk memiliki buku ini.\n"
                "Pakai dengan baik ya,\" kata Flitwick sambil memberi buku itu dan kue berukiran \"iz\"\n"
                "\n///Lanjut ke misi ke-4\n");
    }else{
        printf("Namun kayu itu malah menjadi patung kucing menangis.\n"
                "Harry mencoba lagi dan berkata: \n\n"
                "//input 1 untuk kembali ke menu\n"
                "Jawabanmu: "
                );
		goto loop;
    }
}

void ramuan(int *choice) {
    int CH3COOH, KOH, H2O, CO2, HCL;
    double CH3COOHa, KOHa, H2Oa, CO2a, HCLa;

    double total_volume = 13500.0; // Total volume larutan (90% dari 15000 mL)
    H2Oa = 0.32 * total_volume;
    CH3COOHa = 0.14 * total_volume;
    KOHa = 0.28 * total_volume;
    CO2a = 0.016 * total_volume;
    HCLa = total_volume - (H2Oa + CH3COOHa + KOHa + CO2a);

    printf("\nKeluar dari kelas Harry, Ron, dan Hermione berjalan ke kelas Snape. Harry berkata sambil\n"
            "mengamati buku itu, \"Ah untuk apa juga buku ini? Sudah kosong juga\".\n");
    printf("Namun Hermione menyadari sesuatu, dibalik buku itu tertuliskan \"Spooky Delicious\"\n."
            "Hermione pun berkata \"WEH HARRY! Itu kan kaya yang di bangunan kemarin?!\".\n");
    printf("Mereka bertiga panik namun kelas Snape sudah dekat.\n");
    printf("Mereka berlari dan untungnya kelas belum dimulai. Di kelas, sudah ada kertas bertuliskan:\n");
    printf("\nTabung diisi dengan ramuan dengan kapasitas 90 persen. Total volume dari tabung tersebut adalah 15.000 mL.\n");
    printf("Ramuan tersebut terdiri dari petunjuk yang berisi ketentuan:\n");
    printf("CH3COOH sebanyak X persen,\n");
    printf("KOH sebanyak 2x larutan CH3COOH,\n");
    printf("H2O sebanyak Y persen,\n");
    printf("CO2 sebanyak 5 persen milik dari H2O,\n");
    printf("dan sisanya adalah HCL.\n\n");
    printf("Snape berkata \"Aku tak perlu menjelaskan. Kerjakanlah yang di meja dengan\n membentuk tim 3 orang. Semua larutan sudah kusiapkan.\"\n");
    printf("Berapakah banyak larutan yang harus Harry, Ron, dan Hermione isi? Jawab dalam satuan mL.\n");
    printf("Clue: Gunakan informasi dari Filch\n");

    printf("\nMasukkan jumlah larutan:\n");
    loop:
    while (1) {
        printf("CH3COOH = ");
        if (scanf("%d", &CH3COOH) != 1) {
            printf("Input invalid. Harap masukkan angka.\n");
            while (getchar() != '\n'); 
            continue;
        }
        printf("KOH = ");
        if (scanf("%d", &KOH) != 1) {
            printf("Input invalid. Harap masukkan angka.\n");
            while (getchar() != '\n');
            continue;
        }
        printf("H2O = ");
        if (scanf("%d", &H2O) != 1) {
            printf("Input invalid. Harap masukkan angka.\n");
            while (getchar() != '\n');
            continue;
        }
        printf("CO2 = ");
        if (scanf("%d", &CO2) != 1) {
            printf("Input invalid. Harap masukkan angka.\n");
            while (getchar() != '\n');
            continue;
        }
        printf("HCL = ");
        if (scanf("%d", &HCL) != 1) {
            printf("Input invalid. Harap masukkan angka.\n");
            while (getchar() != '\n');
            continue;
        }

    if(CH3COOH==1 || KOH==1 || H2O==1 || CO2==1 || HCL == 1){
        return;
    }

    if (CH3COOH == (int)CH3COOHa && KOH == (int)KOHa && H2O == (int)H2Oa && CO2 == (int)CO2a && HCL == (int)HCLa) {
        printf("\n\"Memang kalian jenius!\" kata Snape sambil memberi mereka kue wafer\n"
                "yang diproduksi oleh perusahaan \"switi\".\n");
        printf("///Lanjut ke misi ke-5\n");
    } else {
        printf("Waduh! Ramuannya malah menguap. Harry pun menghitung lagi dan menemukan\n"
                "bahwa volume yang tepat adalah: \n\n"
                "//input 1 di salah satu jawaban untuk kembali ke menu\n"
                "Jawabanmu: \n");
        goto loop;
    }
}
}


void anak_lupin(int *choice){
    int chance;
    printf("Mereka bertiga pun lanjut bertanya kepada Snape mengenai buku yang sempat hilang dan kini\n"
            "dimiliki oleh Harry. Setelah dibujuk, Snape pun menceritakan mereka, \"Dahulu anak dari\n"
            "Professor Lupin dan Nymphadora ingin menjadi koki. Namun, Lupin ingin dia meneruskan karirnya \n"
            "di dunia sihir. Nymphadora merasa Lupin tidak adil. Karena itu, ia membuatkan buku yang mencampur\n"
            "ilmu sihir dan masakan. Namun, Dumbledore menyadari bahwa semua resep yang tertulis menghasilkan makanan\n"
            "beracun bahkan mematikan. Maka karena itu Hogwarts berusaha merebut buku itu. Konon anak Lupin kini\n"
            "kabur dan tinggal di bangunan tua. Meski begitu, ada seseorang bernama Hetixo yang mendaftar di Hogwarts\n"
            "dan kami curiga, dialah anak dari Lupin.Tiap kali Lupin ditanya, ia diam. Ntah karena itu anaknya,\n"
            "atau memang dia sudah tak ingin membicarakannya lagi.\"\n\n");
    printf("\"Mungkinkah jika kita ingin memastikan siapa anak Lupin sebenarnya?\" tanya Ron. \"Ntahla, tak banyak\n"
            "informasi yang kita miliki. Hanya saja, ayahnya memiliki golongan darah A, dan seorang ibu memiliki\n"
            "golongan darah O. Namun, ntah berapa persen kemungkinan bahwa anaknya memiliki golongan darah B\" jawab Snape.\n"
            "Hermione dan ilmu biologinya mulai menghitung dan menemukan bahwa\n"
            "kemungkinan anaknya bergolongan darah B adalah ...%%\n\n");
    printf("Jawabanmu (angka saja): ");

    loop:
    scanf("%d", &chance); getchar();

    if(chance==101){
        return;
    }

    if(chance==0){
        printf("Benar 0%%! Itu berarti... \"BUKAN! BUKAN HETIXO! Tidak mungkin. Anaknya hanya mungkin memiliki\n"
                "golongan darah O atau A,\" jawab Hermione. \"Seperti yang ku terka. Ah sudahlah, tapi yang penting\n"
                "sekarang adalah mengembalikan isi buku itu. Karena meski isinya berbahaya, isi buku itu pasti hilang\n"
                "karena suatu tulisan,\" jawab Snape sambil menyuguhkan mereka jus manis bermerek \"produis\"\n");
        printf("///Silakan lanjut ke final mission\n");
    }else{
        printf("\"Salah deh kamu Hermione, itung lagi,\" ucap Ron. Hermione berpikir lagi dan menemukan presentasenya...\n\n"
                "//input 101 untuk kembali ke menu\n"
                "Jawabanmu: "
                 );
			goto loop;
    }
}

int spellchecker(char* spell){
	int i;
	for (i = 0; i < strlen(spell); ++i){
	spell[i] = tolower(spell[i]);
	}
	if (strcmp("mokka raff iz switi produis", spell) == 0){
		return 1;
	} else {
		return 0;
	}
}

void terungkap(int *choice){    
    char spell[50], outcome;
    printf("Saat istirahat Harry, Ron, dan Hermione pergi ke perpustakan untuk mencari tau\n"
    "cara mengembalikan tulisan yang hilang. Dan mereka menemukan bahwa untuk buku yang menuliskan\n"
    "menu makanan, mantra didapat dari kata yang tertulis di 5 makanan atau minuman manis yang orang\n"
    "itu terakhir makan ataupun minum.\n"
    "Harry pun berkata: ");

	loop:
	scanf("%[^\n]", &spell); getchar();
	if(strcmp(spell, "1")==0){
        return;
    }else{
        outcome = spellchecker(spell);
    }
        
	switch (outcome) {
		case 1:
			printf("Dan buku itupun terbuka sendiri, melayang dan menulis isinya sendiri.\n"
                "Saat dibawa ke Dumbledore, ternyata di sana tertulis bahwa salah satu resurrection stone\n"
                "ada di gedung tua itu. Namun, saat mereka pergi kembali ke gedung tua itu bersama Dumbledore, Voldermort sudah menunggu.\n"
                "...to be continued...\n\n"
                "Selamat! Kamu berhasil! (^_^)\n"
                );
			break;
		default:
			printf("\nNamun tidak didapatkan respon apapun dari buku tersebut.\n"
            "\"Hmm... Sepertinya kata-kata yang kita katakan masih belum tepat. Apa ya?\"\n"
            "kata Harry dengan ragu."
            "\nLalu Harry pun berkata:\n\n"
            "//input 1 untuk kembali ke menu\n"
            "Jawabanmu: "
            );
			goto loop;	
			break;
		}
}

int main() {
    int choice;
    char data[256], keyword[50], filename[50] = "game_data.txt";

    //Opening title
        printf("                                         _ __ \n");
        printf("        ___                             | '  \\ \n");
        printf("   ___  \\ /  ___         ,'\\_           | .-. \\        /| \n");
        printf("   \\ /  | |,'__ \\  ,'\\_  |   \\          | | | |      ,' |_   /| \n");
        printf(" _ | |  | |\\/  \\ \\ |   \\ | |\\_|    _    | |_| |   _ '-. .-',' |_   _ \n");
        printf("// | |  | |____| | | |\\_|| |__    //    |     | ,'_`. | | '-. .-',' `. ,'\\_ \n");
        printf(" \\_| |_,' .-, _  | | |   | |\\ \\  //    .| |\\_/ | / \\ || |   | | / |\\  \\|   \\ \n");
        printf(" `-. .-'| |/ / | | | |   | | \\ \\//     |  |    | | | || |   | | | |_\\ || |\\_| \n");
        printf("   | |  | || \\_| | | |   /_\\  \\ /      | |`    | | | || |   | | | .---'| | \n");
        printf("   | |  | |\\___,_\\ /_\\ _      //       | |     | \\_/ || |   | | | |  /\\| | \n");
        printf("   /_\\  | |           //_____//       .||`  _   `._,' | |   | | \\ `-' /| | \n");
        printf("        /_\\           `------'        \\ |  /-\\         `.\\  | |  `._,' /_\\ \n");
        printf("                                       \\|                   `.\") \n");

    printf("Selamat datang di perjalanan Harry, Ron, dan Hermione. Selesaikan semua tantangan dan ungkap kebenaran!\n"
            "//Sebaiknya kerjakan berurutan. Good luck///\n");

    while (1) {
        printf("==================================================================================================\n");
        printf("Pilih tantangan:\n");
        printf("0. Awal Mula Perjalanan\n");
        printf("1. Kehilangan Arah\n");
        printf("2. Teka-teki Filch\n");
        printf("3. Mantra Flitwick\n");
        printf("4. Ramuan Snape\n");
        printf("5. Misteri Anak Lupin\n");
        printf("6. Terungkapnya Isi Buku\n");
        printf("7. Simpan Data/Notes\n");
        printf("8. Baca Data/Notes\n");
        printf("9. Cari Data/Notes\n");
        printf("10. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice); getchar();
        printf("==================================================================================================\n");

        switch (choice) {
            case 0:
                intro(&choice);
                break;
            case 1:
                kehilangan_arah(&choice);
                break;
            case 2:
                teka_teki(&choice);
                break;
            case 3:
                mantra_flitwick(&choice);
                break;
            case 4:
                ramuan(&choice);
                break;
            case 5:
                anak_lupin(&choice);
                break;
            case 6:
                terungkap(&choice);
                break;
            case 7:
                printf("Masukkan data yang ingin disimpan: ");
                fgets(data, sizeof(data), stdin);
                data[strcspn(data, "\n")] = 0; // Hapus karakter newline
                saveToFile(filename, data);
                break;
            case 8:
                readFromFile(filename);
                 break;
            case 9:
                printf("Masukkan kata kunci untuk pencarian: ");
                fgets(keyword, sizeof(keyword), stdin);
                keyword[strcspn(keyword, "\n")] = 0;
                searchInFile(filename, keyword);
                break;
            case 10:
                printf("Keluar dari program. Sampai jumpa kembali!\n"
                        "=====================================================\n"
                        "# Mid Project Algorithm & Programming - LAB #\n"
                        "### Kelompok Gryffindor\n"
                        "\t%-30s2802402640\n"
                        "\t%-30s2802411790\n"
                        "\t%-30s2802411134\n"
                        "\t%-30s2802416545\n", "Melisa Lea Andrea", "Nadya Salsabila", "Marcellino Adhiwono", "Jonathan Elloy Saputra"
                        );
                exit(0);
            default:
                printf("Pilihan tidak valid. Coba lagi.\n");
        }
    }
    return 0;
}