@ ポケモン背面画像圧縮データ
@ このファイルは tools/generate_mon_back_pics.py で生成

  .globl gMonBackPic_None
gMonBackPic_None:
  .incbin "build/graphics/pokemon/none/back.4bpp.lz"

  .globl gMonPalette_None
gMonPalette_None:
  .incbin "build/graphics/pokemon/none/normal_palette.gbapal.lz"
  .balign 4, 0

  .globl gMonShinyPalette_None
gMonShinyPalette_None:
  .incbin "build/graphics/pokemon/none/shiny_palette.gbapal.lz"
  .balign 4, 0

  .globl gFontTiles
gFontTiles:
  .incbin "build/graphics/fonts/font_tiles.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/00_C013F0.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/00_C01624.gbapal.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/00_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/01_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/02_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/03_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/04_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/05_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/06_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/07_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/08_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/09_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/0A_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/0B_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/0C_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/0D_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/0E_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/0F_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/10_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/11_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/12_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/13_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/14_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/15_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/16_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/17_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/18_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/19_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/1A_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/1B_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/1C_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/1D_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/1E_32x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/1F_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/20_64x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/21_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/22_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/23_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/24_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/25_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/26_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/27_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/28_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/29_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/2A_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/2B_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/2C_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/2D_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/2E_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/2F_96x96.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/30_64x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/31_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/32_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/33_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/34_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/35_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/36_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/37_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/38_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/39_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/3A_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/3B_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/3C_32x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/3D_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/3E_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/3F_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/40_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/41_56x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/42_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/43_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/44_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/45_56x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/46_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/47_64x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/48_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/49_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/4A_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/4B_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/4C_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/4D_48x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/4E_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/4F_112x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/50_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/51_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/52_56x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/53_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/54_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/55_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/56_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/57_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/58_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/59_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/5A_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/5B_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/5C_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/5D_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/5E_128x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/5F_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/60_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/61_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/62_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/63_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/64_40x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/65_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/66_16x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/67_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/68_24x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/69_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/6A_24x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/6B_128x80.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/6C_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/6D_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/6E_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/6F_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/70_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/71_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/72_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/73_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/74_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/75_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/76_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/77_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/78_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/79_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/7A_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/7B_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/7C_128x128.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/7D_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/7E_328x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/7F_128x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/80_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/81_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/82_128x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/83_40x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/84_128x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/85_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/86_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/87_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/88_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/89_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/8A_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/8B_64x48.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/8C_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/8D_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/8E_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/8F_128x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/90_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/91_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/92_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/93_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/94_96x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/95_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/96_32x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/97_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/98_16x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/99_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/9A_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/9B_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/9C_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/9D_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/9E_48x48.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/9F_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/A0_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/A1_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/A2_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/A3_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/A4_32x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/A5_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/A6_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/A7_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/A8_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/A9_48x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/AA_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/AB_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/AC_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/AD_64x56.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/AE_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/AF_48x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/B0_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B1_96x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/B2_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/B3_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B4_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/B5_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B6_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B7_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B8_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/B9_48x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/BA_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/BB_64x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/BC_16x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/BD_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/BE_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/BF_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C0_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C1_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C2_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C3_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C4_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C5_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C6_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C7_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C8_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/C9_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/CA_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/CB_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/CC_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/CD_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/CE_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/CF_104x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D0_96x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D1_40x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D2_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D3_24x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D4_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D5_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D6_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D7_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D8_128x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/D9_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/DA_32x24.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/DB_56x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/DC_64x48.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/DD_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/DE_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/DF_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E0_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E1_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E2_64x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E3_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/E4_96x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E5_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/E6_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E7_128x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/E8_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/E9_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/EA_8x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/EB_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/EC_112x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/ED_16x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/EE_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/EF_80x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F0_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/F1_64x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F2_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/F3_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F4_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/F5_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F6_128x128.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F7_2824x8.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/F8_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/F9_64x56.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FA_64x64.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FB_64x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FC_32x32.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FD_40x16.4bpp.lz"
  .balign 4, 0

  .incbin "build/graphics/unknown/FE_palette.gbapal.lz"
  .balign 4, 0
  .incbin "build/graphics/unknown/FF_64x64.4bpp.lz"
  .balign 4, 0

gUnknown_C11BA4:
  .incbin "baserom.gba", 0xC11BA4, 0xF00

gUnknown_C12AA4:
	.incbin "baserom.gba", 0xC12AA4, 0x33E4
	@ 0xC12AA4 - 0xC15E87

gUnknown_C15E88:
	.incbin "baserom.gba", 0xC15E88, 0x3424
	@ 0xC15E88 - 0xC192AB

gUnknown_C192AC:
	.incbin "baserom.gba", 0xC192AC, 0x304C
	@ 0xC192AC - 0xC1C2F7

gUnknown_C1C2F8:
	.incbin "baserom.gba", 0xC1C2F8, 0x2EF4
	@ 0xC1C2F8 - 0xC1F1EB

gUnknown_C1F1EC:
	.incbin "baserom.gba", 0xC1F1EC, 0x2F38
	@ 0xC1F1EC - 0xC22123

gUnknown_C22124:
	.incbin "baserom.gba", 0xC22124, 0x312C
	@ 0xC22124 - 0xC2524F

gUnknown_C25250:
	.incbin "baserom.gba", 0xC25250, 0x31C0
	@ 0xC25250 - 0xC2840F

gUnknown_C28410:
	.incbin "baserom.gba", 0xC28410, 0x2CF0
	@ 0xC28410 - 0xC2B0FF

gUnknown_C2B100:
	.incbin "baserom.gba", 0xC2B100, 0x2B0C
	@ 0xC2B100 - 0xC2DC0B

gUnknown_C2DC0C:
	.incbin "baserom.gba", 0xC2DC0C, 0x2138
	@ 0xC2DC0C - 0xC2FD43

  .globl gMonPalette_Bulbasaur
gMonPalette_Bulbasaur:
  .incbin "build/graphics/pokemon/bulbasaur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bulbasaur
gMonBackPic_Bulbasaur:
  .incbin "build/graphics/pokemon/bulbasaur/back.4bpp.lz"

  .globl gMonShinyPalette_Bulbasaur
gMonShinyPalette_Bulbasaur:
  .incbin "build/graphics/pokemon/bulbasaur/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xc30044, 0x794

  .globl gMonPalette_Ivysaur
gMonPalette_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ivysaur
gMonBackPic_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/back.4bpp.lz"

  .globl gMonShinyPalette_Ivysaur
gMonShinyPalette_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc30bb4, 0x9ac

  .globl gMonPalette_Venusaur
gMonPalette_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Venusaur
gMonBackPic_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/back.4bpp.lz"

  .globl gMonShinyPalette_Venusaur
gMonShinyPalette_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc31a80, 0x6d0

  .globl gMonPalette_Charmander
gMonPalette_Charmander:
  .incbin "build/graphics/pokemon/charmander/normal_palette.gbapal.lz"

  .globl gMonBackPic_Charmander
gMonBackPic_Charmander:
  .incbin "build/graphics/pokemon/charmander/back.4bpp.lz"

  .globl gMonShinyPalette_Charmander
gMonShinyPalette_Charmander:
  .incbin "build/graphics/pokemon/charmander/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc32434, 0x7c8

  .globl gMonPalette_Charmeleon
gMonPalette_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Charmeleon
gMonBackPic_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/back.4bpp.lz"

  .globl gMonShinyPalette_Charmeleon
gMonShinyPalette_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc32f2c, 0x970

  .globl gMonPalette_Charizard
gMonPalette_Charizard:
  .incbin "build/graphics/pokemon/charizard/normal_palette.gbapal.lz"

  .globl gMonBackPic_Charizard
gMonBackPic_Charizard:
  .incbin "build/graphics/pokemon/charizard/back.4bpp.lz"

  .globl gMonShinyPalette_Charizard
gMonShinyPalette_Charizard:
  .incbin "build/graphics/pokemon/charizard/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc33d08, 0x6fc

  .globl gMonPalette_Squirtle
gMonPalette_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Squirtle
gMonBackPic_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/back.4bpp.lz"

  .globl gMonShinyPalette_Squirtle
gMonShinyPalette_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc346d4, 0x79c

  .globl gMonPalette_Wartortle
gMonPalette_Wartortle:
  .incbin "build/graphics/pokemon/wartortle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wartortle
gMonBackPic_Wartortle:
  .incbin "build/graphics/pokemon/wartortle/back.4bpp.lz"

  .globl gMonShinyPalette_Wartortle
gMonShinyPalette_Wartortle:
  .incbin "build/graphics/pokemon/wartortle/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc351f4, 0x924

  .globl gMonPalette_Blastoise
gMonPalette_Blastoise:
  .incbin "build/graphics/pokemon/blastoise/normal_palette.gbapal.lz"

  .globl gMonBackPic_Blastoise
gMonBackPic_Blastoise:
  .incbin "build/graphics/pokemon/blastoise/back.4bpp.lz"

  .globl gMonShinyPalette_Blastoise
gMonShinyPalette_Blastoise:
  .incbin "build/graphics/pokemon/blastoise/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc35f84, 0x680

  .globl gMonPalette_Caterpie
gMonPalette_Caterpie:
  .incbin "build/graphics/pokemon/caterpie/normal_palette.gbapal.lz"

  .globl gMonBackPic_Caterpie
gMonBackPic_Caterpie:
  .incbin "build/graphics/pokemon/caterpie/back.4bpp.lz"

  .globl gMonShinyPalette_Caterpie
gMonShinyPalette_Caterpie:
  .incbin "build/graphics/pokemon/caterpie/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc368dc, 0x638

  .globl gMonPalette_Metapod
gMonPalette_Metapod:
  .incbin "build/graphics/pokemon/metapod/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc36f33, 0x1

  .globl gMonBackPic_Metapod
gMonBackPic_Metapod:
  .incbin "build/graphics/pokemon/metapod/back.4bpp.lz"

  .globl gMonShinyPalette_Metapod
gMonShinyPalette_Metapod:
  .incbin "build/graphics/pokemon/metapod/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc37193, 0x781

  .globl gMonPalette_Butterfree
gMonPalette_Butterfree:
  .incbin "build/graphics/pokemon/butterfree/normal_palette.gbapal.lz"

  .globl gMonBackPic_Butterfree
gMonBackPic_Butterfree:
  .incbin "build/graphics/pokemon/butterfree/back.4bpp.lz"

  .globl gMonShinyPalette_Butterfree
gMonShinyPalette_Butterfree:
  .incbin "build/graphics/pokemon/butterfree/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc37d74, 0x660

  .globl gMonPalette_Weedle
gMonPalette_Weedle:
  .incbin "build/graphics/pokemon/weedle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Weedle
gMonBackPic_Weedle:
  .incbin "build/graphics/pokemon/weedle/back.4bpp.lz"

  .globl gMonShinyPalette_Weedle
gMonShinyPalette_Weedle:
  .incbin "build/graphics/pokemon/weedle/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3868c, 0x66c

  .globl gMonPalette_Kakuna
gMonPalette_Kakuna:
  .incbin "build/graphics/pokemon/kakuna/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc38d19, 0x3

  .globl gMonBackPic_Kakuna
gMonBackPic_Kakuna:
  .incbin "build/graphics/pokemon/kakuna/back.4bpp.lz"

  .globl gMonShinyPalette_Kakuna
gMonShinyPalette_Kakuna:
  .incbin "build/graphics/pokemon/kakuna/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc38fc1, 0x833

  .globl gMonPalette_Beedrill
gMonPalette_Beedrill:
  .incbin "build/graphics/pokemon/beedrill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Beedrill
gMonBackPic_Beedrill:
  .incbin "build/graphics/pokemon/beedrill/back.4bpp.lz"

  .globl gMonShinyPalette_Beedrill
gMonShinyPalette_Beedrill:
  .incbin "build/graphics/pokemon/beedrill/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc39bb8, 0x70c

  .globl gMonPalette_Pidgey
gMonPalette_Pidgey:
  .incbin "build/graphics/pokemon/pidgey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pidgey
gMonBackPic_Pidgey:
  .incbin "build/graphics/pokemon/pidgey/back.4bpp.lz"

  .globl gMonShinyPalette_Pidgey
gMonShinyPalette_Pidgey:
  .incbin "build/graphics/pokemon/pidgey/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3a668, 0x794

  .globl gMonPalette_Pidgeotto
gMonPalette_Pidgeotto:
  .incbin "build/graphics/pokemon/pidgeotto/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pidgeotto
gMonBackPic_Pidgeotto:
  .incbin "build/graphics/pokemon/pidgeotto/back.4bpp.lz"

  .globl gMonShinyPalette_Pidgeotto
gMonShinyPalette_Pidgeotto:
  .incbin "build/graphics/pokemon/pidgeotto/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3b198, 0x91c

  .globl gMonPalette_Pidgeot
gMonPalette_Pidgeot:
  .incbin "build/graphics/pokemon/pidgeot/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pidgeot
gMonBackPic_Pidgeot:
  .incbin "build/graphics/pokemon/pidgeot/back.4bpp.lz"

  .globl gMonShinyPalette_Pidgeot
gMonShinyPalette_Pidgeot:
  .incbin "build/graphics/pokemon/pidgeot/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3be8c, 0x66c

  .globl gMonPalette_Rattata
gMonPalette_Rattata:
  .incbin "build/graphics/pokemon/rattata/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rattata
gMonBackPic_Rattata:
  .incbin "build/graphics/pokemon/rattata/back.4bpp.lz"

  .globl gMonShinyPalette_Rattata
gMonShinyPalette_Rattata:
  .incbin "build/graphics/pokemon/rattata/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3c824, 0x7a8

  .globl gMonPalette_Raticate
gMonPalette_Raticate:
  .incbin "build/graphics/pokemon/raticate/normal_palette.gbapal.lz"

  .globl gMonBackPic_Raticate
gMonBackPic_Raticate:
  .incbin "build/graphics/pokemon/raticate/back.4bpp.lz"

  .globl gMonShinyPalette_Raticate
gMonShinyPalette_Raticate:
  .incbin "build/graphics/pokemon/raticate/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3d34c, 0x6a8

  .globl gMonPalette_Spearow
gMonPalette_Spearow:
  .incbin "build/graphics/pokemon/spearow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spearow
gMonBackPic_Spearow:
  .incbin "build/graphics/pokemon/spearow/back.4bpp.lz"

  .globl gMonShinyPalette_Spearow
gMonShinyPalette_Spearow:
  .incbin "build/graphics/pokemon/spearow/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3dd20, 0x8b4

  .globl gMonPalette_Fearow
gMonPalette_Fearow:
  .incbin "build/graphics/pokemon/fearow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Fearow
gMonBackPic_Fearow:
  .incbin "build/graphics/pokemon/fearow/back.4bpp.lz"

  .globl gMonShinyPalette_Fearow
gMonShinyPalette_Fearow:
  .incbin "build/graphics/pokemon/fearow/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3e91c, 0x720

  .globl gMonPalette_Ekans
gMonPalette_Ekans:
  .incbin "build/graphics/pokemon/ekans/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ekans
gMonBackPic_Ekans:
  .incbin "build/graphics/pokemon/ekans/back.4bpp.lz"

  .globl gMonShinyPalette_Ekans
gMonShinyPalette_Ekans:
  .incbin "build/graphics/pokemon/ekans/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3f37c, 0x86c

  .globl gMonPalette_Arbok
gMonPalette_Arbok:
  .incbin "build/graphics/pokemon/arbok/normal_palette.gbapal.lz"

  .globl gMonBackPic_Arbok
gMonBackPic_Arbok:
  .incbin "build/graphics/pokemon/arbok/back.4bpp.lz"

  .globl gMonShinyPalette_Arbok
gMonShinyPalette_Arbok:
  .incbin "build/graphics/pokemon/arbok/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc3fed8, 0x6f0

  .globl gMonPalette_Pikachu
gMonPalette_Pikachu:
  .incbin "build/graphics/pokemon/pikachu/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc405ee, 0x2

  .globl gMonBackPic_Pikachu
gMonBackPic_Pikachu:
  .incbin "build/graphics/pokemon/pikachu/back.4bpp.lz"

  .globl gMonShinyPalette_Pikachu
gMonShinyPalette_Pikachu:
  .incbin "build/graphics/pokemon/pikachu/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc408ee, 0x7ce

  .globl gMonPalette_Raichu
gMonPalette_Raichu:
  .incbin "build/graphics/pokemon/raichu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Raichu
gMonBackPic_Raichu:
  .incbin "build/graphics/pokemon/raichu/back.4bpp.lz"

  .globl gMonShinyPalette_Raichu
gMonShinyPalette_Raichu:
  .incbin "build/graphics/pokemon/raichu/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4142c, 0x6e0

  .globl gMonPalette_Sandshrew
gMonPalette_Sandshrew:
  .incbin "build/graphics/pokemon/sandshrew/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc41b32, 0x2

  .globl gMonBackPic_Sandshrew
gMonBackPic_Sandshrew:
  .incbin "build/graphics/pokemon/sandshrew/back.4bpp.lz"

  .globl gMonShinyPalette_Sandshrew
gMonShinyPalette_Sandshrew:
  .incbin "build/graphics/pokemon/sandshrew/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc41e82, 0x80e

  .globl gMonPalette_Sandslash
gMonPalette_Sandslash:
  .incbin "build/graphics/pokemon/sandslash/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sandslash
gMonBackPic_Sandslash:
  .incbin "build/graphics/pokemon/sandslash/back.4bpp.lz"

  .globl gMonShinyPalette_Sandslash
gMonShinyPalette_Sandslash:
  .incbin "build/graphics/pokemon/sandslash/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc42afc, 0x698

  .globl gMonPalette_NidoranF
gMonPalette_NidoranF:
  .incbin "build/graphics/pokemon/nidoran_f/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc431ba, 0x2

  .globl gMonBackPic_NidoranF
gMonBackPic_NidoranF:
  .incbin "build/graphics/pokemon/nidoran_f/back.4bpp.lz"

  .globl gMonShinyPalette_NidoranF
gMonShinyPalette_NidoranF:
  .incbin "build/graphics/pokemon/nidoran_f/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc434ba, 0x74e

  .globl gMonPalette_Nidorina
gMonPalette_Nidorina:
  .incbin "build/graphics/pokemon/nidorina/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nidorina
gMonBackPic_Nidorina:
  .incbin "build/graphics/pokemon/nidorina/back.4bpp.lz"

  .globl gMonShinyPalette_Nidorina
gMonShinyPalette_Nidorina:
  .incbin "build/graphics/pokemon/nidorina/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc43fec, 0x8ac

  .globl gMonPalette_Nidoqueen
gMonPalette_Nidoqueen:
  .incbin "build/graphics/pokemon/nidoqueen/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nidoqueen
gMonBackPic_Nidoqueen:
  .incbin "build/graphics/pokemon/nidoqueen/back.4bpp.lz"

  .globl gMonShinyPalette_Nidoqueen
gMonShinyPalette_Nidoqueen:
  .incbin "build/graphics/pokemon/nidoqueen/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc44cac, 0x6f0

  .globl gMonPalette_NidoranM
gMonPalette_NidoranM:
  .incbin "build/graphics/pokemon/nidoran_m/normal_palette.gbapal.lz"

  .globl gMonBackPic_NidoranM
gMonBackPic_NidoranM:
  .incbin "build/graphics/pokemon/nidoran_m/back.4bpp.lz"

  .globl gMonShinyPalette_NidoranM
gMonShinyPalette_NidoranM:
  .incbin "build/graphics/pokemon/nidoran_m/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc45720, 0x7b4

  .globl gMonPalette_Nidorino
gMonPalette_Nidorino:
  .incbin "build/graphics/pokemon/nidorino/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nidorino
gMonBackPic_Nidorino:
  .incbin "build/graphics/pokemon/nidorino/back.4bpp.lz"

  .globl gMonShinyPalette_Nidorino
gMonShinyPalette_Nidorino:
  .incbin "build/graphics/pokemon/nidorino/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc462e0, 0x918

  .globl gMonPalette_Nidoking
gMonPalette_Nidoking:
  .incbin "build/graphics/pokemon/nidoking/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc46c1e, 0x2

  .globl gMonBackPic_Nidoking
gMonBackPic_Nidoking:
  .incbin "build/graphics/pokemon/nidoking/back.4bpp.lz"

  .globl gMonShinyPalette_Nidoking
gMonShinyPalette_Nidoking:
  .incbin "build/graphics/pokemon/nidoking/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc47082, 0x6aa

  .globl gMonPalette_Clefairy
gMonPalette_Clefairy:
  .incbin "build/graphics/pokemon/clefairy/normal_palette.gbapal.lz"

  .globl gMonBackPic_Clefairy
gMonBackPic_Clefairy:
  .incbin "build/graphics/pokemon/clefairy/back.4bpp.lz"

  .globl gMonShinyPalette_Clefairy
gMonShinyPalette_Clefairy:
  .incbin "build/graphics/pokemon/clefairy/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc47a4c, 0x75c

  .globl gMonPalette_Clefable
gMonPalette_Clefable:
  .incbin "build/graphics/pokemon/clefable/normal_palette.gbapal.lz"

  .globl gMonBackPic_Clefable
gMonBackPic_Clefable:
  .incbin "build/graphics/pokemon/clefable/back.4bpp.lz"

  .globl gMonShinyPalette_Clefable
gMonShinyPalette_Clefable:
  .incbin "build/graphics/pokemon/clefable/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc48530, 0x75c

  .globl gMonPalette_Vulpix
gMonPalette_Vulpix:
  .incbin "build/graphics/pokemon/vulpix/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vulpix
gMonBackPic_Vulpix:
  .incbin "build/graphics/pokemon/vulpix/back.4bpp.lz"

  .globl gMonShinyPalette_Vulpix
gMonShinyPalette_Vulpix:
  .incbin "build/graphics/pokemon/vulpix/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc48fd8, 0x85c

  .globl gMonPalette_Ninetales
gMonPalette_Ninetales:
  .incbin "build/graphics/pokemon/ninetales/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc49853, 0x1
  .globl gMonBackPic_Ninetales
gMonBackPic_Ninetales:
  .incbin "build/graphics/pokemon/ninetales/back.4bpp.lz"

  .globl gMonShinyPalette_Ninetales
gMonShinyPalette_Ninetales:
  .incbin "build/graphics/pokemon/ninetales/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc49bf3, 0x699

  .globl gMonPalette_Jigglypuff
gMonPalette_Jigglypuff:
  .incbin "build/graphics/pokemon/jigglypuff/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jigglypuff
gMonBackPic_Jigglypuff:
  .incbin "build/graphics/pokemon/jigglypuff/back.4bpp.lz"

  .globl gMonShinyPalette_Jigglypuff
gMonShinyPalette_Jigglypuff:
  .incbin "build/graphics/pokemon/jigglypuff/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4a538, 0x774

  .globl gMonPalette_Wigglytuff
gMonPalette_Wigglytuff:
  .incbin "build/graphics/pokemon/wigglytuff/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wigglytuff
gMonBackPic_Wigglytuff:
  .incbin "build/graphics/pokemon/wigglytuff/back.4bpp.lz"

  .globl gMonShinyPalette_Wigglytuff
gMonShinyPalette_Wigglytuff:
  .incbin "build/graphics/pokemon/wigglytuff/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4afa4, 0x6f8

  .globl gMonPalette_Zubat
gMonPalette_Zubat:
  .incbin "build/graphics/pokemon/zubat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zubat
gMonBackPic_Zubat:
  .incbin "build/graphics/pokemon/zubat/back.4bpp.lz"

  .globl gMonShinyPalette_Zubat
gMonShinyPalette_Zubat:
  .incbin "build/graphics/pokemon/zubat/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4b9a8, 0x7bc

  .globl gMonPalette_Golbat
gMonPalette_Golbat:
  .incbin "build/graphics/pokemon/golbat/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4c18a, 0x2

  .globl gMonBackPic_Golbat
gMonBackPic_Golbat:
  .incbin "build/graphics/pokemon/golbat/back.4bpp.lz"

  .globl gMonShinyPalette_Golbat
gMonShinyPalette_Golbat:
  .incbin "build/graphics/pokemon/golbat/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4c46e, 0x656

  .globl gMonPalette_Oddish
gMonPalette_Oddish:
  .incbin "build/graphics/pokemon/oddish/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4caea, 0x2

  .globl gMonBackPic_Oddish
gMonBackPic_Oddish:
  .incbin "build/graphics/pokemon/oddish/back.4bpp.lz"

  .globl gMonShinyPalette_Oddish
gMonShinyPalette_Oddish:
  .incbin "build/graphics/pokemon/oddish/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4cd8a, 0x79a

  .globl gMonPalette_Gloom
gMonPalette_Gloom:
  .incbin "build/graphics/pokemon/gloom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gloom
gMonBackPic_Gloom:
  .incbin "build/graphics/pokemon/gloom/back.4bpp.lz"

  .globl gMonShinyPalette_Gloom
