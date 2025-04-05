## 🪨 📄 ✂️ Taş-Kağıt-Makas Oyunu (C Dili)

Bu proje, C programlama dili kullanılarak yazılmış basit bir **Taş-Kağıt-Makas** oyunudur. Oyuncu 5 tur boyunca bilgisayara karşı oynar, her turda skorlar tutulur ve sonunda kazanan belirlenir.

### 🧠 Oyun Kuralları:
- **Taş (0)**, **Makas'ı** yener.
- **Makas (2)**, **Kağıt'ı** yener.
- **Kağıt (1)**, **Taş'ı** yener.
- Aynı seçim yapılırsa tur **beraber** biter.

### ⚙️ Nasıl Çalışır?
1. Oyuncu 0, 1 veya 2 seçerek bir hamle yapar.
2. Bilgisayar rastgele bir seçim yapar.
3. 5 turun sonunda skorlar toplanır ve sonuç açıklanır.

### 🖥️ Derlemek için:
```bash
gcc tas_kagit_makas.c -o oyun
./oyun
