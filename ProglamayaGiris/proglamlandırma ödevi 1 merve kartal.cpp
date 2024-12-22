// proglamlandırma ödevi 1 merve kartal.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//



- ***********
**SAKARYA ÜNİVERSİTESİ
* *BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ
* *BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ
* *PROGRAMLAMAYA GİRİŞİ DERSİ
* *
**ÖDEV NUMARASI….(1)..:
**ÖĞRENCİ ADI..MERVE............. :
	**ÖĞRENCİ NUMARASI. :B211210557
	**DERS GRUBU………… :A
**************************/

#include <iostream>
#include <clocale>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <string>
using namespace std;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	//1. Görev
	//Rastgele Seçilen Şehirler
	string rastgeleSehirler[14];
	//Rastgele Seçilen Şehirlerden Çekilen Harfler
	string harfBirlestirme;
	//Rastgele Şehir Seçerken kullanılan rastgele sayıyı tutan int
	int tutulansayi;
	srand(time(0));
	//Şehir bulundumu kontrolcüsü
	int sehirBulundu = 0;
	//Bulunan En Kısa İlin Harf Sayısı Tutucu
	int bulunanEnKisaIl = 99;
	//Hangi 2 Değer Aralığında Rastgele Sayı Tutulucak
	int enFazlaKac = 80, enAzKac = 0;
	//Kaç Harfli 
	int kacHarfliIlBulunucak = 3;
	//İlleri String Dizisi İçine Aldım
	string trIller[81]{ "adana", "adıyaman", "afyonkarahisar", "ağrı", "aksaray", "amasya", "ankara", "antalya", "ardahan", "artvin", "aydın", "balıkesir", "bartın", "batman", "bayburt", "bilecik", "bingöl", "bitlis", "bolu", "burdur", "bursa", "çanakkale", "çankırı", "çorum", "denizli", "diyarbakır", "düzce", "edirne", "elazığ", "erzincan", "erzurum", "eskişehir", "gaziantep", "giresun", "gümüşhane", "hakkari", "hatay", "ığdır", "ısparta", "istanbul", "izmir", "kahramanmaraş", "karabük", "karaman", "kars", "kastamonu", "kayseri", "kilis", "kırıkkale", "kırklareli", "kırşehir", "kocaeli", "konya", "kütahya", "malatya", "manisa", "mardin", "mersin", "muğla", "muş", "nevşehir", "niğde", "ordu", "osmaniye", "rize", "sakarya", "samsun", "şanlıurfa", "siirt", "sinop", "sivas", "şırnak", "tekirdağ", "tokat", "trabzon", "tunceli", "uşak", "van", "yalova", "yozgat", "zonguldak" };

	//En Uzun Ve En Kısa İli İçinde Tutan Dizi 0. İndis En Kısa İl 1. İndis En Uzun İl
	int enUzunVeEnKisaIl[2]{ 0,0 };

	//En Uzun Ve En Kısa İl Buldurma
	for (int z = 0; z < 81; z++)
	{
		//En Kısa İl
		if (trIller[enUzunVeEnKisaIl[0]].size() > trIller[z].size())
		{
			enUzunVeEnKisaIl[0] = z;
		}
	}
	for (int z = 0; z < 81; z++)
	{
		//En Uzun İl
		if (trIller[enUzunVeEnKisaIl[1]].size() < trIller[z].size())
		{
			enUzunVeEnKisaIl[1] = z;
		}
	}
	cout << "**********" << endl << "     1. Görev  " << endl << endl << "En Uzun İl : " << trIller[enUzunVeEnKisaIl[1]] << "   En Kısa İl : " << trIller[enUzunVeEnKisaIl[0]] << endl << endl << "**********" << endl << endl;
	//2-3-4. Görev
	cout << "     2-3-4. Görev" << endl << endl;
	// 100000 Kere Dönen For Döngüsü
	for (int denemeSayisi = 0; denemeSayisi < 100000; denemeSayisi++)
	{
		//En Kısa İlin Harf Sayısı Her Döngüde Sıfırlanıyor
		int bulunanEnKisaIl = 99;
		//Rastgele Sayi Türetme
		for (int rastgeleSayiTutturma = 0; rastgeleSayiTutturma < kacHarfliIlBulunucak; rastgeleSayiTutturma++)
		{
			tutulansayi = rand() % (enFazlaKac - enAzKac + 1) + enAzKac;
			rastgeleSehirler[rastgeleSayiTutturma] = trIller[tutulansayi];

		}
		//Bulunan İller Arasındaki En Kısa İl
		for (int p = 0; p < kacHarfliIlBulunucak; p++)
		{
			if (rastgeleSehirler[p].size() < bulunanEnKisaIl)
			{
				bulunanEnKisaIl = rastgeleSehirler[p].size();

			}
		}
		//Rastgele İllerin Kaçıncı Harfinin Çekileceğini Bulma
		for (int u = 0; u < bulunanEnKisaIl; u++)
		{
			//Rastgele Kaç ilin harfinin çekileceğini bulma
			for (int y = 0; y < kacHarfliIlBulunucak; y++)
			{
				harfBirlestirme += rastgeleSehirler[y].substr(u, 1);
			}
			//Birleştirilen Harflerden Anlamlı İl İsmi Oluşuyormu Kontrol Etme
			for (int w = 0; w < 81; w++)
			{

				if (harfBirlestirme == trIller[w])
				{
					//İl Bulununca 1 Oluyor
					sehirBulundu++;
					break;
				}
			}
			//İl Bulununca  Yapılacak İşlemler
			if (sehirBulundu == 1)
			{
				cout << kacHarfliIlBulunucak << " Harfli Bulunan İl : " << harfBirlestirme << endl;
				//Bulunan İlin Rastgele İllerin Kaçıncı Harflerinden Olduğu
				cout << u + 1 << ". Harflerde Bulundu" << endl;
				//Bulunan İlin Hangi Rastgele İllerden Olduğu
				for (int m = 0; m < kacHarfliIlBulunucak; m++)
				{
					cout << rastgeleSehirler[m] << endl;
				}
				cout << endl;
				//Birleştirilen Harfleri Sıfırlama
				harfBirlestirme = "";
				//Kaç harfli il arandıysa bir sonraki harfe geçiricek
				kacHarfliIlBulunucak++;
				sehirBulundu = 0;
				break;
			}

			//Birleştirilen Harfleri Sıfırlama
			harfBirlestirme = "";
		}
		//Eğer 14 harfli il aranıp bulunamadıysa döngüyü kır
		if (kacHarfliIlBulunucak == 14 && denemeSayisi == 99999)
		{
			cout << kacHarfliIlBulunucak << " Harfli İl Bulunamadı!" << endl << endl;
			break;
		}
		//Eğer aranan kadar harfli il 100000 kere aranıp bulunamadıysa bir fazla harf sayısılı il aramaya başla
		if (sehirBulundu == 0 && denemeSayisi == 99999)
		{
			cout << kacHarfliIlBulunucak << " Harfli İl Bulunamadı!" << endl << endl;
			kacHarfliIlBulunucak++;
			sehirBulundu = 0;
			denemeSayisi = 0;
		}
	}

	cout << endl << endl << endl << endl << endl;
	system("pause");
	return 0;


// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