gMonShinyPalette_Gloom:
  .incbin "build/graphics/pokemon/gloom/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4d8dc, 0x79c

  .globl gMonPalette_Vileplume
gMonPalette_Vileplume:
  .incbin "build/graphics/pokemon/vileplume/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vileplume
gMonBackPic_Vileplume:
  .incbin "build/graphics/pokemon/vileplume/back.4bpp.lz"

  .globl gMonShinyPalette_Vileplume
gMonShinyPalette_Vileplume:
  .incbin "build/graphics/pokemon/vileplume/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4e4e0, 0x68c

  .globl gMonPalette_Paras
gMonPalette_Paras:
  .incbin "build/graphics/pokemon/paras/normal_palette.gbapal.lz"

  .globl gMonBackPic_Paras
gMonBackPic_Paras:
  .incbin "build/graphics/pokemon/paras/back.4bpp.lz"

  .globl gMonShinyPalette_Paras
gMonShinyPalette_Paras:
  .incbin "build/graphics/pokemon/paras/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4ee5c, 0x7e4

  .globl gMonPalette_Parasect
gMonPalette_Parasect:
  .incbin "build/graphics/pokemon/parasect/normal_palette.gbapal.lz"

  .globl gMonBackPic_Parasect
gMonBackPic_Parasect:
  .incbin "build/graphics/pokemon/parasect/back.4bpp.lz"

  .globl gMonShinyPalette_Parasect
gMonShinyPalette_Parasect:
  .incbin "build/graphics/pokemon/parasect/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc4f98c, 0x798

  .globl gMonPalette_Venonat
gMonPalette_Venonat:
  .incbin "build/graphics/pokemon/venonat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Venonat
gMonBackPic_Venonat:
  .incbin "build/graphics/pokemon/venonat/back.4bpp.lz"

  .globl gMonShinyPalette_Venonat
gMonShinyPalette_Venonat:
  .incbin "build/graphics/pokemon/venonat/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc504a4, 0x8c4

  .globl gMonPalette_Venomoth
gMonPalette_Venomoth:
  .incbin "build/graphics/pokemon/venomoth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Venomoth
gMonBackPic_Venomoth:
  .incbin "build/graphics/pokemon/venomoth/back.4bpp.lz"

  .globl gMonShinyPalette_Venomoth
gMonShinyPalette_Venomoth:
  .incbin "build/graphics/pokemon/venomoth/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5117c, 0x62c

  .globl gMonPalette_Diglett
gMonPalette_Diglett:
  .incbin "build/graphics/pokemon/diglett/normal_palette.gbapal.lz"

  .globl gMonBackPic_Diglett
gMonBackPic_Diglett:
  .incbin "build/graphics/pokemon/diglett/back.4bpp.lz"

  .globl gMonShinyPalette_Diglett
gMonShinyPalette_Diglett:
  .incbin "build/graphics/pokemon/diglett/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc51a04, 0x744

  .globl gMonPalette_Dugtrio
gMonPalette_Dugtrio:
  .incbin "build/graphics/pokemon/dugtrio/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dugtrio
gMonBackPic_Dugtrio:
  .incbin "build/graphics/pokemon/dugtrio/back.4bpp.lz"

  .globl gMonShinyPalette_Dugtrio
gMonShinyPalette_Dugtrio:
  .incbin "build/graphics/pokemon/dugtrio/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc52444, 0x70c

  .globl gMonPalette_Meowth
gMonPalette_Meowth:
  .incbin "build/graphics/pokemon/meowth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Meowth
gMonBackPic_Meowth:
  .incbin "build/graphics/pokemon/meowth/back.4bpp.lz"

  .globl gMonShinyPalette_Meowth
gMonShinyPalette_Meowth:
  .incbin "build/graphics/pokemon/meowth/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc52e84, 0x7d4

  .globl gMonPalette_Persian
gMonPalette_Persian:
  .incbin "build/graphics/pokemon/persian/normal_palette.gbapal.lz"

  .globl gMonBackPic_Persian
gMonBackPic_Persian:
  .incbin "build/graphics/pokemon/persian/back.4bpp.lz"

  .globl gMonShinyPalette_Persian
gMonShinyPalette_Persian:
  .incbin "build/graphics/pokemon/persian/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc53a0c, 0x6f8

  .globl gMonPalette_Psyduck
gMonPalette_Psyduck:
  .incbin "build/graphics/pokemon/psyduck/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5412a, 0x2

  .globl gMonBackPic_Psyduck
gMonBackPic_Psyduck:
  .incbin "build/graphics/pokemon/psyduck/back.4bpp.lz"

  .globl gMonShinyPalette_Psyduck
gMonShinyPalette_Psyduck:
  .incbin "build/graphics/pokemon/psyduck/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc543ee, 0x7fa

  .globl gMonPalette_Golduck
gMonPalette_Golduck:
  .incbin "build/graphics/pokemon/golduck/normal_palette.gbapal.lz"

  .globl gMonBackPic_Golduck
gMonBackPic_Golduck:
  .incbin "build/graphics/pokemon/golduck/back.4bpp.lz"

  .globl gMonShinyPalette_Golduck
gMonShinyPalette_Golduck:
  .incbin "build/graphics/pokemon/golduck/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc54f64, 0x738

  .globl gMonPalette_Mankey
gMonPalette_Mankey:
  .incbin "build/graphics/pokemon/mankey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mankey
gMonBackPic_Mankey:
  .incbin "build/graphics/pokemon/mankey/back.4bpp.lz"

  .globl gMonShinyPalette_Mankey
gMonShinyPalette_Mankey:
  .incbin "build/graphics/pokemon/mankey/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc55a54, 0x7d0

  .globl gMonPalette_Primeape
gMonPalette_Primeape:
  .incbin "build/graphics/pokemon/primeape/normal_palette.gbapal.lz"

  .globl gMonBackPic_Primeape
gMonBackPic_Primeape:
  .incbin "build/graphics/pokemon/primeape/back.4bpp.lz"

  .globl gMonShinyPalette_Primeape
gMonShinyPalette_Primeape:
  .incbin "build/graphics/pokemon/primeape/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc565e4, 0x778

  .globl gMonPalette_Growlithe
gMonPalette_Growlithe:
  .incbin "build/graphics/pokemon/growlithe/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc56d82, 0x2

  .globl gMonBackPic_Growlithe
gMonBackPic_Growlithe:
  .incbin "build/graphics/pokemon/growlithe/back.4bpp.lz"

  .globl gMonShinyPalette_Growlithe
gMonShinyPalette_Growlithe:
  .incbin "build/graphics/pokemon/growlithe/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc570e6, 0x956

  .globl gMonPalette_Arcanine
gMonPalette_Arcanine:
  .incbin "build/graphics/pokemon/arcanine/normal_palette.gbapal.lz"

  .globl gMonBackPic_Arcanine
gMonBackPic_Arcanine:
  .incbin "build/graphics/pokemon/arcanine/back.4bpp.lz"

  .globl gMonShinyPalette_Arcanine
gMonShinyPalette_Arcanine:
  .incbin "build/graphics/pokemon/arcanine/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc57e6c, 0x6a8

  .globl gMonPalette_Poliwag
gMonPalette_Poliwag:
  .incbin "build/graphics/pokemon/poliwag/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5853a, 0x2

  .globl gMonBackPic_Poliwag
gMonBackPic_Poliwag:
  .incbin "build/graphics/pokemon/poliwag/back.4bpp.lz"

  .globl gMonShinyPalette_Poliwag
gMonShinyPalette_Poliwag:
  .incbin "build/graphics/pokemon/poliwag/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc587d2, 0x7e6

  .globl gMonPalette_Poliwhirl
gMonPalette_Poliwhirl:
  .incbin "build/graphics/pokemon/poliwhirl/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc58fde, 0x2

  .globl gMonBackPic_Poliwhirl
gMonBackPic_Poliwhirl:
  .incbin "build/graphics/pokemon/poliwhirl/back.4bpp.lz"

  .globl gMonShinyPalette_Poliwhirl
gMonShinyPalette_Poliwhirl:
  .incbin "build/graphics/pokemon/poliwhirl/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc592c6, 0x7ea

  .globl gMonPalette_Poliwrath
gMonPalette_Poliwrath:
  .incbin "build/graphics/pokemon/poliwrath/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc59ad6, 0x2

  .globl gMonBackPic_Poliwrath
gMonBackPic_Poliwrath:
  .incbin "build/graphics/pokemon/poliwrath/back.4bpp.lz"

  .globl gMonShinyPalette_Poliwrath
gMonShinyPalette_Poliwrath:
  .incbin "build/graphics/pokemon/poliwrath/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc59e1e, 0x706

  .globl gMonPalette_Abra
gMonPalette_Abra:
  .incbin "build/graphics/pokemon/abra/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5a545, 0x3
  .globl gMonBackPic_Abra
gMonBackPic_Abra:
  .incbin "build/graphics/pokemon/abra/back.4bpp.lz"

  .globl gMonShinyPalette_Abra
gMonShinyPalette_Abra:
  .incbin "build/graphics/pokemon/abra/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5a87d, 0x887

  .globl gMonPalette_Kadabra
gMonPalette_Kadabra:
  .incbin "build/graphics/pokemon/kadabra/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kadabra
gMonBackPic_Kadabra:
  .incbin "build/graphics/pokemon/kadabra/back.4bpp.lz"

  .globl gMonShinyPalette_Kadabra
gMonShinyPalette_Kadabra:
  .incbin "build/graphics/pokemon/kadabra/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5b530, 0x81c

  .globl gMonPalette_Alakazam
gMonPalette_Alakazam:
  .incbin "build/graphics/pokemon/alakazam/normal_palette.gbapal.lz"

  .globl gMonBackPic_Alakazam
gMonBackPic_Alakazam:
  .incbin "build/graphics/pokemon/alakazam/back.4bpp.lz"

  .globl gMonShinyPalette_Alakazam
gMonShinyPalette_Alakazam:
  .incbin "build/graphics/pokemon/alakazam/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5c1e0, 0x6c4

  .globl gMonPalette_Machop
gMonPalette_Machop:
  .incbin "build/graphics/pokemon/machop/normal_palette.gbapal.lz"

  .globl gMonBackPic_Machop
gMonBackPic_Machop:
  .incbin "build/graphics/pokemon/machop/back.4bpp.lz"

  .globl gMonShinyPalette_Machop
gMonShinyPalette_Machop:
  .incbin "build/graphics/pokemon/machop/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5cbd4, 0x7d0

  .globl gMonPalette_Machoke
gMonPalette_Machoke:
  .incbin "build/graphics/pokemon/machoke/normal_palette.gbapal.lz"

  .globl gMonBackPic_Machoke
gMonBackPic_Machoke:
  .incbin "build/graphics/pokemon/machoke/back.4bpp.lz"

  .globl gMonShinyPalette_Machoke
gMonShinyPalette_Machoke:
  .incbin "build/graphics/pokemon/machoke/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5d744, 0x970

  .globl gMonPalette_Machamp
gMonPalette_Machamp:
  .incbin "build/graphics/pokemon/machamp/normal_palette.gbapal.lz"

  .globl gMonBackPic_Machamp
gMonBackPic_Machamp:
  .incbin "build/graphics/pokemon/machamp/back.4bpp.lz"

  .globl gMonShinyPalette_Machamp
gMonShinyPalette_Machamp:
  .incbin "build/graphics/pokemon/machamp/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5e560, 0x6a0

  .globl gMonPalette_Bellsprout
gMonPalette_Bellsprout:
  .incbin "build/graphics/pokemon/bellsprout/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bellsprout
gMonBackPic_Bellsprout:
  .incbin "build/graphics/pokemon/bellsprout/back.4bpp.lz"

  .globl gMonShinyPalette_Bellsprout
gMonShinyPalette_Bellsprout:
  .incbin "build/graphics/pokemon/bellsprout/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5eeec, 0x744

  .globl gMonPalette_Weepinbell
gMonPalette_Weepinbell:
  .incbin "build/graphics/pokemon/weepinbell/normal_palette.gbapal.lz"

  .globl gMonBackPic_Weepinbell
gMonBackPic_Weepinbell:
  .incbin "build/graphics/pokemon/weepinbell/back.4bpp.lz"

  .globl gMonShinyPalette_Weepinbell
gMonShinyPalette_Weepinbell:
  .incbin "build/graphics/pokemon/weepinbell/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc5f97c, 0x84c

  .globl gMonPalette_Victreebel
gMonPalette_Victreebel:
  .incbin "build/graphics/pokemon/victreebel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Victreebel
gMonBackPic_Victreebel:
  .incbin "build/graphics/pokemon/victreebel/back.4bpp.lz"

  .globl gMonShinyPalette_Victreebel
gMonShinyPalette_Victreebel:
  .incbin "build/graphics/pokemon/victreebel/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc605b0, 0x6c0

  .globl gMonPalette_Tentacool
gMonPalette_Tentacool:
  .incbin "build/graphics/pokemon/tentacool/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tentacool
gMonBackPic_Tentacool:
  .incbin "build/graphics/pokemon/tentacool/back.4bpp.lz"

  .globl gMonShinyPalette_Tentacool
gMonShinyPalette_Tentacool:
  .incbin "build/graphics/pokemon/tentacool/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc60f8c, 0x8bc

  .globl gMonPalette_Tentacruel
gMonPalette_Tentacruel:
  .incbin "build/graphics/pokemon/tentacruel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tentacruel
gMonBackPic_Tentacruel:
  .incbin "build/graphics/pokemon/tentacruel/back.4bpp.lz"

  .globl gMonShinyPalette_Tentacruel
gMonShinyPalette_Tentacruel:
  .incbin "build/graphics/pokemon/tentacruel/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc61c34, 0x68c

  .globl gMonPalette_Geodude
gMonPalette_Geodude:
  .incbin "build/graphics/pokemon/geodude/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc622db, 0x1
  .globl gMonBackPic_Geodude
gMonBackPic_Geodude:
  .incbin "build/graphics/pokemon/geodude/back.4bpp.lz"

  .globl gMonShinyPalette_Geodude
gMonShinyPalette_Geodude:
  .incbin "build/graphics/pokemon/geodude/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6258b, 0x829

  .globl gMonPalette_Graveler
gMonPalette_Graveler:
  .incbin "build/graphics/pokemon/graveler/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc62dd1, 0x3
  .globl gMonBackPic_Graveler
gMonBackPic_Graveler:
  .incbin "build/graphics/pokemon/graveler/back.4bpp.lz"

  .globl gMonShinyPalette_Graveler
gMonShinyPalette_Graveler:
  .incbin "build/graphics/pokemon/graveler/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6306d, 0x89f

  .globl gMonPalette_Golem
gMonPalette_Golem:
  .incbin "build/graphics/pokemon/golem/normal_palette.gbapal.lz"

  .globl gMonBackPic_Golem
gMonBackPic_Golem:
  .incbin "build/graphics/pokemon/golem/back.4bpp.lz"

  .globl gMonShinyPalette_Golem
gMonShinyPalette_Golem:
  .incbin "build/graphics/pokemon/golem/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc63c1c, 0x7c8

  .globl gMonPalette_Ponyta
gMonPalette_Ponyta:
  .incbin "build/graphics/pokemon/ponyta/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6440a, 0x2

  .globl gMonBackPic_Ponyta
gMonBackPic_Ponyta:
  .incbin "build/graphics/pokemon/ponyta/back.4bpp.lz"

  .globl gMonShinyPalette_Ponyta
gMonShinyPalette_Ponyta:
  .incbin "build/graphics/pokemon/ponyta/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6476e, 0x8f2

  .globl gMonPalette_Rapidash
gMonPalette_Rapidash:
  .incbin "build/graphics/pokemon/rapidash/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rapidash
gMonBackPic_Rapidash:
  .incbin "build/graphics/pokemon/rapidash/back.4bpp.lz"

  .globl gMonShinyPalette_Rapidash
gMonShinyPalette_Rapidash:
  .incbin "build/graphics/pokemon/rapidash/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc654c0, 0x72c

  .globl gMonPalette_Slowpoke
gMonPalette_Slowpoke:
  .incbin "build/graphics/pokemon/slowpoke/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slowpoke
gMonBackPic_Slowpoke:
  .incbin "build/graphics/pokemon/slowpoke/back.4bpp.lz"

  .globl gMonShinyPalette_Slowpoke
gMonShinyPalette_Slowpoke:
  .incbin "build/graphics/pokemon/slowpoke/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc65ea0, 0x8e0

  .globl gMonPalette_Slowbro
gMonPalette_Slowbro:
  .incbin "build/graphics/pokemon/slowbro/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slowbro
gMonBackPic_Slowbro:
  .incbin "build/graphics/pokemon/slowbro/back.4bpp.lz"

  .globl gMonShinyPalette_Slowbro
gMonShinyPalette_Slowbro:
  .incbin "build/graphics/pokemon/slowbro/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc66b6c, 0x5f8

  .globl gMonPalette_Magnemite
gMonPalette_Magnemite:
  .incbin "build/graphics/pokemon/magnemite/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magnemite
gMonBackPic_Magnemite:
  .incbin "build/graphics/pokemon/magnemite/back.4bpp.lz"

  .globl gMonShinyPalette_Magnemite
gMonShinyPalette_Magnemite:
  .incbin "build/graphics/pokemon/magnemite/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc67398, 0x824

  .globl gMonPalette_Magneton
gMonPalette_Magneton:
  .incbin "build/graphics/pokemon/magneton/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magneton
gMonBackPic_Magneton:
  .incbin "build/graphics/pokemon/magneton/back.4bpp.lz"

  .globl gMonShinyPalette_Magneton
gMonShinyPalette_Magneton:
  .incbin "build/graphics/pokemon/magneton/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc67f8a, 0x79e

  .globl gMonPalette_Farfetchd
gMonPalette_Farfetchd:
  .incbin "build/graphics/pokemon/farfetchd/normal_palette.gbapal.lz"

  .globl gMonBackPic_Farfetchd
gMonBackPic_Farfetchd:
  .incbin "build/graphics/pokemon/farfetchd/back.4bpp.lz"

  .globl gMonShinyPalette_Farfetchd
gMonShinyPalette_Farfetchd:
  .incbin "build/graphics/pokemon/farfetchd/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc68ae4, 0x774

  .globl gMonPalette_Doduo
gMonPalette_Doduo:
  .incbin "build/graphics/pokemon/doduo/normal_palette.gbapal.lz"
  .globl gMonBackPic_Doduo
gMonBackPic_Doduo:
  .incbin "build/graphics/pokemon/doduo/back.4bpp.lz"

  .globl gMonShinyPalette_Doduo
gMonShinyPalette_Doduo:
  .incbin "build/graphics/pokemon/doduo/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc695b8, 0x8fc

  .globl gMonPalette_Dodrio
gMonPalette_Dodrio:
  .incbin "build/graphics/pokemon/dodrio/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dodrio
gMonBackPic_Dodrio:
  .incbin "build/graphics/pokemon/dodrio/back.4bpp.lz"

  .globl gMonShinyPalette_Dodrio
gMonShinyPalette_Dodrio:
  .incbin "build/graphics/pokemon/dodrio/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6a368, 0x728

  .globl gMonPalette_Seel
gMonPalette_Seel:
  .incbin "build/graphics/pokemon/seel/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6aab6, 0x2

  .globl gMonBackPic_Seel
gMonBackPic_Seel:
  .incbin "build/graphics/pokemon/seel/back.4bpp.lz"

  .globl gMonShinyPalette_Seel
gMonShinyPalette_Seel:
  .incbin "build/graphics/pokemon/seel/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6adca, 0x7ea

  .globl gMonPalette_Dewgong
gMonPalette_Dewgong:
  .incbin "build/graphics/pokemon/dewgong/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6b5d1, 0x3
  .globl gMonBackPic_Dewgong
gMonBackPic_Dewgong:
  .incbin "build/graphics/pokemon/dewgong/back.4bpp.lz"

  .globl gMonShinyPalette_Dewgong
gMonShinyPalette_Dewgong:
  .incbin "build/graphics/pokemon/dewgong/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6b885, 0x73f

  .globl gMonPalette_Grimer
gMonPalette_Grimer:
  .incbin "build/graphics/pokemon/grimer/normal_palette.gbapal.lz"
  .globl gMonBackPic_Grimer
gMonBackPic_Grimer:
  .incbin "build/graphics/pokemon/grimer/back.4bpp.lz"

  .globl gMonShinyPalette_Grimer
gMonShinyPalette_Grimer:
  .incbin "build/graphics/pokemon/grimer/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6c2f0, 0x86c

  .globl gMonPalette_Muk
gMonPalette_Muk:
  .incbin "build/graphics/pokemon/muk/normal_palette.gbapal.lz"
  .globl gMonBackPic_Muk
gMonBackPic_Muk:
  .incbin "build/graphics/pokemon/muk/back.4bpp.lz"

  .globl gMonShinyPalette_Muk
gMonShinyPalette_Muk:
  .incbin "build/graphics/pokemon/muk/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6cefc, 0x688

  .globl gMonPalette_Shellder
gMonPalette_Shellder:
  .incbin "build/graphics/pokemon/shellder/normal_palette.gbapal.lz"
  .globl gMonBackPic_Shellder
gMonBackPic_Shellder:
  .incbin "build/graphics/pokemon/shellder/back.4bpp.lz"

  .globl gMonShinyPalette_Shellder
gMonShinyPalette_Shellder:
  .incbin "build/graphics/pokemon/shellder/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6d8e0, 0x858

  .globl gMonPalette_Cloyster
gMonPalette_Cloyster:
  .incbin "build/graphics/pokemon/cloyster/normal_palette.gbapal.lz"
  .globl gMonBackPic_Cloyster
gMonBackPic_Cloyster:
  .incbin "build/graphics/pokemon/cloyster/back.4bpp.lz"

  .globl gMonShinyPalette_Cloyster
gMonShinyPalette_Cloyster:
  .incbin "build/graphics/pokemon/cloyster/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6e58c, 0x7d8

  .globl gMonPalette_Gastly
gMonPalette_Gastly:
  .incbin "build/graphics/pokemon/gastly/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6ed8a, 0x2

  .globl gMonBackPic_Gastly
gMonBackPic_Gastly:
  .incbin "build/graphics/pokemon/gastly/back.4bpp.lz"

  .globl gMonShinyPalette_Gastly
gMonShinyPalette_Gastly:
  .incbin "build/graphics/pokemon/gastly/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6f0d8, 0x820

  .globl gMonPalette_Haunter
gMonPalette_Haunter:
  .incbin "build/graphics/pokemon/haunter/normal_palette.gbapal.lz"
  .globl gMonBackPic_Haunter
gMonBackPic_Haunter:
  .incbin "build/graphics/pokemon/haunter/back.4bpp.lz"

  .globl gMonShinyPalette_Haunter
gMonShinyPalette_Haunter:
  .incbin "build/graphics/pokemon/haunter/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc6fc68, 0x7bc

  .globl gMonPalette_Gengar
gMonPalette_Gengar:
  .incbin "build/graphics/pokemon/gengar/normal_palette.gbapal.lz"
  .globl gMonBackPic_Gengar
gMonBackPic_Gengar:
  .incbin "build/graphics/pokemon/gengar/back.4bpp.lz"

  .globl gMonShinyPalette_Gengar
gMonShinyPalette_Gengar:
  .incbin "build/graphics/pokemon/gengar/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc70754, 0x898

  .globl gMonPalette_Onix
gMonPalette_Onix:
  .incbin "build/graphics/pokemon/onix/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc71007, 0x1
  .globl gMonBackPic_Onix
gMonBackPic_Onix:
  .incbin "build/graphics/pokemon/onix/back.4bpp.lz"

  .globl gMonShinyPalette_Onix
gMonShinyPalette_Onix:
  .incbin "build/graphics/pokemon/onix/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7139f, 0x799

  .globl gMonPalette_Drowzee
gMonPalette_Drowzee:
  .incbin "build/graphics/pokemon/drowzee/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc71b5a, 0x2
  .globl gMonBackPic_Drowzee
gMonBackPic_Drowzee:
  .incbin "build/graphics/pokemon/drowzee/back.4bpp.lz"

  .globl gMonShinyPalette_Drowzee
gMonShinyPalette_Drowzee:
  .incbin "build/graphics/pokemon/drowzee/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc71dda, 0x80e

  .globl gMonPalette_Hypno
gMonPalette_Hypno:
  .incbin "build/graphics/pokemon/hypno/normal_palette.gbapal.lz"
  .globl gMonBackPic_Hypno
gMonBackPic_Hypno:
  .incbin "build/graphics/pokemon/hypno/back.4bpp.lz"

  .globl gMonShinyPalette_Hypno
gMonShinyPalette_Hypno:
  .incbin "build/graphics/pokemon/hypno/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc72960, 0x6d8

  .globl gMonPalette_Krabby
gMonPalette_Krabby:
  .incbin "build/graphics/pokemon/krabby/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7305e, 0x2

  .globl gMonBackPic_Krabby
