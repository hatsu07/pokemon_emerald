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
  .include "data/graphics/pokeballs.inc"
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
