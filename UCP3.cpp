#include <iostream>
using namespace std;

class MasukUniversitas {
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    float totalBiaya;

public:
    MasukUniversitas(){
        uangPendaftaran = 0;
        uangSemesterPertama = 0 ;
        uangBangunan = 0 ;
        totalBiaya = 0;
    };

    virtual void namaJalurMasuk();
    virtual void hitungTotalBiaya();
    virtual void tampilkanTotalBiaya();
     
    void setUangPendaftaran(int nilai){
        this->uangPendaftaran = nilai;
    }

    float getUangPendaftaran(){
        return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilai){
        this->uangSemesterPertama = nilai;
    }

    float getUangSemesterPertama(){
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai){
        this->uangBangunan = nilai;
    }

    float getUangBangunan(){
        return uangBangunan;
    }
};

class SNBT : public MasukUniversitas{
    public:
    void namaJalurMasuk(){
        cout << "Jalur Masuk: SNBT" << endl;
    }
    void input(){
        cout << "Masukan Uang Pendaftaran: ";
        cout << "Masukan Uang Semester Pertama: ";
        cout << " Masukan uang Bangunan: ";
    }

     
};

class SNBP : public MasukUniversitas{
public: 
    void namaJalurMasuk(){
        cout << "Jalur Masuk: SNBP" << endl;
    }

    void input(){
        cout <<  "Masukkan Uang Pendaftaran : ";
        cout << "Masukan Uang Semester Pertama: ";
    }
};
void menu(){
    cout << "Pilih Jalur Masuk Universitas:\n";
    cout << "1. SNBT\n";
    cout << "1. SNBP\n";
    cout << "Masukkan pilihan Anda: ";

}

int main(){
    MasukUniversitas* jalurMasuk;
    int pilihan;

    jalurMasuk->namaJalurMasuk();
    jalurMasuk->hitungTotalBiaya();
    jalurMasuk->tampilkanTotalBiaya();

    return 0;


}