gMonBackPic_Krabby:
  .incbin "build/graphics/pokemon/krabby/back.4bpp.lz"

  .globl gMonShinyPalette_Krabby
gMonShinyPalette_Krabby:
  .incbin "build/graphics/pokemon/krabby/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc73412, 0x956

  .globl gMonPalette_Kingler
gMonPalette_Kingler:
  .incbin "build/graphics/pokemon/kingler/normal_palette.gbapal.lz"
  .globl gMonBackPic_Kingler
gMonBackPic_Kingler:
  .incbin "build/graphics/pokemon/kingler/back.4bpp.lz"

  .globl gMonShinyPalette_Kingler
gMonShinyPalette_Kingler:
  .incbin "build/graphics/pokemon/kingler/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc74134, 0x628

  .globl gMonPalette_Voltorb
gMonPalette_Voltorb:
  .incbin "build/graphics/pokemon/voltorb/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7477e, 0x2
  .globl gMonBackPic_Voltorb
gMonBackPic_Voltorb:
  .incbin "build/graphics/pokemon/voltorb/back.4bpp.lz"

  .globl gMonShinyPalette_Voltorb
gMonShinyPalette_Voltorb:
  .incbin "build/graphics/pokemon/voltorb/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc74a16, 0x68e

  .globl gMonPalette_Electrode
gMonPalette_Electrode:
  .incbin "build/graphics/pokemon/electrode/normal_palette.gbapal.lz"
  .globl gMonBackPic_Electrode
gMonBackPic_Electrode:
  .incbin "build/graphics/pokemon/electrode/back.4bpp.lz"

  .globl gMonShinyPalette_Electrode
gMonShinyPalette_Electrode:
  .incbin "build/graphics/pokemon/electrode/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7535c, 0x824

  .globl gMonPalette_Exeggcute
gMonPalette_Exeggcute:
  .incbin "build/graphics/pokemon/exeggcute/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc75ba2, 0x2
  .globl gMonBackPic_Exeggcute
gMonBackPic_Exeggcute:
  .incbin "build/graphics/pokemon/exeggcute/back.4bpp.lz"

  .globl gMonShinyPalette_Exeggcute
gMonShinyPalette_Exeggcute:
  .incbin "build/graphics/pokemon/exeggcute/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc75ece, 0x922

  .globl gMonPalette_Exeggutor
gMonPalette_Exeggutor:
  .incbin "build/graphics/pokemon/exeggutor/normal_palette.gbapal.lz"

  .globl gMonBackPic_Exeggutor
gMonBackPic_Exeggutor:
  .incbin "build/graphics/pokemon/exeggutor/back.4bpp.lz"

  .globl gMonShinyPalette_Exeggutor
gMonShinyPalette_Exeggutor:
  .incbin "build/graphics/pokemon/exeggutor/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc76ce0, 0x6f0

  .globl gMonPalette_Cubone
gMonPalette_Cubone:
  .incbin "build/graphics/pokemon/cubone/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cubone
gMonBackPic_Cubone:
  .incbin "build/graphics/pokemon/cubone/back.4bpp.lz"

  .globl gMonShinyPalette_Cubone
gMonShinyPalette_Cubone:
  .incbin "build/graphics/pokemon/cubone/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc77760, 0x7a8

  .globl gMonPalette_Marowak
gMonPalette_Marowak:
  .incbin "build/graphics/pokemon/marowak/normal_palette.gbapal.lz"

  .globl gMonBackPic_Marowak
gMonBackPic_Marowak:
  .incbin "build/graphics/pokemon/marowak/back.4bpp.lz"

  .globl gMonShinyPalette_Marowak
gMonShinyPalette_Marowak:
  .incbin "build/graphics/pokemon/marowak/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc782a0, 0x820

  .globl gMonPalette_Hitmonlee
gMonPalette_Hitmonlee:
  .incbin "build/graphics/pokemon/hitmonlee/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hitmonlee
gMonBackPic_Hitmonlee:
  .incbin "build/graphics/pokemon/hitmonlee/back.4bpp.lz"

  .globl gMonShinyPalette_Hitmonlee
gMonShinyPalette_Hitmonlee:
  .incbin "build/graphics/pokemon/hitmonlee/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc78db4, 0x760

  .globl gMonPalette_Hitmonchan
gMonPalette_Hitmonchan:
  .incbin "build/graphics/pokemon/hitmonchan/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hitmonchan
gMonBackPic_Hitmonchan:
  .incbin "build/graphics/pokemon/hitmonchan/back.4bpp.lz"

  .globl gMonShinyPalette_Hitmonchan
gMonShinyPalette_Hitmonchan:
  .incbin "build/graphics/pokemon/hitmonchan/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc798a8, 0x7d8

  .globl gMonPalette_Lickitung
gMonPalette_Lickitung:
  .incbin "build/graphics/pokemon/lickitung/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lickitung
gMonBackPic_Lickitung:
  .incbin "build/graphics/pokemon/lickitung/back.4bpp.lz"

  .globl gMonShinyPalette_Lickitung
gMonShinyPalette_Lickitung:
  .incbin "build/graphics/pokemon/lickitung/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7a390, 0x77c

  .globl gMonPalette_Koffing
gMonPalette_Koffing:
  .incbin "build/graphics/pokemon/koffing/normal_palette.gbapal.lz"

  .globl gMonBackPic_Koffing
gMonBackPic_Koffing:
  .incbin "build/graphics/pokemon/koffing/back.4bpp.lz"

  .globl gMonShinyPalette_Koffing
gMonShinyPalette_Koffing:
  .incbin "build/graphics/pokemon/koffing/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7ae5c, 0x8a8

  .globl gMonPalette_Weezing
gMonPalette_Weezing:
  .incbin "build/graphics/pokemon/weezing/normal_palette.gbapal.lz"

  .globl gMonBackPic_Weezing
gMonBackPic_Weezing:
  .incbin "build/graphics/pokemon/weezing/back.4bpp.lz"

  .globl gMonShinyPalette_Weezing
gMonShinyPalette_Weezing:
  .incbin "build/graphics/pokemon/weezing/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7ba84, 0x824

  .globl gMonPalette_Rhyhorn
gMonPalette_Rhyhorn:
  .incbin "build/graphics/pokemon/rhyhorn/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7c2c7, 0x1
  .globl gMonBackPic_Rhyhorn
gMonBackPic_Rhyhorn:
  .incbin "build/graphics/pokemon/rhyhorn/back.4bpp.lz"

  .globl gMonShinyPalette_Rhyhorn
gMonShinyPalette_Rhyhorn:
  .incbin "build/graphics/pokemon/rhyhorn/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7c62f, 0x929

  .globl gMonPalette_Rhydon
gMonPalette_Rhydon:
  .incbin "build/graphics/pokemon/rhydon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rhydon
gMonBackPic_Rhydon:
  .incbin "build/graphics/pokemon/rhydon/back.4bpp.lz"

  .globl gMonShinyPalette_Rhydon
gMonShinyPalette_Rhydon:
  .incbin "build/graphics/pokemon/rhydon/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7d3f8, 0x774

  .globl gMonPalette_Chansey
gMonPalette_Chansey:
  .incbin "build/graphics/pokemon/chansey/normal_palette.gbapal.lz"
  .globl gMonBackPic_Chansey
gMonBackPic_Chansey:
  .incbin "build/graphics/pokemon/chansey/back.4bpp.lz"

  .globl gMonShinyPalette_Chansey
gMonShinyPalette_Chansey:
  .incbin "build/graphics/pokemon/chansey/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7de88, 0x7f4

  .globl gMonPalette_Tangela
gMonPalette_Tangela:
  .incbin "build/graphics/pokemon/tangela/normal_palette.gbapal.lz"
  .globl gMonBackPic_Tangela
gMonBackPic_Tangela:
  .incbin "build/graphics/pokemon/tangela/back.4bpp.lz"

  .globl gMonShinyPalette_Tangela
gMonShinyPalette_Tangela:
  .incbin "build/graphics/pokemon/tangela/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7ea70, 0x918

  .globl gMonPalette_Kangaskhan
gMonPalette_Kangaskhan:
  .incbin "build/graphics/pokemon/kangaskhan/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7f3af, 0x1

  .globl gMonBackPic_Kangaskhan
gMonBackPic_Kangaskhan:
  .incbin "build/graphics/pokemon/kangaskhan/back.4bpp.lz"

  .globl gMonShinyPalette_Kangaskhan
gMonShinyPalette_Kangaskhan:
  .incbin "build/graphics/pokemon/kangaskhan/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7f807, 0x699

  .globl gMonPalette_Horsea
gMonPalette_Horsea:
  .incbin "build/graphics/pokemon/horsea/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc7fec6, 0x2

  .globl gMonBackPic_Horsea
gMonBackPic_Horsea:
  .incbin "build/graphics/pokemon/horsea/back.4bpp.lz"

  .globl gMonShinyPalette_Horsea
gMonShinyPalette_Horsea:
  .incbin "build/graphics/pokemon/horsea/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc801ce, 0x7e2

  .globl gMonPalette_Seadra
gMonPalette_Seadra:
  .incbin "build/graphics/pokemon/seadra/normal_palette.gbapal.lz"

  .globl gMonBackPic_Seadra
gMonBackPic_Seadra:
  .incbin "build/graphics/pokemon/seadra/back.4bpp.lz"

  .globl gMonShinyPalette_Seadra
gMonShinyPalette_Seadra:
  .incbin "build/graphics/pokemon/seadra/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc80da0, 0x788

  .globl gMonPalette_Goldeen
gMonPalette_Goldeen:
  .incbin "build/graphics/pokemon/goldeen/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8154e, 0x2

  .globl gMonBackPic_Goldeen
gMonBackPic_Goldeen:
  .incbin "build/graphics/pokemon/goldeen/back.4bpp.lz"

  .globl gMonShinyPalette_Goldeen
gMonShinyPalette_Goldeen:
  .incbin "build/graphics/pokemon/goldeen/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc818e8, 0x894

  .globl gMonPalette_Seaking
gMonPalette_Seaking:
  .incbin "build/graphics/pokemon/seaking/normal_palette.gbapal.lz"

  .globl gMonBackPic_Seaking
gMonBackPic_Seaking:
  .incbin "build/graphics/pokemon/seaking/back.4bpp.lz"

  .globl gMonShinyPalette_Seaking
gMonShinyPalette_Seaking:
  .incbin "build/graphics/pokemon/seaking/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8251c, 0x704

  .globl gMonPalette_Staryu
gMonPalette_Staryu:
  .incbin "build/graphics/pokemon/staryu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Staryu
gMonBackPic_Staryu:
  .incbin "build/graphics/pokemon/staryu/back.4bpp.lz"

  .globl gMonShinyPalette_Staryu
gMonShinyPalette_Staryu:
  .incbin "build/graphics/pokemon/staryu/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc82efc, 0x848

  .globl gMonPalette_Starmie
gMonPalette_Starmie:
  .incbin "build/graphics/pokemon/starmie/normal_palette.gbapal.lz"

  .globl gMonBackPic_Starmie
gMonBackPic_Starmie:
  .incbin "build/graphics/pokemon/starmie/back.4bpp.lz"

  .globl gMonShinyPalette_Starmie
gMonShinyPalette_Starmie:
  .incbin "build/graphics/pokemon/starmie/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc83a38, 0x7d0

  .globl gMonPalette_MrMime
gMonPalette_MrMime:
  .incbin "build/graphics/pokemon/mr_mime/normal_palette.gbapal.lz"

  .globl gMonBackPic_MrMime
gMonBackPic_MrMime:
  .incbin "build/graphics/pokemon/mr_mime/back.4bpp.lz"

  .globl gMonShinyPalette_MrMime
gMonShinyPalette_MrMime:
  .incbin "build/graphics/pokemon/mr_mime/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8458c, 0x8cc

  .globl gMonPalette_Scyther
gMonPalette_Scyther:
  .incbin "build/graphics/pokemon/scyther/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc84e7e, 0x2

  .globl gMonBackPic_Scyther
gMonBackPic_Scyther:
  .incbin "build/graphics/pokemon/scyther/back.4bpp.lz"

  .globl gMonShinyPalette_Scyther
gMonShinyPalette_Scyther:
  .incbin "build/graphics/pokemon/scyther/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc85250, 0x8bc

  .globl gMonPalette_Jynx
gMonPalette_Jynx:
  .incbin "build/graphics/pokemon/jynx/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jynx
gMonBackPic_Jynx:
  .incbin "build/graphics/pokemon/jynx/back.4bpp.lz"

  .globl gMonShinyPalette_Jynx
gMonShinyPalette_Jynx:
  .incbin "build/graphics/pokemon/jynx/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc85e54, 0x89c

  .globl gMonPalette_Electabuzz
gMonPalette_Electabuzz:
  .incbin "build/graphics/pokemon/electabuzz/normal_palette.gbapal.lz"

  .globl gMonBackPic_Electabuzz
gMonBackPic_Electabuzz:
  .incbin "build/graphics/pokemon/electabuzz/back.4bpp.lz"

  .globl gMonShinyPalette_Electabuzz
gMonShinyPalette_Electabuzz:
  .incbin "build/graphics/pokemon/electabuzz/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc86a50, 0x8c8

  .globl gMonPalette_Magmar
gMonPalette_Magmar:
  .incbin "build/graphics/pokemon/magmar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magmar
gMonBackPic_Magmar:
  .incbin "build/graphics/pokemon/magmar/back.4bpp.lz"

  .globl gMonShinyPalette_Magmar
gMonShinyPalette_Magmar:
  .incbin "build/graphics/pokemon/magmar/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc876b0, 0x848

  .globl gMonPalette_Pinsir
gMonPalette_Pinsir:
  .incbin "build/graphics/pokemon/pinsir/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc87f1a, 0x2
  .globl gMonBackPic_Pinsir
gMonBackPic_Pinsir:
  .incbin "build/graphics/pokemon/pinsir/back.4bpp.lz"

  .globl gMonShinyPalette_Pinsir
gMonShinyPalette_Pinsir:
  .incbin "build/graphics/pokemon/pinsir/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc88292, 0x8f2

  .globl gMonPalette_Tauros
gMonPalette_Tauros:
  .incbin "build/graphics/pokemon/tauros/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tauros
gMonBackPic_Tauros:
  .incbin "build/graphics/pokemon/tauros/back.4bpp.lz"

  .globl gMonShinyPalette_Tauros
gMonShinyPalette_Tauros:
  .incbin "build/graphics/pokemon/tauros/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc88e88, 0x770

  .globl gMonPalette_Magikarp
gMonPalette_Magikarp:
  .incbin "build/graphics/pokemon/magikarp/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magikarp
gMonBackPic_Magikarp:
  .incbin "build/graphics/pokemon/magikarp/back.4bpp.lz"

  .globl gMonShinyPalette_Magikarp
gMonShinyPalette_Magikarp:
  .incbin "build/graphics/pokemon/magikarp/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc89978, 0x988

  .globl gMonPalette_Gyarados
gMonPalette_Gyarados:
  .incbin "build/graphics/pokemon/gyarados/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gyarados
gMonBackPic_Gyarados:
  .incbin "build/graphics/pokemon/gyarados/back.4bpp.lz"

  .globl gMonShinyPalette_Gyarados
gMonShinyPalette_Gyarados:
  .incbin "build/graphics/pokemon/gyarados/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8a824, 0x7e0

  .globl gMonPalette_Lapras
gMonPalette_Lapras:
  .incbin "build/graphics/pokemon/lapras/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lapras
gMonBackPic_Lapras:
  .incbin "build/graphics/pokemon/lapras/back.4bpp.lz"

  .globl gMonShinyPalette_Lapras
gMonShinyPalette_Lapras:
  .incbin "build/graphics/pokemon/lapras/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8b398, 0x610

  .globl gMonPalette_Ditto
gMonPalette_Ditto:
  .incbin "build/graphics/pokemon/ditto/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8b9c5, 0x3
  .globl gMonBackPic_Ditto
gMonBackPic_Ditto:
  .incbin "build/graphics/pokemon/ditto/back.4bpp.lz"

  .globl gMonShinyPalette_Ditto
gMonShinyPalette_Ditto:
  .incbin "build/graphics/pokemon/ditto/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8bbe5, 0x6c7

  .globl gMonPalette_Eevee
gMonPalette_Eevee:
  .incbin "build/graphics/pokemon/eevee/normal_palette.gbapal.lz"
  .globl gMonBackPic_Eevee
gMonBackPic_Eevee:
  .incbin "build/graphics/pokemon/eevee/back.4bpp.lz"

  .globl gMonShinyPalette_Eevee
gMonShinyPalette_Eevee:
  .incbin "build/graphics/pokemon/eevee/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8c61c, 0x7b4

  .globl gMonPalette_Vaporeon
gMonPalette_Vaporeon:
  .incbin "build/graphics/pokemon/vaporeon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vaporeon
gMonBackPic_Vaporeon:
  .incbin "build/graphics/pokemon/vaporeon/back.4bpp.lz"

  .globl gMonShinyPalette_Vaporeon
gMonShinyPalette_Vaporeon:
  .incbin "build/graphics/pokemon/vaporeon/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8d0e8, 0x7c0

  .globl gMonPalette_Jolteon
gMonPalette_Jolteon:
  .incbin "build/graphics/pokemon/jolteon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jolteon
gMonBackPic_Jolteon:
  .incbin "build/graphics/pokemon/jolteon/back.4bpp.lz"

  .globl gMonShinyPalette_Jolteon
gMonShinyPalette_Jolteon:
  .incbin "build/graphics/pokemon/jolteon/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8dc88, 0x79c

  .globl gMonPalette_Flareon
gMonPalette_Flareon:
  .incbin "build/graphics/pokemon/flareon/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8e44a, 0x2

  .globl gMonBackPic_Flareon
gMonBackPic_Flareon:
  .incbin "build/graphics/pokemon/flareon/back.4bpp.lz"

  .globl gMonShinyPalette_Flareon
gMonShinyPalette_Flareon:
  .incbin "build/graphics/pokemon/flareon/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8e802, 0x6de

  .globl gMonPalette_Porygon
gMonPalette_Porygon:
  .incbin "build/graphics/pokemon/porygon/normal_palette.gbapal.lz"
  .globl gMonBackPic_Porygon
gMonBackPic_Porygon:
  .incbin "build/graphics/pokemon/porygon/back.4bpp.lz"

  .globl gMonShinyPalette_Porygon
gMonShinyPalette_Porygon:
  .incbin "build/graphics/pokemon/porygon/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8f1e0, 0x6c8

  .globl gMonPalette_Omanyte
gMonPalette_Omanyte:
  .incbin "build/graphics/pokemon/omanyte/normal_palette.gbapal.lz"

  .globl gMonBackPic_Omanyte
gMonBackPic_Omanyte:
  .incbin "build/graphics/pokemon/omanyte/back.4bpp.lz"

  .globl gMonShinyPalette_Omanyte
gMonShinyPalette_Omanyte:
  .incbin "build/graphics/pokemon/omanyte/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc8fc44, 0x7e0

  .globl gMonPalette_Omastar
gMonPalette_Omastar:
  .incbin "build/graphics/pokemon/omastar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Omastar
gMonBackPic_Omastar:
  .incbin "build/graphics/pokemon/omastar/back.4bpp.lz"

  .globl gMonShinyPalette_Omastar
gMonShinyPalette_Omastar:
  .incbin "build/graphics/pokemon/omastar/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc907b4, 0x690

  .globl gMonPalette_Kabuto
gMonPalette_Kabuto:
  .incbin "build/graphics/pokemon/kabuto/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kabuto
gMonBackPic_Kabuto:
  .incbin "build/graphics/pokemon/kabuto/back.4bpp.lz"

  .globl gMonShinyPalette_Kabuto
gMonShinyPalette_Kabuto:
  .incbin "build/graphics/pokemon/kabuto/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9112c, 0x820

  .globl gMonPalette_Kabutops
gMonPalette_Kabutops:
  .incbin "build/graphics/pokemon/kabutops/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9196e, 0x2
  .globl gMonBackPic_Kabutops
gMonBackPic_Kabutops:
  .incbin "build/graphics/pokemon/kabutops/back.4bpp.lz"

  .globl gMonShinyPalette_Kabutops
gMonShinyPalette_Kabutops:
  .incbin "build/graphics/pokemon/kabutops/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc91d36, 0x8a2

  .globl gMonPalette_Aerodactyl
gMonPalette_Aerodactyl:
  .incbin "build/graphics/pokemon/aerodactyl/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc925fe, 0x2

  .globl gMonBackPic_Aerodactyl
gMonBackPic_Aerodactyl:
  .incbin "build/graphics/pokemon/aerodactyl/back.4bpp.lz"

  .globl gMonShinyPalette_Aerodactyl
gMonShinyPalette_Aerodactyl:
  .incbin "build/graphics/pokemon/aerodactyl/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9292a, 0x866

  .globl gMonPalette_Snorlax
gMonPalette_Snorlax:
  .incbin "build/graphics/pokemon/snorlax/normal_palette.gbapal.lz"

  .globl gMonBackPic_Snorlax
gMonBackPic_Snorlax:
  .incbin "build/graphics/pokemon/snorlax/back.4bpp.lz"

  .globl gMonShinyPalette_Snorlax
gMonShinyPalette_Snorlax:
  .incbin "build/graphics/pokemon/snorlax/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc933fc, 0x918

  .globl gMonPalette_Articuno
gMonPalette_Articuno:
  .incbin "build/graphics/pokemon/articuno/normal_palette.gbapal.lz"

  .globl gMonBackPic_Articuno
gMonBackPic_Articuno:
  .incbin "build/graphics/pokemon/articuno/back.4bpp.lz"

  .globl gMonShinyPalette_Articuno
gMonShinyPalette_Articuno:
  .incbin "build/graphics/pokemon/articuno/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc93fc0, 0x894

  .globl gMonPalette_Zapdos
gMonPalette_Zapdos:
  .incbin "build/graphics/pokemon/zapdos/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zapdos
gMonBackPic_Zapdos:
  .incbin "build/graphics/pokemon/zapdos/back.4bpp.lz"

  .globl gMonShinyPalette_Zapdos
gMonShinyPalette_Zapdos:
  .incbin "build/graphics/pokemon/zapdos/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc94be0, 0x9d0

  .globl gMonPalette_Moltres
gMonPalette_Moltres:
  .incbin "build/graphics/pokemon/moltres/normal_palette.gbapal.lz"

  .globl gMonBackPic_Moltres
gMonBackPic_Moltres:
  .incbin "build/graphics/pokemon/moltres/back.4bpp.lz"

  .globl gMonShinyPalette_Moltres
gMonShinyPalette_Moltres:
  .incbin "build/graphics/pokemon/moltres/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9593c, 0x6d8

  .globl gMonPalette_Dratini
gMonPalette_Dratini:
  .incbin "build/graphics/pokemon/dratini/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc96036, 0x2
  .globl gMonBackPic_Dratini
gMonBackPic_Dratini:
  .incbin "build/graphics/pokemon/dratini/back.4bpp.lz"

  .globl gMonShinyPalette_Dratini
gMonShinyPalette_Dratini:
  .incbin "build/graphics/pokemon/dratini/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc962ea, 0x782

  .globl gMonPalette_Dragonair
gMonPalette_Dragonair:
  .incbin "build/graphics/pokemon/dragonair/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dragonair
gMonBackPic_Dragonair:
  .incbin "build/graphics/pokemon/dragonair/back.4bpp.lz"

  .globl gMonShinyPalette_Dragonair
gMonShinyPalette_Dragonair:
  .incbin "build/graphics/pokemon/dragonair/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc96dcc, 0x990

  .globl gMonPalette_Dragonite
gMonPalette_Dragonite:
  .incbin "build/graphics/pokemon/dragonite/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dragonite
gMonBackPic_Dragonite:
  .incbin "build/graphics/pokemon/dragonite/back.4bpp.lz"

  .globl gMonShinyPalette_Dragonite
gMonShinyPalette_Dragonite:
  .incbin "build/graphics/pokemon/dragonite/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc97aa8, 0x85c

  .globl gMonPalette_Mewtwo
gMonPalette_Mewtwo:
  .incbin "build/graphics/pokemon/mewtwo/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc98326, 0x2
  .globl gMonBackPic_Mewtwo
gMonBackPic_Mewtwo:
  .incbin "build/graphics/pokemon/mewtwo/back.4bpp.lz"

  .globl gMonShinyPalette_Mewtwo
gMonShinyPalette_Mewtwo:
  .incbin "build/graphics/pokemon/mewtwo/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc98716, 0x6a2

  .globl gMonPalette_Mew
gMonPalette_Mew:
  .incbin "build/graphics/pokemon/mew/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc98dda, 0x2
  .globl gMonBackPic_Mew
gMonBackPic_Mew:
  .incbin "build/graphics/pokemon/mew/back.4bpp.lz"

  .globl gMonShinyPalette_Mew
gMonShinyPalette_Mew:
  .incbin "build/graphics/pokemon/mew/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc990ca, 0x68a

  .globl gMonPalette_Chikorita
gMonPalette_Chikorita:
  .incbin "build/graphics/pokemon/chikorita/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chikorita
gMonBackPic_Chikorita:
  .incbin "build/graphics/pokemon/chikorita/back.4bpp.lz"

  .globl gMonShinyPalette_Chikorita
gMonShinyPalette_Chikorita:
  .incbin "build/graphics/pokemon/chikorita/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc99a68, 0x7f4

  .globl gMonPalette_Bayleef
gMonPalette_Bayleef:
  .incbin "build/graphics/pokemon/bayleef/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bayleef
gMonBackPic_Bayleef:
  .incbin "build/graphics/pokemon/bayleef/back.4bpp.lz"

  .globl gMonShinyPalette_Bayleef
gMonShinyPalette_Bayleef:
  .incbin "build/graphics/pokemon/bayleef/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9a63c, 0x97c

  .globl gMonPalette_Meganium
gMonPalette_Meganium:
  .incbin "build/graphics/pokemon/meganium/normal_palette.gbapal.lz"

  .globl gMonBackPic_Meganium
gMonBackPic_Meganium:
  .incbin "build/graphics/pokemon/meganium/back.4bpp.lz"

  .globl gMonShinyPalette_Meganium
gMonShinyPalette_Meganium:
  .incbin "build/graphics/pokemon/meganium/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9b358, 0x6ac

  .globl gMonPalette_Cyndaquil
gMonPalette_Cyndaquil:
  .incbin "build/graphics/pokemon/cyndaquil/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cyndaquil
gMonBackPic_Cyndaquil:
  .incbin "build/graphics/pokemon/cyndaquil/back.4bpp.lz"

  .globl gMonShinyPalette_Cyndaquil
gMonShinyPalette_Cyndaquil:
  .incbin "build/graphics/pokemon/cyndaquil/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9bd80, 0x73c

  .globl gMonPalette_Quilava
gMonPalette_Quilava:
  .incbin "build/graphics/pokemon/quilava/normal_palette.gbapal.lz"

  .globl gMonBackPic_Quilava
gMonBackPic_Quilava:
  .incbin "build/graphics/pokemon/quilava/back.4bpp.lz"

  .globl gMonShinyPalette_Quilava
gMonShinyPalette_Quilava:
  .incbin "build/graphics/pokemon/quilava/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9c880, 0x848

  .globl gMonPalette_Typhlosion
gMonPalette_Typhlosion:
  .incbin "build/graphics/pokemon/typhlosion/normal_palette.gbapal.lz"

  .globl gMonBackPic_Typhlosion
gMonBackPic_Typhlosion:
  .incbin "build/graphics/pokemon/typhlosion/back.4bpp.lz"

  .globl gMonShinyPalette_Typhlosion
gMonShinyPalette_Typhlosion:
  .incbin "build/graphics/pokemon/typhlosion/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9d51c, 0x6c4

  .globl gMonPalette_Totodile
gMonPalette_Totodile:
  .incbin "build/graphics/pokemon/totodile/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9dc06, 0x2

  .globl gMonBackPic_Totodile
gMonBackPic_Totodile:
  .incbin "build/graphics/pokemon/totodile/back.4bpp.lz"

  .globl gMonShinyPalette_Totodile
gMonShinyPalette_Totodile:
  .incbin "build/graphics/pokemon/totodile/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9df10, 0x788

  .globl gMonPalette_Croconaw
gMonPalette_Croconaw:
  .incbin "build/graphics/pokemon/croconaw/normal_palette.gbapal.lz"

  .globl gMonBackPic_Croconaw
gMonBackPic_Croconaw:
  .incbin "build/graphics/pokemon/croconaw/back.4bpp.lz"

  .globl gMonShinyPalette_Croconaw
gMonShinyPalette_Croconaw:
  .incbin "build/graphics/pokemon/croconaw/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9ea38, 0x98c

  .globl gMonPalette_Feraligatr
gMonPalette_Feraligatr:
  .incbin "build/graphics/pokemon/feraligatr/normal_palette.gbapal.lz"

  .globl gMonBackPic_Feraligatr
gMonBackPic_Feraligatr:
  .incbin "build/graphics/pokemon/feraligatr/back.4bpp.lz"

  .globl gMonShinyPalette_Feraligatr
gMonShinyPalette_Feraligatr:
  .incbin "build/graphics/pokemon/feraligatr/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xc9f8e0, 0x6fc

  .globl gMonPalette_Sentret
gMonPalette_Sentret:
  .incbin "build/graphics/pokemon/sentret/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sentret
gMonBackPic_Sentret:
  .incbin "build/graphics/pokemon/sentret/back.4bpp.lz"

  .globl gMonShinyPalette_Sentret
gMonShinyPalette_Sentret:
  .incbin "build/graphics/pokemon/sentret/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca02d0, 0x754

  .globl gMonPalette_Furret
gMonPalette_Furret:
  .incbin "build/graphics/pokemon/furret/normal_palette.gbapal.lz"

  .globl gMonBackPic_Furret
gMonBackPic_Furret:
  .incbin "build/graphics/pokemon/furret/back.4bpp.lz"

  .globl gMonShinyPalette_Furret
gMonShinyPalette_Furret:
  .incbin "build/graphics/pokemon/furret/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca0d9c, 0x6a4

  .globl gMonPalette_Hoothoot
gMonPalette_Hoothoot:
  .incbin "build/graphics/pokemon/hoothoot/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hoothoot
gMonBackPic_Hoothoot:
  .incbin "build/graphics/pokemon/hoothoot/back.4bpp.lz"

  .globl gMonShinyPalette_Hoothoot
gMonShinyPalette_Hoothoot:
  .incbin "build/graphics/pokemon/hoothoot/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca1798, 0x774

  .globl gMonPalette_Noctowl
gMonPalette_Noctowl:
  .incbin "build/graphics/pokemon/noctowl/normal_palette.gbapal.lz"

  .globl gMonBackPic_Noctowl
gMonBackPic_Noctowl:
  .incbin "build/graphics/pokemon/noctowl/back.4bpp.lz"

  .globl gMonShinyPalette_Noctowl
gMonShinyPalette_Noctowl:
  .incbin "build/graphics/pokemon/noctowl/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca22b8, 0x714

  .globl gMonPalette_Ledyba
gMonPalette_Ledyba:
  .incbin "build/graphics/pokemon/ledyba/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ledyba
gMonBackPic_Ledyba:
  .incbin "build/graphics/pokemon/ledyba/back.4bpp.lz"

  .globl gMonShinyPalette_Ledyba
gMonShinyPalette_Ledyba:
  .incbin "build/graphics/pokemon/ledyba/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca2d4c, 0x7a8

  .globl gMonPalette_Ledian
gMonPalette_Ledian:
  .incbin "build/graphics/pokemon/ledian/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ledian
gMonBackPic_Ledian:
  .incbin "build/graphics/pokemon/ledian/back.4bpp.lz"

  .globl gMonShinyPalette_Ledian
gMonShinyPalette_Ledian:
  .incbin "build/graphics/pokemon/ledian/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca389c, 0x694

  .globl gMonPalette_Spinarak
gMonPalette_Spinarak:
  .incbin "build/graphics/pokemon/spinarak/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spinarak
gMonBackPic_Spinarak:
  .incbin "build/graphics/pokemon/spinarak/back.4bpp.lz"

  .globl gMonShinyPalette_Spinarak
gMonShinyPalette_Spinarak:
  .incbin "build/graphics/pokemon/spinarak/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca41e4, 0x7e0

  .globl gMonPalette_Ariados
gMonPalette_Ariados:
  .incbin "build/graphics/pokemon/ariados/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ariados
gMonBackPic_Ariados:
  .incbin "build/graphics/pokemon/ariados/back.4bpp.lz"

  .globl gMonShinyPalette_Ariados
gMonShinyPalette_Ariados:
  .incbin "build/graphics/pokemon/ariados/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca4d8c, 0x7d0

  .globl gMonPalette_Crobat
gMonPalette_Crobat:
  .incbin "build/graphics/pokemon/crobat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Crobat
gMonBackPic_Crobat:
  .incbin "build/graphics/pokemon/crobat/back.4bpp.lz"

  .globl gMonShinyPalette_Crobat
gMonShinyPalette_Crobat:
  .incbin "build/graphics/pokemon/crobat/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca58b4, 0x6f8

  .globl gMonPalette_Chinchou
gMonPalette_Chinchou:
  .incbin "build/graphics/pokemon/chinchou/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chinchou
gMonBackPic_Chinchou:
  .incbin "build/graphics/pokemon/chinchou/back.4bpp.lz"

  .globl gMonShinyPalette_Chinchou
gMonShinyPalette_Chinchou:
  .incbin "build/graphics/pokemon/chinchou/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca62f4, 0x790

  .globl gMonPalette_Lanturn
gMonPalette_Lanturn:
  .incbin "build/graphics/pokemon/lanturn/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lanturn
gMonBackPic_Lanturn:
  .incbin "build/graphics/pokemon/lanturn/back.4bpp.lz"

  .globl gMonShinyPalette_Lanturn
gMonShinyPalette_Lanturn:
  .incbin "build/graphics/pokemon/lanturn/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca6dd4, 0x63c

  .globl gMonPalette_Pichu
gMonPalette_Pichu:
  .incbin "build/graphics/pokemon/pichu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pichu
gMonBackPic_Pichu:
  .incbin "build/graphics/pokemon/pichu/back.4bpp.lz"

  .globl gMonShinyPalette_Pichu
gMonShinyPalette_Pichu:
  .incbin "build/graphics/pokemon/pichu/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca76bc, 0x600

  .globl gMonPalette_Cleffa
gMonPalette_Cleffa:
  .incbin "build/graphics/pokemon/cleffa/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cleffa
gMonBackPic_Cleffa:
  .incbin "build/graphics/pokemon/cleffa/back.4bpp.lz"

  .globl gMonShinyPalette_Cleffa
gMonShinyPalette_Cleffa:
  .incbin "build/graphics/pokemon/cleffa/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca7f48, 0x608

  .globl gMonPalette_Igglybuff
gMonPalette_Igglybuff:
  .incbin "build/graphics/pokemon/igglybuff/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca8576, 0x2

  .globl gMonBackPic_Igglybuff
gMonBackPic_Igglybuff:
  .incbin "build/graphics/pokemon/igglybuff/back.4bpp.lz"

  .globl gMonShinyPalette_Igglybuff
gMonShinyPalette_Igglybuff:
  .incbin "build/graphics/pokemon/igglybuff/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca87dc, 0x5f4

  .globl gMonPalette_Togepi
gMonPalette_Togepi:
  .incbin "build/graphics/pokemon/togepi/normal_palette.gbapal.lz"

  .globl gMonBackPic_Togepi
gMonBackPic_Togepi:
  .incbin "build/graphics/pokemon/togepi/back.4bpp.lz"

  .globl gMonShinyPalette_Togepi
gMonShinyPalette_Togepi:
  .incbin "build/graphics/pokemon/togepi/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca9094, 0x694

  .globl gMonPalette_Togetic
gMonPalette_Togetic:
  .incbin "build/graphics/pokemon/togetic/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca974e, 0x2

  .globl gMonBackPic_Togetic
gMonBackPic_Togetic:
  .incbin "build/graphics/pokemon/togetic/back.4bpp.lz"

  .globl gMonShinyPalette_Togetic
gMonShinyPalette_Togetic:
  .incbin "build/graphics/pokemon/togetic/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xca9aa2, 0x5ee

  .globl gMonPalette_Natu
gMonPalette_Natu:
  .incbin "build/graphics/pokemon/natu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Natu
gMonBackPic_Natu:
  .incbin "build/graphics/pokemon/natu/back.4bpp.lz"

  .globl gMonShinyPalette_Natu
gMonShinyPalette_Natu:
  .incbin "build/graphics/pokemon/natu/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcaa2f4, 0x6fc

  .globl gMonPalette_Xatu
gMonPalette_Xatu:
  .incbin "build/graphics/pokemon/xatu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Xatu
gMonBackPic_Xatu:
  .incbin "build/graphics/pokemon/xatu/back.4bpp.lz"

  .globl gMonShinyPalette_Xatu
gMonShinyPalette_Xatu:
  .incbin "build/graphics/pokemon/xatu/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcaadb8, 0x6d4

  .globl gMonPalette_Mareep
gMonPalette_Mareep:
  .incbin "build/graphics/pokemon/mareep/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mareep
gMonBackPic_Mareep:
  .incbin "build/graphics/pokemon/mareep/back.4bpp.lz"

  .globl gMonShinyPalette_Mareep
gMonShinyPalette_Mareep:
  .incbin "build/graphics/pokemon/mareep/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcab7d0, 0x720

  .globl gMonPalette_Flaaffy
gMonPalette_Flaaffy:
  .incbin "build/graphics/pokemon/flaaffy/normal_palette.gbapal.lz"

  .globl gMonBackPic_Flaaffy
gMonBackPic_Flaaffy:
  .incbin "build/graphics/pokemon/flaaffy/back.4bpp.lz"

  .globl gMonShinyPalette_Flaaffy
gMonShinyPalette_Flaaffy:
  .incbin "build/graphics/pokemon/flaaffy/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcac25c, 0x77c

  .globl gMonPalette_Ampharos
gMonPalette_Ampharos:
  .incbin "build/graphics/pokemon/ampharos/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ampharos
gMonBackPic_Ampharos:
  .incbin "build/graphics/pokemon/ampharos/back.4bpp.lz"

  .globl gMonShinyPalette_Ampharos
gMonShinyPalette_Ampharos:
  .incbin "build/graphics/pokemon/ampharos/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcacda0, 0x690

  .globl gMonPalette_Bellossom
gMonPalette_Bellossom:
  .incbin "build/graphics/pokemon/bellossom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bellossom
gMonBackPic_Bellossom:
  .incbin "build/graphics/pokemon/bellossom/back.4bpp.lz"

  .globl gMonShinyPalette_Bellossom
gMonShinyPalette_Bellossom:
  .incbin "build/graphics/pokemon/bellossom/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcad7a4, 0x6e4

  .globl gMonPalette_Marill
gMonPalette_Marill:
  .incbin "build/graphics/pokemon/marill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Marill
gMonBackPic_Marill:
  .incbin "build/graphics/pokemon/marill/back.4bpp.lz"

  .globl gMonShinyPalette_Marill
gMonShinyPalette_Marill:
  .incbin "build/graphics/pokemon/marill/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcae184, 0x720

  .globl gMonPalette_Azumarill
gMonPalette_Azumarill:
  .incbin "build/graphics/pokemon/azumarill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Azumarill
gMonBackPic_Azumarill:
  .incbin "build/graphics/pokemon/azumarill/back.4bpp.lz"

  .globl gMonShinyPalette_Azumarill
gMonShinyPalette_Azumarill:
  .incbin "build/graphics/pokemon/azumarill/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcaebb0, 0x738

  .globl gMonPalette_Sudowoodo
gMonPalette_Sudowoodo:
  .incbin "build/graphics/pokemon/sudowoodo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sudowoodo
gMonBackPic_Sudowoodo:
  .incbin "build/graphics/pokemon/sudowoodo/back.4bpp.lz"

  .globl gMonShinyPalette_Sudowoodo
gMonShinyPalette_Sudowoodo:
  .incbin "build/graphics/pokemon/sudowoodo/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcaf694, 0x75c

  .globl gMonPalette_Politoed
gMonPalette_Politoed:
  .incbin "build/graphics/pokemon/politoed/normal_palette.gbapal.lz"

  .globl gMonBackPic_Politoed
gMonBackPic_Politoed:
  .incbin "build/graphics/pokemon/politoed/back.4bpp.lz"

  .globl gMonShinyPalette_Politoed
gMonShinyPalette_Politoed:
  .incbin "build/graphics/pokemon/politoed/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb00fc, 0x6d4

  .globl gMonPalette_Hoppip
gMonPalette_Hoppip:
  .incbin "build/graphics/pokemon/hoppip/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hoppip
gMonBackPic_Hoppip:
  .incbin "build/graphics/pokemon/hoppip/back.4bpp.lz"

  .globl gMonShinyPalette_Hoppip
gMonShinyPalette_Hoppip:
  .incbin "build/graphics/pokemon/hoppip/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb0aff, 0x6a9

  .globl gMonPalette_Skiploom
gMonPalette_Skiploom:
  .incbin "build/graphics/pokemon/skiploom/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb11cf, 0x1

  .globl gMonBackPic_Skiploom
gMonBackPic_Skiploom:
  .incbin "build/graphics/pokemon/skiploom/back.4bpp.lz"

  .globl gMonShinyPalette_Skiploom
gMonShinyPalette_Skiploom:
  .incbin "build/graphics/pokemon/skiploom/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb14d8, 0x78c

  .globl gMonPalette_Jumpluff
gMonPalette_Jumpluff:
  .incbin "build/graphics/pokemon/jumpluff/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jumpluff
gMonBackPic_Jumpluff:
  .incbin "build/graphics/pokemon/jumpluff/back.4bpp.lz"

  .globl gMonShinyPalette_Jumpluff
gMonShinyPalette_Jumpluff:
  .incbin "build/graphics/pokemon/jumpluff/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb20ac, 0x71c

  .globl gMonPalette_Aipom
gMonPalette_Aipom:
  .incbin "build/graphics/pokemon/aipom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Aipom
gMonBackPic_Aipom:
  .incbin "build/graphics/pokemon/aipom/back.4bpp.lz"

  .globl gMonShinyPalette_Aipom
gMonShinyPalette_Aipom:
  .incbin "build/graphics/pokemon/aipom/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb2b0c, 0x658

  .globl gMonPalette_Sunkern
gMonPalette_Sunkern:
  .incbin "build/graphics/pokemon/sunkern/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sunkern
gMonBackPic_Sunkern:
  .incbin "build/graphics/pokemon/sunkern/back.4bpp.lz"

  .globl gMonShinyPalette_Sunkern
gMonShinyPalette_Sunkern:
  .incbin "build/graphics/pokemon/sunkern/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb3478, 0x778

  .globl gMonPalette_Sunflora
gMonPalette_Sunflora:
  .incbin "build/graphics/pokemon/sunflora/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sunflora
gMonBackPic_Sunflora:
  .incbin "build/graphics/pokemon/sunflora/back.4bpp.lz"

  .globl gMonShinyPalette_Sunflora
gMonShinyPalette_Sunflora:
  .incbin "build/graphics/pokemon/sunflora/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb3fe0, 0x7a4

  .globl gMonPalette_Yanma
gMonPalette_Yanma:
  .incbin "build/graphics/pokemon/yanma/normal_palette.gbapal.lz"

  .globl gMonBackPic_Yanma
gMonBackPic_Yanma:
  .incbin "build/graphics/pokemon/yanma/back.4bpp.lz"

  .globl gMonShinyPalette_Yanma
gMonShinyPalette_Yanma:
  .incbin "build/graphics/pokemon/yanma/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb4b88, 0x660

  .globl gMonPalette_Wooper
gMonPalette_Wooper:
  .incbin "build/graphics/pokemon/wooper/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb520e, 0x2

  .globl gMonBackPic_Wooper
gMonBackPic_Wooper:
  .incbin "build/graphics/pokemon/wooper/back.4bpp.lz"

  .globl gMonShinyPalette_Wooper
gMonShinyPalette_Wooper:
  .incbin "build/graphics/pokemon/wooper/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb54c2, 0x796

  .globl gMonPalette_Quagsire
gMonPalette_Quagsire:
  .incbin "build/graphics/pokemon/quagsire/normal_palette.gbapal.lz"

  .globl gMonBackPic_Quagsire
gMonBackPic_Quagsire:
  .incbin "build/graphics/pokemon/quagsire/back.4bpp.lz"

  .globl gMonShinyPalette_Quagsire
gMonShinyPalette_Quagsire:
  .incbin "build/graphics/pokemon/quagsire/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb5fa4, 0x760

  .globl gMonPalette_Espeon
gMonPalette_Espeon:
  .incbin "build/graphics/pokemon/espeon/normal_palette.gbapal.lz"
  .globl gMonBackPic_Espeon
gMonBackPic_Espeon:
  .incbin "build/graphics/pokemon/espeon/back.4bpp.lz"

  .globl gMonShinyPalette_Espeon
gMonShinyPalette_Espeon:
  .incbin "build/graphics/pokemon/espeon/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb6a28, 0x734

  .globl gMonPalette_Umbreon
gMonPalette_Umbreon:
  .incbin "build/graphics/pokemon/umbreon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Umbreon
gMonBackPic_Umbreon:
  .incbin "build/graphics/pokemon/umbreon/back.4bpp.lz"

  .globl gMonShinyPalette_Umbreon
gMonShinyPalette_Umbreon:
  .incbin "build/graphics/pokemon/umbreon/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb74c0, 0x700

  .globl gMonPalette_Murkrow
gMonPalette_Murkrow:
  .incbin "build/graphics/pokemon/murkrow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Murkrow
gMonBackPic_Murkrow:
  .incbin "build/graphics/pokemon/murkrow/back.4bpp.lz"

  .globl gMonShinyPalette_Murkrow
gMonShinyPalette_Murkrow:
  .incbin "build/graphics/pokemon/murkrow/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb7f28, 0x7d4

  .globl gMonPalette_Slowking
gMonPalette_Slowking:
  .incbin "build/graphics/pokemon/slowking/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slowking
gMonBackPic_Slowking:
  .incbin "build/graphics/pokemon/slowking/back.4bpp.lz"

  .globl gMonShinyPalette_Slowking
gMonShinyPalette_Slowking:
  .incbin "build/graphics/pokemon/slowking/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb8ad8, 0x6e0

  .globl gMonPalette_Misdreavus
gMonPalette_Misdreavus:
  .incbin "build/graphics/pokemon/misdreavus/normal_palette.gbapal.lz"

  .globl gMonBackPic_Misdreavus
gMonBackPic_Misdreavus:
  .incbin "build/graphics/pokemon/misdreavus/back.4bpp.lz"

  .globl gMonShinyPalette_Misdreavus
gMonShinyPalette_Misdreavus:
  .incbin "build/graphics/pokemon/misdreavus/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb952c, 0x5f4

  .globl gMonPalette_Unown
  .globl gMonPalette_UnownB
  .globl gMonPalette_UnownC
  .globl gMonPalette_UnownD
  .globl gMonPalette_UnownE
  .globl gMonPalette_UnownF
  .globl gMonPalette_UnownG
  .globl gMonPalette_UnownH
  .globl gMonPalette_UnownI
  .globl gMonPalette_UnownJ
  .globl gMonPalette_UnownK
  .globl gMonPalette_UnownL
  .globl gMonPalette_UnownM
  .globl gMonPalette_UnownN
  .globl gMonPalette_UnownO
  .globl gMonPalette_UnownP
  .globl gMonPalette_UnownQ
  .globl gMonPalette_UnownR
  .globl gMonPalette_UnownS
  .globl gMonPalette_UnownT
  .globl gMonPalette_UnownU
  .globl gMonPalette_UnownV
  .globl gMonPalette_UnownW
  .globl gMonPalette_UnownX
  .globl gMonPalette_UnownY
  .globl gMonPalette_UnownZ
  .globl gMonPalette_UnownEmark
  .globl gMonPalette_UnownQmark
gMonPalette_Unown:
gMonPalette_UnownB:
gMonPalette_UnownC:
gMonPalette_UnownD:
gMonPalette_UnownE:
gMonPalette_UnownF:
gMonPalette_UnownG:
gMonPalette_UnownH:
gMonPalette_UnownI:
gMonPalette_UnownJ:
gMonPalette_UnownK:
gMonPalette_UnownL:
gMonPalette_UnownM:
gMonPalette_UnownN:
gMonPalette_UnownO:
gMonPalette_UnownP:
gMonPalette_UnownQ:
gMonPalette_UnownR:
gMonPalette_UnownS:
gMonPalette_UnownT:
gMonPalette_UnownU:
gMonPalette_UnownV:
gMonPalette_UnownW:
gMonPalette_UnownX:
gMonPalette_UnownY:
gMonPalette_UnownZ:
gMonPalette_UnownEmark:
gMonPalette_UnownQmark:
  .incbin "build/graphics/pokemon/unown_qmark/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb9b3d, 0x3

  .globl gMonBackPic_Unown
gMonBackPic_Unown:
  .incbin "build/graphics/pokemon/unown/back.4bpp.lz"

  .globl gMonShinyPalette_Unown
  .globl gMonShinyPalette_UnownB
  .globl gMonShinyPalette_UnownC
  .globl gMonShinyPalette_UnownD
  .globl gMonShinyPalette_UnownE
  .globl gMonShinyPalette_UnownF
  .globl gMonShinyPalette_UnownG
  .globl gMonShinyPalette_UnownH
  .globl gMonShinyPalette_UnownI
  .globl gMonShinyPalette_UnownJ
  .globl gMonShinyPalette_UnownK
  .globl gMonShinyPalette_UnownL
  .globl gMonShinyPalette_UnownM
  .globl gMonShinyPalette_UnownN
  .globl gMonShinyPalette_UnownO
  .globl gMonShinyPalette_UnownP
  .globl gMonShinyPalette_UnownQ
  .globl gMonShinyPalette_UnownR
  .globl gMonShinyPalette_UnownS
  .globl gMonShinyPalette_UnownT
  .globl gMonShinyPalette_UnownU
  .globl gMonShinyPalette_UnownV
  .globl gMonShinyPalette_UnownW
  .globl gMonShinyPalette_UnownX
  .globl gMonShinyPalette_UnownY
  .globl gMonShinyPalette_UnownZ
  .globl gMonShinyPalette_UnownEmark
  .globl gMonShinyPalette_UnownQmark
gMonShinyPalette_Unown:
gMonShinyPalette_UnownB:
gMonShinyPalette_UnownC:
gMonShinyPalette_UnownD:
gMonShinyPalette_UnownE:
gMonShinyPalette_UnownF:
gMonShinyPalette_UnownG:
gMonShinyPalette_UnownH:
gMonShinyPalette_UnownI:
gMonShinyPalette_UnownJ:
gMonShinyPalette_UnownK:
gMonShinyPalette_UnownL:
gMonShinyPalette_UnownM:
gMonShinyPalette_UnownN:
gMonShinyPalette_UnownO:
gMonShinyPalette_UnownP:
gMonShinyPalette_UnownQ:
gMonShinyPalette_UnownR:
gMonShinyPalette_UnownS:
gMonShinyPalette_UnownT:
gMonShinyPalette_UnownU:
gMonShinyPalette_UnownV:
gMonShinyPalette_UnownW:
gMonShinyPalette_UnownX:
gMonShinyPalette_UnownY:
gMonShinyPalette_UnownZ:
gMonShinyPalette_UnownEmark:
gMonShinyPalette_UnownQmark:
  .incbin "build/graphics/pokemon/unown_qmark/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcb9d5d, 0x773

  .globl gMonPalette_Wobbuffet
gMonPalette_Wobbuffet:
  .incbin "build/graphics/pokemon/wobbuffet/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wobbuffet
gMonBackPic_Wobbuffet:
  .incbin "build/graphics/pokemon/wobbuffet/back.4bpp.lz"

  .globl gMonShinyPalette_Wobbuffet
gMonShinyPalette_Wobbuffet:
  .incbin "build/graphics/pokemon/wobbuffet/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcba764, 0x824

  .globl gMonPalette_Girafarig
gMonPalette_Girafarig:
  .incbin "build/graphics/pokemon/girafarig/normal_palette.gbapal.lz"

  .globl gMonBackPic_Girafarig
gMonBackPic_Girafarig:
  .incbin "build/graphics/pokemon/girafarig/back.4bpp.lz"

  .globl gMonShinyPalette_Girafarig
gMonShinyPalette_Girafarig:
  .incbin "build/graphics/pokemon/girafarig/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbb384, 0x760

  .globl gMonPalette_Pineco
gMonPalette_Pineco:
  .incbin "build/graphics/pokemon/pineco/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbbb05, 0x3

  .globl gMonBackPic_Pineco
gMonBackPic_Pineco:
  .incbin "build/graphics/pokemon/pineco/back.4bpp.lz"

  .globl gMonShinyPalette_Pineco
gMonShinyPalette_Pineco:
  .incbin "build/graphics/pokemon/pineco/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbbe01, 0x83f

  .globl gMonPalette_Forretress
gMonPalette_Forretress:
  .incbin "build/graphics/pokemon/forretress/normal_palette.gbapal.lz"

  .globl gMonBackPic_Forretress
gMonBackPic_Forretress:
  .incbin "build/graphics/pokemon/forretress/back.4bpp.lz"

  .globl gMonShinyPalette_Forretress
gMonShinyPalette_Forretress:
  .incbin "build/graphics/pokemon/forretress/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbc950, 0x730

  .globl gMonPalette_Dunsparce
gMonPalette_Dunsparce:
  .incbin "build/graphics/pokemon/dunsparce/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dunsparce
gMonBackPic_Dunsparce:
  .incbin "build/graphics/pokemon/dunsparce/back.4bpp.lz"

  .globl gMonShinyPalette_Dunsparce
gMonShinyPalette_Dunsparce:
  .incbin "build/graphics/pokemon/dunsparce/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbd3cc, 0x848

  .globl gMonPalette_Gligar
gMonPalette_Gligar:
  .incbin "build/graphics/pokemon/gligar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gligar
gMonBackPic_Gligar:
  .incbin "build/graphics/pokemon/gligar/back.4bpp.lz"

  .globl gMonShinyPalette_Gligar
gMonShinyPalette_Gligar:
  .incbin "build/graphics/pokemon/gligar/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbe03c, 0x8e8

  .globl gMonPalette_Steelix
gMonPalette_Steelix:
  .incbin "build/graphics/pokemon/steelix/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbe945, 0x3

  .globl gMonBackPic_Steelix
gMonBackPic_Steelix:
  .incbin "build/graphics/pokemon/steelix/back.4bpp.lz"

  .globl gMonShinyPalette_Steelix
gMonShinyPalette_Steelix:
  .incbin "build/graphics/pokemon/steelix/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbed75, 0x6f7

  .globl gMonPalette_Snubbull
gMonPalette_Snubbull:
  .incbin "build/graphics/pokemon/snubbull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Snubbull
gMonBackPic_Snubbull:
  .incbin "build/graphics/pokemon/snubbull/back.4bpp.lz"

  .globl gMonShinyPalette_Snubbull
gMonShinyPalette_Snubbull:
  .incbin "build/graphics/pokemon/snubbull/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcbf7e4, 0x7ac

  .globl gMonPalette_Granbull
gMonPalette_Granbull:
  .incbin "build/graphics/pokemon/granbull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Granbull
gMonBackPic_Granbull:
  .incbin "build/graphics/pokemon/granbull/back.4bpp.lz"

  .globl gMonShinyPalette_Granbull
gMonShinyPalette_Granbull:
  .incbin "build/graphics/pokemon/granbull/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc0304, 0x6e0

  .globl gMonPalette_Qwilfish
gMonPalette_Qwilfish:
  .incbin "build/graphics/pokemon/qwilfish/normal_palette.gbapal.lz"

  .globl gMonBackPic_Qwilfish
gMonBackPic_Qwilfish:
  .incbin "build/graphics/pokemon/qwilfish/back.4bpp.lz"

  .globl gMonShinyPalette_Qwilfish
gMonShinyPalette_Qwilfish:
  .incbin "build/graphics/pokemon/qwilfish/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc0d14, 0x908

  .globl gMonPalette_Scizor
gMonPalette_Scizor:
  .incbin "build/graphics/pokemon/scizor/normal_palette.gbapal.lz"

  .globl gMonBackPic_Scizor
gMonBackPic_Scizor:
  .incbin "build/graphics/pokemon/scizor/back.4bpp.lz"

  .globl gMonShinyPalette_Scizor
gMonShinyPalette_Scizor:
  .incbin "build/graphics/pokemon/scizor/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc19ec, 0x6e8

  .globl gMonPalette_Shuckle
gMonPalette_Shuckle:
  .incbin "build/graphics/pokemon/shuckle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shuckle
gMonBackPic_Shuckle:
  .incbin "build/graphics/pokemon/shuckle/back.4bpp.lz"

  .globl gMonShinyPalette_Shuckle
gMonShinyPalette_Shuckle:
  .incbin "build/graphics/pokemon/shuckle/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc237c, 0x810

  .globl gMonPalette_Heracross
gMonPalette_Heracross:
  .incbin "build/graphics/pokemon/heracross/normal_palette.gbapal.lz"

  .globl gMonBackPic_Heracross
gMonBackPic_Heracross:
  .incbin "build/graphics/pokemon/heracross/back.4bpp.lz"

  .globl gMonShinyPalette_Heracross
gMonShinyPalette_Heracross:
  .incbin "build/graphics/pokemon/heracross/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc2f4c, 0x764

  .globl gMonPalette_Sneasel
gMonPalette_Sneasel:
  .incbin "build/graphics/pokemon/sneasel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sneasel
gMonBackPic_Sneasel:
  .incbin "build/graphics/pokemon/sneasel/back.4bpp.lz"

  .globl gMonShinyPalette_Sneasel
gMonShinyPalette_Sneasel:
  .incbin "build/graphics/pokemon/sneasel/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc3a24, 0x68c

  .globl gMonPalette_Teddiursa
gMonPalette_Teddiursa:
  .incbin "build/graphics/pokemon/teddiursa/normal_palette.gbapal.lz"

  .globl gMonBackPic_Teddiursa
gMonBackPic_Teddiursa:
  .incbin "build/graphics/pokemon/teddiursa/back.4bpp.lz"

  .globl gMonShinyPalette_Teddiursa
gMonShinyPalette_Teddiursa:
  .incbin "build/graphics/pokemon/teddiursa/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc4378, 0x858

  .globl gMonPalette_Ursaring
gMonPalette_Ursaring:
  .incbin "build/graphics/pokemon/ursaring/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ursaring
gMonBackPic_Ursaring:
  .incbin "build/graphics/pokemon/ursaring/back.4bpp.lz"

  .globl gMonShinyPalette_Ursaring
gMonShinyPalette_Ursaring:
  .incbin "build/graphics/pokemon/ursaring/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc4fa8, 0x694

  .globl gMonPalette_Slugma
gMonPalette_Slugma:
  .incbin "build/graphics/pokemon/slugma/normal_palette.gbapal.lz"
  .globl gMonBackPic_Slugma
gMonBackPic_Slugma:
  .incbin "build/graphics/pokemon/slugma/back.4bpp.lz"

  .globl gMonShinyPalette_Slugma
gMonShinyPalette_Slugma:
  .incbin "build/graphics/pokemon/slugma/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc596c, 0x768

  .globl gMonPalette_Magcargo
gMonPalette_Magcargo:
  .incbin "build/graphics/pokemon/magcargo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magcargo
gMonBackPic_Magcargo:
  .incbin "build/graphics/pokemon/magcargo/back.4bpp.lz"

  .globl gMonShinyPalette_Magcargo
gMonShinyPalette_Magcargo:
  .incbin "build/graphics/pokemon/magcargo/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc653c, 0x61c

  .globl gMonPalette_Swinub
gMonPalette_Swinub:
  .incbin "build/graphics/pokemon/swinub/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swinub
gMonBackPic_Swinub:
  .incbin "build/graphics/pokemon/swinub/back.4bpp.lz"

  .globl gMonShinyPalette_Swinub
gMonShinyPalette_Swinub:
  .incbin "build/graphics/pokemon/swinub/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc6de4, 0x748

  .globl gMonPalette_Piloswine
gMonPalette_Piloswine:
  .incbin "build/graphics/pokemon/piloswine/normal_palette.gbapal.lz"

  .globl gMonBackPic_Piloswine
gMonBackPic_Piloswine:
  .incbin "build/graphics/pokemon/piloswine/back.4bpp.lz"

  .globl gMonShinyPalette_Piloswine
gMonShinyPalette_Piloswine:
  .incbin "build/graphics/pokemon/piloswine/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc77c8, 0x708

  .globl gMonPalette_Corsola
gMonPalette_Corsola:
  .incbin "build/graphics/pokemon/corsola/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc7ef6, 0x2

  .globl gMonBackPic_Corsola
gMonBackPic_Corsola:
  .incbin "build/graphics/pokemon/corsola/back.4bpp.lz"

  .globl gMonShinyPalette_Corsola
gMonShinyPalette_Corsola:
  .incbin "build/graphics/pokemon/corsola/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc81de, 0x68a

  .globl gMonPalette_Remoraid
gMonPalette_Remoraid:
  .incbin "build/graphics/pokemon/remoraid/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc888e, 0x2

  .globl gMonBackPic_Remoraid
gMonBackPic_Remoraid:
  .incbin "build/graphics/pokemon/remoraid/back.4bpp.lz"

  .globl gMonShinyPalette_Remoraid
gMonShinyPalette_Remoraid:
  .incbin "build/graphics/pokemon/remoraid/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc8bca, 0x756

  .globl gMonPalette_Octillery
gMonPalette_Octillery:
  .incbin "build/graphics/pokemon/octillery/normal_palette.gbapal.lz"

  .globl gMonBackPic_Octillery
gMonBackPic_Octillery:
  .incbin "build/graphics/pokemon/octillery/back.4bpp.lz"

  .globl gMonShinyPalette_Octillery
gMonShinyPalette_Octillery:
  .incbin "build/graphics/pokemon/octillery/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcc9628, 0x790

  .globl gMonPalette_Delibird
gMonPalette_Delibird:
  .incbin "build/graphics/pokemon/delibird/normal_palette.gbapal.lz"

  .globl gMonBackPic_Delibird
gMonBackPic_Delibird:
  .incbin "build/graphics/pokemon/delibird/back.4bpp.lz"

  .globl gMonShinyPalette_Delibird
gMonShinyPalette_Delibird:
  .incbin "build/graphics/pokemon/delibird/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcca1c8, 0x8bc

  .globl gMonPalette_Mantine
gMonPalette_Mantine:
  .incbin "build/graphics/pokemon/mantine/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mantine
gMonBackPic_Mantine:
  .incbin "build/graphics/pokemon/mantine/back.4bpp.lz"

  .globl gMonShinyPalette_Mantine
gMonShinyPalette_Mantine:
  .incbin "build/graphics/pokemon/mantine/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xccad74, 0x900

  .globl gMonPalette_Skarmory
gMonPalette_Skarmory:
  .incbin "build/graphics/pokemon/skarmory/normal_palette.gbapal.lz"

  .globl gMonBackPic_Skarmory
gMonBackPic_Skarmory:
  .incbin "build/graphics/pokemon/skarmory/back.4bpp.lz"

  .globl gMonShinyPalette_Skarmory
gMonShinyPalette_Skarmory:
  .incbin "build/graphics/pokemon/skarmory/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xccb9c8, 0x6d8

  .globl gMonPalette_Houndour
gMonPalette_Houndour:
  .incbin "build/graphics/pokemon/houndour/normal_palette.gbapal.lz"

  .globl gMonBackPic_Houndour
gMonBackPic_Houndour:
  .incbin "build/graphics/pokemon/houndour/back.4bpp.lz"

  .globl gMonShinyPalette_Houndour
gMonShinyPalette_Houndour:
  .incbin "build/graphics/pokemon/houndour/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xccc370, 0x820

  .globl gMonPalette_Houndoom
gMonPalette_Houndoom:
  .incbin "build/graphics/pokemon/houndoom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Houndoom
gMonBackPic_Houndoom:
  .incbin "build/graphics/pokemon/houndoom/back.4bpp.lz"

  .globl gMonShinyPalette_Houndoom
gMonShinyPalette_Houndoom:
  .incbin "build/graphics/pokemon/houndoom/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcccf04, 0x840

  .globl gMonPalette_Kingdra
gMonPalette_Kingdra:
  .incbin "build/graphics/pokemon/kingdra/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kingdra
gMonBackPic_Kingdra:
  .incbin "build/graphics/pokemon/kingdra/back.4bpp.lz"

  .globl gMonShinyPalette_Kingdra
gMonShinyPalette_Kingdra:
  .incbin "build/graphics/pokemon/kingdra/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xccdb48, 0x67c

  .globl gMonPalette_Phanpy
gMonPalette_Phanpy:
  .incbin "build/graphics/pokemon/phanpy/normal_palette.gbapal.lz"

  .globl gMonBackPic_Phanpy
gMonBackPic_Phanpy:
  .incbin "build/graphics/pokemon/phanpy/back.4bpp.lz"

  .globl gMonShinyPalette_Phanpy
gMonShinyPalette_Phanpy:
  .incbin "build/graphics/pokemon/phanpy/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcce4d8, 0x894

  .globl gMonPalette_Donphan
gMonPalette_Donphan:
  .incbin "build/graphics/pokemon/donphan/normal_palette.gbapal.lz"

  .globl gMonBackPic_Donphan
gMonBackPic_Donphan:
  .incbin "build/graphics/pokemon/donphan/back.4bpp.lz"

  .globl gMonShinyPalette_Donphan
gMonShinyPalette_Donphan:
  .incbin "build/graphics/pokemon/donphan/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xccf0b8, 0x6a8

  .globl gMonPalette_Porygon2
gMonPalette_Porygon2:
  .incbin "build/graphics/pokemon/porygon2/normal_palette.gbapal.lz"

  .globl gMonBackPic_Porygon2
gMonBackPic_Porygon2:
  .incbin "build/graphics/pokemon/porygon2/back.4bpp.lz"

  .globl gMonShinyPalette_Porygon2
gMonShinyPalette_Porygon2:
  .incbin "build/graphics/pokemon/porygon2/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xccfacc, 0x834

  .globl gMonPalette_Stantler
gMonPalette_Stantler:
  .incbin "build/graphics/pokemon/stantler/normal_palette.gbapal.lz"

  .globl gMonBackPic_Stantler
gMonBackPic_Stantler:
  .incbin "build/graphics/pokemon/stantler/back.4bpp.lz"

  .globl gMonShinyPalette_Stantler
gMonShinyPalette_Stantler:
  .incbin "build/graphics/pokemon/stantler/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd069c, 0x7b4

  .globl gMonPalette_Smeargle
gMonPalette_Smeargle:
  .incbin "build/graphics/pokemon/smeargle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Smeargle
gMonBackPic_Smeargle:
  .incbin "build/graphics/pokemon/smeargle/back.4bpp.lz"

  .globl gMonShinyPalette_Smeargle
gMonShinyPalette_Smeargle:
  .incbin "build/graphics/pokemon/smeargle/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd11c4, 0x6ac

  .globl gMonPalette_Tyrogue
gMonPalette_Tyrogue:
  .incbin "build/graphics/pokemon/tyrogue/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tyrogue
gMonBackPic_Tyrogue:
  .incbin "build/graphics/pokemon/tyrogue/back.4bpp.lz"

  .globl gMonShinyPalette_Tyrogue
gMonShinyPalette_Tyrogue:
  .incbin "build/graphics/pokemon/tyrogue/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd1bdc, 0x7ac

  .globl gMonPalette_Hitmontop
gMonPalette_Hitmontop:
  .incbin "build/graphics/pokemon/hitmontop/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hitmontop
gMonBackPic_Hitmontop:
  .incbin "build/graphics/pokemon/hitmontop/back.4bpp.lz"

  .globl gMonShinyPalette_Hitmontop
gMonShinyPalette_Hitmontop:
  .incbin "build/graphics/pokemon/hitmontop/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd2800, 0x678

  .globl gMonPalette_Smoochum
gMonPalette_Smoochum:
  .incbin "build/graphics/pokemon/smoochum/normal_palette.gbapal.lz"

  .globl gMonBackPic_Smoochum
gMonBackPic_Smoochum:
  .incbin "build/graphics/pokemon/smoochum/back.4bpp.lz"

  .globl gMonShinyPalette_Smoochum
gMonShinyPalette_Smoochum:
  .incbin "build/graphics/pokemon/smoochum/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd3140, 0x728

  .globl gMonPalette_Elekid
gMonPalette_Elekid:
  .incbin "build/graphics/pokemon/elekid/normal_palette.gbapal.lz"

  .globl gMonBackPic_Elekid
gMonBackPic_Elekid:
  .incbin "build/graphics/pokemon/elekid/back.4bpp.lz"

  .globl gMonShinyPalette_Elekid
gMonShinyPalette_Elekid:
  .incbin "build/graphics/pokemon/elekid/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd3c10, 0x6a4

  .globl gMonPalette_Magby
gMonPalette_Magby:
  .incbin "build/graphics/pokemon/magby/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magby
gMonBackPic_Magby:
  .incbin "build/graphics/pokemon/magby/back.4bpp.lz"

  .globl gMonShinyPalette_Magby
gMonShinyPalette_Magby:
  .incbin "build/graphics/pokemon/magby/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd45b0, 0x7d0

  .globl gMonPalette_Miltank
gMonPalette_Miltank:
  .incbin "build/graphics/pokemon/miltank/normal_palette.gbapal.lz"

  .globl gMonBackPic_Miltank
gMonBackPic_Miltank:
  .incbin "build/graphics/pokemon/miltank/back.4bpp.lz"

  .globl gMonShinyPalette_Miltank
gMonShinyPalette_Miltank:
  .incbin "build/graphics/pokemon/miltank/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd516c, 0x808

  .globl gMonPalette_Blissey
gMonPalette_Blissey:
  .incbin "build/graphics/pokemon/blissey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Blissey
gMonBackPic_Blissey:
  .incbin "build/graphics/pokemon/blissey/back.4bpp.lz"

  .globl gMonShinyPalette_Blissey
gMonShinyPalette_Blissey:
  .incbin "build/graphics/pokemon/blissey/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd5c90, 0x99c

  .globl gMonPalette_Raikou
gMonPalette_Raikou:
  .incbin "build/graphics/pokemon/raikou/normal_palette.gbapal.lz"

  .globl gMonBackPic_Raikou
gMonBackPic_Raikou:
  .incbin "build/graphics/pokemon/raikou/back.4bpp.lz"

  .globl gMonShinyPalette_Raikou
gMonShinyPalette_Raikou:
  .incbin "build/graphics/pokemon/raikou/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd6a24, 0xa1c

  .globl gMonPalette_Entei
gMonPalette_Entei:
  .incbin "build/graphics/pokemon/entei/normal_palette.gbapal.lz"

  .globl gMonBackPic_Entei
gMonBackPic_Entei:
  .incbin "build/graphics/pokemon/entei/back.4bpp.lz"

  .globl gMonShinyPalette_Entei
gMonShinyPalette_Entei:
  .incbin "build/graphics/pokemon/entei/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd78b4, 0x9a4

  .globl gMonPalette_Suicune
gMonPalette_Suicune:
  .incbin "build/graphics/pokemon/suicune/normal_palette.gbapal.lz"

  .globl gMonBackPic_Suicune
gMonBackPic_Suicune:
  .incbin "build/graphics/pokemon/suicune/back.4bpp.lz"

  .globl gMonShinyPalette_Suicune
gMonShinyPalette_Suicune:
  .incbin "build/graphics/pokemon/suicune/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd8784, 0x67c

  .globl gMonPalette_Larvitar
gMonPalette_Larvitar:
  .incbin "build/graphics/pokemon/larvitar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Larvitar
gMonBackPic_Larvitar:
  .incbin "build/graphics/pokemon/larvitar/back.4bpp.lz"

  .globl gMonShinyPalette_Larvitar
gMonShinyPalette_Larvitar:
  .incbin "build/graphics/pokemon/larvitar/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd90fc, 0x710

  .globl gMonPalette_Pupitar
gMonPalette_Pupitar:
  .incbin "build/graphics/pokemon/pupitar/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd9831, 0x3

  .globl gMonBackPic_Pupitar
gMonBackPic_Pupitar:
  .incbin "build/graphics/pokemon/pupitar/back.4bpp.lz"

  .globl gMonShinyPalette_Pupitar
gMonShinyPalette_Pupitar:
  .incbin "build/graphics/pokemon/pupitar/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcd9b92, 0x95e

  .globl gMonPalette_Tyranitar
gMonPalette_Tyranitar:
  .incbin "build/graphics/pokemon/tyranitar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tyranitar
gMonBackPic_Tyranitar:
  .incbin "build/graphics/pokemon/tyranitar/back.4bpp.lz"

  .globl gMonShinyPalette_Tyranitar
gMonShinyPalette_Tyranitar:
  .incbin "build/graphics/pokemon/tyranitar/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcda92c, 0x8e4

  .globl gMonPalette_Lugia
gMonPalette_Lugia:
  .incbin "build/graphics/pokemon/lugia/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcdb236, 0x2

  .globl gMonBackPic_Lugia
gMonBackPic_Lugia:
  .incbin "build/graphics/pokemon/lugia/back.4bpp.lz"

  .globl gMonShinyPalette_Lugia
gMonShinyPalette_Lugia:
  .incbin "build/graphics/pokemon/lugia/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcdb634, 0xa74

  .globl gMonPalette_HoOh
gMonPalette_HoOh:
  .incbin "build/graphics/pokemon/ho_oh/normal_palette.gbapal.lz"

  .globl gMonBackPic_HoOh
gMonBackPic_HoOh:
  .incbin "build/graphics/pokemon/ho_oh/back.4bpp.lz"

  .globl gMonShinyPalette_HoOh
gMonShinyPalette_HoOh:
  .incbin "build/graphics/pokemon/ho_oh/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcdc508, 0x698

  .globl gMonPalette_Celebi
gMonPalette_Celebi:
  .incbin "build/graphics/pokemon/celebi/normal_palette.gbapal.lz"

  .globl gMonBackPic_Celebi
gMonBackPic_Celebi:
  .incbin "build/graphics/pokemon/celebi/back.4bpp.lz"

  .globl gMonShinyPalette_Celebi
gMonShinyPalette_Celebi:
  .incbin "build/graphics/pokemon/celebi/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcdcf9c, 0x5a0

  .globl gMonPalette_OldUnownB
  .globl gMonPalette_OldUnownC
  .globl gMonPalette_OldUnownD
  .globl gMonPalette_OldUnownE
  .globl gMonPalette_OldUnownF
  .globl gMonPalette_OldUnownG
  .globl gMonPalette_OldUnownH
  .globl gMonPalette_OldUnownI
  .globl gMonPalette_OldUnownJ
  .globl gMonPalette_OldUnownK
  .globl gMonPalette_OldUnownL
  .globl gMonPalette_OldUnownM
  .globl gMonPalette_OldUnownN
  .globl gMonPalette_OldUnownO
  .globl gMonPalette_OldUnownP
  .globl gMonPalette_OldUnownQ
  .globl gMonPalette_OldUnownR
  .globl gMonPalette_OldUnownS
  .globl gMonPalette_OldUnownT
  .globl gMonPalette_OldUnownU
  .globl gMonPalette_OldUnownV
  .globl gMonPalette_OldUnownW
  .globl gMonPalette_OldUnownX
  .globl gMonPalette_OldUnownY
  .globl gMonPalette_OldUnownZ
gMonPalette_OldUnownB:
gMonPalette_OldUnownC:
gMonPalette_OldUnownD:
gMonPalette_OldUnownE:
gMonPalette_OldUnownF:
gMonPalette_OldUnownG:
gMonPalette_OldUnownH:
gMonPalette_OldUnownI:
gMonPalette_OldUnownJ:
gMonPalette_OldUnownK:
gMonPalette_OldUnownL:
gMonPalette_OldUnownM:
gMonPalette_OldUnownN:
gMonPalette_OldUnownO:
gMonPalette_OldUnownP:
gMonPalette_OldUnownQ:
gMonPalette_OldUnownR:
gMonPalette_OldUnownS:
gMonPalette_OldUnownT:
gMonPalette_OldUnownU:
gMonPalette_OldUnownV:
gMonPalette_OldUnownW:
gMonPalette_OldUnownX:
gMonPalette_OldUnownY:
gMonPalette_OldUnownZ:
  .incbin "build/graphics/pokemon/old_unown_z/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcdd54e, 0x2

  .globl gMonBackPic_OldUnownB
  .globl gMonBackPic_OldUnownC
  .globl gMonBackPic_OldUnownD
  .globl gMonBackPic_OldUnownE
  .globl gMonBackPic_OldUnownF
  .globl gMonBackPic_OldUnownG
  .globl gMonBackPic_OldUnownH
  .globl gMonBackPic_OldUnownI
  .globl gMonBackPic_OldUnownJ
  .globl gMonBackPic_OldUnownK
  .globl gMonBackPic_OldUnownL
  .globl gMonBackPic_OldUnownM
  .globl gMonBackPic_OldUnownN
  .globl gMonBackPic_OldUnownO
  .globl gMonBackPic_OldUnownP
  .globl gMonBackPic_OldUnownQ
  .globl gMonBackPic_OldUnownR
  .globl gMonBackPic_OldUnownS
  .globl gMonBackPic_OldUnownT
  .globl gMonBackPic_OldUnownU
  .globl gMonBackPic_OldUnownV
  .globl gMonBackPic_OldUnownW
  .globl gMonBackPic_OldUnownX
  .globl gMonBackPic_OldUnownY
  .globl gMonBackPic_OldUnownZ
gMonBackPic_OldUnownB:
gMonBackPic_OldUnownC:
gMonBackPic_OldUnownD:
gMonBackPic_OldUnownE:
gMonBackPic_OldUnownF:
gMonBackPic_OldUnownG:
gMonBackPic_OldUnownH:
gMonBackPic_OldUnownI:
gMonBackPic_OldUnownJ:
gMonBackPic_OldUnownK:
gMonBackPic_OldUnownL:
gMonBackPic_OldUnownM:
gMonBackPic_OldUnownN:
gMonBackPic_OldUnownO:
gMonBackPic_OldUnownP:
gMonBackPic_OldUnownQ:
gMonBackPic_OldUnownR:
gMonBackPic_OldUnownS:
gMonBackPic_OldUnownT:
gMonBackPic_OldUnownU:
gMonBackPic_OldUnownV:
gMonBackPic_OldUnownW:
gMonBackPic_OldUnownX:
gMonBackPic_OldUnownY:
gMonBackPic_OldUnownZ:
  .incbin "build/graphics/pokemon/old_unown_z/back.4bpp.lz"

  .globl gMonShinyPalette_OldUnownB
  .globl gMonShinyPalette_OldUnownC
  .globl gMonShinyPalette_OldUnownD
  .globl gMonShinyPalette_OldUnownE
  .globl gMonShinyPalette_OldUnownF
  .globl gMonShinyPalette_OldUnownG
  .globl gMonShinyPalette_OldUnownH
  .globl gMonShinyPalette_OldUnownI
  .globl gMonShinyPalette_OldUnownJ
  .globl gMonShinyPalette_OldUnownK
  .globl gMonShinyPalette_OldUnownL
  .globl gMonShinyPalette_OldUnownM
  .globl gMonShinyPalette_OldUnownN
  .globl gMonShinyPalette_OldUnownO
  .globl gMonShinyPalette_OldUnownP
  .globl gMonShinyPalette_OldUnownQ
  .globl gMonShinyPalette_OldUnownR
  .globl gMonShinyPalette_OldUnownS
  .globl gMonShinyPalette_OldUnownT
  .globl gMonShinyPalette_OldUnownU
  .globl gMonShinyPalette_OldUnownV
  .globl gMonShinyPalette_OldUnownW
  .globl gMonShinyPalette_OldUnownX
  .globl gMonShinyPalette_OldUnownY
  .globl gMonShinyPalette_OldUnownZ
gMonShinyPalette_OldUnownB:
gMonShinyPalette_OldUnownC:
gMonShinyPalette_OldUnownD:
gMonShinyPalette_OldUnownE:
gMonShinyPalette_OldUnownF:
gMonShinyPalette_OldUnownG:
gMonShinyPalette_OldUnownH:
gMonShinyPalette_OldUnownI:
gMonShinyPalette_OldUnownJ:
gMonShinyPalette_OldUnownK:
gMonShinyPalette_OldUnownL:
gMonShinyPalette_OldUnownM:
gMonShinyPalette_OldUnownN:
gMonShinyPalette_OldUnownO:
gMonShinyPalette_OldUnownP:
gMonShinyPalette_OldUnownQ:
gMonShinyPalette_OldUnownR:
gMonShinyPalette_OldUnownS:
gMonShinyPalette_OldUnownT:
gMonShinyPalette_OldUnownU:
gMonShinyPalette_OldUnownV:
gMonShinyPalette_OldUnownW:
gMonShinyPalette_OldUnownX:
gMonShinyPalette_OldUnownY:
gMonShinyPalette_OldUnownZ:
  .incbin "build/graphics/pokemon/old_unown_z/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcdd6e6, 0x30a

  .globl gMonPalette_Treecko
gMonPalette_Treecko:
  .incbin "build/graphics/pokemon/treecko/normal_palette.gbapal.lz"

  .globl gMonBackPic_Treecko
gMonBackPic_Treecko:
  .incbin "build/graphics/pokemon/treecko/back.4bpp.lz"

  .globl gMonShinyPalette_Treecko
gMonShinyPalette_Treecko:
  .incbin "build/graphics/pokemon/treecko/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcddd40, 0x8ac

  .globl gMonPalette_Grovyle
gMonPalette_Grovyle:
  .incbin "build/graphics/pokemon/grovyle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Grovyle
gMonBackPic_Grovyle:
  .incbin "build/graphics/pokemon/grovyle/back.4bpp.lz"

  .globl gMonShinyPalette_Grovyle
gMonShinyPalette_Grovyle:
  .incbin "build/graphics/pokemon/grovyle/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcde978, 0x924

  .globl gMonPalette_Sceptile
gMonPalette_Sceptile:
  .incbin "build/graphics/pokemon/sceptile/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sceptile
gMonBackPic_Sceptile:
  .incbin "build/graphics/pokemon/sceptile/back.4bpp.lz"

  .globl gMonShinyPalette_Sceptile
gMonShinyPalette_Sceptile:
  .incbin "build/graphics/pokemon/sceptile/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcdf6e8, 0x6bc

  .globl gMonPalette_Torchic
gMonPalette_Torchic:
  .incbin "build/graphics/pokemon/torchic/normal_palette.gbapal.lz"

  .globl gMonBackPic_Torchic
gMonBackPic_Torchic:
  .incbin "build/graphics/pokemon/torchic/back.4bpp.lz"

  .globl gMonShinyPalette_Torchic
gMonShinyPalette_Torchic:
  .incbin "build/graphics/pokemon/torchic/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce00cc, 0x80c

  .globl gMonPalette_Combusken
gMonPalette_Combusken:
  .incbin "build/graphics/pokemon/combusken/normal_palette.gbapal.lz"

  .globl gMonBackPic_Combusken
gMonBackPic_Combusken:
  .incbin "build/graphics/pokemon/combusken/back.4bpp.lz"

  .globl gMonShinyPalette_Combusken
gMonShinyPalette_Combusken:
  .incbin "build/graphics/pokemon/combusken/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce0cf8, 0xb70

  .globl gMonPalette_Blaziken
gMonPalette_Blaziken:
  .incbin "build/graphics/pokemon/blaziken/normal_palette.gbapal.lz"

  .globl gMonBackPic_Blaziken
gMonBackPic_Blaziken:
  .incbin "build/graphics/pokemon/blaziken/back.4bpp.lz"

  .globl gMonShinyPalette_Blaziken
gMonShinyPalette_Blaziken:
  .incbin "build/graphics/pokemon/blaziken/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce1c94, 0x6d8

  .globl gMonPalette_Mudkip
gMonPalette_Mudkip:
  .incbin "build/graphics/pokemon/mudkip/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mudkip
gMonBackPic_Mudkip:
  .incbin "build/graphics/pokemon/mudkip/back.4bpp.lz"

  .globl gMonShinyPalette_Mudkip
gMonShinyPalette_Mudkip:
  .incbin "build/graphics/pokemon/mudkip/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce269c, 0xa80

  .globl gMonPalette_Marshtomp
gMonPalette_Marshtomp:
  .incbin "build/graphics/pokemon/marshtomp/normal_palette.gbapal.lz"

  .globl gMonBackPic_Marshtomp
gMonBackPic_Marshtomp:
  .incbin "build/graphics/pokemon/marshtomp/back.4bpp.lz"

  .globl gMonShinyPalette_Marshtomp
gMonShinyPalette_Marshtomp:
  .incbin "build/graphics/pokemon/marshtomp/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce351c, 0x99c

  .globl gMonPalette_Swampert
gMonPalette_Swampert:
  .incbin "build/graphics/pokemon/swampert/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swampert
gMonBackPic_Swampert:
  .incbin "build/graphics/pokemon/swampert/back.4bpp.lz"

  .globl gMonShinyPalette_Swampert
gMonShinyPalette_Swampert:
  .incbin "build/graphics/pokemon/swampert/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce42bc, 0x9c4

  .globl gMonPalette_Poochyena
gMonPalette_Poochyena:
  .incbin "build/graphics/pokemon/poochyena/normal_palette.gbapal.lz"

  .globl gMonBackPic_Poochyena
gMonBackPic_Poochyena:
  .incbin "build/graphics/pokemon/poochyena/back.4bpp.lz"

  .globl gMonShinyPalette_Poochyena
gMonShinyPalette_Poochyena:
  .incbin "build/graphics/pokemon/poochyena/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce4ffc, 0x858

  .globl gMonPalette_Mightyena
gMonPalette_Mightyena:
  .incbin "build/graphics/pokemon/mightyena/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mightyena
gMonBackPic_Mightyena:
  .incbin "build/graphics/pokemon/mightyena/back.4bpp.lz"

  .globl gMonShinyPalette_Mightyena
gMonShinyPalette_Mightyena:
  .incbin "build/graphics/pokemon/mightyena/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce5c1c, 0x7f0

  .globl gMonPalette_Zigzagoon
gMonPalette_Zigzagoon:
  .incbin "build/graphics/pokemon/zigzagoon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zigzagoon
gMonBackPic_Zigzagoon:
  .incbin "build/graphics/pokemon/zigzagoon/back.4bpp.lz"

  .globl gMonShinyPalette_Zigzagoon
gMonShinyPalette_Zigzagoon:
  .incbin "build/graphics/pokemon/zigzagoon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce679c, 0x790

  .globl gMonPalette_Linoone
gMonPalette_Linoone:
  .incbin "build/graphics/pokemon/linoone/normal_palette.gbapal.lz"

  .globl gMonBackPic_Linoone
gMonBackPic_Linoone:
  .incbin "build/graphics/pokemon/linoone/back.4bpp.lz"

  .globl gMonShinyPalette_Linoone
gMonShinyPalette_Linoone:
  .incbin "build/graphics/pokemon/linoone/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce7250, 0x6a8

  .globl gMonPalette_Wurmple
gMonPalette_Wurmple:
  .incbin "build/graphics/pokemon/wurmple/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wurmple
gMonBackPic_Wurmple:
  .incbin "build/graphics/pokemon/wurmple/back.4bpp.lz"

  .globl gMonShinyPalette_Wurmple
gMonShinyPalette_Wurmple:
  .incbin "build/graphics/pokemon/wurmple/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce7b94, 0x6a0

  .globl gMonPalette_Silcoon
gMonPalette_Silcoon:
  .incbin "build/graphics/pokemon/silcoon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Silcoon
gMonBackPic_Silcoon:
  .incbin "build/graphics/pokemon/silcoon/back.4bpp.lz"

  .globl gMonShinyPalette_Silcoon
gMonShinyPalette_Silcoon:
  .incbin "build/graphics/pokemon/silcoon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce84a0, 0x778

  .globl gMonPalette_Beautifly
gMonPalette_Beautifly:
  .incbin "build/graphics/pokemon/beautifly/normal_palette.gbapal.lz"

  .globl gMonBackPic_Beautifly
gMonBackPic_Beautifly:
  .incbin "build/graphics/pokemon/beautifly/back.4bpp.lz"

  .globl gMonShinyPalette_Beautifly
gMonShinyPalette_Beautifly:
  .incbin "build/graphics/pokemon/beautifly/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce9018, 0x68c

  .globl gMonPalette_Cascoon
gMonPalette_Cascoon:
  .incbin "build/graphics/pokemon/cascoon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cascoon
gMonBackPic_Cascoon:
  .incbin "build/graphics/pokemon/cascoon/back.4bpp.lz"

  .globl gMonShinyPalette_Cascoon
gMonShinyPalette_Cascoon:
  .incbin "build/graphics/pokemon/cascoon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xce9904, 0x788

  .globl gMonPalette_Dustox
gMonPalette_Dustox:
  .incbin "build/graphics/pokemon/dustox/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dustox
gMonBackPic_Dustox:
  .incbin "build/graphics/pokemon/dustox/back.4bpp.lz"

  .globl gMonShinyPalette_Dustox
gMonShinyPalette_Dustox:
  .incbin "build/graphics/pokemon/dustox/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcea334, 0x680

  .globl gMonPalette_Lotad
gMonPalette_Lotad:
  .incbin "build/graphics/pokemon/lotad/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lotad
gMonBackPic_Lotad:
  .incbin "build/graphics/pokemon/lotad/back.4bpp.lz"

  .globl gMonShinyPalette_Lotad
gMonShinyPalette_Lotad:
  .incbin "build/graphics/pokemon/lotad/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xceacec, 0x738

  .globl gMonPalette_Lombre
gMonPalette_Lombre:
  .incbin "build/graphics/pokemon/lombre/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lombre
gMonBackPic_Lombre:
  .incbin "build/graphics/pokemon/lombre/back.4bpp.lz"

  .globl gMonShinyPalette_Lombre
gMonShinyPalette_Lombre:
  .incbin "build/graphics/pokemon/lombre/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xceb770, 0x904

  .globl gMonPalette_Ludicolo
gMonPalette_Ludicolo:
  .incbin "build/graphics/pokemon/ludicolo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ludicolo
gMonBackPic_Ludicolo:
  .incbin "build/graphics/pokemon/ludicolo/back.4bpp.lz"

  .globl gMonShinyPalette_Ludicolo
gMonShinyPalette_Ludicolo:
  .incbin "build/graphics/pokemon/ludicolo/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcec3c0, 0x6b4

  .globl gMonPalette_Seedot
gMonPalette_Seedot:
  .incbin "build/graphics/pokemon/seedot/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xceca9a, 0x2

  .globl gMonBackPic_Seedot
gMonBackPic_Seedot:
  .incbin "build/graphics/pokemon/seedot/back.4bpp.lz"

  .globl gMonShinyPalette_Seedot
gMonShinyPalette_Seedot:
  .incbin "build/graphics/pokemon/seedot/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcecda2, 0x2

  .incbin "baserom.gba", 0xcecda4, 0x70c

  .globl gMonPalette_Nuzleaf
gMonPalette_Nuzleaf:
  .incbin "build/graphics/pokemon/nuzleaf/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nuzleaf
gMonBackPic_Nuzleaf:
  .incbin "build/graphics/pokemon/nuzleaf/back.4bpp.lz"

  .globl gMonShinyPalette_Nuzleaf
gMonShinyPalette_Nuzleaf:
  .incbin "build/graphics/pokemon/nuzleaf/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xced7c8, 0x8dc

  .globl gMonPalette_Shiftry
gMonPalette_Shiftry:
  .incbin "build/graphics/pokemon/shiftry/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shiftry
gMonBackPic_Shiftry:
  .incbin "build/graphics/pokemon/shiftry/back.4bpp.lz"

  .globl gMonShinyPalette_Shiftry
gMonShinyPalette_Shiftry:
  .incbin "build/graphics/pokemon/shiftry/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcee3b8, 0x6c0

  .globl gMonPalette_Nincada
gMonPalette_Nincada:
  .incbin "build/graphics/pokemon/nincada/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nincada
gMonBackPic_Nincada:
  .incbin "build/graphics/pokemon/nincada/back.4bpp.lz"

  .globl gMonShinyPalette_Nincada
gMonShinyPalette_Nincada:
  .incbin "build/graphics/pokemon/nincada/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xceed80, 0x790

  .globl gMonPalette_Ninjask
gMonPalette_Ninjask:
  .incbin "build/graphics/pokemon/ninjask/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ninjask
gMonBackPic_Ninjask:
  .incbin "build/graphics/pokemon/ninjask/back.4bpp.lz"

  .globl gMonShinyPalette_Ninjask
gMonShinyPalette_Ninjask:
  .incbin "build/graphics/pokemon/ninjask/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcef92c, 0x740

  .globl gMonPalette_Shedinja
gMonPalette_Shedinja:
  .incbin "build/graphics/pokemon/shedinja/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcf0092, 0x2

  .globl gMonBackPic_Shedinja
gMonBackPic_Shedinja:
  .incbin "build/graphics/pokemon/shedinja/back.4bpp.lz"

  .globl gMonShinyPalette_Shedinja
gMonShinyPalette_Shedinja:
  .incbin "build/graphics/pokemon/shedinja/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf045c, 0x678

  .globl gMonPalette_Taillow
gMonPalette_Taillow:
  .incbin "build/graphics/pokemon/taillow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Taillow
gMonBackPic_Taillow:
  .incbin "build/graphics/pokemon/taillow/back.4bpp.lz"

  .globl gMonShinyPalette_Taillow
gMonShinyPalette_Taillow:
  .incbin "build/graphics/pokemon/taillow/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf0d44, 0x7e4

  .globl gMonPalette_Swellow
gMonPalette_Swellow:
  .incbin "build/graphics/pokemon/swellow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swellow
gMonBackPic_Swellow:
  .incbin "build/graphics/pokemon/swellow/back.4bpp.lz"

  .globl gMonShinyPalette_Swellow
gMonShinyPalette_Swellow:
  .incbin "build/graphics/pokemon/swellow/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf18b0, 0x688

  .globl gMonPalette_Shroomish
gMonPalette_Shroomish:
  .incbin "build/graphics/pokemon/shroomish/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shroomish
gMonBackPic_Shroomish:
  .incbin "build/graphics/pokemon/shroomish/back.4bpp.lz"

  .globl gMonShinyPalette_Shroomish
gMonShinyPalette_Shroomish:
  .incbin "build/graphics/pokemon/shroomish/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf2268, 0x808

  .globl gMonPalette_Breloom
gMonPalette_Breloom:
  .incbin "build/graphics/pokemon/breloom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Breloom
gMonBackPic_Breloom:
  .incbin "build/graphics/pokemon/breloom/back.4bpp.lz"

  .globl gMonShinyPalette_Breloom
gMonShinyPalette_Breloom:
  .incbin "build/graphics/pokemon/breloom/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf2ea0, 0x714

  .globl gMonPalette_Spinda
gMonPalette_Spinda:
  .incbin "build/graphics/pokemon/spinda/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spinda
gMonBackPic_Spinda:
  .incbin "build/graphics/pokemon/spinda/back.4bpp.lz"

  .globl gMonShinyPalette_Spinda
gMonShinyPalette_Spinda:
  .incbin "build/graphics/pokemon/spinda/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf3940, 0x65c

  .globl gMonPalette_Wingull
gMonPalette_Wingull:
  .incbin "build/graphics/pokemon/wingull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wingull
gMonBackPic_Wingull:
  .incbin "build/graphics/pokemon/wingull/back.4bpp.lz"

  .globl gMonShinyPalette_Wingull
gMonShinyPalette_Wingull:
  .incbin "build/graphics/pokemon/wingull/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf433c, 0x7b8

  .globl gMonPalette_Pelipper
gMonPalette_Pelipper:
  .incbin "build/graphics/pokemon/pelipper/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pelipper
gMonBackPic_Pelipper:
  .incbin "build/graphics/pokemon/pelipper/back.4bpp.lz"

  .globl gMonShinyPalette_Pelipper
gMonShinyPalette_Pelipper:
  .incbin "build/graphics/pokemon/pelipper/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf4ec4, 0x62c

  .globl gMonPalette_Surskit
gMonPalette_Surskit:
  .incbin "build/graphics/pokemon/surskit/normal_palette.gbapal.lz"

  .globl gMonBackPic_Surskit
gMonBackPic_Surskit:
  .incbin "build/graphics/pokemon/surskit/back.4bpp.lz"

  .globl gMonShinyPalette_Surskit
gMonShinyPalette_Surskit:
  .incbin "build/graphics/pokemon/surskit/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf5778, 0x7bc

  .globl gMonPalette_Masquerain
gMonPalette_Masquerain:
  .incbin "build/graphics/pokemon/masquerain/normal_palette.gbapal.lz"

  .globl gMonBackPic_Masquerain
gMonBackPic_Masquerain:
  .incbin "build/graphics/pokemon/masquerain/back.4bpp.lz"

  .globl gMonShinyPalette_Masquerain
gMonShinyPalette_Masquerain:
  .incbin "build/graphics/pokemon/masquerain/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf62dc, 0x700

  .globl gMonPalette_Wailmer
gMonPalette_Wailmer:
  .incbin "build/graphics/pokemon/wailmer/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wailmer
gMonBackPic_Wailmer:
  .incbin "build/graphics/pokemon/wailmer/back.4bpp.lz"

  .globl gMonShinyPalette_Wailmer
gMonShinyPalette_Wailmer:
  .incbin "build/graphics/pokemon/wailmer/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf6c10, 0x7e4

  .globl gMonPalette_Wailord
gMonPalette_Wailord:
  .incbin "build/graphics/pokemon/wailord/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wailord
gMonBackPic_Wailord:
  .incbin "build/graphics/pokemon/wailord/back.4bpp.lz"

  .globl gMonShinyPalette_Wailord
gMonShinyPalette_Wailord:
  .incbin "build/graphics/pokemon/wailord/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf765c, 0x720

  .globl gMonPalette_Skitty
gMonPalette_Skitty:
  .incbin "build/graphics/pokemon/skitty/normal_palette.gbapal.lz"

  .globl gMonBackPic_Skitty
gMonBackPic_Skitty:
  .incbin "build/graphics/pokemon/skitty/back.4bpp.lz"

  .globl gMonShinyPalette_Skitty
gMonShinyPalette_Skitty:
  .incbin "build/graphics/pokemon/skitty/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf8114, 0x7ac

  .globl gMonPalette_Delcatty
gMonPalette_Delcatty:
  .incbin "build/graphics/pokemon/delcatty/normal_palette.gbapal.lz"

  .globl gMonBackPic_Delcatty
gMonBackPic_Delcatty:
  .incbin "build/graphics/pokemon/delcatty/back.4bpp.lz"

  .globl gMonShinyPalette_Delcatty
gMonShinyPalette_Delcatty:
  .incbin "build/graphics/pokemon/delcatty/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf8cac, 0x7a0

  .globl gMonPalette_Kecleon
gMonPalette_Kecleon:
  .incbin "build/graphics/pokemon/kecleon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kecleon
gMonBackPic_Kecleon:
  .incbin "build/graphics/pokemon/kecleon/back.4bpp.lz"

  .globl gMonShinyPalette_Kecleon
gMonShinyPalette_Kecleon:
  .incbin "build/graphics/pokemon/kecleon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcf9874, 0x644

  .globl gMonPalette_Baltoy
gMonPalette_Baltoy:
  .incbin "build/graphics/pokemon/baltoy/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcf9ed7, 0x1

  .globl gMonBackPic_Baltoy
gMonBackPic_Baltoy:
  .incbin "build/graphics/pokemon/baltoy/back.4bpp.lz"

  .globl gMonShinyPalette_Baltoy
gMonShinyPalette_Baltoy:
  .incbin "build/graphics/pokemon/baltoy/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcfa19f, 0x7d9

  .globl gMonPalette_Claydol
gMonPalette_Claydol:
  .incbin "build/graphics/pokemon/claydol/normal_palette.gbapal.lz"

  .globl gMonBackPic_Claydol
gMonBackPic_Claydol:
  .incbin "build/graphics/pokemon/claydol/back.4bpp.lz"

  .globl gMonShinyPalette_Claydol
gMonShinyPalette_Claydol:
  .incbin "build/graphics/pokemon/claydol/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcfad9c, 0x6ec

  .globl gMonPalette_Nosepass
gMonPalette_Nosepass:
  .incbin "build/graphics/pokemon/nosepass/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nosepass
gMonBackPic_Nosepass:
  .incbin "build/graphics/pokemon/nosepass/back.4bpp.lz"

  .globl gMonShinyPalette_Nosepass
gMonShinyPalette_Nosepass:
  .incbin "build/graphics/pokemon/nosepass/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcfb778, 0x8cc

  .globl gMonPalette_Torkoal
gMonPalette_Torkoal:
  .incbin "build/graphics/pokemon/torkoal/normal_palette.gbapal.lz"

  .globl gMonBackPic_Torkoal
gMonBackPic_Torkoal:
  .incbin "build/graphics/pokemon/torkoal/back.4bpp.lz"

  .globl gMonShinyPalette_Torkoal
gMonShinyPalette_Torkoal:
  .incbin "build/graphics/pokemon/torkoal/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcfc35c, 0x6f4

  .globl gMonPalette_Sableye
gMonPalette_Sableye:
  .incbin "build/graphics/pokemon/sableye/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sableye
gMonBackPic_Sableye:
  .incbin "build/graphics/pokemon/sableye/back.4bpp.lz"

  .globl gMonShinyPalette_Sableye
gMonShinyPalette_Sableye:
  .incbin "build/graphics/pokemon/sableye/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcfcdc8, 0x6b0

  .globl gMonPalette_Barboach
gMonPalette_Barboach:
  .incbin "build/graphics/pokemon/barboach/normal_palette.gbapal.lz"

  .globl gMonBackPic_Barboach
gMonBackPic_Barboach:
  .incbin "build/graphics/pokemon/barboach/back.4bpp.lz"

  .globl gMonShinyPalette_Barboach
gMonShinyPalette_Barboach:
  .incbin "build/graphics/pokemon/barboach/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcfd758, 0x798

  .globl gMonPalette_Whiscash
gMonPalette_Whiscash:
  .incbin "build/graphics/pokemon/whiscash/normal_palette.gbapal.lz"

  .globl gMonBackPic_Whiscash
gMonBackPic_Whiscash:
  .incbin "build/graphics/pokemon/whiscash/back.4bpp.lz"

  .globl gMonShinyPalette_Whiscash
gMonShinyPalette_Whiscash:
  .incbin "build/graphics/pokemon/whiscash/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcfe28c, 0x5e0

  .globl gMonPalette_Luvdisc
gMonPalette_Luvdisc:
  .incbin "build/graphics/pokemon/luvdisc/normal_palette.gbapal.lz"

  .globl gMonBackPic_Luvdisc
gMonBackPic_Luvdisc:
  .incbin "build/graphics/pokemon/luvdisc/back.4bpp.lz"

  .globl gMonShinyPalette_Luvdisc
gMonShinyPalette_Luvdisc:
  .incbin "build/graphics/pokemon/luvdisc/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xcfea88, 0x77c

  .globl gMonPalette_Corphish
gMonPalette_Corphish:
  .incbin "build/graphics/pokemon/corphish/normal_palette.gbapal.lz"

  .globl gMonBackPic_Corphish
gMonBackPic_Corphish:
  .incbin "build/graphics/pokemon/corphish/back.4bpp.lz"

  .globl gMonShinyPalette_Corphish
gMonShinyPalette_Corphish:
  .incbin "build/graphics/pokemon/corphish/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xcff570, 0x8b0

  .globl gMonPalette_Crawdaunt
gMonPalette_Crawdaunt:
  .incbin "build/graphics/pokemon/crawdaunt/normal_palette.gbapal.lz"

  .globl gMonBackPic_Crawdaunt
gMonBackPic_Crawdaunt:
  .incbin "build/graphics/pokemon/crawdaunt/back.4bpp.lz"

  .globl gMonShinyPalette_Crawdaunt
gMonShinyPalette_Crawdaunt:
  .incbin "build/graphics/pokemon/crawdaunt/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd00254, 0x6ac

  .globl gMonPalette_Feebas
gMonPalette_Feebas:
  .incbin "build/graphics/pokemon/feebas/normal_palette.gbapal.lz"

  .globl gMonBackPic_Feebas
gMonBackPic_Feebas:
  .incbin "build/graphics/pokemon/feebas/back.4bpp.lz"

  .globl gMonShinyPalette_Feebas
gMonShinyPalette_Feebas:
  .incbin "build/graphics/pokemon/feebas/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd00c88, 0x8b0

  .globl gMonPalette_Milotic
gMonPalette_Milotic:
  .incbin "build/graphics/pokemon/milotic/normal_palette.gbapal.lz"

  .globl gMonBackPic_Milotic
gMonBackPic_Milotic:
  .incbin "build/graphics/pokemon/milotic/back.4bpp.lz"

  .globl gMonShinyPalette_Milotic
gMonShinyPalette_Milotic:
  .incbin "build/graphics/pokemon/milotic/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd0187c, 0x74c

  .globl gMonPalette_Carvanha
gMonPalette_Carvanha:
  .incbin "build/graphics/pokemon/carvanha/normal_palette.gbapal.lz"

  .globl gMonBackPic_Carvanha
gMonBackPic_Carvanha:
  .incbin "build/graphics/pokemon/carvanha/back.4bpp.lz"

  .globl gMonShinyPalette_Carvanha
gMonShinyPalette_Carvanha:
  .incbin "build/graphics/pokemon/carvanha/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd02328, 0x7b0

  .globl gMonPalette_Sharpedo
gMonPalette_Sharpedo:
  .incbin "build/graphics/pokemon/sharpedo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sharpedo
gMonBackPic_Sharpedo:
  .incbin "build/graphics/pokemon/sharpedo/back.4bpp.lz"

  .globl gMonShinyPalette_Sharpedo
gMonShinyPalette_Sharpedo:
  .incbin "build/graphics/pokemon/sharpedo/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd02e80, 0x63c

  .globl gMonPalette_Trapinch
gMonPalette_Trapinch:
  .incbin "build/graphics/pokemon/trapinch/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd034e2, 0x2
 
  .globl gMonBackPic_Trapinch
gMonBackPic_Trapinch:
  .incbin "build/graphics/pokemon/trapinch/back.4bpp.lz"

  .globl gMonShinyPalette_Trapinch
gMonShinyPalette_Trapinch:
  .incbin "build/graphics/pokemon/trapinch/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd0372a, 0x2

  .incbin "baserom.gba", 0xd0372c, 0x790

  .globl gMonPalette_Vibrava
gMonPalette_Vibrava:
  .incbin "build/graphics/pokemon/vibrava/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vibrava
gMonBackPic_Vibrava:
  .incbin "build/graphics/pokemon/vibrava/back.4bpp.lz"

  .globl gMonShinyPalette_Vibrava
gMonShinyPalette_Vibrava:
  .incbin "build/graphics/pokemon/vibrava/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd04184, 0x910

  .globl gMonPalette_Flygon
gMonPalette_Flygon:
  .incbin "build/graphics/pokemon/flygon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Flygon
gMonBackPic_Flygon:
  .incbin "build/graphics/pokemon/flygon/back.4bpp.lz"

  .globl gMonShinyPalette_Flygon
gMonShinyPalette_Flygon:
  .incbin "build/graphics/pokemon/flygon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd04f20, 0x738

  .globl gMonPalette_Makuhita
gMonPalette_Makuhita:
  .incbin "build/graphics/pokemon/makuhita/normal_palette.gbapal.lz"

  .globl gMonBackPic_Makuhita
gMonBackPic_Makuhita:
  .incbin "build/graphics/pokemon/makuhita/back.4bpp.lz"

  .globl gMonShinyPalette_Makuhita
gMonShinyPalette_Makuhita:
  .incbin "build/graphics/pokemon/makuhita/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd05994, 0x8d0

  .globl gMonPalette_Hariyama
gMonPalette_Hariyama:
  .incbin "build/graphics/pokemon/hariyama/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hariyama
gMonBackPic_Hariyama:
  .incbin "build/graphics/pokemon/hariyama/back.4bpp.lz"

  .globl gMonShinyPalette_Hariyama
gMonShinyPalette_Hariyama:
  .incbin "build/graphics/pokemon/hariyama/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd06694, 0x6b0

  .globl gMonPalette_Electrike
gMonPalette_Electrike:
  .incbin "build/graphics/pokemon/electrike/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd06d6a, 0x2

  .globl gMonBackPic_Electrike
gMonBackPic_Electrike:
  .incbin "build/graphics/pokemon/electrike/back.4bpp.lz"

  .globl gMonShinyPalette_Electrike
gMonShinyPalette_Electrike:
  .incbin "build/graphics/pokemon/electrike/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd0701e, 0x2

  .incbin "baserom.gba", 0xd07020, 0x750

  .globl gMonPalette_Manectric
gMonPalette_Manectric:
  .incbin "build/graphics/pokemon/manectric/normal_palette.gbapal.lz"

  .globl gMonBackPic_Manectric
gMonBackPic_Manectric:
  .incbin "build/graphics/pokemon/manectric/back.4bpp.lz"

  .globl gMonShinyPalette_Manectric
gMonShinyPalette_Manectric:
  .incbin "build/graphics/pokemon/manectric/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd079ec, 0x6f0

  .globl gMonPalette_Numel
gMonPalette_Numel:
  .incbin "build/graphics/pokemon/numel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Numel
gMonBackPic_Numel:
  .incbin "build/graphics/pokemon/numel/back.4bpp.lz"

  .globl gMonShinyPalette_Numel
gMonShinyPalette_Numel:
  .incbin "build/graphics/pokemon/numel/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd083e8, 0x838

  .globl gMonPalette_Camerupt
gMonPalette_Camerupt:
  .incbin "build/graphics/pokemon/camerupt/normal_palette.gbapal.lz"

  .globl gMonBackPic_Camerupt
gMonBackPic_Camerupt:
  .incbin "build/graphics/pokemon/camerupt/back.4bpp.lz"

  .globl gMonShinyPalette_Camerupt
gMonShinyPalette_Camerupt:
  .incbin "build/graphics/pokemon/camerupt/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd08f34, 0x694

  .globl gMonPalette_Spheal
gMonPalette_Spheal:
  .incbin "build/graphics/pokemon/spheal/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd095ee, 0x2

  .globl gMonBackPic_Spheal
gMonBackPic_Spheal:
  .incbin "build/graphics/pokemon/spheal/back.4bpp.lz"

  .globl gMonShinyPalette_Spheal
gMonShinyPalette_Spheal:
  .incbin "build/graphics/pokemon/spheal/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd09812, 0x2

  .incbin "baserom.gba", 0xd09814, 0x7a0

  .globl gMonPalette_Sealeo
gMonPalette_Sealeo:
  .incbin "build/graphics/pokemon/sealeo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sealeo
gMonBackPic_Sealeo:
  .incbin "build/graphics/pokemon/sealeo/back.4bpp.lz"

  .globl gMonShinyPalette_Sealeo
gMonShinyPalette_Sealeo:
  .incbin "build/graphics/pokemon/sealeo/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd0a280, 0xb94

  .globl gMonPalette_Walrein
gMonPalette_Walrein:
  .incbin "build/graphics/pokemon/walrein/normal_palette.gbapal.lz"

  .globl gMonBackPic_Walrein
gMonBackPic_Walrein:
  .incbin "build/graphics/pokemon/walrein/back.4bpp.lz"

  .globl gMonShinyPalette_Walrein
gMonShinyPalette_Walrein:
  .incbin "build/graphics/pokemon/walrein/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd0b1ec, 0x730

  .globl gMonPalette_Cacnea
gMonPalette_Cacnea:
  .incbin "build/graphics/pokemon/cacnea/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cacnea
gMonBackPic_Cacnea:
  .incbin "build/graphics/pokemon/cacnea/back.4bpp.lz"

  .globl gMonShinyPalette_Cacnea
gMonShinyPalette_Cacnea:
  .incbin "build/graphics/pokemon/cacnea/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd0bccc, 0x858

  .globl gMonPalette_Cacturne
gMonPalette_Cacturne:
  .incbin "build/graphics/pokemon/cacturne/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cacturne
gMonBackPic_Cacturne:
  .incbin "build/graphics/pokemon/cacturne/back.4bpp.lz"

  .globl gMonShinyPalette_Cacturne
gMonShinyPalette_Cacturne:
  .incbin "build/graphics/pokemon/cacturne/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd0c874, 0x6e4

  .globl gMonPalette_Snorunt
gMonPalette_Snorunt:
  .incbin "build/graphics/pokemon/snorunt/normal_palette.gbapal.lz"

  .globl gMonBackPic_Snorunt
gMonBackPic_Snorunt:
  .incbin "build/graphics/pokemon/snorunt/back.4bpp.lz"

  .globl gMonShinyPalette_Snorunt
gMonShinyPalette_Snorunt:
  .incbin "build/graphics/pokemon/snorunt/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd0d28c, 0x7e8

  .globl gMonPalette_Glalie
gMonPalette_Glalie:
  .incbin "build/graphics/pokemon/glalie/normal_palette.gbapal.lz"

  .globl gMonBackPic_Glalie
gMonBackPic_Glalie:
  .incbin "build/graphics/pokemon/glalie/back.4bpp.lz"

  .globl gMonShinyPalette_Glalie
gMonShinyPalette_Glalie:
  .incbin "build/graphics/pokemon/glalie/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd0de74, 0x748

  .globl gMonPalette_Lunatone
gMonPalette_Lunatone:
  .incbin "build/graphics/pokemon/lunatone/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lunatone
gMonBackPic_Lunatone:
  .incbin "build/graphics/pokemon/lunatone/back.4bpp.lz"

  .globl gMonShinyPalette_Lunatone
gMonShinyPalette_Lunatone:
  .incbin "build/graphics/pokemon/lunatone/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd0e964, 0x86c

  .globl gMonPalette_Solrock
gMonPalette_Solrock:
  .incbin "build/graphics/pokemon/solrock/normal_palette.gbapal.lz"

  .globl gMonBackPic_Solrock
gMonBackPic_Solrock:
  .incbin "build/graphics/pokemon/solrock/back.4bpp.lz"

  .globl gMonShinyPalette_Solrock
gMonShinyPalette_Solrock:
  .incbin "build/graphics/pokemon/solrock/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd0f60c, 0x6e8

  .globl gMonPalette_Azurill
gMonPalette_Azurill:
  .incbin "build/graphics/pokemon/azurill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Azurill
gMonBackPic_Azurill:
  .incbin "build/graphics/pokemon/azurill/back.4bpp.lz"

  .globl gMonShinyPalette_Azurill
gMonShinyPalette_Azurill:
  .incbin "build/graphics/pokemon/azurill/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1005c, 0x68c

  .globl gMonPalette_Spoink
gMonPalette_Spoink:
  .incbin "build/graphics/pokemon/spoink/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spoink
gMonBackPic_Spoink:
  .incbin "build/graphics/pokemon/spoink/back.4bpp.lz"

  .globl gMonShinyPalette_Spoink
gMonShinyPalette_Spoink:
  .incbin "build/graphics/pokemon/spoink/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd10978, 0x7dc

  .globl gMonPalette_Grumpig
gMonPalette_Grumpig:
  .incbin "build/graphics/pokemon/grumpig/normal_palette.gbapal.lz"

  .globl gMonBackPic_Grumpig
gMonBackPic_Grumpig:
  .incbin "build/graphics/pokemon/grumpig/back.4bpp.lz"

  .globl gMonShinyPalette_Grumpig
gMonShinyPalette_Grumpig:
  .incbin "build/graphics/pokemon/grumpig/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd11504, 0x6ac

  .globl gMonPalette_Plusle
gMonPalette_Plusle:
  .incbin "build/graphics/pokemon/plusle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Plusle
gMonBackPic_Plusle:
  .incbin "build/graphics/pokemon/plusle/back.4bpp.lz"

  .globl gMonShinyPalette_Plusle
gMonShinyPalette_Plusle:
  .incbin "build/graphics/pokemon/plusle/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd11eb8, 0x688

  .globl gMonPalette_Minun
gMonPalette_Minun:
  .incbin "build/graphics/pokemon/minun/normal_palette.gbapal.lz"

  .globl gMonBackPic_Minun
gMonBackPic_Minun:
  .incbin "build/graphics/pokemon/minun/back.4bpp.lz"

  .globl gMonShinyPalette_Minun
gMonShinyPalette_Minun:
  .incbin "build/graphics/pokemon/minun/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd12858, 0x7dc

  .globl gMonPalette_Mawile
gMonPalette_Mawile:
  .incbin "build/graphics/pokemon/mawile/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mawile
gMonBackPic_Mawile:
  .incbin "build/graphics/pokemon/mawile/back.4bpp.lz"

  .globl gMonShinyPalette_Mawile
gMonShinyPalette_Mawile:
  .incbin "build/graphics/pokemon/mawile/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd13484, 0x6d8

  .globl gMonPalette_Meditite
gMonPalette_Meditite:
  .incbin "build/graphics/pokemon/meditite/normal_palette.gbapal.lz"

  .globl gMonBackPic_Meditite
gMonBackPic_Meditite:
  .incbin "build/graphics/pokemon/meditite/back.4bpp.lz"

  .globl gMonShinyPalette_Meditite
gMonShinyPalette_Meditite:
  .incbin "build/graphics/pokemon/meditite/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd13e70, 0x750

  .globl gMonPalette_Medicham
gMonPalette_Medicham:
  .incbin "build/graphics/pokemon/medicham/normal_palette.gbapal.lz"

  .globl gMonBackPic_Medicham
gMonBackPic_Medicham:
  .incbin "build/graphics/pokemon/medicham/back.4bpp.lz"

  .globl gMonShinyPalette_Medicham
gMonShinyPalette_Medicham:
  .incbin "build/graphics/pokemon/medicham/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd14948, 0x9d0

  .globl gMonPalette_Swablu
gMonPalette_Swablu:
  .incbin "build/graphics/pokemon/swablu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swablu
gMonBackPic_Swablu:
  .incbin "build/graphics/pokemon/swablu/back.4bpp.lz"

  .globl gMonShinyPalette_Swablu
gMonShinyPalette_Swablu:
  .incbin "build/graphics/pokemon/swablu/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd15720, 0x7fc

  .globl gMonPalette_Altaria
gMonPalette_Altaria:
  .incbin "build/graphics/pokemon/altaria/normal_palette.gbapal.lz"

  .globl gMonBackPic_Altaria
gMonBackPic_Altaria:
  .incbin "build/graphics/pokemon/altaria/back.4bpp.lz"

  .globl gMonShinyPalette_Altaria
gMonShinyPalette_Altaria:
  .incbin "build/graphics/pokemon/altaria/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd162e4, 0x6b8

  .globl gMonPalette_Wynaut
gMonPalette_Wynaut:
  .incbin "build/graphics/pokemon/wynaut/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wynaut
gMonBackPic_Wynaut:
  .incbin "build/graphics/pokemon/wynaut/back.4bpp.lz"

  .globl gMonShinyPalette_Wynaut
gMonShinyPalette_Wynaut:
  .incbin "build/graphics/pokemon/wynaut/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd16c7c, 0x710

  .globl gMonPalette_Duskull
gMonPalette_Duskull:
  .incbin "build/graphics/pokemon/duskull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Duskull
gMonBackPic_Duskull:
  .incbin "build/graphics/pokemon/duskull/back.4bpp.lz"

  .globl gMonShinyPalette_Duskull
gMonShinyPalette_Duskull:
  .incbin "build/graphics/pokemon/duskull/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1768c, 0x7c0

  .globl gMonPalette_Dusclops
gMonPalette_Dusclops:
  .incbin "build/graphics/pokemon/dusclops/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd17e72, 0x2

  .globl gMonBackPic_Dusclops
gMonBackPic_Dusclops:
  .incbin "build/graphics/pokemon/dusclops/back.4bpp.lz"

  .globl gMonShinyPalette_Dusclops
gMonShinyPalette_Dusclops:
  .incbin "build/graphics/pokemon/dusclops/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd18186, 0x2

  .incbin "baserom.gba", 0xd18188, 0x78c

  .globl gMonPalette_Roselia
gMonPalette_Roselia:
  .incbin "build/graphics/pokemon/roselia/normal_palette.gbapal.lz"

  .globl gMonBackPic_Roselia
gMonBackPic_Roselia:
  .incbin "build/graphics/pokemon/roselia/back.4bpp.lz"

  .globl gMonShinyPalette_Roselia
gMonShinyPalette_Roselia:
  .incbin "build/graphics/pokemon/roselia/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd18d2c, 0x708

  .globl gMonPalette_Slakoth
gMonPalette_Slakoth:
  .incbin "build/graphics/pokemon/slakoth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slakoth
gMonBackPic_Slakoth:
  .incbin "build/graphics/pokemon/slakoth/back.4bpp.lz"

  .globl gMonShinyPalette_Slakoth
gMonShinyPalette_Slakoth:
  .incbin "build/graphics/pokemon/slakoth/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1976c, 0x81c

  .globl gMonPalette_Vigoroth
gMonPalette_Vigoroth:
  .incbin "build/graphics/pokemon/vigoroth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vigoroth
gMonBackPic_Vigoroth:
  .incbin "build/graphics/pokemon/vigoroth/back.4bpp.lz"

  .globl gMonShinyPalette_Vigoroth
gMonShinyPalette_Vigoroth:
  .incbin "build/graphics/pokemon/vigoroth/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1a2a0, 0x8f4

  .globl gMonPalette_Slaking
gMonPalette_Slaking:
  .incbin "build/graphics/pokemon/slaking/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slaking
gMonBackPic_Slaking:
  .incbin "build/graphics/pokemon/slaking/back.4bpp.lz"

  .globl gMonShinyPalette_Slaking
gMonShinyPalette_Slaking:
  .incbin "build/graphics/pokemon/slaking/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1afa8, 0x638

  .globl gMonPalette_Gulpin
gMonPalette_Gulpin:
  .incbin "build/graphics/pokemon/gulpin/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gulpin
gMonBackPic_Gulpin:
  .incbin "build/graphics/pokemon/gulpin/back.4bpp.lz"

  .globl gMonShinyPalette_Gulpin
gMonShinyPalette_Gulpin:
  .incbin "build/graphics/pokemon/gulpin/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1b8b4, 0x764

  .globl gMonPalette_Swalot
gMonPalette_Swalot:
  .incbin "build/graphics/pokemon/swalot/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swalot
gMonBackPic_Swalot:
  .incbin "build/graphics/pokemon/swalot/back.4bpp.lz"

  .globl gMonShinyPalette_Swalot
gMonShinyPalette_Swalot:
  .incbin "build/graphics/pokemon/swalot/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1c3b0, 0x998

  .globl gMonPalette_Tropius
gMonPalette_Tropius:
  .incbin "build/graphics/pokemon/tropius/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tropius
gMonBackPic_Tropius:
  .incbin "build/graphics/pokemon/tropius/back.4bpp.lz"

  .globl gMonShinyPalette_Tropius
gMonShinyPalette_Tropius:
  .incbin "build/graphics/pokemon/tropius/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1d0bc, 0x6b4

  .globl gMonPalette_Whismur
gMonPalette_Whismur:
  .incbin "build/graphics/pokemon/whismur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Whismur
gMonBackPic_Whismur:
  .incbin "build/graphics/pokemon/whismur/back.4bpp.lz"

  .globl gMonShinyPalette_Whismur
gMonShinyPalette_Whismur:
  .incbin "build/graphics/pokemon/whismur/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1da30, 0x898

  .globl gMonPalette_Loudred
gMonPalette_Loudred:
  .incbin "build/graphics/pokemon/loudred/normal_palette.gbapal.lz"

  .globl gMonBackPic_Loudred
gMonBackPic_Loudred:
  .incbin "build/graphics/pokemon/loudred/back.4bpp.lz"

  .globl gMonShinyPalette_Loudred
gMonShinyPalette_Loudred:
  .incbin "build/graphics/pokemon/loudred/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1e688, 0x988

  .globl gMonPalette_Exploud
gMonPalette_Exploud:
  .incbin "build/graphics/pokemon/exploud/normal_palette.gbapal.lz"

  .globl gMonBackPic_Exploud
gMonBackPic_Exploud:
  .incbin "build/graphics/pokemon/exploud/back.4bpp.lz"

  .globl gMonShinyPalette_Exploud
gMonShinyPalette_Exploud:
  .incbin "build/graphics/pokemon/exploud/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1f46c, 0x6f8

  .globl gMonPalette_Clamperl
gMonPalette_Clamperl:
  .incbin "build/graphics/pokemon/clamperl/normal_palette.gbapal.lz"

  .globl gMonBackPic_Clamperl
gMonBackPic_Clamperl:
  .incbin "build/graphics/pokemon/clamperl/back.4bpp.lz"

  .globl gMonShinyPalette_Clamperl
gMonShinyPalette_Clamperl:
  .incbin "build/graphics/pokemon/clamperl/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd1fe48, 0x7ec

  .globl gMonPalette_Huntail
gMonPalette_Huntail:
  .incbin "build/graphics/pokemon/huntail/normal_palette.gbapal.lz"

  .globl gMonBackPic_Huntail
gMonBackPic_Huntail:
  .incbin "build/graphics/pokemon/huntail/back.4bpp.lz"

  .globl gMonShinyPalette_Huntail
gMonShinyPalette_Huntail:
  .incbin "build/graphics/pokemon/huntail/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd209d8, 0x730

  .globl gMonPalette_Gorebyss
gMonPalette_Gorebyss:
  .incbin "build/graphics/pokemon/gorebyss/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gorebyss
gMonBackPic_Gorebyss:
  .incbin "build/graphics/pokemon/gorebyss/back.4bpp.lz"

  .globl gMonShinyPalette_Gorebyss
gMonShinyPalette_Gorebyss:
  .incbin "build/graphics/pokemon/gorebyss/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd21440, 0x850

  .globl gMonPalette_Absol
gMonPalette_Absol:
  .incbin "build/graphics/pokemon/absol/normal_palette.gbapal.lz"

  .globl gMonBackPic_Absol
gMonBackPic_Absol:
  .incbin "build/graphics/pokemon/absol/back.4bpp.lz"

  .globl gMonShinyPalette_Absol
gMonShinyPalette_Absol:
  .incbin "build/graphics/pokemon/absol/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd22040, 0x658

  .globl gMonPalette_Shuppet
gMonPalette_Shuppet:
  .incbin "build/graphics/pokemon/shuppet/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd226be, 0x2
  .globl gMonBackPic_Shuppet
gMonBackPic_Shuppet:
  .incbin "build/graphics/pokemon/shuppet/back.4bpp.lz"

  .globl gMonShinyPalette_Shuppet
gMonShinyPalette_Shuppet:
  .incbin "build/graphics/pokemon/shuppet/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd2297e, 0x2

  .incbin "baserom.gba", 0xd22980, 0x6d4

  .globl gMonPalette_Banette
gMonPalette_Banette:
  .incbin "build/graphics/pokemon/banette/normal_palette.gbapal.lz"

  .globl gMonBackPic_Banette
gMonBackPic_Banette:
  .incbin "build/graphics/pokemon/banette/back.4bpp.lz"

  .globl gMonShinyPalette_Banette
gMonShinyPalette_Banette:
  .incbin "build/graphics/pokemon/banette/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd23320, 0x840

  .globl gMonPalette_Seviper
gMonPalette_Seviper:
  .incbin "build/graphics/pokemon/seviper/normal_palette.gbapal.lz"

  .globl gMonBackPic_Seviper
gMonBackPic_Seviper:
  .incbin "build/graphics/pokemon/seviper/back.4bpp.lz"

  .globl gMonShinyPalette_Seviper
gMonShinyPalette_Seviper:
  .incbin "build/graphics/pokemon/seviper/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd2403c, 0x7ec

  .globl gMonPalette_Zangoose
gMonPalette_Zangoose:
  .incbin "build/graphics/pokemon/zangoose/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zangoose
gMonBackPic_Zangoose:
  .incbin "build/graphics/pokemon/zangoose/back.4bpp.lz"

  .globl gMonShinyPalette_Zangoose
gMonShinyPalette_Zangoose:
  .incbin "build/graphics/pokemon/zangoose/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd24bec, 0x7b4

  .globl gMonPalette_Relicanth
gMonPalette_Relicanth:
  .incbin "build/graphics/pokemon/relicanth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Relicanth
gMonBackPic_Relicanth:
  .incbin "build/graphics/pokemon/relicanth/back.4bpp.lz"

  .globl gMonShinyPalette_Relicanth
gMonShinyPalette_Relicanth:
  .incbin "build/graphics/pokemon/relicanth/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd25748, 0x608

  .globl gMonPalette_Aron
gMonPalette_Aron:
  .incbin "build/graphics/pokemon/aron/normal_palette.gbapal.lz"

  .globl gMonBackPic_Aron
gMonBackPic_Aron:
  .incbin "build/graphics/pokemon/aron/back.4bpp.lz"

  .globl gMonShinyPalette_Aron
gMonShinyPalette_Aron:
  .incbin "build/graphics/pokemon/aron/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd25fc8, 0x7ec

  .globl gMonPalette_Lairon
gMonPalette_Lairon:
  .incbin "build/graphics/pokemon/lairon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lairon
gMonBackPic_Lairon:
  .incbin "build/graphics/pokemon/lairon/back.4bpp.lz"

  .globl gMonShinyPalette_Lairon
gMonShinyPalette_Lairon:
  .incbin "build/graphics/pokemon/lairon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd26af0, 0x99c

  .globl gMonPalette_Aggron
gMonPalette_Aggron:
  .incbin "build/graphics/pokemon/aggron/normal_palette.gbapal.lz"

  .globl gMonBackPic_Aggron
gMonBackPic_Aggron:
  .incbin "build/graphics/pokemon/aggron/back.4bpp.lz"

  .globl gMonShinyPalette_Aggron
gMonShinyPalette_Aggron:
  .incbin "build/graphics/pokemon/aggron/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd27904, 0xea8

  .globl gMonPalette_CastformNormal
gMonPalette_CastformNormal:
  .incbin "build/graphics/pokemon/castform_normal/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd28829, 0x3

  .globl gMonBackPic_CastformNormal
gMonBackPic_CastformNormal:
  .incbin "build/graphics/pokemon/castform_normal/back.4bpp.lz"

  .globl gMonShinyPalette_CastformNormal
gMonShinyPalette_CastformNormal:
  .incbin "build/graphics/pokemon/castform_normal/shiny_palette.gbapal.lz"
 
  .incbin "baserom.gba", 0xd29264, 0x7b0

  .globl gMonPalette_Volbeat
gMonPalette_Volbeat:
  .incbin "build/graphics/pokemon/volbeat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Volbeat
gMonBackPic_Volbeat:
  .incbin "build/graphics/pokemon/volbeat/back.4bpp.lz"

  .globl gMonShinyPalette_Volbeat
gMonShinyPalette_Volbeat:
  .incbin "build/graphics/pokemon/volbeat/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd29dc4, 0x794

  .globl gMonPalette_Illumise
gMonPalette_Illumise:
  .incbin "build/graphics/pokemon/illumise/normal_palette.gbapal.lz"

  .globl gMonBackPic_Illumise
gMonBackPic_Illumise:
  .incbin "build/graphics/pokemon/illumise/back.4bpp.lz"

  .globl gMonShinyPalette_Illumise
gMonShinyPalette_Illumise:
  .incbin "build/graphics/pokemon/illumise/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd2a8c4, 0x764

  .globl gMonPalette_Lileep
gMonPalette_Lileep:
  .incbin "build/graphics/pokemon/lileep/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lileep
gMonBackPic_Lileep:
  .incbin "build/graphics/pokemon/lileep/back.4bpp.lz"

  .globl gMonShinyPalette_Lileep
gMonShinyPalette_Lileep:
  .incbin "build/graphics/pokemon/lileep/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd2b3bc, 0x83c

  .globl gMonPalette_Cradily
gMonPalette_Cradily:
  .incbin "build/graphics/pokemon/cradily/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cradily
gMonBackPic_Cradily:
  .incbin "build/graphics/pokemon/cradily/back.4bpp.lz"

  .globl gMonShinyPalette_Cradily
gMonShinyPalette_Cradily:
  .incbin "build/graphics/pokemon/cradily/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd2c044, 0x744

  .globl gMonPalette_Anorith
gMonPalette_Anorith:
  .incbin "build/graphics/pokemon/anorith/normal_palette.gbapal.lz"

  .globl gMonBackPic_Anorith
gMonBackPic_Anorith:
  .incbin "build/graphics/pokemon/anorith/back.4bpp.lz"

  .globl gMonShinyPalette_Anorith
gMonShinyPalette_Anorith:
  .incbin "build/graphics/pokemon/anorith/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd2ca20, 0x9a0

  .globl gMonPalette_Armaldo
gMonPalette_Armaldo:
  .incbin "build/graphics/pokemon/armaldo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Armaldo
gMonBackPic_Armaldo:
  .incbin "build/graphics/pokemon/armaldo/back.4bpp.lz"

  .globl gMonShinyPalette_Armaldo
gMonShinyPalette_Armaldo:
  .incbin "build/graphics/pokemon/armaldo/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd2d848, 0x650

  .globl gMonPalette_Ralts
gMonPalette_Ralts:
  .incbin "build/graphics/pokemon/ralts/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ralts
gMonBackPic_Ralts:
  .incbin "build/graphics/pokemon/ralts/back.4bpp.lz"

  .globl gMonShinyPalette_Ralts
gMonShinyPalette_Ralts:
  .incbin "build/graphics/pokemon/ralts/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd2e124, 0x71c

  .globl gMonPalette_Kirlia
gMonPalette_Kirlia:
  .incbin "build/graphics/pokemon/kirlia/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kirlia
gMonBackPic_Kirlia:
  .incbin "build/graphics/pokemon/kirlia/back.4bpp.lz"

  .globl gMonShinyPalette_Kirlia
gMonShinyPalette_Kirlia:
  .incbin "build/graphics/pokemon/kirlia/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd2ec04, 0x79c

  .globl gMonPalette_Gardevoir
gMonPalette_Gardevoir:
  .incbin "build/graphics/pokemon/gardevoir/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gardevoir
gMonBackPic_Gardevoir:
  .incbin "build/graphics/pokemon/gardevoir/back.4bpp.lz"

  .globl gMonShinyPalette_Gardevoir
gMonShinyPalette_Gardevoir:
  .incbin "build/graphics/pokemon/gardevoir/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd2f724, 0x698

  .globl gMonPalette_Bagon
gMonPalette_Bagon:
  .incbin "build/graphics/pokemon/bagon/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd2fde3, 0x1

  .globl gMonBackPic_Bagon
gMonBackPic_Bagon:
  .incbin "build/graphics/pokemon/bagon/back.4bpp.lz"

  .globl gMonShinyPalette_Bagon
gMonShinyPalette_Bagon:
  .incbin "build/graphics/pokemon/bagon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd300f3, 0x725

  .globl gMonPalette_Shelgon
gMonPalette_Shelgon:
  .incbin "build/graphics/pokemon/shelgon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shelgon
gMonBackPic_Shelgon:
  .incbin "build/graphics/pokemon/shelgon/back.4bpp.lz"

  .globl gMonShinyPalette_Shelgon
gMonShinyPalette_Shelgon:
  .incbin "build/graphics/pokemon/shelgon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd30b50, 0x884

  .globl gMonPalette_Salamence
gMonPalette_Salamence:
  .incbin "build/graphics/pokemon/salamence/normal_palette.gbapal.lz"

  .globl gMonBackPic_Salamence
gMonBackPic_Salamence:
  .incbin "build/graphics/pokemon/salamence/back.4bpp.lz"

  .globl gMonShinyPalette_Salamence
gMonShinyPalette_Salamence:
  .incbin "build/graphics/pokemon/salamence/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd31708, 0x690

  .globl gMonPalette_Beldum
gMonPalette_Beldum:
  .incbin "build/graphics/pokemon/beldum/normal_palette.gbapal.lz"

  .globl gMonBackPic_Beldum
gMonBackPic_Beldum:
  .incbin "build/graphics/pokemon/beldum/back.4bpp.lz"

  .globl gMonShinyPalette_Beldum
gMonShinyPalette_Beldum:
  .incbin "build/graphics/pokemon/beldum/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd320d8, 0x87c

  .globl gMonPalette_Metang
gMonPalette_Metang:
  .incbin "build/graphics/pokemon/metang/normal_palette.gbapal.lz"

  .globl gMonBackPic_Metang
gMonBackPic_Metang:
  .incbin "build/graphics/pokemon/metang/back.4bpp.lz"

  .globl gMonShinyPalette_Metang
gMonShinyPalette_Metang:
  .incbin "build/graphics/pokemon/metang/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd32cc8, 0x884

  .globl gMonPalette_Metagross
gMonPalette_Metagross:
  .incbin "build/graphics/pokemon/metagross/normal_palette.gbapal.lz"

  .globl gMonBackPic_Metagross
gMonBackPic_Metagross:
  .incbin "build/graphics/pokemon/metagross/back.4bpp.lz"

  .globl gMonShinyPalette_Metagross
gMonShinyPalette_Metagross:
  .incbin "build/graphics/pokemon/metagross/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd33868, 0x8dc

  .globl gMonPalette_Regirock
gMonPalette_Regirock:
  .incbin "build/graphics/pokemon/regirock/normal_palette.gbapal.lz"

  .globl gMonBackPic_Regirock
gMonBackPic_Regirock:
  .incbin "build/graphics/pokemon/regirock/back.4bpp.lz"

  .globl gMonShinyPalette_Regirock
gMonShinyPalette_Regirock:
  .incbin "build/graphics/pokemon/regirock/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd345e0, 0x868

  .globl gMonPalette_Regice
gMonPalette_Regice:
  .incbin "build/graphics/pokemon/regice/normal_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd34e6e, 0x2

  .globl gMonBackPic_Regice
gMonBackPic_Regice:
  .incbin "build/graphics/pokemon/regice/back.4bpp.lz"

  .globl gMonShinyPalette_Regice
gMonShinyPalette_Regice:
  .incbin "build/graphics/pokemon/regice/shiny_palette.gbapal.lz"
  .incbin "baserom.gba", 0xd35186, 0x2

  .incbin "baserom.gba", 0xd35188, 0x8a8

  .globl gMonPalette_Registeel
gMonPalette_Registeel:
  .incbin "build/graphics/pokemon/registeel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Registeel
gMonBackPic_Registeel:
  .incbin "build/graphics/pokemon/registeel/back.4bpp.lz"

  .globl gMonShinyPalette_Registeel
gMonShinyPalette_Registeel:
  .incbin "build/graphics/pokemon/registeel/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd35db8, 0x890

  .globl gMonPalette_Kyogre
gMonPalette_Kyogre:
  .incbin "build/graphics/pokemon/kyogre/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kyogre
gMonBackPic_Kyogre:
  .incbin "build/graphics/pokemon/kyogre/back.4bpp.lz"

  .globl gMonShinyPalette_Kyogre
gMonShinyPalette_Kyogre:
  .incbin "build/graphics/pokemon/kyogre/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd36910, 0x9b4

  .globl gMonPalette_Groudon
gMonPalette_Groudon:
  .incbin "build/graphics/pokemon/groudon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Groudon
gMonBackPic_Groudon:
  .incbin "build/graphics/pokemon/groudon/back.4bpp.lz"

  .globl gMonShinyPalette_Groudon
gMonShinyPalette_Groudon:
  .incbin "build/graphics/pokemon/groudon/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd3777c, 0xc0c

  .globl gMonPalette_Rayquaza
gMonPalette_Rayquaza:
  .incbin "build/graphics/pokemon/rayquaza/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rayquaza
gMonBackPic_Rayquaza:
  .incbin "build/graphics/pokemon/rayquaza/back.4bpp.lz"

  .globl gMonShinyPalette_Rayquaza
gMonShinyPalette_Rayquaza:
  .incbin "build/graphics/pokemon/rayquaza/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd38710, 0x844

  .globl gMonPalette_Latias
gMonPalette_Latias:
  .incbin "build/graphics/pokemon/latias/normal_palette.gbapal.lz"

  .globl gMonBackPic_Latias
gMonBackPic_Latias:
  .incbin "build/graphics/pokemon/latias/back.4bpp.lz"

  .globl gMonShinyPalette_Latias
gMonShinyPalette_Latias:
  .incbin "build/graphics/pokemon/latias/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd392a0, 0x874

  .globl gMonPalette_Latios
gMonPalette_Latios:
  .incbin "build/graphics/pokemon/latios/normal_palette.gbapal.lz"

  .globl gMonBackPic_Latios
gMonBackPic_Latios:
  .incbin "build/graphics/pokemon/latios/back.4bpp.lz"

  .globl gMonShinyPalette_Latios
gMonShinyPalette_Latios:
  .incbin "build/graphics/pokemon/latios/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd39ec4, 0x72c

  .globl gMonPalette_Jirachi
gMonPalette_Jirachi:
  .incbin "build/graphics/pokemon/jirachi/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jirachi
gMonBackPic_Jirachi:
  .incbin "build/graphics/pokemon/jirachi/back.4bpp.lz"

  .globl gMonShinyPalette_Jirachi
gMonShinyPalette_Jirachi:
  .incbin "build/graphics/pokemon/jirachi/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd3a9e0, 0x7fc

  .globl gMonPalette_DeoxysNormal
gMonPalette_DeoxysNormal:
  .incbin "build/graphics/pokemon/deoxys_normal/normal_palette.gbapal.lz"

  .globl gMonBackPic_DeoxysNormal
gMonBackPic_DeoxysNormal:
  .incbin "build/graphics/pokemon/deoxys_normal/back.4bpp.lz"

  .globl gMonShinyPalette_DeoxysNormal
gMonShinyPalette_DeoxysNormal:
  .incbin "build/graphics/pokemon/deoxys_normal/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd3b89c, 0x866c

  .globl gMonPalette_Chimecho
gMonPalette_Chimecho:
  .incbin "build/graphics/pokemon/chimecho/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chimecho
gMonBackPic_Chimecho:
  .incbin "build/graphics/pokemon/chimecho/back.4bpp.lz"

  .globl gMonShinyPalette_Chimecho
gMonShinyPalette_Chimecho:
  .incbin "build/graphics/pokemon/chimecho/shiny_palette.gbapal.lz"

  .incbin "baserom.gba", 0xd441cc, 0x420

  .globl gMonBackPic_Egg
gMonBackPic_Egg:
  .incbin "build/graphics/pokemon/egg/back.4bpp.lz"

  .globl gMonPalette_Egg
  .globl gMonShinyPalette_Egg
gMonPalette_Egg:
gMonShinyPalette_Egg:
  .incbin "build/graphics/pokemon/egg/shiny_palette.gbapal.lz"
 
  .incbin "baserom.gba", 0xd447bd, 0x1db

  .globl gMonBackPic_UnownB
gMonBackPic_UnownB:
  .incbin "build/graphics/pokemon/unown_b/back.4bpp.lz"

  .incbin "baserom.gba", 0xd44b9c, 0x614

  .globl gMonBackPic_UnownC
gMonBackPic_UnownC:
  .incbin "build/graphics/pokemon/unown_c/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4545c, 0x5f8

  .globl gMonBackPic_UnownD
gMonBackPic_UnownD:
  .incbin "build/graphics/pokemon/unown_d/back.4bpp.lz"

  .incbin "baserom.gba", 0xd45cac, 0x5b8

  .globl gMonBackPic_UnownE
gMonBackPic_UnownE:
  .incbin "build/graphics/pokemon/unown_e/back.4bpp.lz"

  .incbin "baserom.gba", 0xd46464, 0x5f4

  .globl gMonBackPic_UnownF
gMonBackPic_UnownF:
  .incbin "build/graphics/pokemon/unown_f/back.4bpp.lz"

  .incbin "baserom.gba", 0xd46c74, 0x5dc

  .globl gMonBackPic_UnownG
gMonBackPic_UnownG:
  .incbin "build/graphics/pokemon/unown_g/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4749c, 0x644

  .globl gMonBackPic_UnownH
gMonBackPic_UnownH:
  .incbin "build/graphics/pokemon/unown_h/back.4bpp.lz"

  .incbin "baserom.gba", 0xd47da4, 0x598

  .globl gMonBackPic_UnownI
gMonBackPic_UnownI:
  .incbin "build/graphics/pokemon/unown_i/back.4bpp.lz"

  .incbin "baserom.gba", 0xd484e4, 0x5c4

  .globl gMonBackPic_UnownJ
gMonBackPic_UnownJ:
  .incbin "build/graphics/pokemon/unown_j/back.4bpp.lz"

  .incbin "baserom.gba", 0xd48c90, 0x5d0

  .globl gMonBackPic_UnownK
gMonBackPic_UnownK:
  .incbin "build/graphics/pokemon/unown_k/back.4bpp.lz"

  .incbin "baserom.gba", 0xd49458, 0x5b0

  .globl gMonBackPic_UnownL
gMonBackPic_UnownL:
  .incbin "build/graphics/pokemon/unown_l/back.4bpp.lz"

  .incbin "baserom.gba", 0xd49bdc, 0x624

  .globl gMonBackPic_UnownM
gMonBackPic_UnownM:
  .incbin "build/graphics/pokemon/unown_m/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4a4a8, 0x5f8

  .globl gMonBackPic_UnownN
gMonBackPic_UnownN:
  .incbin "build/graphics/pokemon/unown_n/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4ad0c, 0x638

  .globl gMonBackPic_UnownO
gMonBackPic_UnownO:
  .incbin "build/graphics/pokemon/unown_o/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4b604, 0x5a0

  .globl gMonBackPic_UnownP
gMonBackPic_UnownP:
  .incbin "build/graphics/pokemon/unown_p/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4bd68, 0x5b4

  .globl gMonBackPic_UnownQ
gMonBackPic_UnownQ:
  .incbin "build/graphics/pokemon/unown_q/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4c4e8, 0x5a4

  .globl gMonBackPic_UnownR
gMonBackPic_UnownR:
  .incbin "build/graphics/pokemon/unown_r/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4cc54, 0x5e8

  .globl gMonBackPic_UnownS
gMonBackPic_UnownS:
  .incbin "build/graphics/pokemon/unown_s/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4d490, 0x5b0

  .globl gMonBackPic_UnownT
gMonBackPic_UnownT:
  .incbin "build/graphics/pokemon/unown_t/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4dbf4, 0x618

  .globl gMonBackPic_UnownU
gMonBackPic_UnownU:
  .incbin "build/graphics/pokemon/unown_u/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4e460, 0x5e4

  .globl gMonBackPic_UnownV
gMonBackPic_UnownV:
  .incbin "build/graphics/pokemon/unown_v/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4ec74, 0x5d4

  .globl gMonBackPic_UnownW
gMonBackPic_UnownW:
  .incbin "build/graphics/pokemon/unown_w/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4f44c, 0x5c4

  .globl gMonBackPic_UnownX
gMonBackPic_UnownX:
  .incbin "build/graphics/pokemon/unown_x/back.4bpp.lz"

  .incbin "baserom.gba", 0xd4fc00, 0x5d8

  .globl gMonBackPic_UnownY
gMonBackPic_UnownY:
  .incbin "build/graphics/pokemon/unown_y/back.4bpp.lz"

  .incbin "baserom.gba", 0xd503cc, 0x5b0

  .globl gMonBackPic_UnownZ
gMonBackPic_UnownZ:
  .incbin "build/graphics/pokemon/unown_z/back.4bpp.lz"

  .incbin "baserom.gba", 0xd50b58, 0x590

  .globl gMonBackPic_UnownEmark
gMonBackPic_UnownEmark:
  .incbin "build/graphics/pokemon/unown_emark/back.4bpp.lz"

  .incbin "baserom.gba", 0xd512b0, 0x5bc

  .globl gMonBackPic_UnownQmark
gMonBackPic_UnownQmark:
  .incbin "build/graphics/pokemon/unown_qmark/back.4bpp.lz"
