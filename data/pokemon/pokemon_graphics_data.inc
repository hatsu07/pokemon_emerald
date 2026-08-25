.if .L__inc_fragment_select_a13e2e144708 == 1
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

  .globl gMonIcon_None
  .globl gMonIcon_Bulbasaur
gMonIcon_None: @ 0x08C30044 [000]
	.globl gMonStillFrontPic_Ivysaur
	.set gMonStillFrontPic_Ivysaur, gMonIcon_None + 0x420
	@ Semantic alias for compressed still-front sprite at 0x08C30464.
gMonIcon_Bulbasaur: @ 0x08C30044 [001]
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_ICON_ASSET
  .incbin "build/graphics/pokemon/bulbasaur/icon.4bpp"

  @ 用途未確定
  @ ANALYSIS: RAW_RANGE offset=0xC30444, size=0x20
  .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0B, 0x0F, 0x0F
  .byte 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00

  @ LZ77 compressed 64x64 4bpp image 保留
  @ ANALYSIS: RAW_RANGE offset=0xC30464, size=0x374
  .byte 0x10, 0x00, 0x08, 0x00, 0x3F, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xFC, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0x00, 0xE0, 0xAB, 0x00, 0x03, 0x3E, 0x40, 0x03, 0xEE, 0x00, 0x0E, 0x43, 0x00, 0x0A, 0x00
  .byte 0x03, 0xA0, 0x30, 0x01, 0x0E, 0x00, 0x11, 0xDE, 0x5E, 0xEE, 0x00, 0xEE, 0x00, 0xEE, 0xE5, 0x00
  .byte 0xE4, 0x44, 0xEF, 0x0F, 0x3E, 0x01, 0x44, 0xF4, 0x0F, 0x3E, 0x43, 0x44, 0x0F, 0xF0, 0x46, 0xFF
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0x00, 0x20, 0x02, 0x00, 0x00, 0x82, 0xC8, 0x00, 0x00, 0x00, 0x92, 0x99, 0x00, 0xC2, 0x9C, 0x99
  .byte 0x00, 0x82, 0x00, 0x98, 0x92, 0x00, 0x9C, 0x99, 0xC9, 0x00, 0xC0, 0x00, 0xCC, 0x99, 0x00, 0xC0
  .byte 0x99, 0x2C, 0x20, 0xC2, 0x00, 0x33, 0xD4, 0xC2, 0x29, 0x3C, 0xE4, 0x9C, 0x29, 0x00, 0x4C, 0x3D
  .byte 0x99, 0xC9, 0xC3, 0xCC, 0x99, 0xC9, 0x04, 0x9C, 0xC9, 0x29, 0x9C, 0x99, 0x00, 0x29, 0x92, 0xCC
  .byte 0x00, 0xC9, 0x29, 0xCC, 0x22, 0x33, 0x34, 0x44, 0xF5, 0x00, 0x43, 0x43, 0x44, 0x55, 0x34, 0x34
  .byte 0x44, 0x55, 0x00, 0x43, 0x43, 0x54, 0x55, 0x34, 0x44, 0x54, 0x55, 0x00, 0x44, 0x44, 0x55, 0x55
  .byte 0xCC, 0x54, 0x25, 0x52, 0x0E, 0xC2, 0x55, 0x8C, 0xC9, 0x10, 0x61, 0x11, 0x04, 0x10, 0x03, 0xB5
  .byte 0x80, 0x40, 0x03, 0x25, 0x22, 0x20, 0xC2, 0x82, 0xC8, 0x82, 0x0D, 0xC9, 0x8C, 0xC9, 0x98, 0x20
  .byte 0x1F, 0xE0, 0x91, 0xC2, 0x00, 0x91, 0x07, 0xB8, 0x00, 0x00, 0x98, 0xB9, 0xF0, 0x1B, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xA0, 0xB0, 0x01, 0x2C, 0x00, 0xDF, 0x8B, 0x28, 0x00, 0x00, 0x9B, 0x4C, 0x89, 0x00
  .byte 0x03, 0x99, 0x00, 0x00, 0xD4, 0x00, 0x03, 0xCC, 0x00, 0x20, 0x00, 0xB0, 0x00, 0x07, 0xB0, 0xBB
  .byte 0x2C, 0xC2, 0x99, 0x00, 0x99, 0x9C, 0x28, 0x2C, 0xC2, 0x9C, 0xAA, 0xCC, 0x00, 0x7C, 0xA2, 0x66
  .byte 0x77, 0x77, 0xA9, 0x6C, 0x76, 0x01, 0x67, 0xA9, 0xCC, 0x66, 0x66, 0x99, 0x6A, 0x00, 0x03, 0x00
  .byte 0x7A, 0x6A, 0x6A, 0x22, 0x2C, 0x22, 0x22, 0xCC, 0x10, 0xBC, 0xBB, 0xBB, 0x00, 0x1A, 0x77, 0xA6
  .byte 0xCC, 0x77, 0x00, 0x77, 0xC6, 0xCC, 0x77, 0xC7, 0xC6, 0x7C, 0x77, 0x50, 0xC7, 0x10, 0x0F, 0x66
  .byte 0x00, 0x10, 0xC2, 0x55, 0x9C, 0x99, 0x00, 0xBB, 0xCC, 0xC9, 0x99, 0xAA, 0xAA, 0xCC, 0xBB, 0x00
  .byte 0xA7, 0xAA, 0x77, 0x67, 0xAC, 0xAA, 0x7A, 0x66, 0x00, 0xAA, 0xAA, 0x7A, 0xB7, 0xA7, 0xAA, 0xAA
  .byte 0xB7, 0x00, 0x7C, 0xC7, 0xAC, 0xAA, 0x8C, 0xC9, 0x99, 0x2C, 0x00, 0xC9, 0x99, 0xC9, 0x99, 0xCB
  .byte 0x99, 0x99, 0x99, 0x00, 0x66, 0xBC, 0xC9, 0x99, 0xBB, 0xBA, 0x9C, 0x99, 0x00, 0xCB, 0xBA, 0x99
  .byte 0xCC, 0xAB, 0x9B, 0x99, 0x22, 0x90, 0x00, 0x06, 0xBB, 0x99, 0x00, 0xE3, 0x99, 0x0C, 0x00, 0x00
  .byte 0x41, 0xCC, 0x00, 0x03, 0x99, 0x0B, 0x00, 0x00, 0xBB, 0x00, 0x03, 0xBF, 0x00, 0x0A, 0x00, 0x00
  .byte 0x06, 0x20, 0x03, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xA0, 0x01, 0x60, 0xC0, 0xF0, 0x12, 0x60
  .byte 0x01, 0xAA, 0xCC, 0xCA, 0xC6, 0xA6, 0x00, 0x00, 0xCA, 0x61, 0x7B, 0x00, 0x7A, 0x11, 0xB5, 0x00
  .byte 0xA0, 0x76, 0x11, 0xF5, 0xC0, 0x66, 0x17, 0xF5, 0x00, 0xC0, 0x67, 0x66, 0x66, 0x00, 0x7C, 0x67
  .byte 0x66, 0x10, 0xC0, 0xCC, 0xCC, 0x10, 0xE3, 0xC7, 0x66, 0x76, 0x7C, 0x04, 0x77, 0x67, 0x76, 0x77
  .byte 0xA7, 0x00, 0x03, 0xB7, 0x66, 0xD0, 0x10, 0x03, 0x00, 0xFB, 0x76, 0x00, 0x03, 0xA7, 0x77, 0xAC
  .byte 0x77, 0x00, 0x67, 0x6C, 0xAC, 0xAA, 0xB6, 0x16, 0xAC, 0xAA, 0x04, 0x5A, 0x11, 0xAA, 0xAA, 0x5F
  .byte 0x00, 0x03, 0x4F, 0x61, 0x02, 0xAA, 0xAA, 0x77, 0xAA, 0xAA, 0xCA, 0x10, 0x03, 0xAA, 0x00, 0xCA
  .byte 0xCC, 0xCC, 0xBA, 0x9C, 0xBB, 0x00, 0xBA, 0xAD, 0x01, 0x6D, 0xAA, 0x00, 0xD4, 0xAA, 0x00, 0xD0
  .byte 0x20, 0x03, 0xCA, 0x40, 0x03, 0x3F, 0xBA, 0xCB, 0xF0, 0x91, 0x80, 0x01, 0x00, 0x36, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0x82, 0xB0, 0x01, 0x6A, 0x00, 0x00, 0xA0, 0x7A, 0x00, 0x06, 0x77, 0xD2
  .byte 0x00, 0x07, 0x00, 0x03, 0x00, 0x00, 0x0B, 0x00, 0x7C, 0x40, 0x03, 0xC0, 0x04, 0x7B, 0xAC, 0x1A
  .byte 0xBC, 0x77, 0x01, 0xA7, 0x77, 0xAA, 0x00, 0xBC, 0xCB, 0xA7, 0xCA, 0xAA, 0xAA, 0xA7, 0xCA, 0x00
  .byte 0x6A, 0xA7, 0xA7, 0xBA, 0xC6, 0x7C, 0xA7, 0xBA, 0x04, 0x76, 0x7C, 0xA7, 0xAA, 0x6B, 0x10, 0xE6
  .byte 0x77, 0xBB, 0x00, 0xBB, 0xCC, 0xAC, 0xAA, 0xAA, 0xAA, 0xAA, 0xBB, 0x19, 0xBB, 0xBB, 0xCB, 0x10
  .byte 0x07, 0x00, 0xD9, 0xAA, 0xC7, 0x10, 0x03, 0x02, 0xAA, 0xAC, 0xCA, 0xBB, 0x1B, 0xAA, 0x00, 0x1B
  .byte 0xCC, 0xC1, 0x40, 0x02, 0x01, 0xF5, 0x67, 0x77, 0xAA, 0x7C, 0x66, 0x20, 0x03, 0x20, 0xA7, 0x67
  .byte 0x00, 0x46, 0xAA, 0xAB, 0x6C, 0xBB, 0xCA, 0x3D, 0xCA, 0x7A, 0x11, 0x11, 0x00, 0x14, 0x01, 0x15
  .byte 0x00, 0x12, 0xAC, 0x00, 0x0E, 0xD5, 0x10, 0x50, 0x10, 0x03, 0xC6, 0x00, 0x84, 0xC7, 0x01, 0x1B
  .byte 0x7A, 0x00, 0x08, 0xBF, 0x11, 0x1B, 0xBA, 0x00, 0x0F, 0x10, 0x03, 0x52, 0x03, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xB8, 0xA0, 0x01, 0xB0, 0xF0, 0x12, 0x70, 0x01, 0x00, 0xE3, 0x7C, 0xAB, 0xAA
  .byte 0x04, 0x7B, 0x77, 0xB0, 0xBB, 0xA0, 0x01, 0x91, 0xA0, 0xC1, 0xC4, 0x00, 0x2E, 0xA0, 0x76, 0x77
  .byte 0xAA, 0xAB, 0x01, 0xCB, 0xAB, 0xAC, 0x00, 0xAC, 0x6C, 0xCB, 0xCC, 0x61, 0xBB, 0x00, 0x1C, 0x41
  .byte 0xBB, 0xC0, 0x4F, 0xA7, 0xC6, 0x7C, 0xAC, 0xA7, 0x01, 0x40, 0x00, 0x67, 0x77, 0xA7, 0xBA, 0xC7
  .byte 0xA1, 0xCC, 0xB6, 0x38, 0xBB, 0x61, 0x02, 0xC1, 0x00, 0x24, 0x50, 0x01, 0xAB, 0xAA, 0xAA, 0x01
  .byte 0xBA, 0xBB, 0xAA, 0xAA, 0x0B, 0xAB, 0xBC, 0x80, 0x14, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xE0, 0xF0, 0x01, 0xF0, 0x01
  .byte 0x40, 0x01, 0x00, 0x00

  .globl gMonPalette_Ivysaur
gMonPalette_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ivysaur
gMonBackPic_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/back.4bpp.lz"

  .globl gMonShinyPalette_Ivysaur
gMonShinyPalette_Ivysaur:
  .incbin "build/graphics/pokemon/ivysaur/shiny_palette.gbapal.lz"

  .globl gMonIcon_Ivysaur
gMonIcon_Ivysaur:
	.globl gMonStillFrontPic_Venusaur
	.set gMonStillFrontPic_Venusaur, gMonIcon_Ivysaur + 0x420
	@ Semantic alias for compressed still-front sprite at 0x08C30FD4.
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_ICON_ASSET
  .incbin "build/graphics/pokemon/ivysaur/icon.4bpp"
  @ ANALYSIS: RAW_RANGE offset=0xC30FB4, size=0x5AC
  .byte 0x00, 0x00, 0x00, 0x00, 0x10, 0xB0, 0xF0, 0xF8, 0x00, 0x00, 0x00, 0x01, 0x11, 0x1B, 0x1F, 0x3F
  .byte 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x03, 0x00, 0x00
  .byte 0x10, 0x00, 0x08, 0x00, 0x3F, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0x80, 0x50, 0x01, 0x66, 0x55, 0x60, 0x66, 0xCC, 0x9B, 0x96, 0x10, 0x99, 0x99
  .byte 0x99, 0xF0, 0x1B, 0x00, 0x00, 0x55, 0x05, 0x03, 0x00, 0x00, 0x99, 0x69, 0x55, 0x00, 0x00, 0x1E
  .byte 0x00, 0x09, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0x00, 0x01, 0x40, 0x60, 0x00, 0x02, 0x96, 0x00, 0x60, 0xC6, 0x9C, 0x00, 0x00, 0x96, 0xCB
  .byte 0x9B, 0x60, 0x99, 0xB9, 0x99, 0x60, 0x00, 0x89, 0x99, 0x99, 0x85, 0x58, 0x98, 0x99, 0x85, 0x02
  .byte 0x55, 0x98, 0x99, 0x66, 0x66, 0x06, 0x00, 0xA7, 0x59, 0x40, 0x55, 0x00, 0xAB, 0x59, 0x99, 0xCC
  .byte 0x99, 0x89, 0x99, 0x40, 0xCB, 0x00, 0x03, 0x99, 0x99, 0x88, 0x99, 0x99, 0xC9, 0x02, 0x88, 0x99
  .byte 0x89, 0x88, 0x58, 0x95, 0x10, 0x0C, 0x98, 0x80, 0x00, 0x03, 0x88, 0x88, 0x58, 0x85, 0x8C, 0xC5
  .byte 0xC5, 0x00, 0x58, 0xC5, 0xCB, 0x6B, 0xC8, 0xB6, 0x65, 0x55, 0x00, 0x58, 0x5C, 0x7C, 0x77, 0x77
  .byte 0x77, 0xCB, 0xC7, 0x80, 0x00, 0x2F, 0x07, 0xB9, 0xBC, 0x8B, 0x78, 0x88, 0x99, 0x00, 0x88, 0x78
  .byte 0xC5, 0x95, 0x8C, 0x87, 0xCB, 0xCB, 0x00, 0x55, 0x88, 0x65, 0xB5, 0xC6, 0x88, 0x77, 0x6C, 0x00
  .byte 0x5C, 0x88, 0xC7, 0x5B, 0x77, 0x57, 0x00, 0x55, 0x00, 0x75, 0x77, 0x55, 0xCB, 0x99, 0x99, 0x98
  .byte 0xCC, 0xEE, 0x00, 0x48, 0x40, 0x01, 0x00, 0x4E, 0xC9, 0x00, 0x03, 0x00, 0x53, 0x31, 0x3F, 0x75
  .byte 0xA0, 0x00, 0x03, 0x99, 0x00, 0x04, 0x99, 0x99, 0x07, 0x00, 0xCC, 0x00, 0x99, 0x79, 0x00, 0xBC
  .byte 0x89, 0x79, 0x00, 0xBB, 0x01, 0x58, 0x88, 0x07, 0x99, 0x58, 0x85, 0x07, 0xF0, 0xCE, 0xE0, 0xF0
  .byte 0x01, 0xF0, 0x01, 0x81, 0x8B, 0x88, 0xB8, 0x9C, 0x85, 0x88, 0x00, 0xBB, 0xBC, 0x50, 0x88, 0xBB
  .byte 0x55, 0x50, 0x88, 0x00, 0x58, 0x98, 0x00, 0x55, 0x85, 0x98, 0x00, 0x50, 0x08, 0x88, 0x88, 0x00
  .byte 0x85, 0x30, 0x03, 0x89, 0x58, 0x55, 0x10, 0x85, 0x55, 0x95, 0x20, 0xF3, 0x99, 0xC9, 0x9B, 0x99
  .byte 0x03, 0x99, 0xCC, 0xBC, 0x99, 0xC9, 0xBB, 0x00, 0xAB, 0x00, 0x9A, 0x40, 0x99, 0x01, 0x22, 0x99
  .byte 0x88, 0x55, 0xB6, 0xC6, 0x88, 0x00, 0x88, 0x55, 0x77, 0x89, 0x88, 0x88, 0x78, 0xBB, 0x80, 0x00
  .byte 0x03, 0x9B, 0x99, 0x88, 0x77, 0x99, 0x89, 0x77, 0x00, 0x75, 0x99, 0x78, 0x57, 0x57, 0x89, 0x57
  .byte 0x55, 0x01, 0x55, 0xB6, 0x76, 0x85, 0x88, 0x77, 0x87, 0x01, 0x1D, 0x00, 0x88, 0x88, 0xCB, 0x88
  .byte 0x88, 0xB8, 0xBC, 0x87, 0x00, 0x88, 0xC9, 0x9C, 0x75, 0x87, 0x99, 0x99, 0x57, 0x09, 0x77, 0x98
  .byte 0x99, 0x55, 0x00, 0x08, 0x55, 0x55, 0x10, 0x49, 0x30, 0x55, 0x85, 0x21, 0x5F, 0x20, 0x64, 0x9C
  .byte 0x99, 0x99, 0xCB, 0x04, 0xBC, 0x89, 0x99, 0xCC, 0xBB, 0x00, 0x18, 0x58, 0x88, 0xA0, 0x01, 0x62
  .byte 0x07, 0x00, 0x3B, 0x07, 0x85, 0x88, 0x78, 0x00, 0x40, 0x58, 0x00, 0x03, 0x88, 0x75, 0x07, 0x00
  .byte 0x88, 0x59, 0x0F, 0x00, 0x00, 0x88, 0x98, 0x00, 0x07, 0x00, 0x03, 0xF0, 0xD1, 0xF0, 0x01, 0xC8
  .byte 0xF0, 0x01, 0x50, 0x01, 0xD0, 0xDD, 0x20, 0xE7, 0x70, 0x87, 0x58, 0x00, 0x00, 0x00, 0x70, 0x77
  .byte 0x00, 0x00, 0x10, 0x11, 0x00, 0x00, 0xDD, 0x11, 0x1E, 0xD0, 0xAA, 0xAA, 0xEA, 0x00, 0x10, 0xA1
  .byte 0xAA, 0x1D, 0xAD, 0xAA, 0xDD, 0xDA, 0x0C, 0x85, 0x88, 0x98, 0x89, 0x00, 0x22, 0x00, 0x01, 0xB8
  .byte 0xBB, 0x80, 0x01, 0x2B, 0xBB, 0xDD, 0x77, 0x88, 0xBB, 0x1D, 0x11, 0x00, 0x77, 0x77, 0xE1, 0xED
  .byte 0xDD, 0xDD, 0xDE, 0xDE, 0x00, 0xDE, 0xD1, 0x78, 0x57, 0x76, 0x66, 0x15, 0x67, 0x00, 0x57, 0x67
  .byte 0xD7, 0x57, 0x66, 0x76, 0xD7, 0x17, 0x00, 0x67, 0x67, 0x17, 0xD1, 0xDD, 0x71, 0x17, 0xDD, 0x00
  .byte 0xDD, 0x7E, 0xD1, 0xED, 0xEE, 0x1E, 0x1D, 0xD1, 0x00, 0xAE, 0x1E, 0x75, 0x75, 0x77, 0x88, 0x57
  .byte 0x57, 0x00, 0x17, 0x85, 0x56, 0x55, 0xD7, 0x85, 0x17, 0x77, 0x00, 0x77, 0x57, 0xD1, 0xDD, 0xDD
  .byte 0x51, 0xDD, 0xDD, 0x02, 0xDD, 0xDD, 0xED, 0xED, 0xDD, 0xD1, 0x00, 0x40, 0x7D, 0xD0, 0x01, 0xE4
  .byte 0x10, 0x5E, 0x58, 0x00, 0x03, 0x78, 0x88, 0xBB, 0x58, 0x00, 0x05, 0x88, 0x5B, 0x75, 0x17, 0x55
  .byte 0x75, 0xD7, 0x00, 0xDD, 0x7D, 0xD1, 0x1D, 0xD1, 0x7D, 0xDD, 0xDD, 0x6A, 0x12, 0x20, 0xE7, 0x00
  .byte 0x99, 0x57, 0x40, 0xB1, 0x11, 0x00, 0x03, 0xDD, 0x80, 0x00, 0x04, 0x1D, 0x71, 0x77, 0x00, 0xDD
  .byte 0xED, 0xEE, 0xDB, 0xF1, 0x00, 0xF0, 0xE3, 0xAA, 0x00, 0x03, 0x10, 0x36, 0xAD, 0x40, 0x0B, 0x00
  .byte 0x03, 0x40, 0x20, 0x00, 0x0F, 0x20, 0x44, 0x00, 0x00, 0x42, 0x44, 0x00, 0xAA, 0xDA, 0xAA, 0xEE
  .byte 0xA1, 0xAA, 0xEE, 0xEE, 0x00, 0xAA, 0x1A, 0xDA, 0xEE, 0xEA, 0xA1, 0x1A, 0xEE, 0x00, 0x11, 0xAA
  .byte 0x1E, 0xEE, 0x12, 0xEA, 0x21, 0xD1, 0x00, 0x24, 0x11, 0x21, 0x72, 0x34, 0x22, 0x22, 0x22, 0x80
  .byte 0x00, 0xA7, 0x1D, 0xEE, 0x1E, 0xDE, 0xDD, 0xE1, 0xEE, 0x00, 0xD1, 0x1D, 0x7D, 0xEE, 0x7E, 0x27
  .byte 0x7D, 0xED, 0x02, 0x7D, 0x72, 0x7D, 0xD7, 0x27, 0x72, 0x00, 0x01, 0x23, 0x00, 0x22, 0x12, 0x48
  .byte 0x33, 0xE1, 0xAA, 0xAA, 0xDE, 0x08, 0x11, 0xAD, 0xAA, 0xED, 0x01, 0x32, 0xED, 0xA1, 0xAD, 0x00
  .byte 0x2A, 0xEE, 0xDA, 0xA1, 0xAA, 0xEA, 0x1A, 0xAA, 0x00, 0xA1, 0xE1, 0xA1, 0xDA, 0xED, 0xE1, 0xA1
  .byte 0x1A, 0x00, 0xEA, 0x1D, 0xED, 0xED, 0x1D, 0xDD, 0xDE, 0xD2, 0x00, 0xDE, 0xD1, 0xEE, 0x1D, 0xDD
  .byte 0x7D, 0xEE, 0xEE, 0x10, 0xD1, 0x7D, 0x1E, 0x00, 0x43, 0xEE, 0xE1, 0xEE, 0x27, 0x09, 0xEE, 0x2E
  .byte 0x7E, 0x32, 0x00, 0x0A, 0x33, 0xD7, 0x01, 0x0B, 0x40, 0xD7, 0x01, 0x0A, 0x12, 0x1D, 0xDD, 0x1D
  .byte 0x22, 0x11, 0x00, 0xDD, 0xDD, 0x22, 0x11, 0xD1, 0xE1, 0x11, 0x43, 0x00, 0x14, 0xE1, 0x43, 0x34
  .byte 0x21, 0x17, 0x44, 0x73, 0x20, 0x28, 0x27, 0x01, 0x4E, 0x07, 0x1D, 0xDD, 0xEE, 0x1E, 0x00, 0xDD
  .byte 0xD1, 0xEE, 0xEE, 0xDD, 0x1D, 0xDE, 0x71, 0x10, 0x1E, 0xED, 0xEE, 0x00, 0x3E, 0xEE, 0xEE, 0xA1
  .byte 0x1E, 0x03, 0xEE, 0xDE, 0xA1, 0xA1, 0x1E, 0xEA, 0x50, 0xE5, 0x51, 0x08, 0x59, 0x01, 0x00, 0x03
  .byte 0x1E, 0x00, 0x03, 0x01, 0x32, 0x00, 0x0D, 0x20, 0x11, 0x71, 0x42, 0x20, 0xE7, 0x00, 0xEE, 0x10
  .byte 0x03, 0x34, 0x00, 0x10, 0x40, 0x03, 0x20, 0x00, 0x41, 0x10, 0x03, 0x33, 0x44, 0x23, 0x22, 0x33
  .byte 0x05, 0x44, 0x34, 0x33, 0x33, 0x43, 0x00, 0x04, 0x42, 0x10, 0x03, 0x00, 0x24, 0x33, 0x33, 0x32
  .byte 0x42, 0x33, 0x33, 0x31, 0x80, 0x00, 0x03, 0x21, 0x44, 0x33, 0x33, 0x22, 0x12, 0x49, 0x08, 0x34
  .byte 0x33, 0x12, 0x47, 0x00, 0x03, 0x44, 0x43, 0x33, 0x00, 0x31, 0x41, 0x42, 0x33, 0xF1, 0x41, 0x42
  .byte 0x23, 0x00, 0xF3, 0x18, 0x33, 0x13, 0xF3, 0x17, 0x33, 0x11, 0x00, 0xF3, 0x1F, 0x44, 0x12, 0x11
  .byte 0xEA, 0x77, 0x33, 0x01, 0x72, 0x77, 0x22, 0x34, 0x33, 0x22, 0x32, 0x00, 0x2E, 0xE0, 0x20, 0x4B
  .byte 0x00, 0x29, 0x60, 0x07, 0xE1, 0x77, 0x32, 0x33, 0x77, 0x03, 0x22, 0x33, 0x33, 0x23, 0x32, 0x33
  .byte 0x10, 0x05, 0x00, 0x21, 0xC0, 0x00, 0x14, 0x20, 0x65, 0x42, 0x71, 0x33, 0x33, 0x11, 0x7F, 0x00
  .byte 0x33, 0x87, 0x29, 0x27, 0x33, 0x13, 0x32, 0x12, 0x80, 0x00, 0x1C, 0x22, 0x33, 0x32, 0x23, 0x22
  .byte 0x13, 0x31, 0x14, 0x23, 0x22, 0xF1, 0x00, 0x03, 0xF8, 0x00, 0x0B, 0xF8, 0x32, 0x00, 0x22, 0x22
  .byte 0x72, 0xA7, 0x7A, 0xA7, 0x22, 0x72, 0x00, 0x07, 0x70, 0x27, 0x22, 0x01, 0x00, 0x21, 0x22, 0x00
  .byte 0x12, 0x00, 0x12, 0x22, 0x22, 0x01, 0x12, 0x32, 0x00, 0x32, 0x02, 0x12, 0x22, 0x23, 0x13, 0x12
  .byte 0x22, 0x1E, 0x32, 0x32, 0x7A, 0x40, 0xEB, 0xF0, 0x01, 0x31, 0x0B, 0x02, 0xD3, 0x33, 0x80, 0x00
  .byte 0x03, 0x21, 0x00, 0x00, 0xF3, 0xF2, 0x00, 0x00, 0x35, 0x72, 0xF7, 0xD0, 0x2E, 0x10, 0xE3, 0x12
  .byte 0x00, 0x03, 0x72, 0x00, 0x03, 0x40, 0x74, 0x00, 0xB3, 0x77, 0x34, 0x23, 0x33, 0x10, 0x34, 0x06
  .byte 0x32, 0x33, 0x10, 0x33, 0x13, 0x00, 0x03, 0x00, 0x1B, 0x24, 0x00, 0x42, 0x44, 0x12, 0x44, 0x44
  .byte 0x44, 0x23, 0x41, 0x80, 0x00, 0x03, 0x31, 0x43, 0x44, 0x23, 0x21, 0x21, 0x43, 0x00, 0x23, 0x12
  .byte 0x12, 0xF1, 0x23, 0x12, 0x21, 0x77, 0x07, 0x22, 0x12, 0x11, 0x31, 0x34, 0x10, 0xE7, 0x00, 0x27
  .byte 0x00, 0x06, 0x64, 0x33, 0x00, 0x36, 0x10, 0x0B, 0x31, 0x21, 0x00, 0x0B, 0x87, 0x18, 0x10, 0x77
  .byte 0x17, 0x72, 0x04, 0x1F, 0x33, 0x33, 0xF2, 0xFF, 0xE0, 0x00, 0x0E, 0x00, 0xDE, 0x60, 0x01, 0x77
  .byte 0x33, 0x71, 0x17, 0x55, 0x41, 0x21, 0x02, 0xF3, 0x99, 0x88, 0x18, 0xF1, 0x4F, 0x00, 0xFA, 0x20
  .byte 0x32, 0x33, 0x00, 0xFE, 0x23, 0x21, 0x22, 0x13, 0x11, 0x01, 0x22, 0x22, 0x5F, 0x15, 0x22, 0x22
  .byte 0x55, 0x00, 0xE8, 0x85, 0x00, 0x06, 0x71, 0x22, 0x22, 0x77, 0x00, 0xEF, 0x23, 0x10, 0x1D, 0xA0
  .byte 0x00, 0x03, 0x32, 0x00, 0x21, 0x32, 0x33, 0x27, 0x22, 0x32, 0x02, 0x13, 0x27, 0x22, 0x22, 0x33
  .byte 0x21, 0x00, 0x03, 0x10, 0x75, 0x22, 0x00, 0x0C, 0x00, 0xC3, 0x10, 0x03, 0x33, 0x00, 0xEC, 0x31
  .byte 0x00, 0x03, 0x4B, 0x33, 0x00, 0x0C, 0x33, 0x73, 0x40, 0x03, 0x72, 0xF1, 0x13, 0xD0, 0x01, 0x00
  .byte 0x30, 0x3F, 0x33, 0x23, 0xF3, 0x1F, 0x22, 0xF2, 0x0C, 0x72, 0x77, 0x77, 0xFF, 0x00, 0x0E, 0x01
  .byte 0x23, 0x00, 0x20, 0x80, 0x90, 0x1F, 0x22, 0x42, 0x01, 0x10, 0x21, 0x41, 0x74, 0x03, 0x00, 0x7F
  .byte 0x77, 0x77, 0x00, 0x7F, 0x82, 0x67, 0x50, 0x01, 0x09, 0xF2, 0x82, 0x88, 0x88, 0x11, 0x43, 0x00
  .byte 0x12, 0x00, 0x20, 0x86, 0xF0, 0x5E, 0x00, 0x88, 0x18, 0x31, 0x11, 0xF7, 0x00, 0x1D, 0x17, 0xF8
  .byte 0x31, 0x8E, 0xC0, 0x01, 0x00, 0xE2, 0xF1, 0xBF, 0x90, 0x01, 0xF1, 0x21, 0x12, 0x00, 0x30, 0x4F
  .byte 0x21, 0xF1, 0x20, 0x77, 0x77, 0xF1, 0xA0, 0x00, 0x0D, 0x70, 0xD0, 0x1E, 0x21, 0x72, 0x02, 0x00
  .byte 0x1F, 0x03, 0x41, 0x24, 0x00, 0xFF, 0x77, 0x07, 0xF0, 0x47, 0x00, 0x01

  .globl gMonPalette_Venusaur
gMonPalette_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Venusaur
gMonBackPic_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/back.4bpp.lz"

  .globl gMonShinyPalette_Venusaur
gMonShinyPalette_Venusaur:
  .incbin "build/graphics/pokemon/venusaur/shiny_palette.gbapal.lz"

  .globl gMonIcon_Venusaur
gMonIcon_Venusaur:
	.globl gMonStillFrontPic_Charmander
	.set gMonStillFrontPic_Charmander, gMonIcon_Venusaur + 0x420
	@ Semantic alias for compressed still-front sprite at 0x08C31EA0.
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_ICON_ASSET
  .incbin "build/graphics/pokemon/venusaur/icon.4bpp"
  @ ANALYSIS: RAW_RANGE offset=0xC31E80, size=0x2D0
  .byte 0x00, 0x00, 0x00, 0x90, 0xB0, 0xF8, 0xF8, 0xFC, 0x00, 0x00, 0x01, 0x13, 0x1B, 0x3F, 0x3F, 0x7F
  .byte 0xFC, 0xFC, 0xFC, 0xF8, 0xF0, 0xC0, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x07, 0x00, 0x00
  .byte 0x10, 0x00, 0x08, 0x00, 0x3F, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0x00, 0x01, 0x40, 0xB0, 0xE0, 0x11, 0xC0, 0xCC, 0x01, 0xC0, 0xAB, 0xAA, 0x03
  .byte 0xCA, 0xAC, 0x99, 0xAA, 0xAA, 0x9A, 0x00, 0x03, 0xF0, 0x32, 0x15, 0x00, 0x00, 0x01, 0x00, 0x03
  .byte 0x1A, 0x00, 0x03, 0xAA, 0x10, 0x08, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xB0, 0x01, 0x40, 0x70, 0x00, 0x01, 0x07, 0x70, 0x77, 0x70, 0x07
  .byte 0x77, 0x81, 0x00, 0x05, 0x77, 0x07, 0x77, 0x78, 0x77, 0x07, 0x10, 0xD1, 0xA1, 0x00, 0x03, 0xAC
  .byte 0x10, 0x03, 0x77, 0x00, 0x00, 0xA3, 0x00, 0x07, 0x54, 0xAD, 0x00, 0x03, 0x9E, 0x00, 0x03, 0x9C
  .byte 0x00, 0x1A, 0x99, 0x99, 0x00, 0xA9, 0xBA, 0xAA, 0x99, 0xAA, 0xBB, 0xCC, 0xAA, 0x02, 0xAA, 0xCB
  .byte 0xD3, 0xAA, 0xAA, 0xCA, 0x10, 0x03, 0xDD, 0x80, 0x00, 0x03, 0xEE, 0xAA, 0xAA, 0xBA, 0xBF, 0xAA
  .byte 0xAA, 0xAD, 0x00, 0x01, 0x0C, 0x00, 0xE7, 0x1B, 0x00, 0x3C, 0x10, 0x03, 0xCB, 0x00, 0x03, 0x2B
  .byte 0xBB, 0x01, 0x20, 0x03, 0xBA, 0x00, 0x03, 0xBB, 0x00, 0x03, 0xF0, 0x84, 0xF9, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x80, 0xD5, 0x00, 0x00, 0x00, 0xBA, 0xD4, 0x20, 0x03, 0x50, 0x0B
  .byte 0x87, 0x00, 0x03, 0x80, 0x10, 0x1C, 0x87, 0x78, 0x00, 0x78, 0x80, 0x87, 0x85, 0x85, 0x77, 0x88
  .byte 0x55, 0x00, 0x85, 0x78, 0x58, 0x85, 0x55, 0x75, 0x55, 0x78, 0x40, 0x58, 0x20, 0x03, 0x85, 0x77
  .byte 0x87, 0x08, 0x87, 0x77, 0x4A, 0x87, 0x00, 0xFF, 0x10, 0xA9, 0x00, 0xE7, 0xBA, 0x41, 0x03, 0x10
  .byte 0xC8, 0xD0, 0x5C, 0x00, 0xE1, 0xBB, 0xCA, 0x00, 0xFF, 0xBA, 0xBB, 0xCC, 0x00, 0xB3, 0xC1, 0xCC
  .byte 0xBB, 0xBB, 0xC0, 0xBB, 0xBB, 0x00, 0xCC, 0x00, 0x1C, 0xCC, 0xBB, 0x00, 0xC0, 0x55, 0x00, 0xA5
  .byte 0x00, 0x5B, 0x55, 0x55, 0xCB, 0xBB, 0x0C, 0x2B, 0x00, 0xBC, 0x00, 0xF7, 0xBB, 0x00, 0xFF, 0xBC
  .byte 0x00, 0x03, 0x10, 0xF3, 0x53, 0xBB, 0x00, 0x13, 0xAC, 0x00, 0x10, 0xAC, 0xBA, 0x00, 0x18, 0xF0
  .byte 0x01, 0xFD, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x00, 0x01
  .byte 0xE7, 0xE1, 0x01, 0xC9, 0x01, 0xA4, 0x20, 0x03, 0xC9, 0x00, 0x00, 0x9B, 0x00, 0x03, 0x1F, 0xB0
  .byte 0x99, 0x0C, 0x01, 0xDA, 0x10, 0x0C, 0x52, 0xBF, 0x12, 0xE7, 0x12, 0x07, 0xD0, 0x10, 0x03, 0x60
  .byte 0x01, 0x1C, 0x00, 0x03, 0xCB, 0x5C, 0x44, 0xCC, 0x00, 0xB9, 0x4C, 0xC4, 0x99, 0xCA, 0x4C, 0xA4
  .byte 0xAA, 0x00, 0xAA, 0x4C, 0xC4, 0xA1, 0x11, 0x45, 0x44, 0x11, 0x08, 0xA0, 0x44, 0x44, 0x54, 0x50
  .byte 0x03, 0xA9, 0xAA, 0xBB, 0x20, 0x01, 0xAA, 0x01, 0x04, 0xBA, 0xBC, 0xBB, 0x1B, 0x1C, 0x00, 0xBB
  .byte 0xBB, 0xCB, 0x66, 0xBB, 0xBB, 0xBB, 0x65, 0x8E, 0x50, 0x03, 0xBC, 0xBB, 0xBB, 0xF3, 0x1B, 0x30
  .byte 0x03, 0x00, 0x8D, 0x00, 0xFE, 0x01, 0x2E, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0x60, 0x01, 0xAC, 0xAE, 0x00, 0xE3, 0xC0, 0x10, 0xE7, 0xBC, 0xD0, 0xDF, 0x21, 0xDF, 0x00
  .byte 0xE4, 0xAA, 0x19, 0xAA, 0x1C, 0xC1, 0x01, 0xE6, 0x00, 0xAD, 0xBB, 0xB1, 0x00, 0x04, 0x00, 0xB1
  .byte 0x10, 0x6C, 0xB6, 0xCB, 0x00, 0x10, 0x6C, 0x40, 0x66, 0x02, 0x0E, 0x6C, 0xAC, 0x44, 0x44, 0x55
  .byte 0xBA, 0x00, 0x55, 0x55, 0x55, 0xBA, 0x56, 0x55, 0x65, 0xA9, 0x00, 0x6C, 0x66, 0x66, 0xA9, 0xCA
  .byte 0x66, 0x66, 0xAA, 0x08, 0xAA, 0xCC, 0x66, 0xAC, 0x02, 0x10, 0x1C, 0xBC, 0xBB, 0x03, 0x11, 0xC5
  .byte 0xAA, 0xBA, 0xBB, 0xAB, 0x03, 0x20, 0x04, 0x0F, 0x2E, 0xBB, 0xA1, 0x00, 0x44, 0xB1, 0x00, 0x0F
  .byte 0x10, 0x48, 0x02, 0x2A, 0xCB, 0x1F, 0x66, 0x1C, 0xC1, 0x12, 0x1A, 0x20, 0xE7, 0x50, 0x03, 0x10
  .byte 0x0F, 0x02, 0x1E, 0xFF, 0x30, 0x03, 0xF3, 0x1E, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xD8, 0x64, 0xD1, 0x00, 0x03, 0x3B, 0xF1, 0x1B, 0x30, 0x01, 0xAB, 0xAA
  .byte 0xBB, 0x00, 0x1B, 0x3C, 0x3B, 0xBB, 0x01, 0x11, 0x11, 0xC1, 0xD8, 0xF0, 0x1C, 0x00, 0x01, 0x11
  .byte 0x02, 0xE9, 0x01, 0x5E, 0xBA, 0x00, 0x3C, 0x03, 0x3C, 0x3C, 0x00, 0xC0, 0x11, 0x11, 0xD0, 0x1F
  .byte 0x10, 0xE3, 0xFF, 0x10, 0xF3, 0x12, 0x4B, 0xF0, 0xEE, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xE0, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00

  .globl gMonPalette_Charmander
gMonPalette_Charmander:
  .incbin "build/graphics/pokemon/charmander/normal_palette.gbapal.lz"

  .globl gMonBackPic_Charmander
gMonBackPic_Charmander:
  .incbin "build/graphics/pokemon/charmander/back.4bpp.lz"

  .globl gMonShinyPalette_Charmander
gMonShinyPalette_Charmander:
  .incbin "build/graphics/pokemon/charmander/shiny_palette.gbapal.lz"

  .globl gMonIcon_Charmander
gMonIcon_Charmander:
	.globl gMonStillFrontPic_Charmeleon
	.set gMonStillFrontPic_Charmeleon, gMonIcon_Charmander + 0x420
	@ Semantic alias for compressed still-front sprite at 0x08C32854.
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_ICON_ASSET
  .incbin "build/graphics/pokemon/charmander/icon.4bpp"
  @ ANALYSIS: RAW_RANGE offset=0xC32834, size=0x3C8
  .byte 0x00, 0x00, 0x00, 0x00, 0x20, 0xA0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x01, 0x09, 0x0B, 0x0F, 0x0F
  .byte 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x03, 0x00, 0x00
  .byte 0x10, 0x00, 0x08, 0x00, 0x3F, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF4, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x80, 0x01, 0xC0, 0x20, 0x05
  .byte 0xDD, 0x0D, 0x00, 0x00, 0x00, 0xAD, 0x0D, 0x00, 0xD0, 0xAA, 0xDC, 0x00, 0x00, 0xC0, 0xBA, 0xFC
  .byte 0x00, 0xBD, 0xBB, 0xFC, 0x00, 0x00, 0xBC, 0xDB, 0xFD, 0x00, 0xBB, 0xCB, 0xCC, 0xD5, 0x00, 0x18
  .byte 0x20, 0x01, 0x07, 0x00, 0x03, 0x70, 0x00, 0x03, 0x77, 0x00, 0x06, 0xB0, 0x10, 0x03, 0x80, 0x30
  .byte 0x12, 0x30, 0x01, 0x70, 0x07, 0x80, 0x00, 0x00, 0x77, 0x77, 0x00, 0x77, 0x87, 0x78, 0x77, 0x87
  .byte 0x08, 0x88, 0x88, 0x88, 0x58, 0x00, 0x02, 0x55, 0x70, 0x58, 0x02, 0x55, 0x55, 0x00, 0x77, 0x57
  .byte 0x55, 0x10, 0x1F, 0x77, 0xA0, 0x00, 0x2A, 0x77, 0x00, 0x04, 0x88, 0x88, 0x77, 0x00, 0x58, 0x04
  .byte 0x58, 0x85, 0x07, 0x55, 0x55, 0x00, 0x03, 0x78, 0x77, 0x07, 0x07, 0x55, 0x77, 0xD7, 0xD7, 0xF0
  .byte 0x92, 0xF0, 0x01, 0xF0, 0x01, 0xE0, 0xF0, 0x01, 0xF0, 0x01, 0x60, 0xE2, 0xAD, 0x00, 0xC0, 0xBD
  .byte 0xAA, 0x02, 0x00, 0xAC, 0xAA, 0xBA, 0x00, 0xAD, 0x10, 0x03, 0xBA, 0x00, 0xBB, 0x00, 0xC0, 0xBC
  .byte 0xCB, 0x00, 0x10, 0xBC, 0x00, 0xDB, 0x00, 0xDD, 0xBC, 0xBB, 0xBA, 0xBB, 0xCB, 0x00, 0xDC, 0xBB
  .byte 0xBB, 0xBB, 0xCB, 0xBB, 0xBB, 0xBD, 0x00, 0xBB, 0xAB, 0xDB, 0xCC, 0xBB, 0xAA, 0xEC, 0xC1, 0x00
  .byte 0xBB, 0xCA, 0x1F, 0x11, 0xBC, 0xFA, 0xF1, 0x11, 0x02, 0xBC, 0xFD, 0xCD, 0xCC, 0xBB, 0x0F, 0x00
  .byte 0x41, 0xFC, 0x14, 0x00, 0x00, 0x20, 0x11, 0x09, 0xCC, 0x00, 0x0C, 0xCB, 0x0F, 0x20, 0x00, 0x20
  .byte 0x00, 0x03, 0x12, 0xCB, 0x0D, 0x20, 0xE1, 0x00, 0xCB, 0xDC, 0x00, 0xFD, 0x22, 0x00, 0x70, 0x58
  .byte 0x00, 0x11, 0xD2, 0x00, 0x77, 0x12, 0xE1, 0x0D, 0x00, 0x00, 0x20, 0x21, 0xD2, 0x0D, 0xB2, 0x1D
  .byte 0xE1, 0xFD, 0x00, 0xBE, 0xDB, 0xE1, 0xCD, 0xBE, 0xCB, 0xDD, 0xCC, 0x00, 0xBF, 0xCC, 0xCC, 0xCC
  .byte 0x85, 0x75, 0x77, 0xBD, 0x00, 0x87, 0x88, 0xC8, 0xBB, 0x70, 0x70, 0x07, 0xAD, 0xB3, 0x00, 0x4A
  .byte 0xD0, 0x10, 0x03, 0x40, 0x53, 0x00, 0xDC, 0x00, 0x03, 0x11, 0x60, 0x54, 0xDB, 0x00, 0x03, 0xBA
  .byte 0x00, 0x08, 0xAA, 0x00, 0x08, 0xAA, 0xCB, 0x41, 0x0D, 0x00, 0xA2, 0x0D, 0x00, 0xAC, 0xBA, 0xFB
  .byte 0x01, 0x8F, 0xF8, 0x10, 0x19, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x60, 0xFD, 0xAA, 0xAA, 0xBB
  .byte 0x00, 0xAC, 0xAA, 0xBB, 0xBB, 0xAD, 0xBA, 0xCB, 0xBB, 0x00, 0xBD, 0xBC, 0xCD, 0xCC, 0xD0, 0xCC
  .byte 0xCC, 0xFF, 0x01, 0xD0, 0xCC, 0xDC, 0xD0, 0x10, 0xFF, 0x0D, 0x20, 0x8B, 0xC8, 0x00, 0xFB, 0x10
  .byte 0xFE, 0xCC, 0xBB, 0x00, 0xAB, 0xFC, 0xDF, 0xDD, 0x00, 0xCD, 0xDF, 0xCE, 0xDC, 0xDC, 0xBD, 0xB1
  .byte 0xDC, 0x13, 0xCC, 0xBD, 0xBB, 0x20, 0x03, 0xFC, 0xCC, 0x00, 0xA8, 0x20, 0x03, 0x87, 0x00, 0xFC
  .byte 0xCC, 0xCC, 0xDC, 0x0D, 0x10, 0x26, 0x00, 0x03, 0x00, 0xDA, 0x01, 0xDC, 0xBD, 0x6D, 0xC6, 0xDC
  .byte 0xCC, 0xF0, 0x00, 0x0C, 0x20, 0x00, 0xCF, 0x00, 0x03, 0xFD, 0xCC, 0xCC, 0xF0, 0xCF, 0x02, 0xDF
  .byte 0xCC, 0xBF, 0xCB, 0xCC, 0xCC, 0x00, 0x02, 0xFF, 0x83, 0x00, 0x02, 0x00, 0xCC, 0xFD, 0xDD, 0x0D
  .byte 0x51, 0x37, 0x10, 0x03, 0x50, 0xDC, 0x00, 0x03, 0xFF, 0xC0, 0x9F, 0xD0, 0xAA, 0xBB, 0x0D, 0x24
  .byte 0xC0, 0xAA, 0x01, 0x66, 0xAD, 0xBB, 0x00, 0xF8, 0xBB, 0xDC, 0xB1, 0x00, 0x03, 0xFC, 0x00, 0x94
  .byte 0x00, 0x03, 0xCB, 0xFC, 0xBD, 0x00, 0x03, 0xFE, 0xF0, 0xD1, 0xF0, 0x01, 0xF0, 0x01, 0xB0, 0x62
  .byte 0x00, 0x03, 0x51, 0x7B, 0xD0, 0x01, 0x20, 0x00, 0xC1, 0xCC, 0xD1, 0xFC, 0xDD, 0xDD, 0xCD, 0xFF
  .byte 0x00, 0xBA, 0xBB, 0xFC, 0xCC, 0xFF, 0xFF, 0xDD, 0xCC, 0x00, 0x00, 0xD0, 0xBD, 0xCC, 0xD0, 0xBD
  .byte 0xCB, 0xCC, 0x04, 0xA2, 0xBA, 0xCC, 0xCC, 0xE1, 0x00, 0xC8, 0xC4, 0x66, 0x00, 0xCC, 0xCC, 0x44
  .byte 0x44, 0xC5, 0xCC, 0x4D, 0x44, 0x4A, 0x54, 0x00, 0x03, 0x44, 0xB5, 0x00, 0x03, 0x55, 0x00, 0x03
  .byte 0x54, 0x81, 0x50, 0x03, 0xDC, 0xDD, 0xCD, 0xCC, 0xCC, 0xDD, 0x01, 0x04, 0xA8, 0x40, 0x01, 0xC5
  .byte 0x00, 0x03, 0x55, 0x10, 0x03, 0xC5, 0xCC, 0xDC, 0x08, 0x55, 0x65, 0xCC, 0xBD, 0x00, 0xF2, 0xD0
  .byte 0xFC, 0x00, 0x0D, 0xD0, 0xCD, 0xCC, 0xDF, 0x00, 0x27, 0x11, 0x39, 0xCC, 0x01, 0x2C, 0x90, 0x20
  .byte 0x08, 0xFC, 0xCC, 0x01, 0x76, 0xCF, 0xBC, 0xBB, 0xCC, 0x00, 0xDC, 0xCB, 0xCB, 0xCB, 0x0D, 0xBC
  .byte 0xBC, 0xCC, 0x6F, 0x0F, 0x00, 0x14, 0x00, 0x03, 0xFC, 0x01, 0x67, 0x10, 0x03, 0x01, 0x6F, 0x11
  .byte 0x30, 0xF5, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x90, 0x01, 0x12, 0x00, 0x03, 0xF2, 0xF0, 0x16
  .byte 0xA0, 0x30, 0x01, 0xD1, 0x00, 0x6C, 0xFF, 0xE1, 0xFC, 0x0F, 0x20, 0x65, 0xF1, 0x00, 0x6B, 0xF0
  .byte 0x6E, 0x00, 0x6D, 0x00, 0xE3, 0xC0, 0x00, 0xF3, 0x00, 0xCC, 0x55, 0x55, 0x55, 0xAC, 0x6C, 0x55
  .byte 0x55, 0x00, 0xAD, 0xCB, 0x66, 0x66, 0xBD, 0xBB, 0x6D, 0x66, 0x0C, 0xBF, 0xBB, 0xCC, 0x6D, 0x01
  .byte 0xFB, 0x00, 0xE3, 0xD6, 0xAB, 0x00, 0x55, 0x65, 0xC6, 0xAA, 0x55, 0x66, 0xAC, 0xAA, 0x0C, 0x65
  .byte 0x66, 0xAD, 0xAA, 0x00, 0x1D, 0x10, 0x03, 0xBB, 0x66, 0x00, 0x66, 0xDF, 0xBB, 0xDD, 0xFD, 0x00
  .byte 0xBD, 0xBA, 0x15, 0xBB, 0xCC, 0xFD, 0x00, 0x03, 0xFC, 0x03, 0x67, 0xFC, 0x02, 0x67, 0x94, 0x40
  .byte 0x03, 0xCC, 0xDC, 0x14, 0x5B, 0xCB, 0x00, 0xE0, 0xDC, 0xFD, 0xFF, 0x04, 0x7E, 0x00, 0x77, 0x00
  .byte 0x06, 0xF0, 0x7E, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF8, 0xF0, 0x01, 0xF0, 0x01
  .byte 0x02, 0x0B, 0xF0, 0x12, 0x15, 0x1B, 0xCC, 0xCC, 0x22, 0x00, 0xAA, 0xCB, 0xCC, 0x21, 0xAC, 0xCB
  .byte 0xCC, 0x12, 0x00, 0xDE, 0xCC, 0xFD, 0xFF, 0x12, 0xFE, 0x0F, 0x00, 0x6D, 0xFF, 0x70, 0xA9, 0x00
  .byte 0xBB, 0xD0, 0x01, 0xA6, 0x10, 0x03, 0xCD, 0x02, 0xDB, 0x57, 0x22, 0x00, 0x46, 0x11, 0x00, 0x03
  .byte 0xF1, 0x00, 0x03, 0x20, 0x24, 0x02, 0x1C, 0x91, 0x01, 0xD3, 0xDC, 0x0F, 0x00, 0xEF, 0xDD, 0xBC
  .byte 0xDD, 0x03, 0x11, 0x00, 0xE1, 0xCD, 0xFE, 0xFF, 0x21, 0xFF, 0xFE, 0xF0, 0x3F, 0x0F, 0xF0, 0xF0
  .byte 0xEE, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x00, 0x00, 0x00

  .globl gMonPalette_Charmeleon
gMonPalette_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Charmeleon
gMonBackPic_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/back.4bpp.lz"

  .globl gMonShinyPalette_Charmeleon
gMonShinyPalette_Charmeleon:
  .incbin "build/graphics/pokemon/charmeleon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Charmeleon
gMonIcon_Charmeleon:
	.globl gMonStillFrontPic_Charizard
	.set gMonStillFrontPic_Charizard, gMonIcon_Charmeleon + 0x420
	@ Semantic alias for compressed still-front sprite at 0x08C3334C.
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_ICON_ASSET
  .incbin "build/graphics/pokemon/charmeleon/icon.4bpp"
  @ ANALYSIS: RAW_RANGE offset=0xC3332C, size=0x570
  .byte 0x00, 0x00, 0x00, 0x00, 0x90, 0xB0, 0xF0, 0xF0, 0x00, 0x00, 0x01, 0x01, 0x13, 0x1B, 0x1F, 0x1F
  .byte 0xF0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x1F, 0x0F, 0x0F, 0x0F, 0x07, 0x03, 0x00, 0x00
  .byte 0x10, 0x00, 0x08, 0x00, 0x3C, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x00, 0x01, 0xDC
  .byte 0xC0, 0x14, 0xDD, 0xBD, 0xBB, 0x80, 0x0F, 0xC0, 0x00, 0x03, 0xAD, 0x00, 0x10, 0x00, 0xD0, 0xAB
  .byte 0x00, 0x17, 0xCB, 0xBD, 0xBB, 0xBB, 0x06, 0x9C, 0xBB, 0xBC, 0xCC, 0x09, 0x20, 0x28, 0x00, 0x03
  .byte 0xDA, 0xFC, 0x40, 0x03, 0x10, 0x10, 0x20, 0x14, 0xF0, 0x01, 0xF0, 0x01, 0x80, 0x01, 0xCC, 0x0C
  .byte 0x82, 0x00, 0x5C, 0xDA, 0x0D, 0x00, 0xD0, 0xBB, 0x00, 0x4D, 0xCD, 0x40, 0xCC, 0x00, 0x08, 0xCC
  .byte 0xDC, 0x00, 0xD0, 0xCB, 0xCC, 0xDE, 0xF0, 0x29, 0x70, 0x01, 0x0D, 0xF0, 0x12, 0xF0, 0x01, 0x00
  .byte 0xB0, 0x40, 0x03, 0xBD, 0x90, 0x70, 0x03, 0xD0, 0xCB, 0x30, 0x03, 0xBD, 0x5C, 0xBD, 0xBB, 0x00
  .byte 0xCB, 0xCC, 0xBB, 0xCC, 0x9C, 0x99, 0xCB, 0x99, 0x01, 0x59, 0x55, 0x9C, 0x55, 0x55, 0x55, 0x59
  .byte 0x10, 0x03, 0x00, 0x45, 0x44, 0x54, 0x55, 0x44, 0x44, 0x44, 0x45, 0x81, 0x00, 0x03, 0x99, 0xC9
  .byte 0xCC, 0x09, 0x55, 0x95, 0x40, 0x03, 0x00, 0x55, 0xD9, 0xDD, 0x55, 0xD5, 0xAD, 0xAA, 0x55, 0x00
  .byte 0xAD, 0xAA, 0xAA, 0x55, 0xC9, 0xAA, 0xBD, 0x55, 0x20, 0xB9, 0xBB, 0x41, 0x1F, 0xDD, 0xDD, 0xDD
  .byte 0xDD, 0xBB, 0x00, 0xAA, 0xCA, 0xDB, 0xAB, 0xD9, 0xDD, 0xCB, 0x9B, 0x01, 0xFF, 0xBA, 0xCB, 0xFD
  .byte 0x39, 0xBB, 0xBB, 0x30, 0x01, 0xD0, 0x20, 0x1D, 0x00, 0x03, 0xBA, 0x00, 0x21, 0xCD, 0xBB, 0xAA
  .byte 0xCC, 0x00, 0xDF, 0xBB, 0xCB, 0x9C, 0xCF, 0xCB, 0x9C, 0x0D, 0x04, 0xBB, 0xCB, 0x09, 0x00, 0xCB
  .byte 0x11, 0x3E, 0xD0, 0xDB, 0x40, 0xCD, 0x00, 0x03, 0x95, 0xDD, 0xD0, 0xDB, 0x55, 0xCC, 0x08, 0xD9
  .byte 0xDB, 0x55, 0x99, 0x00, 0x03, 0x00, 0xBD, 0xDC, 0x13, 0x55, 0xD0, 0xCB, 0x10, 0x03, 0x59, 0x55
  .byte 0x11, 0x5B, 0x11, 0x04, 0x54, 0xCD, 0x00, 0xEC, 0xB5, 0x00, 0x2E, 0xB5, 0x00, 0x10, 0xD5, 0x9C
  .byte 0x0B, 0x00, 0x00, 0x55, 0x9B, 0x00, 0x03, 0xCB, 0xF1, 0x01, 0xF0, 0x01, 0x28, 0xBD, 0x5C, 0x00
  .byte 0xEA, 0x45, 0x20, 0x03, 0xBC, 0x5C, 0x44, 0xCC, 0x00, 0x0E, 0x60, 0x03, 0xC0, 0xCB, 0x10, 0xE1
  .byte 0xF0, 0x01, 0x34, 0x34, 0x02, 0x44, 0x44, 0x43, 0x43, 0x43, 0x54, 0x00, 0x07, 0x54, 0x80, 0x10
  .byte 0xE3, 0x54, 0x95, 0xDE, 0xCC, 0x54, 0x55, 0x9F, 0x00, 0x99, 0x54, 0x55, 0xD5, 0xDC, 0x55, 0x55
  .byte 0xCD, 0x55, 0x0D, 0x10, 0x03, 0x54, 0x00, 0x03, 0x45, 0x00, 0x03, 0xBB, 0x01, 0x3F, 0x00, 0xDE
  .byte 0xCC, 0xCC, 0xDD, 0xDF, 0x9D, 0x99, 0xD9, 0x00, 0x9D, 0xD9, 0x22, 0x9D, 0x00, 0xD9, 0x12, 0x92
  .byte 0x00, 0x90, 0x2D, 0x11, 0x92, 0x90, 0x1D, 0x11, 0xD2, 0x81, 0x00, 0x03, 0xDD, 0xCC, 0xCC, 0x9C
  .byte 0x00, 0xCC, 0x01, 0xCA, 0x06, 0xCD, 0xCC, 0xCC, 0x09, 0xCB, 0x00, 0x0C, 0x40, 0x03, 0xCC, 0x36
  .byte 0xCB, 0xDC, 0x00, 0x03, 0x00, 0x14, 0xD0, 0x01, 0x74, 0x50, 0x03, 0xCD, 0xAE, 0x10, 0x03, 0x5D
  .byte 0x30, 0x03, 0x99, 0x01, 0x87, 0x11, 0x8F, 0x00, 0x62, 0x00, 0x14, 0x55, 0xC5, 0x09, 0xE0, 0x03
  .byte 0x45, 0x00, 0x03, 0x54, 0xC5, 0xAB, 0xB0, 0xFF, 0x20, 0x10, 0x03, 0x02, 0x30, 0x03, 0x00, 0x10
  .byte 0x03, 0x11, 0xF8, 0xD6, 0x00, 0xE3, 0x00, 0x03, 0x34, 0x40, 0x03, 0x33, 0x00, 0xF6, 0x10, 0x03
  .byte 0x93, 0x00, 0xBD, 0x5C, 0x34, 0x09, 0xBD, 0x5C, 0x94, 0x00, 0x80, 0x00, 0xE7, 0x55, 0x33, 0x34
  .byte 0x44, 0x45, 0x33, 0x43, 0x02, 0x44, 0x55, 0x33, 0x33, 0x54, 0x45, 0x00, 0x03, 0x53, 0x00, 0x59
  .byte 0x35, 0x34, 0x44, 0x00, 0x40, 0x43, 0x53, 0x00, 0x00, 0x00, 0x34, 0x05, 0x54, 0x54, 0xC5, 0xDC
  .byte 0x00, 0x45, 0x45, 0xD5, 0xCC, 0x54, 0x54, 0x55, 0x55, 0x04, 0x45, 0x45, 0x55, 0x55, 0x54, 0x00
  .byte 0x08, 0x54, 0x99, 0x02, 0x99, 0x59, 0x05, 0x00, 0x00, 0x90, 0x10, 0x5F, 0x9D, 0x00, 0x1D, 0xD1
  .byte 0xCD, 0xFD, 0xDD, 0xFD, 0xBD, 0xAD, 0x00, 0xDC, 0xDD, 0xCB, 0xD5, 0xBA, 0xBB, 0x9C, 0x55, 0x00
  .byte 0x99, 0x99, 0x09, 0x55, 0xD5, 0xCC, 0xDC, 0x59, 0x00, 0x55, 0xCD, 0xDC, 0x90, 0x55, 0xCD, 0xDD
  .byte 0x9C, 0xC0, 0x11, 0x01, 0x00, 0xEF, 0x09, 0xBD, 0xCC, 0xCC, 0x00, 0xBD, 0x95, 0x02, 0xCF, 0xBD
  .byte 0xBB, 0x20, 0x03, 0xD0, 0x01, 0x38, 0xCD, 0x00, 0x03, 0x91, 0x00, 0x28, 0x55, 0xCC, 0x30, 0x03
  .byte 0x45, 0xCC, 0x9D, 0x00, 0x03, 0x10, 0x9C, 0x45, 0x55, 0x20, 0x03, 0xDC, 0x05, 0x54, 0xCC, 0x0B
  .byte 0xCC, 0x0D, 0xC0, 0x45, 0x03, 0x0A, 0x44, 0x01, 0xEF, 0x00, 0x03, 0x1F, 0x20, 0xC4, 0x0D, 0x00
  .byte 0x03, 0x02, 0x03, 0x00, 0x0E, 0x20, 0x03, 0x13, 0x67, 0xCA, 0x20, 0xF3, 0x40, 0xF7, 0x22, 0x22
  .byte 0x10, 0x03, 0x02, 0x20, 0x03, 0x20, 0x2B, 0x28, 0x22, 0x00, 0x03, 0x28, 0x01, 0xE6, 0x09, 0x40
  .byte 0x03, 0x01, 0x0B, 0xEC, 0x02, 0x3B, 0x90, 0x03, 0x33, 0x40, 0x55, 0xF2, 0x32, 0x33, 0xFE, 0xDD
  .byte 0xC0, 0x18, 0xDD, 0xAA, 0xAA, 0xF0, 0x17, 0x31, 0x56, 0xDD, 0x0C, 0x00, 0x00, 0xCD, 0xAA, 0xCB
  .byte 0xDD, 0xBD, 0x00, 0x59, 0xDD, 0x00, 0xBC, 0x00, 0xD9, 0xBC, 0xBB, 0x00, 0xBD, 0xDB, 0x02, 0xBB
  .byte 0xD0, 0xBB, 0xAD, 0xBA, 0xBD, 0x00, 0x03, 0xBC, 0x04, 0xCB, 0xAD, 0xBB, 0xBB, 0xDB, 0x00, 0x01
  .byte 0xDC, 0xBB, 0x90, 0x00, 0xE2, 0xBB, 0xCB, 0x40, 0x03, 0xCC, 0xDB, 0xBC, 0xBB, 0x24, 0xCC, 0xCB
  .byte 0x01, 0x07, 0xCB, 0xC9, 0x01, 0x10, 0xC9, 0xCC, 0x05, 0x77, 0x9C, 0xCC, 0x66, 0x66, 0x01, 0x19
  .byte 0xC0, 0x00, 0x03, 0x08, 0x90, 0xCC, 0xCC, 0x99, 0x02, 0x27, 0xC9, 0x09, 0xCC, 0x10, 0xCC, 0xCD
  .byte 0xD9, 0x02, 0x2F, 0xED, 0x77, 0xC7, 0x9C, 0x05, 0xFD, 0x66, 0x76, 0x9C, 0xDB, 0x00, 0xE3, 0x20
  .byte 0x13, 0x40, 0x00, 0xD0, 0xEF, 0x09, 0x20, 0xAD, 0x9A, 0x00, 0x20, 0x04, 0xAD, 0x9C, 0x0D, 0x20
  .byte 0xCA, 0x00, 0x2B, 0xCD, 0xCC, 0x40, 0xFB, 0x02, 0x4F, 0x99, 0x00, 0x20, 0x88, 0x28, 0x02, 0x00
  .byte 0x22, 0x88, 0x28, 0x28, 0x88, 0x78, 0x78, 0x28, 0x10, 0x78, 0x77, 0x72, 0x00, 0x03, 0x71, 0x28
  .byte 0x78, 0x17, 0x00, 0x71, 0x87, 0x72, 0x17, 0x71, 0x27, 0x72, 0x11, 0x65, 0x71, 0x12, 0x05, 0x03
  .byte 0xFB, 0xD0, 0xBC, 0x03, 0x41, 0xBB, 0x00, 0x06, 0xE0, 0x30, 0x03, 0x00, 0x95, 0x50, 0x03, 0xBC
  .byte 0xAA, 0xAA, 0xBA, 0xAB, 0x10, 0xAA, 0xBB, 0xBB, 0x00, 0x02, 0xBB, 0xBA, 0xBB, 0xCB, 0x00, 0xBC
  .byte 0xBB, 0xDB, 0x9C, 0x99, 0xBB, 0xDB, 0x09, 0xED, 0x01, 0x9E, 0x03, 0xAE, 0x20, 0xB7, 0x9B, 0x00
  .byte 0x06, 0x00, 0x0A, 0xDB, 0x03, 0x08, 0x00, 0xDD, 0xBC, 0xBB, 0xD9, 0x9C, 0xBC, 0xBB, 0xCD, 0x68
  .byte 0xD9, 0x01, 0xC0, 0x00, 0x0E, 0x9C, 0x13, 0xE0, 0xBD, 0xBB, 0x99, 0x10, 0xCB, 0xBD, 0x9D, 0x00
  .byte 0xEC, 0xBB, 0xCB, 0xDB, 0xDB, 0x00, 0xBB, 0xCC, 0xBB, 0x9D, 0xCC, 0x9C, 0xBB, 0xCC, 0x00, 0x99
  .byte 0x9F, 0xCB, 0xCD, 0x9C, 0x9F, 0xBB, 0xDC, 0x00, 0x88, 0x89, 0x99, 0x6C, 0x66, 0x66, 0xCB, 0x9D
  .byte 0x00, 0x66, 0x66, 0xDD, 0xEC, 0x69, 0x66, 0xEF, 0x99, 0x00, 0x69, 0x66, 0xF9, 0x69, 0x66, 0x66
  .byte 0x98, 0x6F, 0x00, 0x66, 0x66, 0x88, 0x67, 0x66, 0x76, 0x88, 0x77, 0x02, 0x77, 0x77, 0x66, 0x66
  .byte 0x97, 0xBB, 0x00, 0x03, 0xDB, 0x00, 0x66, 0x76, 0x97, 0xCC, 0x66, 0x76, 0xD7, 0x9C, 0x00, 0x66
  .byte 0x77, 0xD7, 0x09, 0x76, 0x77, 0xD8, 0x9C, 0x00, 0x77, 0x77, 0xC8, 0xCD, 0x77, 0x77, 0xCD, 0xDC
  .byte 0x58, 0xCB, 0x01, 0xE8, 0x99, 0x01, 0x04, 0x45, 0x53, 0xDD, 0x00, 0x90, 0x1C, 0xD9, 0xBC, 0x99
  .byte 0x03, 0x37, 0x00, 0x01, 0x02, 0x56, 0x9C, 0x0D, 0x01, 0x22, 0x11, 0x27, 0x02, 0xD0, 0x1B, 0x22
  .byte 0x01, 0x7E, 0x1C, 0x00, 0x00, 0xBB, 0x01, 0xCF, 0x04, 0x16, 0xB5, 0x7F, 0xCD, 0xBC, 0x40, 0xBC
  .byte 0x01, 0x2C, 0xCB, 0x00, 0xC0, 0xCC, 0xBC, 0x00, 0x8A, 0x01, 0x65, 0x00, 0x00, 0xC9, 0x00, 0x03
  .byte 0x90, 0x14, 0x52, 0x9D, 0xC0, 0x10, 0x1E, 0x11, 0x97, 0xCB, 0xCB, 0xCB, 0xCC, 0xBC, 0xBC, 0xE0
  .byte 0x20, 0x53, 0x03, 0x95, 0x22, 0xAE, 0x9C, 0x88, 0x88, 0x88, 0xD8, 0x05, 0x9D, 0x89, 0x88, 0x88
  .byte 0xB9, 0x01, 0x1C, 0xB9, 0x01, 0x23, 0x48, 0xBD, 0x00, 0x03, 0xBB, 0xAA, 0x01, 0x25, 0xAB, 0xBA
  .byte 0xBA, 0x94, 0x00, 0x04, 0xBB, 0xBC, 0x00, 0x38, 0xC9, 0x10, 0xFF, 0xCC, 0x8D, 0x4B, 0x88, 0x30
  .byte 0x03, 0xDC, 0x78, 0x04, 0xDA, 0x88, 0x60, 0x03, 0x00, 0x42, 0x05, 0xBB, 0xCC, 0x9D, 0x99, 0x78
  .byte 0x00, 0xE3, 0x87, 0x00, 0x03, 0x44, 0x78, 0x00, 0x08, 0x87, 0x87, 0x87, 0x00, 0x07, 0x78, 0xD8
  .byte 0x80, 0x00, 0x5A, 0xCD, 0x88, 0x99, 0xD9, 0xCC, 0xD9, 0xD0, 0x00, 0xCC, 0xCD, 0x77, 0x87, 0xCD
  .byte 0x9C, 0x77, 0xD8, 0x00, 0xCC, 0x9C, 0x87, 0xCD, 0xCC, 0x9C, 0xD8, 0xCC, 0x2C, 0xCC, 0x9D, 0x00
  .byte 0xDA, 0x0D, 0x00, 0x86, 0x02, 0x07, 0x9D, 0x00, 0x00, 0xCC, 0xDC, 0xC9, 0xDD, 0xCC, 0x9C, 0x09
  .byte 0x00, 0x7E, 0x99, 0xF4, 0xE6, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x02, 0x1A, 0x99
  .byte 0x7E, 0x99, 0xF6, 0x2F, 0x33, 0xDB, 0x10, 0x01, 0x02, 0xDA, 0x02, 0xD7, 0x13, 0xAB, 0xCC, 0x00
  .byte 0xCC, 0xFD, 0xCD, 0xDD, 0xDC, 0xEF, 0xDE, 0xEF, 0x00, 0xFD, 0x99, 0xF9, 0x9E, 0xF9, 0x00, 0x90
  .byte 0x09, 0x81, 0x20, 0x23, 0xCB, 0xDC, 0x09, 0x00, 0xCC, 0xD9, 0x05, 0xA3, 0xAE, 0x01, 0xA7, 0xCD
  .byte 0x00, 0x03, 0xDE, 0x01, 0x7C, 0x11, 0x58, 0x61, 0x83, 0xD0, 0xBB, 0x11, 0x73, 0x99, 0x00, 0x21
  .byte 0xF0, 0x01, 0x26, 0xF7, 0xCC, 0x06, 0x7E, 0x02, 0x64, 0x8D, 0x01, 0x0E, 0xFE, 0x00, 0x90, 0xE0
  .byte 0x8B, 0x20, 0x47, 0x9E, 0x00, 0x03, 0xF0, 0x10, 0x18, 0xF7, 0x57, 0xF0, 0x01, 0xD0, 0x01, 0x00

  .globl gMonPalette_Charizard
gMonPalette_Charizard:
  .incbin "build/graphics/pokemon/charizard/normal_palette.gbapal.lz"

  .globl gMonBackPic_Charizard
gMonBackPic_Charizard:
  .incbin "build/graphics/pokemon/charizard/back.4bpp.lz"

  .globl gMonShinyPalette_Charizard
gMonShinyPalette_Charizard:
  .incbin "build/graphics/pokemon/charizard/shiny_palette.gbapal.lz"

  .globl gMonIcon_Charizard
gMonIcon_Charizard:
	.globl gMonStillFrontPic_Squirtle
	.set gMonStillFrontPic_Squirtle, gMonIcon_Charizard + 0x420
	@ Semantic alias for compressed still-front sprite at 0x08C34128.
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_ICON_ASSET
  .incbin "build/graphics/pokemon/charizard/icon.4bpp"
  @ ANALYSIS: RAW_RANGE offset=0xC34108, size=0x2FC
  .byte 0x00, 0x00, 0x00, 0x90, 0xB0, 0xF8, 0xF8, 0xF8, 0x00, 0x01, 0x01, 0x13, 0x1B, 0x3F, 0x3F, 0x3F
  .byte 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0x80, 0x00, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x03, 0x00
  .byte 0x10, 0x00, 0x08, 0x00, 0x3F, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xE0, 0x01, 0xD0, 0xB0, 0x00, 0x03, 0xBD, 0xF0, 0x16, 0x00, 0x18, 0xEE, 0xEE, 0x00, 0xBC
  .byte 0x01, 0xCC, 0xCC, 0xEE, 0xCB, 0xCC, 0xCC, 0xCC, 0xF0, 0x1D, 0xBF, 0x70, 0x01, 0x0E, 0xF0, 0x12
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF4, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0x10, 0xCD, 0xBB, 0x00, 0xE6, 0xCB, 0x00, 0x02, 0x00, 0xBE, 0xCB, 0x00, 0xD0, 0xB1, 0x00
  .byte 0x03, 0xB9, 0x91, 0x00, 0x03, 0xBA, 0xCC, 0x20, 0x03, 0x00, 0xBE, 0xCC, 0x10, 0xE3, 0x80, 0x20
  .byte 0x01, 0xCD, 0xDD, 0xCC, 0xDC, 0xDB, 0x19, 0xCD, 0x01, 0xCC, 0xEB, 0xA1, 0xD1, 0xCC, 0xFC, 0xAF
  .byte 0x30, 0x03, 0x0A, 0x9C, 0xAF, 0xD1, 0xEC, 0x00, 0x41, 0xDC, 0x00, 0xE8, 0xCC, 0xAB, 0x10, 0x03
  .byte 0xED, 0x00, 0x03, 0xFD, 0x70, 0x03, 0xDC, 0x00, 0x03, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xC1, 0xB7, 0x00, 0x03, 0x10, 0xDB, 0x80, 0x40, 0x14, 0xDD
  .byte 0xED, 0x00, 0xBD, 0xBB, 0xCC, 0x0E, 0x00, 0xBB, 0xCB, 0xCC, 0xED, 0xBB, 0xCC, 0xCC, 0xDD, 0x00
  .byte 0xDB, 0xCE, 0xCC, 0xDD, 0xBD, 0xEC, 0xDC, 0xDD, 0x00, 0x00, 0xE0, 0xBB, 0xCC, 0x00, 0xE0, 0xCB
  .byte 0xCD, 0x00, 0x00, 0xE0, 0xAA, 0xDD, 0x00, 0x00, 0xAD, 0xFF, 0x80, 0x00, 0x29, 0xAA, 0x0E, 0x00
  .byte 0x40, 0xCE, 0x0F, 0x00, 0x02, 0x24, 0x41, 0x0F, 0x40, 0x12, 0xEE, 0x20, 0xFA, 0xCC, 0x00, 0xCC
  .byte 0xDC, 0xDD, 0xDD, 0xDD, 0xDE, 0xFF, 0xAF, 0x04, 0xAA, 0xDD, 0x8A, 0x88, 0xDE, 0x01, 0x08, 0xDD
  .byte 0xFE, 0x00, 0xFF, 0xFF, 0x9F, 0x49, 0xEE, 0x99, 0x88, 0x88, 0x50, 0xDC, 0x00, 0xF3, 0xDD, 0x00
  .byte 0xFB, 0xDD, 0x0F, 0x00, 0x00, 0xA0, 0x00, 0xEE, 0xE0, 0x00, 0x06, 0xCE, 0x00, 0x00, 0xEE, 0xCD
  .byte 0x00, 0xFF, 0xEF, 0xCD, 0xCC, 0xD4, 0xDD, 0xCD, 0xDC, 0xAA, 0x10, 0x7B, 0xE0, 0x00, 0x1F, 0xBE
  .byte 0x00, 0x03, 0xCE, 0x00, 0x20, 0xEB, 0x00, 0xBD, 0x0F, 0x00, 0xEC, 0xDF, 0x0F, 0x00, 0xDD, 0xFE
  .byte 0x00, 0x69, 0x10, 0x33, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xD1, 0xBF, 0x10, 0x03, 0xE0, 0xCD
  .byte 0x10, 0x03, 0x00, 0xF3, 0xE0, 0xBE, 0x00, 0x03, 0x01, 0x96, 0xE0, 0x12, 0x9B, 0x20, 0xCE, 0xCD
  .byte 0x00, 0xE3, 0xDB, 0xEC, 0xDD, 0xDD, 0xCB, 0x04, 0xEC, 0xDD, 0xFD, 0xCC, 0xDE, 0x20, 0x03, 0x0E
  .byte 0xEE, 0x18, 0xDC, 0xDD, 0x0F, 0x00, 0xC3, 0x20, 0x03, 0x0F, 0x24, 0xE3, 0x00, 0xCB, 0x0E, 0x34
  .byte 0xBE, 0xBB, 0x40, 0x32, 0xBC, 0x00, 0xCB, 0x40, 0xE3, 0xBB, 0xCC, 0x40, 0xBE, 0xBB, 0x00, 0xDC
  .byte 0xE0, 0xBB, 0xCB, 0xDC, 0xEE, 0xBB, 0xCC, 0x00, 0xED, 0xCF, 0xCB, 0xCC, 0xFD, 0xED, 0x7E, 0x97
  .byte 0x00, 0x78, 0xEC, 0x7E, 0x67, 0x96, 0xEC, 0x7E, 0x66, 0x00, 0x66, 0xED, 0x79, 0x66, 0x66, 0x9E
  .byte 0x78, 0x66, 0x00, 0x66, 0x8F, 0x79, 0x67, 0x66, 0x88, 0x97, 0x77, 0x02, 0x77, 0x78, 0x97, 0x99
  .byte 0x99, 0x47, 0x01, 0x18, 0x86, 0x00, 0xD4, 0xDD, 0xFE, 0x68, 0xE4, 0xFE, 0x0F, 0x68, 0x00, 0x49
  .byte 0x0F, 0x00, 0x68, 0x47, 0x00, 0x00, 0x69, 0x08, 0xF7, 0x00, 0x00, 0x79, 0x00, 0x03, 0x99, 0xF9
  .byte 0x00, 0x3F, 0x00, 0xFE, 0x00, 0x84, 0xF0, 0xE6, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xBC, 0x20, 0x01, 0xDE, 0x11, 0x62, 0xF0, 0x16, 0x30, 0x01, 0x01, 0xEA, 0x0E, 0xCD, 0x09, 0xCC
  .byte 0xDD, 0xED, 0xDE, 0x00, 0xEC, 0xF0, 0xDE, 0x01, 0xEF, 0x24, 0xF0, 0xDE, 0x01, 0xE7, 0xF0, 0xEF
  .byte 0x50, 0x1F, 0xE0, 0xFC, 0x00, 0xDC, 0xFE, 0xE0, 0xFE, 0xFD, 0x9F, 0xFE, 0x54, 0x00, 0xDF, 0xDD
  .byte 0xDD, 0x45, 0xCD, 0xDC, 0xDD, 0xDF, 0xC0, 0x00, 0x31, 0x00, 0x03, 0xFF, 0xDF, 0xCC, 0xDC, 0x00
  .byte 0xE0, 0x10, 0xDD, 0xDD, 0x77, 0x00, 0xE7, 0x77, 0x79, 0x77, 0x77, 0x40, 0x9E, 0x00, 0x06, 0xED
  .byte 0x77, 0x77, 0x99, 0xDD, 0x7E, 0x00, 0x99, 0x77, 0xDD, 0x9F, 0x77, 0x87, 0xDD, 0x8F, 0x02, 0x88
  .byte 0xFF, 0xED, 0xFF, 0xFF, 0xEE, 0x10, 0xE7, 0x79, 0xAA, 0x00, 0xE7, 0x79, 0x01, 0xD3, 0x98, 0x00
  .byte 0x03, 0xF7, 0x01, 0xD4, 0xDF, 0xBF, 0x02, 0x10, 0xDE, 0x01, 0xEB, 0x11, 0xE3, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF8, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF1, 0x3D
  .byte 0xDD, 0xDD, 0x00, 0x03, 0xFF, 0xED, 0xDF, 0x00, 0x00, 0xFF, 0xF3, 0xAD, 0x00, 0x01, 0xBC, 0x00
  .byte 0x14, 0xDE, 0x01, 0xC3, 0x12, 0xD7, 0xF0, 0x01, 0x00, 0x01, 0xDD, 0xCD, 0x1F, 0x0F, 0x00, 0xFF
  .byte 0xF0, 0xE7, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFE, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x20, 0x01, 0x00, 0x00

  .globl gMonPalette_Squirtle
gMonPalette_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Squirtle
gMonBackPic_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/back.4bpp.lz"

  .globl gMonShinyPalette_Squirtle
gMonShinyPalette_Squirtle:
  .incbin "build/graphics/pokemon/squirtle/shiny_palette.gbapal.lz"

  .globl gMonIcon_Squirtle
gMonIcon_Squirtle:
	.globl gMonStillFrontPic_Wartortle
	.set gMonStillFrontPic_Wartortle, gMonIcon_Squirtle + 0x420
	@ Semantic alias for compressed still-front sprite at 0x08C34AF4.
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_ICON_ASSET
  .incbin "build/graphics/pokemon/squirtle/icon.4bpp"
  @ ANALYSIS: RAW_RANGE offset=0xC34AD4, size=0x39C
  .byte 0x00, 0x00, 0x00, 0x00, 0x80, 0xD0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x07, 0x07
  .byte 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00
  .byte 0x10, 0x00, 0x08, 0x00, 0x3F, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF5, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x50, 0x01, 0xDD, 0x70, 0x0A
  .byte 0xD0, 0xF0, 0x03, 0x89, 0x10, 0x03, 0xEE, 0xDE, 0xED, 0x00, 0x08, 0x21, 0x0E, 0x40, 0x03, 0x04
  .byte 0xE2, 0x0F, 0x00, 0x21, 0x22, 0x10, 0x03, 0xEE, 0x00, 0x00, 0x31, 0x22, 0x22, 0x0E, 0x31, 0x22
  .byte 0x23, 0x0F, 0xFF, 0xF0, 0x55, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xA4, 0xD0, 0x01, 0x1D, 0x00, 0xB7, 0x1D, 0xE2, 0x00, 0x03, 0x22, 0x0E, 0x00
  .byte 0xD0, 0x1D, 0x22, 0xE2, 0xCE, 0x1D, 0x21, 0x22, 0x00, 0xBE, 0xD0, 0x21, 0xE2, 0xBB, 0xD0, 0x11
  .byte 0xE2, 0x00, 0xBB, 0x00, 0x1D, 0xBE, 0xBB, 0x00, 0xDE, 0xCC, 0x68, 0xCC, 0x00, 0x02, 0x00, 0x01
  .byte 0xEC, 0x00, 0x03, 0x3E, 0xCC, 0xCB, 0x00, 0xCC, 0x2E, 0xC1, 0xBB, 0xEC, 0x12, 0x21, 0xBB, 0x00
  .byte 0xEC, 0x84, 0x21, 0xBB, 0xFC, 0xF1, 0xCD, 0x1E, 0x00, 0x23, 0x13, 0x0F, 0x1D, 0x31, 0x13, 0x0F
  .byte 0xEC, 0x00, 0x11, 0xE1, 0x0E, 0xDC, 0xFF, 0xEF, 0xFE, 0xCC, 0x00, 0xDC, 0xDD, 0xEE, 0xDC, 0xCE
  .byte 0xDD, 0xED, 0xEC, 0x03, 0xCD, 0xDD, 0xED, 0xCC, 0xFC, 0xDD, 0x11, 0x1E, 0xA0, 0x01, 0xBC, 0x00
  .byte 0x6E, 0x00, 0x11, 0x14, 0x10, 0x03, 0x10, 0x0B, 0xE0, 0x01, 0xD0, 0xDD, 0x00, 0xEE, 0x00, 0x1D
  .byte 0x11, 0x22, 0xD0, 0x11, 0x11, 0x07, 0x21, 0x1D, 0x11, 0x21, 0x2D, 0xF0, 0x20, 0x30, 0x37, 0x00
  .byte 0xB2, 0x3C, 0x00, 0xF2, 0xF0, 0x1A, 0xF0, 0x01, 0xF0, 0x01, 0xB0, 0x01, 0x3D, 0xEE, 0x04, 0xBB
  .byte 0x00, 0xD0, 0x1E, 0xBF, 0x00, 0x03, 0xF4, 0x00, 0x00, 0x00, 0xBE, 0x14, 0x00, 0x00, 0xE0, 0xF1
  .byte 0x00, 0x10, 0x00, 0xF0, 0xCC, 0x30, 0x03, 0x00, 0xEF, 0xBB, 0xCC, 0x48, 0xDD, 0x00, 0xF3, 0xCC
  .byte 0xFC, 0x00, 0xFC, 0x4F, 0xCC, 0xEC, 0x00, 0xFC, 0x94, 0xDC, 0xCC, 0x4F, 0x99, 0xFC, 0xFF, 0x08
  .byte 0x44, 0x99, 0x1F, 0xEE, 0x01, 0xFB, 0xDD, 0xDD, 0xDD, 0x00, 0xFC, 0xDF, 0xDD, 0xFD, 0x41, 0xDE
  .byte 0xDD, 0xFE, 0x00, 0x94, 0xDE, 0xDD, 0x7E, 0x99, 0xDD, 0xED, 0x16, 0x00, 0xE9, 0xDD, 0xEE, 0xE6
  .byte 0xDE, 0xED, 0xAE, 0xDE, 0x00, 0xDD, 0xFF, 0xAA, 0xDF, 0xFD, 0xAF, 0xA8, 0xDF, 0x88, 0x42, 0x2B
  .byte 0x1D, 0x77, 0x00, 0x00, 0xD1, 0xF7, 0xDF, 0x11, 0x00, 0xFF, 0x1F, 0x75, 0x1F, 0xDD, 0xFD, 0x51
  .byte 0xF5, 0x00, 0xDC, 0xDD, 0x1F, 0x66, 0xCD, 0xDD, 0x1F, 0x71, 0x08, 0x1D, 0x11, 0xE2, 0x22, 0x30
  .byte 0x03, 0x22, 0xFE, 0xE2, 0x00, 0x11, 0x22, 0x32, 0x22, 0x1E, 0x21, 0x22, 0x22, 0x00, 0xEE, 0x21
  .byte 0x22, 0x2F, 0x3E, 0x2E, 0x22, 0xF7, 0x15, 0xE2, 0xE3, 0x22, 0x10, 0xE3, 0xF3, 0x00, 0x03, 0x3F
  .byte 0x01, 0x30, 0x02, 0x33, 0xD3, 0x00, 0x00, 0x32, 0xE3, 0x10, 0x03, 0xEE, 0x41, 0x00, 0x00, 0x1E
  .byte 0x0E, 0xE2, 0x22, 0x22, 0x03, 0xF0, 0xD0, 0xF8, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0x20, 0x01, 0xE0, 0xFF, 0xFF, 0x00, 0xEE, 0xFE, 0x00, 0x00, 0xA0, 0xFF, 0x00, 0x00, 0x20, 0xAF
  .byte 0x88, 0x20, 0x03, 0xF0, 0x8A, 0x88, 0x00, 0xDF, 0x00, 0x8A, 0x88, 0xE0, 0xCD, 0x8A, 0x88, 0xDE
  .byte 0xCC, 0x00, 0x8A, 0x88, 0xFF, 0x8A, 0x88, 0xFA, 0xAF, 0x88, 0x00, 0x88, 0xEE, 0x8A, 0x88, 0xE8
  .byte 0xCE, 0x89, 0x88, 0x00, 0xE8, 0xEC, 0x98, 0x88, 0x1E, 0xCE, 0x98, 0x88, 0x01, 0xEA, 0xCC, 0x88
  .byte 0xAA, 0x88, 0xCE, 0xA8, 0x00, 0x14, 0x00, 0xEF, 0xDD, 0xED, 0x61, 0xDE, 0xDD, 0xED, 0x11, 0x00
  .byte 0xDC, 0xDD, 0xFD, 0x17, 0xE1, 0xDD, 0xFD, 0xE6, 0x00, 0xEE, 0xDD, 0xFD, 0xCE, 0xDC, 0xDD, 0xEF
  .byte 0xCC, 0x00, 0xEE, 0xFF, 0xCF, 0xCC, 0xFB, 0x99, 0xDE, 0xDC, 0x00, 0xF6, 0xF2, 0xFF, 0x22, 0xBE
  .byte 0xFE, 0xEC, 0xEF, 0x00, 0xBE, 0xEC, 0xDC, 0xDE, 0xBE, 0xDC, 0xDD, 0xDD, 0xA0, 0x10, 0x03, 0xBD
  .byte 0x70, 0x03, 0xED, 0xE2, 0x22, 0x2E, 0xE3, 0x88, 0x00, 0x02, 0xF3, 0x2F, 0x3E, 0x00, 0x03, 0xEE
  .byte 0x3E, 0xF3, 0x00, 0x2F, 0x2E, 0x32, 0x0E, 0x2F, 0x23, 0x32, 0x0F, 0x03, 0x2E, 0x22, 0x32, 0x0F
  .byte 0x22, 0x23, 0x01, 0x0C, 0xF0, 0x01, 0xE8, 0xF0, 0x01, 0xF0, 0x01, 0x90, 0x01, 0xDE, 0x00, 0xE6
  .byte 0xBD, 0x00, 0x00, 0x3A, 0x1E, 0xEB, 0x00, 0x07, 0x00, 0x03, 0x21, 0xF7, 0xCF, 0x00, 0x03, 0xF0
  .byte 0xA0, 0x10, 0x1C, 0xCB, 0x00, 0xE3, 0xCB, 0xCC, 0x8D, 0x98, 0xE1, 0x00, 0xDC, 0xAD, 0x98, 0xD1
  .byte 0xDD, 0xAD, 0x89, 0xDE, 0x00, 0xDD, 0xFD, 0x8A, 0xDC, 0xFD, 0x0F, 0x9A, 0xFB, 0x10, 0x0F, 0x00
  .byte 0xA0, 0x12, 0xC3, 0x8A, 0xA8, 0x88, 0x88, 0x49, 0x88, 0x10, 0x03, 0x88, 0x8A, 0x40, 0x03, 0xA8
  .byte 0xAA, 0x30, 0x10, 0x40, 0x8A, 0x10, 0x01, 0x98, 0x9E, 0x99, 0xDE, 0xDD, 0x88, 0x80, 0x60, 0x03
  .byte 0xEA, 0xED, 0xAA, 0xAA, 0x99, 0xFF, 0x98, 0x28, 0x99, 0x99, 0x60, 0x01, 0xCD, 0x01, 0x18, 0xDD
  .byte 0xDC, 0xDD, 0x40, 0xFE, 0x01, 0x23, 0x2F, 0xFE, 0xFF, 0xFF, 0x22, 0xFF, 0x00, 0x72, 0x37, 0x32
  .byte 0xE9, 0x72, 0x23, 0x23, 0x2E, 0x02, 0x37, 0x32, 0xF3, 0xE2, 0x33, 0xE3, 0x00, 0xE3, 0xF3, 0x09
  .byte 0x00, 0x32, 0x33, 0x0E, 0x00, 0x03, 0x0F, 0x00, 0x00, 0x0A, 0x3F, 0x00, 0x32, 0x00, 0x74, 0x12
  .byte 0x0F, 0xF4, 0x58, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0x70, 0x01, 0xEE, 0xA9, 0x99, 0x99, 0x00, 0xCF, 0xEE, 0x9E, 0x99, 0xCF, 0xCC, 0xED, 0xFF, 0x40
  .byte 0xF0, 0x03, 0xFC, 0x00, 0xFF, 0xDE, 0xDD, 0xE0, 0xBB, 0x00, 0xCC, 0xCC, 0xBE, 0xDE, 0xEC, 0xCD
  .byte 0xEF, 0xFD, 0x00, 0xDF, 0xFF, 0x99, 0x99, 0xE9, 0x33, 0x99, 0xA9, 0xD6, 0x00, 0xD9, 0x02, 0x41
  .byte 0xDD, 0x00, 0xB4, 0xED, 0x00, 0x03, 0x10, 0x07, 0xFD, 0x83, 0x40, 0xC3, 0x33, 0xF3, 0x0F, 0x00
  .byte 0xFF, 0xF0, 0xCC, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xC0, 0xF0, 0x01, 0x20, 0x01

  .globl gMonPalette_Wartortle
gMonPalette_Wartortle:
  .incbin "build/graphics/pokemon/wartortle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wartortle
gMonBackPic_Wartortle:
  .incbin "build/graphics/pokemon/wartortle/back.4bpp.lz"

  .globl gMonShinyPalette_Wartortle
gMonShinyPalette_Wartortle:
  .incbin "build/graphics/pokemon/wartortle/shiny_palette.gbapal.lz"

	.globl gMonIcon_Wartortle
gMonIcon_Wartortle: @ 0x08C351F4 [008]
  .incbin "build/graphics/pokemon/wartortle/icon.4bpp"
	@ analyzed canonical ROM range 0x08C355F4-0x08C35B17
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Wartortle
gMonFootprint_Wartortle:
	.incbin "build/graphics/pokemon/wartortle/footprint.1bpp"
	.globl gMonStillFrontPic_Blastoise
gMonStillFrontPic_Blastoise:
	.incbin "build/graphics/pokemon/blastoise/still_front.4bpp.lz"
  .globl gMonPalette_Blastoise
gMonPalette_Blastoise:
  .incbin "build/graphics/pokemon/blastoise/normal_palette.gbapal.lz"

  .globl gMonBackPic_Blastoise
gMonBackPic_Blastoise:
  .incbin "build/graphics/pokemon/blastoise/back.4bpp.lz"

  .globl gMonShinyPalette_Blastoise
gMonShinyPalette_Blastoise:
  .incbin "build/graphics/pokemon/blastoise/shiny_palette.gbapal.lz"

	.globl gMonIcon_Blastoise
gMonIcon_Blastoise: @ 0x08C35F84 [009]
  .incbin "build/graphics/pokemon/blastoise/icon.4bpp"
	@ analyzed canonical ROM range 0x08C36384-0x08C36603
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Blastoise
gMonFootprint_Blastoise:
	.incbin "build/graphics/pokemon/blastoise/footprint.1bpp"
	.globl gMonStillFrontPic_Caterpie
gMonStillFrontPic_Caterpie:
	.incbin "build/graphics/pokemon/caterpie/still_front.4bpp.lz"
  .globl gMonPalette_Caterpie
gMonPalette_Caterpie:
  .incbin "build/graphics/pokemon/caterpie/normal_palette.gbapal.lz"

  .globl gMonBackPic_Caterpie
gMonBackPic_Caterpie:
  .incbin "build/graphics/pokemon/caterpie/back.4bpp.lz"

  .globl gMonShinyPalette_Caterpie
gMonShinyPalette_Caterpie:
  .incbin "build/graphics/pokemon/caterpie/shiny_palette.gbapal.lz"

	.globl gMonIcon_Caterpie
gMonIcon_Caterpie: @ 0x08C368DC [010]
  .incbin "build/graphics/pokemon/caterpie/icon.4bpp"
	@ analyzed canonical ROM range 0x08C36CDC-0x08C36F13
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Caterpie
gMonFootprint_Caterpie:
	.incbin "build/graphics/pokemon/caterpie/footprint.1bpp"
	.globl gMonStillFrontPic_Metapod
gMonStillFrontPic_Metapod:
	.incbin "build/graphics/pokemon/metapod/still_front.4bpp.lz"
  .globl gMonPalette_Metapod
gMonPalette_Metapod:
  .incbin "build/graphics/pokemon/metapod/normal_palette.gbapal.lz"
  .space 0x1, 0x00

  .globl gMonBackPic_Metapod
gMonBackPic_Metapod:
  .incbin "build/graphics/pokemon/metapod/back.4bpp.lz"

  .globl gMonShinyPalette_Metapod
gMonShinyPalette_Metapod:
  .incbin "build/graphics/pokemon/metapod/shiny_palette.gbapal.lz"
  .space 0x1, 0x00
	.globl gMonIcon_Metapod
gMonIcon_Metapod: @ 0x08C37194 [011]
  .incbin "build/graphics/pokemon/metapod/icon.4bpp"
	@ analyzed canonical ROM range 0x08C37594-0x08C37913
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Metapod
gMonFootprint_Metapod:
	.incbin "build/graphics/pokemon/metapod/footprint.1bpp"
	.globl gMonStillFrontPic_Butterfree
gMonStillFrontPic_Butterfree:
	.incbin "build/graphics/pokemon/butterfree/still_front.4bpp.lz"
  .globl gMonPalette_Butterfree
gMonPalette_Butterfree:
  .incbin "build/graphics/pokemon/butterfree/normal_palette.gbapal.lz"

  .globl gMonBackPic_Butterfree
gMonBackPic_Butterfree:
  .incbin "build/graphics/pokemon/butterfree/back.4bpp.lz"

  .globl gMonShinyPalette_Butterfree
gMonShinyPalette_Butterfree:
  .incbin "build/graphics/pokemon/butterfree/shiny_palette.gbapal.lz"

	.globl gMonIcon_Butterfree
gMonIcon_Butterfree: @ 0x08C37D74 [012]
  .incbin "build/graphics/pokemon/butterfree/icon.4bpp"
	@ analyzed canonical ROM range 0x08C38174-0x08C383D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Butterfree
gMonFootprint_Butterfree:
	.incbin "build/graphics/pokemon/butterfree/footprint.1bpp"
	.globl gMonStillFrontPic_Weedle
gMonStillFrontPic_Weedle:
	.incbin "build/graphics/pokemon/weedle/still_front.4bpp.lz"
  .globl gMonPalette_Weedle
gMonPalette_Weedle:
  .incbin "build/graphics/pokemon/weedle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Weedle
gMonBackPic_Weedle:
  .incbin "build/graphics/pokemon/weedle/back.4bpp.lz"

  .globl gMonShinyPalette_Weedle
gMonShinyPalette_Weedle:
  .incbin "build/graphics/pokemon/weedle/shiny_palette.gbapal.lz"

	.globl gMonIcon_Weedle
gMonIcon_Weedle: @ 0x08C3868C [013]
  .incbin "build/graphics/pokemon/weedle/icon.4bpp"
	@ analyzed canonical ROM range 0x08C38A8C-0x08C38CF7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Weedle
gMonFootprint_Weedle:
	.incbin "build/graphics/pokemon/weedle/footprint.1bpp"
	.globl gMonStillFrontPic_Kakuna
gMonStillFrontPic_Kakuna:
	.incbin "build/graphics/pokemon/kakuna/still_front.4bpp.lz"
  .globl gMonPalette_Kakuna
gMonPalette_Kakuna:
  .incbin "build/graphics/pokemon/kakuna/normal_palette.gbapal.lz"
  .space 0x3, 0x00

  .globl gMonBackPic_Kakuna
gMonBackPic_Kakuna:
  .incbin "build/graphics/pokemon/kakuna/back.4bpp.lz"

  .globl gMonShinyPalette_Kakuna
gMonShinyPalette_Kakuna:
  .incbin "build/graphics/pokemon/kakuna/shiny_palette.gbapal.lz"
  .space 0x3, 0x00
	.globl gMonIcon_Kakuna
gMonIcon_Kakuna: @ 0x08C38FC4 [014]
  .incbin "build/graphics/pokemon/kakuna/icon.4bpp"
	@ analyzed canonical ROM range 0x08C393C4-0x08C397F3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kakuna
gMonFootprint_Kakuna:
	.incbin "build/graphics/pokemon/kakuna/footprint.1bpp"
	.globl gMonStillFrontPic_Beedrill
gMonStillFrontPic_Beedrill:
	.incbin "build/graphics/pokemon/beedrill/still_front.4bpp.lz"
  .globl gMonPalette_Beedrill
gMonPalette_Beedrill:
  .incbin "build/graphics/pokemon/beedrill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Beedrill
gMonBackPic_Beedrill:
  .incbin "build/graphics/pokemon/beedrill/back.4bpp.lz"

  .globl gMonShinyPalette_Beedrill
gMonShinyPalette_Beedrill:
  .incbin "build/graphics/pokemon/beedrill/shiny_palette.gbapal.lz"

	.globl gMonIcon_Beedrill
gMonIcon_Beedrill: @ 0x08C39BB8 [015]
  .incbin "build/graphics/pokemon/beedrill/icon.4bpp"
	@ analyzed canonical ROM range 0x08C39FB8-0x08C3A2C3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Beedrill
gMonFootprint_Beedrill:
	.incbin "build/graphics/pokemon/beedrill/footprint.1bpp"
	.globl gMonStillFrontPic_Pidgey
gMonStillFrontPic_Pidgey:
	.incbin "build/graphics/pokemon/pidgey/still_front.4bpp.lz"
  .globl gMonPalette_Pidgey
gMonPalette_Pidgey:
  .incbin "build/graphics/pokemon/pidgey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pidgey
gMonBackPic_Pidgey:
  .incbin "build/graphics/pokemon/pidgey/back.4bpp.lz"

  .globl gMonShinyPalette_Pidgey
gMonShinyPalette_Pidgey:
  .incbin "build/graphics/pokemon/pidgey/shiny_palette.gbapal.lz"

	.globl gMonIcon_Pidgey
gMonIcon_Pidgey: @ 0x08C3A668 [016]
  .incbin "build/graphics/pokemon/pidgey/icon.4bpp"
	@ analyzed canonical ROM range 0x08C3AA68-0x08C3ADFB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Pidgey
gMonFootprint_Pidgey:
	.incbin "build/graphics/pokemon/pidgey/footprint.1bpp"
	.globl gMonStillFrontPic_Pidgeotto
gMonStillFrontPic_Pidgeotto:
	.incbin "build/graphics/pokemon/pidgeotto/still_front.4bpp.lz"
  .globl gMonPalette_Pidgeotto
gMonPalette_Pidgeotto:
  .incbin "build/graphics/pokemon/pidgeotto/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pidgeotto
gMonBackPic_Pidgeotto:
  .incbin "build/graphics/pokemon/pidgeotto/back.4bpp.lz"

  .globl gMonShinyPalette_Pidgeotto
gMonShinyPalette_Pidgeotto:
  .incbin "build/graphics/pokemon/pidgeotto/shiny_palette.gbapal.lz"

	.globl gMonIcon_Pidgeotto
gMonIcon_Pidgeotto: @ 0x08C3B198 [017]
  .incbin "build/graphics/pokemon/pidgeotto/icon.4bpp"
	@ analyzed canonical ROM range 0x08C3B598-0x08C3BAB3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Pidgeotto
gMonFootprint_Pidgeotto:
	.incbin "build/graphics/pokemon/pidgeotto/footprint.1bpp"
	.globl gMonStillFrontPic_Pidgeot
gMonStillFrontPic_Pidgeot:
	.incbin "build/graphics/pokemon/pidgeot/still_front.4bpp.lz"
  .globl gMonPalette_Pidgeot
gMonPalette_Pidgeot:
  .incbin "build/graphics/pokemon/pidgeot/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pidgeot
gMonBackPic_Pidgeot:
  .incbin "build/graphics/pokemon/pidgeot/back.4bpp.lz"

  .globl gMonShinyPalette_Pidgeot
gMonShinyPalette_Pidgeot:
  .incbin "build/graphics/pokemon/pidgeot/shiny_palette.gbapal.lz"

	.globl gMonIcon_Pidgeot
gMonIcon_Pidgeot: @ 0x08C3BE8C [018]
  .incbin "build/graphics/pokemon/pidgeot/icon.4bpp"
	@ analyzed canonical ROM range 0x08C3C28C-0x08C3C4F7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Pidgeot
gMonFootprint_Pidgeot:
	.incbin "build/graphics/pokemon/pidgeot/footprint.1bpp"
	.globl gMonStillFrontPic_Rattata
gMonStillFrontPic_Rattata:
	.incbin "build/graphics/pokemon/rattata/still_front.4bpp.lz"
  .globl gMonPalette_Rattata
gMonPalette_Rattata:
  .incbin "build/graphics/pokemon/rattata/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rattata
gMonBackPic_Rattata:
  .incbin "build/graphics/pokemon/rattata/back.4bpp.lz"

  .globl gMonShinyPalette_Rattata
gMonShinyPalette_Rattata:
  .incbin "build/graphics/pokemon/rattata/shiny_palette.gbapal.lz"

	.globl gMonIcon_Rattata
gMonIcon_Rattata: @ 0x08C3C824 [019]
  .incbin "build/graphics/pokemon/rattata/icon.4bpp"
	@ analyzed canonical ROM range 0x08C3CC24-0x08C3CFCB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Rattata
gMonFootprint_Rattata:
	.incbin "build/graphics/pokemon/rattata/footprint.1bpp"
	.globl gMonStillFrontPic_Raticate
gMonStillFrontPic_Raticate:
	.incbin "build/graphics/pokemon/raticate/still_front.4bpp.lz"
  .globl gMonPalette_Raticate
gMonPalette_Raticate:
  .incbin "build/graphics/pokemon/raticate/normal_palette.gbapal.lz"

  .globl gMonBackPic_Raticate
gMonBackPic_Raticate:
  .incbin "build/graphics/pokemon/raticate/back.4bpp.lz"

  .globl gMonShinyPalette_Raticate
gMonShinyPalette_Raticate:
  .incbin "build/graphics/pokemon/raticate/shiny_palette.gbapal.lz"

	.globl gMonIcon_Raticate
gMonIcon_Raticate: @ 0x08C3D34C [020]
  .incbin "build/graphics/pokemon/raticate/icon.4bpp"
	@ analyzed canonical ROM range 0x08C3D74C-0x08C3D9F3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Raticate
gMonFootprint_Raticate:
	.incbin "build/graphics/pokemon/raticate/footprint.1bpp"
	.globl gMonStillFrontPic_Spearow
gMonStillFrontPic_Spearow:
	.incbin "build/graphics/pokemon/spearow/still_front.4bpp.lz"
  .globl gMonPalette_Spearow
gMonPalette_Spearow:
  .incbin "build/graphics/pokemon/spearow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spearow
gMonBackPic_Spearow:
  .incbin "build/graphics/pokemon/spearow/back.4bpp.lz"

  .globl gMonShinyPalette_Spearow
gMonShinyPalette_Spearow:
  .incbin "build/graphics/pokemon/spearow/shiny_palette.gbapal.lz"

	.globl gMonIcon_Spearow
gMonIcon_Spearow: @ 0x08C3DD20 [021]
  .incbin "build/graphics/pokemon/spearow/icon.4bpp"
	@ analyzed canonical ROM range 0x08C3E120-0x08C3E5D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Spearow
gMonFootprint_Spearow:
	.incbin "build/graphics/pokemon/spearow/footprint.1bpp"
	.globl gMonStillFrontPic_Fearow
gMonStillFrontPic_Fearow:
	.incbin "build/graphics/pokemon/fearow/still_front.4bpp.lz"
  .globl gMonPalette_Fearow
gMonPalette_Fearow:
  .incbin "build/graphics/pokemon/fearow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Fearow
gMonBackPic_Fearow:
  .incbin "build/graphics/pokemon/fearow/back.4bpp.lz"

  .globl gMonShinyPalette_Fearow
gMonShinyPalette_Fearow:
  .incbin "build/graphics/pokemon/fearow/shiny_palette.gbapal.lz"

	.globl gMonIcon_Fearow
gMonIcon_Fearow: @ 0x08C3E91C [022]
  .incbin "build/graphics/pokemon/fearow/icon.4bpp"
	@ analyzed canonical ROM range 0x08C3ED1C-0x08C3F03B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Fearow
gMonFootprint_Fearow:
	.incbin "build/graphics/pokemon/fearow/footprint.1bpp"
	.globl gMonStillFrontPic_Ekans
gMonStillFrontPic_Ekans:
	.incbin "build/graphics/pokemon/ekans/still_front.4bpp.lz"
  .globl gMonPalette_Ekans
gMonPalette_Ekans:
  .incbin "build/graphics/pokemon/ekans/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ekans
gMonBackPic_Ekans:
  .incbin "build/graphics/pokemon/ekans/back.4bpp.lz"

  .globl gMonShinyPalette_Ekans
gMonShinyPalette_Ekans:
  .incbin "build/graphics/pokemon/ekans/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ekans
gMonIcon_Ekans: @ 0x08C3F37C [023]
  .incbin "build/graphics/pokemon/ekans/icon.4bpp"
	@ analyzed canonical ROM range 0x08C3F77C-0x08C3FBE7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ekans
gMonFootprint_Ekans:
	.incbin "build/graphics/pokemon/ekans/footprint.1bpp"
	.globl gMonStillFrontPic_Arbok
gMonStillFrontPic_Arbok:
	.incbin "build/graphics/pokemon/arbok/still_front.4bpp.lz"
  .globl gMonPalette_Arbok
gMonPalette_Arbok:
  .incbin "build/graphics/pokemon/arbok/normal_palette.gbapal.lz"

  .globl gMonBackPic_Arbok
gMonBackPic_Arbok:
  .incbin "build/graphics/pokemon/arbok/back.4bpp.lz"

  .globl gMonShinyPalette_Arbok
gMonShinyPalette_Arbok:
  .incbin "build/graphics/pokemon/arbok/shiny_palette.gbapal.lz"

	.globl gMonIcon_Arbok
gMonIcon_Arbok: @ 0x08C3FED8 [024]
  .incbin "build/graphics/pokemon/arbok/icon.4bpp"
	@ analyzed canonical ROM range 0x08C402D8-0x08C405C7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Arbok
gMonFootprint_Arbok:
	.incbin "build/graphics/pokemon/arbok/footprint.1bpp"
	.globl gMonStillFrontPic_Pikachu
gMonStillFrontPic_Pikachu:
	.incbin "build/graphics/pokemon/pikachu/still_front.4bpp.lz"
  .globl gMonPalette_Pikachu
gMonPalette_Pikachu:
  .incbin "build/graphics/pokemon/pikachu/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Pikachu
gMonBackPic_Pikachu:
  .incbin "build/graphics/pokemon/pikachu/back.4bpp.lz"

  .globl gMonShinyPalette_Pikachu
gMonShinyPalette_Pikachu:
  .incbin "build/graphics/pokemon/pikachu/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Pikachu
gMonIcon_Pikachu: @ 0x08C408F0 [025]
  .incbin "build/graphics/pokemon/pikachu/icon.4bpp"
	@ analyzed canonical ROM range 0x08C40CF0-0x08C410BB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Pikachu
gMonFootprint_Pikachu:
	.incbin "build/graphics/pokemon/pikachu/footprint.1bpp"
	.globl gMonStillFrontPic_Raichu
gMonStillFrontPic_Raichu:
	.incbin "build/graphics/pokemon/raichu/still_front.4bpp.lz"
  .globl gMonPalette_Raichu
gMonPalette_Raichu:
  .incbin "build/graphics/pokemon/raichu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Raichu
gMonBackPic_Raichu:
  .incbin "build/graphics/pokemon/raichu/back.4bpp.lz"

  .globl gMonShinyPalette_Raichu
gMonShinyPalette_Raichu:
  .incbin "build/graphics/pokemon/raichu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Raichu
gMonIcon_Raichu: @ 0x08C4142C [026]
  .incbin "build/graphics/pokemon/raichu/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4182C-0x08C41B0B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Raichu
gMonFootprint_Raichu:
	.incbin "build/graphics/pokemon/raichu/footprint.1bpp"
	.globl gMonStillFrontPic_Sandshrew
gMonStillFrontPic_Sandshrew:
	.incbin "build/graphics/pokemon/sandshrew/still_front.4bpp.lz"
  .globl gMonPalette_Sandshrew
gMonPalette_Sandshrew:
  .incbin "build/graphics/pokemon/sandshrew/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Sandshrew
gMonBackPic_Sandshrew:
  .incbin "build/graphics/pokemon/sandshrew/back.4bpp.lz"

  .globl gMonShinyPalette_Sandshrew
gMonShinyPalette_Sandshrew:
  .incbin "build/graphics/pokemon/sandshrew/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Sandshrew
gMonIcon_Sandshrew: @ 0x08C41E84 [027]
  .incbin "build/graphics/pokemon/sandshrew/icon.4bpp"
	@ analyzed canonical ROM range 0x08C42284-0x08C4268F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sandshrew
gMonFootprint_Sandshrew:
	.incbin "build/graphics/pokemon/sandshrew/footprint.1bpp"
	.globl gMonStillFrontPic_Sandslash
gMonStillFrontPic_Sandslash:
	.incbin "build/graphics/pokemon/sandslash/still_front.4bpp.lz"
  .globl gMonPalette_Sandslash
gMonPalette_Sandslash:
  .incbin "build/graphics/pokemon/sandslash/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sandslash
gMonBackPic_Sandslash:
  .incbin "build/graphics/pokemon/sandslash/back.4bpp.lz"

  .globl gMonShinyPalette_Sandslash
gMonShinyPalette_Sandslash:
  .incbin "build/graphics/pokemon/sandslash/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sandslash
gMonIcon_Sandslash: @ 0x08C42AFC [028]
  .incbin "build/graphics/pokemon/sandslash/icon.4bpp"
	@ analyzed canonical ROM range 0x08C42EFC-0x08C43193
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sandslash
gMonFootprint_Sandslash:
	.incbin "build/graphics/pokemon/sandslash/footprint.1bpp"
	.globl gMonStillFrontPic_NidoranF
gMonStillFrontPic_NidoranF:
	.incbin "build/graphics/pokemon/nidoran_f/still_front.4bpp.lz"
  .globl gMonPalette_NidoranF
gMonPalette_NidoranF:
  .incbin "build/graphics/pokemon/nidoran_f/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_NidoranF
gMonBackPic_NidoranF:
  .incbin "build/graphics/pokemon/nidoran_f/back.4bpp.lz"

  .globl gMonShinyPalette_NidoranF
gMonShinyPalette_NidoranF:
  .incbin "build/graphics/pokemon/nidoran_f/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_NidoranF
gMonIcon_NidoranF: @ 0x08C434BC [029]
  .incbin "build/graphics/pokemon/nidoran_f/icon.4bpp"
	@ analyzed canonical ROM range 0x08C438BC-0x08C43C07
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_NidoranF
gMonFootprint_NidoranF:
	.incbin "build/graphics/pokemon/nidoran_f/footprint.1bpp"
	.globl gMonStillFrontPic_Nidorina
gMonStillFrontPic_Nidorina:
	.incbin "build/graphics/pokemon/nidorina/still_front.4bpp.lz"
  .globl gMonPalette_Nidorina
gMonPalette_Nidorina:
  .incbin "build/graphics/pokemon/nidorina/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nidorina
gMonBackPic_Nidorina:
  .incbin "build/graphics/pokemon/nidorina/back.4bpp.lz"

  .globl gMonShinyPalette_Nidorina
gMonShinyPalette_Nidorina:
  .incbin "build/graphics/pokemon/nidorina/shiny_palette.gbapal.lz"

	.globl gMonIcon_Nidorina
gMonIcon_Nidorina: @ 0x08C43FEC [030]
  .incbin "build/graphics/pokemon/nidorina/icon.4bpp"
	@ analyzed canonical ROM range 0x08C443EC-0x08C44897
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Nidorina
gMonFootprint_Nidorina:
	.incbin "build/graphics/pokemon/nidorina/footprint.1bpp"
	.globl gMonStillFrontPic_Nidoqueen
gMonStillFrontPic_Nidoqueen:
	.incbin "build/graphics/pokemon/nidoqueen/still_front.4bpp.lz"
  .globl gMonPalette_Nidoqueen
gMonPalette_Nidoqueen:
  .incbin "build/graphics/pokemon/nidoqueen/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nidoqueen
gMonBackPic_Nidoqueen:
  .incbin "build/graphics/pokemon/nidoqueen/back.4bpp.lz"

  .globl gMonShinyPalette_Nidoqueen
gMonShinyPalette_Nidoqueen:
  .incbin "build/graphics/pokemon/nidoqueen/shiny_palette.gbapal.lz"

	.globl gMonIcon_Nidoqueen
gMonIcon_Nidoqueen: @ 0x08C44CAC [031]
  .incbin "build/graphics/pokemon/nidoqueen/icon.4bpp"
	@ analyzed canonical ROM range 0x08C450AC-0x08C4539B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Nidoqueen
gMonFootprint_Nidoqueen:
	.incbin "build/graphics/pokemon/nidoqueen/footprint.1bpp"
	.globl gMonStillFrontPic_NidoranM
gMonStillFrontPic_NidoranM:
	.incbin "build/graphics/pokemon/nidoran_m/still_front.4bpp.lz"
  .globl gMonPalette_NidoranM
gMonPalette_NidoranM:
  .incbin "build/graphics/pokemon/nidoran_m/normal_palette.gbapal.lz"

  .globl gMonBackPic_NidoranM
gMonBackPic_NidoranM:
  .incbin "build/graphics/pokemon/nidoran_m/back.4bpp.lz"

  .globl gMonShinyPalette_NidoranM
gMonShinyPalette_NidoranM:
  .incbin "build/graphics/pokemon/nidoran_m/shiny_palette.gbapal.lz"

	.globl gMonIcon_NidoranM
gMonIcon_NidoranM: @ 0x08C45720 [032]
  .incbin "build/graphics/pokemon/nidoran_m/icon.4bpp"
	@ analyzed canonical ROM range 0x08C45B20-0x08C45ED3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_NidoranM
gMonFootprint_NidoranM:
	.incbin "build/graphics/pokemon/nidoran_m/footprint.1bpp"
	.globl gMonStillFrontPic_Nidorino
gMonStillFrontPic_Nidorino:
	.incbin "build/graphics/pokemon/nidorino/still_front.4bpp.lz"
  .globl gMonPalette_Nidorino
gMonPalette_Nidorino:
  .incbin "build/graphics/pokemon/nidorino/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nidorino
gMonBackPic_Nidorino:
  .incbin "build/graphics/pokemon/nidorino/back.4bpp.lz"

  .globl gMonShinyPalette_Nidorino
gMonShinyPalette_Nidorino:
  .incbin "build/graphics/pokemon/nidorino/shiny_palette.gbapal.lz"

	.globl gMonIcon_Nidorino
gMonIcon_Nidorino: @ 0x08C462E0 [033]
  .incbin "build/graphics/pokemon/nidorino/icon.4bpp"
	@ analyzed canonical ROM range 0x08C466E0-0x08C46BF7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Nidorino
gMonFootprint_Nidorino:
	.incbin "build/graphics/pokemon/nidorino/footprint.1bpp"
	.globl gMonStillFrontPic_Nidoking
gMonStillFrontPic_Nidoking:
	.incbin "build/graphics/pokemon/nidoking/still_front.4bpp.lz"
  .globl gMonPalette_Nidoking
gMonPalette_Nidoking:
  .incbin "build/graphics/pokemon/nidoking/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Nidoking
gMonBackPic_Nidoking:
  .incbin "build/graphics/pokemon/nidoking/back.4bpp.lz"

  .globl gMonShinyPalette_Nidoking
gMonShinyPalette_Nidoking:
  .incbin "build/graphics/pokemon/nidoking/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Nidoking
gMonIcon_Nidoking: @ 0x08C47084 [034]
  .incbin "build/graphics/pokemon/nidoking/icon.4bpp"
	@ analyzed canonical ROM range 0x08C47484-0x08C4772B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Nidoking
gMonFootprint_Nidoking:
	.incbin "build/graphics/pokemon/nidoking/footprint.1bpp"
	.globl gMonStillFrontPic_Clefairy
gMonStillFrontPic_Clefairy:
	.incbin "build/graphics/pokemon/clefairy/still_front.4bpp.lz"
  .globl gMonPalette_Clefairy
gMonPalette_Clefairy:
  .incbin "build/graphics/pokemon/clefairy/normal_palette.gbapal.lz"

  .globl gMonBackPic_Clefairy
gMonBackPic_Clefairy:
  .incbin "build/graphics/pokemon/clefairy/back.4bpp.lz"

  .globl gMonShinyPalette_Clefairy
gMonShinyPalette_Clefairy:
  .incbin "build/graphics/pokemon/clefairy/shiny_palette.gbapal.lz"

	.globl gMonIcon_Clefairy
gMonIcon_Clefairy: @ 0x08C47A4C [035]
  .incbin "build/graphics/pokemon/clefairy/icon.4bpp"
	@ analyzed canonical ROM range 0x08C47E4C-0x08C481A7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Clefairy
gMonFootprint_Clefairy:
	.incbin "build/graphics/pokemon/clefairy/footprint.1bpp"
	.globl gMonStillFrontPic_Clefable
gMonStillFrontPic_Clefable:
	.incbin "build/graphics/pokemon/clefable/still_front.4bpp.lz"
  .globl gMonPalette_Clefable
gMonPalette_Clefable:
  .incbin "build/graphics/pokemon/clefable/normal_palette.gbapal.lz"

  .globl gMonBackPic_Clefable
gMonBackPic_Clefable:
  .incbin "build/graphics/pokemon/clefable/back.4bpp.lz"

  .globl gMonShinyPalette_Clefable
gMonShinyPalette_Clefable:
  .incbin "build/graphics/pokemon/clefable/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 2

	.globl gMonIcon_Clefable
gMonIcon_Clefable: @ 0x08C48530 [036]
  .incbin "build/graphics/pokemon/clefable/icon.4bpp"
	@ analyzed canonical ROM range 0x08C48930-0x08C48C8B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Clefable
gMonFootprint_Clefable:
	.incbin "build/graphics/pokemon/clefable/footprint.1bpp"
	.globl gMonStillFrontPic_Vulpix
gMonStillFrontPic_Vulpix:
	.incbin "build/graphics/pokemon/vulpix/still_front.4bpp.lz"
  .globl gMonPalette_Vulpix
gMonPalette_Vulpix:
  .incbin "build/graphics/pokemon/vulpix/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vulpix
gMonBackPic_Vulpix:
  .incbin "build/graphics/pokemon/vulpix/back.4bpp.lz"

  .globl gMonShinyPalette_Vulpix
gMonShinyPalette_Vulpix:
  .incbin "build/graphics/pokemon/vulpix/shiny_palette.gbapal.lz"

	.globl gMonIcon_Vulpix
gMonIcon_Vulpix: @ 0x08C48FD8 [037]
  .incbin "build/graphics/pokemon/vulpix/icon.4bpp"
	@ analyzed canonical ROM range 0x08C493D8-0x08C49833
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Vulpix
gMonFootprint_Vulpix:
	.incbin "build/graphics/pokemon/vulpix/footprint.1bpp"
	.globl gMonStillFrontPic_Ninetales
gMonStillFrontPic_Ninetales:
	.incbin "build/graphics/pokemon/ninetales/still_front.4bpp.lz"
  .globl gMonPalette_Ninetales
gMonPalette_Ninetales:
  .incbin "build/graphics/pokemon/ninetales/normal_palette.gbapal.lz"
  .space 0x1, 0x00
  .globl gMonBackPic_Ninetales
gMonBackPic_Ninetales:
  .incbin "build/graphics/pokemon/ninetales/back.4bpp.lz"

  .globl gMonShinyPalette_Ninetales
gMonShinyPalette_Ninetales:
  .incbin "build/graphics/pokemon/ninetales/shiny_palette.gbapal.lz"
  .space 0x1, 0x00
	.globl gMonIcon_Ninetales
gMonIcon_Ninetales: @ 0x08C49BF4 [038]
  .incbin "build/graphics/pokemon/ninetales/icon.4bpp"
	@ analyzed canonical ROM range 0x08C49FF4-0x08C4A28B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ninetales
gMonFootprint_Ninetales:
	.incbin "build/graphics/pokemon/ninetales/footprint.1bpp"
	.globl gMonStillFrontPic_Jigglypuff
gMonStillFrontPic_Jigglypuff:
	.incbin "build/graphics/pokemon/jigglypuff/still_front.4bpp.lz"
  .globl gMonPalette_Jigglypuff
gMonPalette_Jigglypuff:
  .incbin "build/graphics/pokemon/jigglypuff/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jigglypuff
gMonBackPic_Jigglypuff:
  .incbin "build/graphics/pokemon/jigglypuff/back.4bpp.lz"

  .globl gMonShinyPalette_Jigglypuff
gMonShinyPalette_Jigglypuff:
  .incbin "build/graphics/pokemon/jigglypuff/shiny_palette.gbapal.lz"

	.globl gMonIcon_Jigglypuff
gMonIcon_Jigglypuff: @ 0x08C4A538 [039]
  .incbin "build/graphics/pokemon/jigglypuff/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4A938-0x08C4ACAB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Jigglypuff
gMonFootprint_Jigglypuff:
	.incbin "build/graphics/pokemon/jigglypuff/footprint.1bpp"
	.globl gMonStillFrontPic_Wigglytuff
gMonStillFrontPic_Wigglytuff:
	.incbin "build/graphics/pokemon/wigglytuff/still_front.4bpp.lz"
  .globl gMonPalette_Wigglytuff
gMonPalette_Wigglytuff:
  .incbin "build/graphics/pokemon/wigglytuff/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wigglytuff
gMonBackPic_Wigglytuff:
  .incbin "build/graphics/pokemon/wigglytuff/back.4bpp.lz"

  .globl gMonShinyPalette_Wigglytuff
gMonShinyPalette_Wigglytuff:
  .incbin "build/graphics/pokemon/wigglytuff/shiny_palette.gbapal.lz"

	.globl gMonIcon_Wigglytuff
gMonIcon_Wigglytuff: @ 0x08C4AFA4 [040]
  .incbin "build/graphics/pokemon/wigglytuff/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4B3A4-0x08C4B69B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Wigglytuff
gMonFootprint_Wigglytuff:
	.incbin "build/graphics/pokemon/wigglytuff/footprint.1bpp"
	.globl gMonStillFrontPic_Zubat
gMonStillFrontPic_Zubat:
	.incbin "build/graphics/pokemon/zubat/still_front.4bpp.lz"
  .globl gMonPalette_Zubat
gMonPalette_Zubat:
  .incbin "build/graphics/pokemon/zubat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zubat
gMonBackPic_Zubat:
  .incbin "build/graphics/pokemon/zubat/back.4bpp.lz"

  .globl gMonShinyPalette_Zubat
gMonShinyPalette_Zubat:
  .incbin "build/graphics/pokemon/zubat/shiny_palette.gbapal.lz"

	.globl gMonIcon_Zubat
gMonIcon_Zubat: @ 0x08C4B9A8 [041]
  .incbin "build/graphics/pokemon/zubat/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4BDA8-0x08C4C163
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Zubat
gMonFootprint_Zubat:
	.incbin "build/graphics/pokemon/zubat/footprint.1bpp"
	.globl gMonStillFrontPic_Golbat
gMonStillFrontPic_Golbat:
	.incbin "build/graphics/pokemon/golbat/still_front.4bpp.lz"
  .globl gMonPalette_Golbat
gMonPalette_Golbat:
  .incbin "build/graphics/pokemon/golbat/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Golbat
gMonBackPic_Golbat:
  .incbin "build/graphics/pokemon/golbat/back.4bpp.lz"

  .globl gMonShinyPalette_Golbat
gMonShinyPalette_Golbat:
  .incbin "build/graphics/pokemon/golbat/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Golbat
gMonIcon_Golbat: @ 0x08C4C470 [042]
  .incbin "build/graphics/pokemon/golbat/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4C870-0x08C4CAC3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Golbat
gMonFootprint_Golbat:
	.incbin "build/graphics/pokemon/golbat/footprint.1bpp"
	.globl gMonStillFrontPic_Oddish
gMonStillFrontPic_Oddish:
	.incbin "build/graphics/pokemon/oddish/still_front.4bpp.lz"
  .globl gMonPalette_Oddish
gMonPalette_Oddish:
  .incbin "build/graphics/pokemon/oddish/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Oddish
gMonBackPic_Oddish:
  .incbin "build/graphics/pokemon/oddish/back.4bpp.lz"

  .globl gMonShinyPalette_Oddish
gMonShinyPalette_Oddish:
  .incbin "build/graphics/pokemon/oddish/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Oddish
gMonIcon_Oddish: @ 0x08C4CD8C [043]
  .incbin "build/graphics/pokemon/oddish/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4D18C-0x08C4D523
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Oddish
gMonFootprint_Oddish:
	.incbin "build/graphics/pokemon/oddish/footprint.1bpp"
	.globl gMonStillFrontPic_Gloom
gMonStillFrontPic_Gloom:
	.incbin "build/graphics/pokemon/gloom/still_front.4bpp.lz"
  .globl gMonPalette_Gloom
gMonPalette_Gloom:
  .incbin "build/graphics/pokemon/gloom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gloom
gMonBackPic_Gloom:
  .incbin "build/graphics/pokemon/gloom/back.4bpp.lz"

  .globl gMonShinyPalette_Gloom
gMonShinyPalette_Gloom:
  .incbin "build/graphics/pokemon/gloom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gloom
gMonIcon_Gloom: @ 0x08C4D8DC [044]
  .incbin "build/graphics/pokemon/gloom/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4DCDC-0x08C4E077
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Gloom
gMonFootprint_Gloom:
	.incbin "build/graphics/pokemon/gloom/footprint.1bpp"
	.globl gMonStillFrontPic_Vileplume
gMonStillFrontPic_Vileplume:
	.incbin "build/graphics/pokemon/vileplume/still_front.4bpp.lz"
  .globl gMonPalette_Vileplume
gMonPalette_Vileplume:
  .incbin "build/graphics/pokemon/vileplume/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vileplume
gMonBackPic_Vileplume:
  .incbin "build/graphics/pokemon/vileplume/back.4bpp.lz"

  .globl gMonShinyPalette_Vileplume
gMonShinyPalette_Vileplume:
  .incbin "build/graphics/pokemon/vileplume/shiny_palette.gbapal.lz"

	.globl gMonIcon_Vileplume
gMonIcon_Vileplume: @ 0x08C4E4E0 [045]
  .incbin "build/graphics/pokemon/vileplume/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4E8E0-0x08C4EB6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Vileplume
gMonFootprint_Vileplume:
	.incbin "build/graphics/pokemon/vileplume/footprint.1bpp"
	.globl gMonStillFrontPic_Paras
gMonStillFrontPic_Paras:
	.incbin "build/graphics/pokemon/paras/still_front.4bpp.lz"
  .globl gMonPalette_Paras
gMonPalette_Paras:
  .incbin "build/graphics/pokemon/paras/normal_palette.gbapal.lz"

  .globl gMonBackPic_Paras
gMonBackPic_Paras:
  .incbin "build/graphics/pokemon/paras/back.4bpp.lz"

  .globl gMonShinyPalette_Paras
gMonShinyPalette_Paras:
  .incbin "build/graphics/pokemon/paras/shiny_palette.gbapal.lz"

	.globl gMonIcon_Paras
gMonIcon_Paras: @ 0x08C4EE5C [046]
  .incbin "build/graphics/pokemon/paras/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4F25C-0x08C4F63F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Paras
gMonFootprint_Paras:
	.incbin "build/graphics/pokemon/paras/footprint.1bpp"
	.globl gMonStillFrontPic_Parasect
gMonStillFrontPic_Parasect:
	.incbin "build/graphics/pokemon/parasect/still_front.4bpp.lz"
  .globl gMonPalette_Parasect
gMonPalette_Parasect:
  .incbin "build/graphics/pokemon/parasect/normal_palette.gbapal.lz"

  .globl gMonBackPic_Parasect
gMonBackPic_Parasect:
  .incbin "build/graphics/pokemon/parasect/back.4bpp.lz"

  .globl gMonShinyPalette_Parasect
gMonShinyPalette_Parasect:
  .incbin "build/graphics/pokemon/parasect/shiny_palette.gbapal.lz"

	.globl gMonIcon_Parasect
gMonIcon_Parasect: @ 0x08C4F98C [047]
  .incbin "build/graphics/pokemon/parasect/icon.4bpp"
	@ analyzed canonical ROM range 0x08C4FD8C-0x08C50123
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Parasect
gMonFootprint_Parasect:
	.incbin "build/graphics/pokemon/parasect/footprint.1bpp"
	.globl gMonStillFrontPic_Venonat
gMonStillFrontPic_Venonat:
	.incbin "build/graphics/pokemon/venonat/still_front.4bpp.lz"
  .globl gMonPalette_Venonat
gMonPalette_Venonat:
  .incbin "build/graphics/pokemon/venonat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Venonat
gMonBackPic_Venonat:
  .incbin "build/graphics/pokemon/venonat/back.4bpp.lz"

  .globl gMonShinyPalette_Venonat
gMonShinyPalette_Venonat:
  .incbin "build/graphics/pokemon/venonat/shiny_palette.gbapal.lz"

	.globl gMonIcon_Venonat
gMonIcon_Venonat: @ 0x08C504A4 [048]
  .incbin "build/graphics/pokemon/venonat/icon.4bpp"
	@ analyzed canonical ROM range 0x08C508A4-0x08C50D67
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Venonat
gMonFootprint_Venonat:
	.incbin "build/graphics/pokemon/venonat/footprint.1bpp"
	.globl gMonStillFrontPic_Venomoth
gMonStillFrontPic_Venomoth:
	.incbin "build/graphics/pokemon/venomoth/still_front.4bpp.lz"
  .globl gMonPalette_Venomoth
gMonPalette_Venomoth:
  .incbin "build/graphics/pokemon/venomoth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Venomoth
gMonBackPic_Venomoth:
  .incbin "build/graphics/pokemon/venomoth/back.4bpp.lz"

  .globl gMonShinyPalette_Venomoth
gMonShinyPalette_Venomoth:
  .incbin "build/graphics/pokemon/venomoth/shiny_palette.gbapal.lz"

	.globl gMonIcon_Venomoth
gMonIcon_Venomoth: @ 0x08C5117C [049]
  .incbin "build/graphics/pokemon/venomoth/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5157C-0x08C517A7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Venomoth
gMonFootprint_Venomoth:
	.incbin "build/graphics/pokemon/venomoth/footprint.1bpp"
	.globl gMonStillFrontPic_Diglett
gMonStillFrontPic_Diglett:
	.incbin "build/graphics/pokemon/diglett/still_front.4bpp.lz"
  .globl gMonPalette_Diglett
gMonPalette_Diglett:
  .incbin "build/graphics/pokemon/diglett/normal_palette.gbapal.lz"

  .globl gMonBackPic_Diglett
gMonBackPic_Diglett:
  .incbin "build/graphics/pokemon/diglett/back.4bpp.lz"

  .globl gMonShinyPalette_Diglett
gMonShinyPalette_Diglett:
  .incbin "build/graphics/pokemon/diglett/shiny_palette.gbapal.lz"

	.globl gMonIcon_Diglett
gMonIcon_Diglett: @ 0x08C51A04 [050]
  .incbin "build/graphics/pokemon/diglett/icon.4bpp"
	@ analyzed canonical ROM range 0x08C51E04-0x08C52147
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Diglett
gMonFootprint_Diglett:
	.incbin "build/graphics/pokemon/diglett/footprint.1bpp"
	.globl gMonStillFrontPic_Dugtrio
gMonStillFrontPic_Dugtrio:
	.incbin "build/graphics/pokemon/dugtrio/still_front.4bpp.lz"
  .globl gMonPalette_Dugtrio
gMonPalette_Dugtrio:
  .incbin "build/graphics/pokemon/dugtrio/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dugtrio
gMonBackPic_Dugtrio:
  .incbin "build/graphics/pokemon/dugtrio/back.4bpp.lz"

  .globl gMonShinyPalette_Dugtrio
gMonShinyPalette_Dugtrio:
  .incbin "build/graphics/pokemon/dugtrio/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dugtrio
gMonIcon_Dugtrio: @ 0x08C52444 [051]
  .incbin "build/graphics/pokemon/dugtrio/icon.4bpp"
	@ analyzed canonical ROM range 0x08C52844-0x08C52B4F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Dugtrio
gMonFootprint_Dugtrio:
	.incbin "build/graphics/pokemon/dugtrio/footprint.1bpp"
	.globl gMonStillFrontPic_Meowth
gMonStillFrontPic_Meowth:
	.incbin "build/graphics/pokemon/meowth/still_front.4bpp.lz"
  .globl gMonPalette_Meowth
gMonPalette_Meowth:
  .incbin "build/graphics/pokemon/meowth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Meowth
gMonBackPic_Meowth:
  .incbin "build/graphics/pokemon/meowth/back.4bpp.lz"

  .globl gMonShinyPalette_Meowth
gMonShinyPalette_Meowth:
  .incbin "build/graphics/pokemon/meowth/shiny_palette.gbapal.lz"

	.globl gMonIcon_Meowth
gMonIcon_Meowth: @ 0x08C52E84 [052]
  .incbin "build/graphics/pokemon/meowth/icon.4bpp"
	@ analyzed canonical ROM range 0x08C53284-0x08C53657
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Meowth
gMonFootprint_Meowth:
	.incbin "build/graphics/pokemon/meowth/footprint.1bpp"
	.globl gMonStillFrontPic_Persian
gMonStillFrontPic_Persian:
	.incbin "build/graphics/pokemon/persian/still_front.4bpp.lz"
  .globl gMonPalette_Persian
gMonPalette_Persian:
  .incbin "build/graphics/pokemon/persian/normal_palette.gbapal.lz"

  .globl gMonBackPic_Persian
gMonBackPic_Persian:
  .incbin "build/graphics/pokemon/persian/back.4bpp.lz"

  .globl gMonShinyPalette_Persian
gMonShinyPalette_Persian:
  .incbin "build/graphics/pokemon/persian/shiny_palette.gbapal.lz"

	.globl gMonIcon_Persian
gMonIcon_Persian: @ 0x08C53A0C [053]
  .incbin "build/graphics/pokemon/persian/icon.4bpp"
	@ analyzed canonical ROM range 0x08C53E0C-0x08C54103
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Persian
gMonFootprint_Persian:
	.incbin "build/graphics/pokemon/persian/footprint.1bpp"
	.globl gMonStillFrontPic_Psyduck
gMonStillFrontPic_Psyduck:
	.incbin "build/graphics/pokemon/psyduck/still_front.4bpp.lz"
  .globl gMonPalette_Psyduck
gMonPalette_Psyduck:
  .incbin "build/graphics/pokemon/psyduck/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Psyduck
gMonBackPic_Psyduck:
  .incbin "build/graphics/pokemon/psyduck/back.4bpp.lz"

  .globl gMonShinyPalette_Psyduck
gMonShinyPalette_Psyduck:
  .incbin "build/graphics/pokemon/psyduck/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Psyduck
gMonIcon_Psyduck: @ 0x08C543F0 [054]
  .incbin "build/graphics/pokemon/psyduck/icon.4bpp"
	@ analyzed canonical ROM range 0x08C547F0-0x08C54BE7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Psyduck
gMonFootprint_Psyduck:
	.incbin "build/graphics/pokemon/psyduck/footprint.1bpp"
	.globl gMonStillFrontPic_Golduck
gMonStillFrontPic_Golduck:
	.incbin "build/graphics/pokemon/golduck/still_front.4bpp.lz"
  .globl gMonPalette_Golduck
gMonPalette_Golduck:
  .incbin "build/graphics/pokemon/golduck/normal_palette.gbapal.lz"

  .globl gMonBackPic_Golduck
gMonBackPic_Golduck:
  .incbin "build/graphics/pokemon/golduck/back.4bpp.lz"

  .globl gMonShinyPalette_Golduck
gMonShinyPalette_Golduck:
  .incbin "build/graphics/pokemon/golduck/shiny_palette.gbapal.lz"

	.globl gMonIcon_Golduck
gMonIcon_Golduck: @ 0x08C54F64 [055]
  .incbin "build/graphics/pokemon/golduck/icon.4bpp"
	@ analyzed canonical ROM range 0x08C55364-0x08C5569B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Golduck
gMonFootprint_Golduck:
	.incbin "build/graphics/pokemon/golduck/footprint.1bpp"
	.globl gMonStillFrontPic_Mankey
gMonStillFrontPic_Mankey:
	.incbin "build/graphics/pokemon/mankey/still_front.4bpp.lz"
  .globl gMonPalette_Mankey
gMonPalette_Mankey:
  .incbin "build/graphics/pokemon/mankey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mankey
gMonBackPic_Mankey:
  .incbin "build/graphics/pokemon/mankey/back.4bpp.lz"

  .globl gMonShinyPalette_Mankey
gMonShinyPalette_Mankey:
  .incbin "build/graphics/pokemon/mankey/shiny_palette.gbapal.lz"

	.globl gMonIcon_Mankey
gMonIcon_Mankey: @ 0x08C55A54 [056]
  .incbin "build/graphics/pokemon/mankey/icon.4bpp"
	@ analyzed canonical ROM range 0x08C55E54-0x08C56223
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Mankey
gMonFootprint_Mankey:
	.incbin "build/graphics/pokemon/mankey/footprint.1bpp"
	.globl gMonStillFrontPic_Primeape
gMonStillFrontPic_Primeape:
	.incbin "build/graphics/pokemon/primeape/still_front.4bpp.lz"
  .globl gMonPalette_Primeape
gMonPalette_Primeape:
  .incbin "build/graphics/pokemon/primeape/normal_palette.gbapal.lz"

  .globl gMonBackPic_Primeape
gMonBackPic_Primeape:
  .incbin "build/graphics/pokemon/primeape/back.4bpp.lz"

  .globl gMonShinyPalette_Primeape
gMonShinyPalette_Primeape:
  .incbin "build/graphics/pokemon/primeape/shiny_palette.gbapal.lz"

	.globl gMonIcon_Primeape
gMonIcon_Primeape: @ 0x08C565E4 [057]
  .incbin "build/graphics/pokemon/primeape/icon.4bpp"
	@ analyzed canonical ROM range 0x08C569E4-0x08C56D5B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Primeape
gMonFootprint_Primeape:
	.incbin "build/graphics/pokemon/primeape/footprint.1bpp"
	.globl gMonStillFrontPic_Growlithe
gMonStillFrontPic_Growlithe:
	.incbin "build/graphics/pokemon/growlithe/still_front.4bpp.lz"
  .globl gMonPalette_Growlithe
gMonPalette_Growlithe:
  .incbin "build/graphics/pokemon/growlithe/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Growlithe
gMonBackPic_Growlithe:
  .incbin "build/graphics/pokemon/growlithe/back.4bpp.lz"

  .globl gMonShinyPalette_Growlithe
gMonShinyPalette_Growlithe:
  .incbin "build/graphics/pokemon/growlithe/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Growlithe
gMonIcon_Growlithe: @ 0x08C570E8 [058]
  .incbin "build/graphics/pokemon/growlithe/icon.4bpp"
	@ analyzed canonical ROM range 0x08C574E8-0x08C57A3B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Growlithe
gMonFootprint_Growlithe:
	.incbin "build/graphics/pokemon/growlithe/footprint.1bpp"
	.globl gMonStillFrontPic_Arcanine
gMonStillFrontPic_Arcanine:
	.incbin "build/graphics/pokemon/arcanine/still_front.4bpp.lz"
  .globl gMonPalette_Arcanine
gMonPalette_Arcanine:
  .incbin "build/graphics/pokemon/arcanine/normal_palette.gbapal.lz"

  .globl gMonBackPic_Arcanine
gMonBackPic_Arcanine:
  .incbin "build/graphics/pokemon/arcanine/back.4bpp.lz"

  .globl gMonShinyPalette_Arcanine
gMonShinyPalette_Arcanine:
  .incbin "build/graphics/pokemon/arcanine/shiny_palette.gbapal.lz"

	.globl gMonIcon_Arcanine
gMonIcon_Arcanine: @ 0x08C57E6C [059]
  .incbin "build/graphics/pokemon/arcanine/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5826C-0x08C58513
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Arcanine
gMonFootprint_Arcanine:
	.incbin "build/graphics/pokemon/arcanine/footprint.1bpp"
	.globl gMonStillFrontPic_Poliwag
gMonStillFrontPic_Poliwag:
	.incbin "build/graphics/pokemon/poliwag/still_front.4bpp.lz"
  .globl gMonPalette_Poliwag
gMonPalette_Poliwag:
  .incbin "build/graphics/pokemon/poliwag/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Poliwag
gMonBackPic_Poliwag:
  .incbin "build/graphics/pokemon/poliwag/back.4bpp.lz"

  .globl gMonShinyPalette_Poliwag
gMonShinyPalette_Poliwag:
  .incbin "build/graphics/pokemon/poliwag/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Poliwag
gMonIcon_Poliwag: @ 0x08C587D4 [060]
  .incbin "build/graphics/pokemon/poliwag/icon.4bpp"
	@ analyzed canonical ROM range 0x08C58BD4-0x08C58FB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Poliwag
gMonFootprint_Poliwag:
	.incbin "build/graphics/pokemon/poliwag/footprint.1bpp"
	.globl gMonStillFrontPic_Poliwhirl
gMonStillFrontPic_Poliwhirl:
	.incbin "build/graphics/pokemon/poliwhirl/still_front.4bpp.lz"
  .globl gMonPalette_Poliwhirl
gMonPalette_Poliwhirl:
  .incbin "build/graphics/pokemon/poliwhirl/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Poliwhirl
gMonBackPic_Poliwhirl:
  .incbin "build/graphics/pokemon/poliwhirl/back.4bpp.lz"

  .globl gMonShinyPalette_Poliwhirl
gMonShinyPalette_Poliwhirl:
  .incbin "build/graphics/pokemon/poliwhirl/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Poliwhirl
gMonIcon_Poliwhirl: @ 0x08C592C8 [061]
  .incbin "build/graphics/pokemon/poliwhirl/icon.4bpp"
	@ analyzed canonical ROM range 0x08C596C8-0x08C59AAF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Poliwhirl
gMonFootprint_Poliwhirl:
	.incbin "build/graphics/pokemon/poliwhirl/footprint.1bpp"
	.globl gMonStillFrontPic_Poliwrath
gMonStillFrontPic_Poliwrath:
	.incbin "build/graphics/pokemon/poliwrath/still_front.4bpp.lz"
  .globl gMonPalette_Poliwrath
gMonPalette_Poliwrath:
  .incbin "build/graphics/pokemon/poliwrath/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Poliwrath
gMonBackPic_Poliwrath:
  .incbin "build/graphics/pokemon/poliwrath/back.4bpp.lz"

  .globl gMonShinyPalette_Poliwrath
gMonShinyPalette_Poliwrath:
  .incbin "build/graphics/pokemon/poliwrath/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Poliwrath
gMonIcon_Poliwrath: @ 0x08C59E20 [062]
  .incbin "build/graphics/pokemon/poliwrath/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5A220-0x08C5A523
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Poliwrath
gMonFootprint_Poliwrath:
	.incbin "build/graphics/pokemon/poliwrath/footprint.1bpp"
	.globl gMonStillFrontPic_Abra
gMonStillFrontPic_Abra:
	.incbin "build/graphics/pokemon/abra/still_front.4bpp.lz"
  .globl gMonPalette_Abra
gMonPalette_Abra:
  .incbin "build/graphics/pokemon/abra/normal_palette.gbapal.lz"
  .space 0x3, 0x00
  .globl gMonBackPic_Abra
gMonBackPic_Abra:
  .incbin "build/graphics/pokemon/abra/back.4bpp.lz"

  .globl gMonShinyPalette_Abra
gMonShinyPalette_Abra:
  .incbin "build/graphics/pokemon/abra/shiny_palette.gbapal.lz"
  .space 0x3, 0x00
	.globl gMonIcon_Abra
gMonIcon_Abra: @ 0x08C5A880 [063]
  .incbin "build/graphics/pokemon/abra/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5AC80-0x08C5B103
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Abra
gMonFootprint_Abra:
	.incbin "build/graphics/pokemon/abra/footprint.1bpp"
	.globl gMonStillFrontPic_Kadabra
gMonStillFrontPic_Kadabra:
	.incbin "build/graphics/pokemon/kadabra/still_front.4bpp.lz"
  .globl gMonPalette_Kadabra
gMonPalette_Kadabra:
  .incbin "build/graphics/pokemon/kadabra/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kadabra
gMonBackPic_Kadabra:
  .incbin "build/graphics/pokemon/kadabra/back.4bpp.lz"

  .globl gMonShinyPalette_Kadabra
gMonShinyPalette_Kadabra:
  .incbin "build/graphics/pokemon/kadabra/shiny_palette.gbapal.lz"

	.globl gMonIcon_Kadabra
gMonIcon_Kadabra: @ 0x08C5B530 [064]
  .incbin "build/graphics/pokemon/kadabra/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5B930-0x08C5BD4B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kadabra
gMonFootprint_Kadabra:
	.incbin "build/graphics/pokemon/kadabra/footprint.1bpp"
	.globl gMonStillFrontPic_Alakazam
gMonStillFrontPic_Alakazam:
	.incbin "build/graphics/pokemon/alakazam/still_front.4bpp.lz"
  .globl gMonPalette_Alakazam
gMonPalette_Alakazam:
  .incbin "build/graphics/pokemon/alakazam/normal_palette.gbapal.lz"

  .globl gMonBackPic_Alakazam
gMonBackPic_Alakazam:
  .incbin "build/graphics/pokemon/alakazam/back.4bpp.lz"

  .globl gMonShinyPalette_Alakazam
gMonShinyPalette_Alakazam:
  .incbin "build/graphics/pokemon/alakazam/shiny_palette.gbapal.lz"

	.globl gMonIcon_Alakazam
gMonIcon_Alakazam: @ 0x08C5C1E0 [065]
  .incbin "build/graphics/pokemon/alakazam/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5C5E0-0x08C5C8A3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Alakazam
gMonFootprint_Alakazam:
	.incbin "build/graphics/pokemon/alakazam/footprint.1bpp"
	.globl gMonStillFrontPic_Machop
gMonStillFrontPic_Machop:
	.incbin "build/graphics/pokemon/machop/still_front.4bpp.lz"
  .globl gMonPalette_Machop
gMonPalette_Machop:
  .incbin "build/graphics/pokemon/machop/normal_palette.gbapal.lz"

  .globl gMonBackPic_Machop
gMonBackPic_Machop:
  .incbin "build/graphics/pokemon/machop/back.4bpp.lz"

  .globl gMonShinyPalette_Machop
gMonShinyPalette_Machop:
  .incbin "build/graphics/pokemon/machop/shiny_palette.gbapal.lz"

	.globl gMonIcon_Machop
gMonIcon_Machop: @ 0x08C5CBD4 [066]
  .incbin "build/graphics/pokemon/machop/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5CFD4-0x08C5D3A3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Machop
gMonFootprint_Machop:
	.incbin "build/graphics/pokemon/machop/footprint.1bpp"
	.globl gMonStillFrontPic_Machoke
gMonStillFrontPic_Machoke:
	.incbin "build/graphics/pokemon/machoke/still_front.4bpp.lz"
  .globl gMonPalette_Machoke
gMonPalette_Machoke:
  .incbin "build/graphics/pokemon/machoke/normal_palette.gbapal.lz"

  .globl gMonBackPic_Machoke
gMonBackPic_Machoke:
  .incbin "build/graphics/pokemon/machoke/back.4bpp.lz"

  .globl gMonShinyPalette_Machoke
gMonShinyPalette_Machoke:
  .incbin "build/graphics/pokemon/machoke/shiny_palette.gbapal.lz"

	.globl gMonIcon_Machoke
gMonIcon_Machoke: @ 0x08C5D744 [067]
  .incbin "build/graphics/pokemon/machoke/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5DB44-0x08C5E0B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Machoke
gMonFootprint_Machoke:
	.incbin "build/graphics/pokemon/machoke/footprint.1bpp"
	.globl gMonStillFrontPic_Machamp
gMonStillFrontPic_Machamp:
	.incbin "build/graphics/pokemon/machamp/still_front.4bpp.lz"
  .globl gMonPalette_Machamp
gMonPalette_Machamp:
  .incbin "build/graphics/pokemon/machamp/normal_palette.gbapal.lz"

  .globl gMonBackPic_Machamp
gMonBackPic_Machamp:
  .incbin "build/graphics/pokemon/machamp/back.4bpp.lz"

  .globl gMonShinyPalette_Machamp
gMonShinyPalette_Machamp:
  .incbin "build/graphics/pokemon/machamp/shiny_palette.gbapal.lz"

	.globl gMonIcon_Machamp
gMonIcon_Machamp: @ 0x08C5E560 [068]
  .incbin "build/graphics/pokemon/machamp/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5E960-0x08C5EBFF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Machamp
gMonFootprint_Machamp:
	.incbin "build/graphics/pokemon/machamp/footprint.1bpp"
	.globl gMonStillFrontPic_Bellsprout
gMonStillFrontPic_Bellsprout:
	.incbin "build/graphics/pokemon/bellsprout/still_front.4bpp.lz"
  .globl gMonPalette_Bellsprout
gMonPalette_Bellsprout:
  .incbin "build/graphics/pokemon/bellsprout/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bellsprout
gMonBackPic_Bellsprout:
  .incbin "build/graphics/pokemon/bellsprout/back.4bpp.lz"

  .globl gMonShinyPalette_Bellsprout
gMonShinyPalette_Bellsprout:
  .incbin "build/graphics/pokemon/bellsprout/shiny_palette.gbapal.lz"

	.globl gMonIcon_Bellsprout
gMonIcon_Bellsprout: @ 0x08C5EEEC [069]
  .incbin "build/graphics/pokemon/bellsprout/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5F2EC-0x08C5F62F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Bellsprout
gMonFootprint_Bellsprout:
	.incbin "build/graphics/pokemon/bellsprout/footprint.1bpp"
	.globl gMonStillFrontPic_Weepinbell
gMonStillFrontPic_Weepinbell:
	.incbin "build/graphics/pokemon/weepinbell/still_front.4bpp.lz"
  .globl gMonPalette_Weepinbell
gMonPalette_Weepinbell:
  .incbin "build/graphics/pokemon/weepinbell/normal_palette.gbapal.lz"

  .globl gMonBackPic_Weepinbell
gMonBackPic_Weepinbell:
  .incbin "build/graphics/pokemon/weepinbell/back.4bpp.lz"

  .globl gMonShinyPalette_Weepinbell
gMonShinyPalette_Weepinbell:
  .incbin "build/graphics/pokemon/weepinbell/shiny_palette.gbapal.lz"

	.globl gMonIcon_Weepinbell
gMonIcon_Weepinbell: @ 0x08C5F97C [070]
  .incbin "build/graphics/pokemon/weepinbell/icon.4bpp"
	@ analyzed canonical ROM range 0x08C5FD7C-0x08C601C7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Weepinbell
gMonFootprint_Weepinbell:
	.incbin "build/graphics/pokemon/weepinbell/footprint.1bpp"
	.globl gMonStillFrontPic_Victreebel
gMonStillFrontPic_Victreebel:
	.incbin "build/graphics/pokemon/victreebel/still_front.4bpp.lz"
  .globl gMonPalette_Victreebel
gMonPalette_Victreebel:
  .incbin "build/graphics/pokemon/victreebel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Victreebel
gMonBackPic_Victreebel:
  .incbin "build/graphics/pokemon/victreebel/back.4bpp.lz"

  .globl gMonShinyPalette_Victreebel
gMonShinyPalette_Victreebel:
  .incbin "build/graphics/pokemon/victreebel/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 3

	.globl gMonIcon_Victreebel
gMonIcon_Victreebel: @ 0x08C605B0 [071]
  .incbin "build/graphics/pokemon/victreebel/icon.4bpp"
	@ analyzed canonical ROM range 0x08C609B0-0x08C60C6F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Victreebel
gMonFootprint_Victreebel:
	.incbin "build/graphics/pokemon/victreebel/footprint.1bpp"
	.globl gMonStillFrontPic_Tentacool
gMonStillFrontPic_Tentacool:
	.incbin "build/graphics/pokemon/tentacool/still_front.4bpp.lz"
  .globl gMonPalette_Tentacool
gMonPalette_Tentacool:
  .incbin "build/graphics/pokemon/tentacool/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tentacool
gMonBackPic_Tentacool:
  .incbin "build/graphics/pokemon/tentacool/back.4bpp.lz"

  .globl gMonShinyPalette_Tentacool
gMonShinyPalette_Tentacool:
  .incbin "build/graphics/pokemon/tentacool/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tentacool
gMonIcon_Tentacool: @ 0x08C60F8C [072]
  .incbin "build/graphics/pokemon/tentacool/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6138C-0x08C61847
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Tentacool
gMonFootprint_Tentacool:
	.incbin "build/graphics/pokemon/tentacool/footprint.1bpp"
	.globl gMonStillFrontPic_Tentacruel
gMonStillFrontPic_Tentacruel:
	.incbin "build/graphics/pokemon/tentacruel/still_front.4bpp.lz"
  .globl gMonPalette_Tentacruel
gMonPalette_Tentacruel:
  .incbin "build/graphics/pokemon/tentacruel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tentacruel
gMonBackPic_Tentacruel:
  .incbin "build/graphics/pokemon/tentacruel/back.4bpp.lz"

  .globl gMonShinyPalette_Tentacruel
gMonShinyPalette_Tentacruel:
  .incbin "build/graphics/pokemon/tentacruel/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tentacruel
gMonIcon_Tentacruel: @ 0x08C61C34 [073]
  .incbin "build/graphics/pokemon/tentacruel/icon.4bpp"
	@ analyzed canonical ROM range 0x08C62034-0x08C622BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Tentacruel
gMonFootprint_Tentacruel:
	.incbin "build/graphics/pokemon/tentacruel/footprint.1bpp"
	.globl gMonStillFrontPic_Geodude
gMonStillFrontPic_Geodude:
	.incbin "build/graphics/pokemon/geodude/still_front.4bpp.lz"
  .globl gMonPalette_Geodude
gMonPalette_Geodude:
  .incbin "build/graphics/pokemon/geodude/normal_palette.gbapal.lz"
  .space 0x1, 0x00
  .globl gMonBackPic_Geodude
gMonBackPic_Geodude:
  .incbin "build/graphics/pokemon/geodude/back.4bpp.lz"

  .globl gMonShinyPalette_Geodude
gMonShinyPalette_Geodude:
  .incbin "build/graphics/pokemon/geodude/shiny_palette.gbapal.lz"
  .space 0x1, 0x00
	.globl gMonIcon_Geodude
gMonIcon_Geodude: @ 0x08C6258C [074]
  .incbin "build/graphics/pokemon/geodude/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6298C-0x08C62DB3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Geodude
gMonFootprint_Geodude:
	.incbin "build/graphics/pokemon/geodude/footprint.1bpp"
	.globl gMonStillFrontPic_Graveler
gMonStillFrontPic_Graveler:
	.incbin "build/graphics/pokemon/graveler/still_front.4bpp.lz"
  .globl gMonPalette_Graveler
gMonPalette_Graveler:
  .incbin "build/graphics/pokemon/graveler/normal_palette.gbapal.lz"
  .space 0x3, 0x00
  .globl gMonBackPic_Graveler
gMonBackPic_Graveler:
  .incbin "build/graphics/pokemon/graveler/back.4bpp.lz"

  .globl gMonShinyPalette_Graveler
gMonShinyPalette_Graveler:
  .incbin "build/graphics/pokemon/graveler/shiny_palette.gbapal.lz"
  .space 0x3, 0x00
	.globl gMonIcon_Graveler
gMonIcon_Graveler: @ 0x08C63070 [075]
  .incbin "build/graphics/pokemon/graveler/icon.4bpp"
	@ analyzed canonical ROM range 0x08C63470-0x08C6390B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Graveler
gMonFootprint_Graveler:
	.incbin "build/graphics/pokemon/graveler/footprint.1bpp"
	.globl gMonStillFrontPic_Golem
gMonStillFrontPic_Golem:
	.incbin "build/graphics/pokemon/golem/still_front.4bpp.lz"
  .globl gMonPalette_Golem
gMonPalette_Golem:
  .incbin "build/graphics/pokemon/golem/normal_palette.gbapal.lz"

  .globl gMonBackPic_Golem
gMonBackPic_Golem:
  .incbin "build/graphics/pokemon/golem/back.4bpp.lz"

  .globl gMonShinyPalette_Golem
gMonShinyPalette_Golem:
  .incbin "build/graphics/pokemon/golem/shiny_palette.gbapal.lz"

	.globl gMonIcon_Golem
gMonIcon_Golem: @ 0x08C63C1C [076]
  .incbin "build/graphics/pokemon/golem/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6401C-0x08C643E3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Golem
gMonFootprint_Golem:
	.incbin "build/graphics/pokemon/golem/footprint.1bpp"
	.globl gMonStillFrontPic_Ponyta
gMonStillFrontPic_Ponyta:
	.incbin "build/graphics/pokemon/ponyta/still_front.4bpp.lz"
  .globl gMonPalette_Ponyta
gMonPalette_Ponyta:
  .incbin "build/graphics/pokemon/ponyta/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Ponyta
gMonBackPic_Ponyta:
  .incbin "build/graphics/pokemon/ponyta/back.4bpp.lz"

  .globl gMonShinyPalette_Ponyta
gMonShinyPalette_Ponyta:
  .incbin "build/graphics/pokemon/ponyta/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Ponyta
gMonIcon_Ponyta: @ 0x08C64770 [077]
  .incbin "build/graphics/pokemon/ponyta/icon.4bpp"
	@ analyzed canonical ROM range 0x08C64B70-0x08C6505F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ponyta
gMonFootprint_Ponyta:
	.incbin "build/graphics/pokemon/ponyta/footprint.1bpp"
	.globl gMonStillFrontPic_Rapidash
gMonStillFrontPic_Rapidash:
	.incbin "build/graphics/pokemon/rapidash/still_front.4bpp.lz"
  .globl gMonPalette_Rapidash
gMonPalette_Rapidash:
  .incbin "build/graphics/pokemon/rapidash/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rapidash
gMonBackPic_Rapidash:
  .incbin "build/graphics/pokemon/rapidash/back.4bpp.lz"

  .globl gMonShinyPalette_Rapidash
gMonShinyPalette_Rapidash:
  .incbin "build/graphics/pokemon/rapidash/shiny_palette.gbapal.lz"

	.globl gMonIcon_Rapidash
gMonIcon_Rapidash: @ 0x08C654C0 [078]
  .incbin "build/graphics/pokemon/rapidash/icon.4bpp"
	@ analyzed canonical ROM range 0x08C658C0-0x08C65BEB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Rapidash
gMonFootprint_Rapidash:
	.incbin "build/graphics/pokemon/rapidash/footprint.1bpp"
	.globl gMonStillFrontPic_Slowpoke
gMonStillFrontPic_Slowpoke:
	.incbin "build/graphics/pokemon/slowpoke/still_front.4bpp.lz"
  .globl gMonPalette_Slowpoke
gMonPalette_Slowpoke:
  .incbin "build/graphics/pokemon/slowpoke/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slowpoke
gMonBackPic_Slowpoke:
  .incbin "build/graphics/pokemon/slowpoke/back.4bpp.lz"

  .globl gMonShinyPalette_Slowpoke
gMonShinyPalette_Slowpoke:
  .incbin "build/graphics/pokemon/slowpoke/shiny_palette.gbapal.lz"

	.globl gMonIcon_Slowpoke
gMonIcon_Slowpoke: @ 0x08C65EA0 [079]
  .incbin "build/graphics/pokemon/slowpoke/icon.4bpp"
	@ analyzed canonical ROM range 0x08C662A0-0x08C6677F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Slowpoke
gMonFootprint_Slowpoke:
	.incbin "build/graphics/pokemon/slowpoke/footprint.1bpp"
	.globl gMonStillFrontPic_Slowbro
gMonStillFrontPic_Slowbro:
	.incbin "build/graphics/pokemon/slowbro/still_front.4bpp.lz"
  .globl gMonPalette_Slowbro
gMonPalette_Slowbro:
  .incbin "build/graphics/pokemon/slowbro/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slowbro
gMonBackPic_Slowbro:
  .incbin "build/graphics/pokemon/slowbro/back.4bpp.lz"

  .globl gMonShinyPalette_Slowbro
gMonShinyPalette_Slowbro:
  .incbin "build/graphics/pokemon/slowbro/shiny_palette.gbapal.lz"

	.globl gMonIcon_Slowbro
gMonIcon_Slowbro: @ 0x08C66B6C [080]
  .incbin "build/graphics/pokemon/slowbro/icon.4bpp"
	@ analyzed canonical ROM range 0x08C66F6C-0x08C67163
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Slowbro
gMonFootprint_Slowbro:
	.incbin "build/graphics/pokemon/slowbro/footprint.1bpp"
	.globl gMonStillFrontPic_Magnemite
gMonStillFrontPic_Magnemite:
	.incbin "build/graphics/pokemon/magnemite/still_front.4bpp.lz"
  .globl gMonPalette_Magnemite
gMonPalette_Magnemite:
  .incbin "build/graphics/pokemon/magnemite/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magnemite
gMonBackPic_Magnemite:
  .incbin "build/graphics/pokemon/magnemite/back.4bpp.lz"

  .globl gMonShinyPalette_Magnemite
gMonShinyPalette_Magnemite:
  .incbin "build/graphics/pokemon/magnemite/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magnemite
gMonIcon_Magnemite: @ 0x08C67398 [081]
  .incbin "build/graphics/pokemon/magnemite/icon.4bpp"
	@ analyzed canonical ROM range 0x08C67798-0x08C67BBB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Magnemite
gMonFootprint_Magnemite:
	.incbin "build/graphics/pokemon/magnemite/footprint.1bpp"
	.globl gMonStillFrontPic_Magneton
gMonStillFrontPic_Magneton:
	.incbin "build/graphics/pokemon/magneton/still_front.4bpp.lz"
  .globl gMonPalette_Magneton
gMonPalette_Magneton:
  .incbin "build/graphics/pokemon/magneton/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magneton
gMonBackPic_Magneton:
  .incbin "build/graphics/pokemon/magneton/back.4bpp.lz"

  .globl gMonShinyPalette_Magneton
gMonShinyPalette_Magneton:
  .incbin "build/graphics/pokemon/magneton/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Magneton
gMonIcon_Magneton: @ 0x08C67F8C [082]
  .incbin "build/graphics/pokemon/magneton/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6838C-0x08C68727
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Magneton
gMonFootprint_Magneton:
	.incbin "build/graphics/pokemon/magneton/footprint.1bpp"
	.globl gMonStillFrontPic_Farfetchd
gMonStillFrontPic_Farfetchd:
	.incbin "build/graphics/pokemon/farfetchd/still_front.4bpp.lz"
  .globl gMonPalette_Farfetchd
gMonPalette_Farfetchd:
  .incbin "build/graphics/pokemon/farfetchd/normal_palette.gbapal.lz"

  .globl gMonBackPic_Farfetchd
gMonBackPic_Farfetchd:
  .incbin "build/graphics/pokemon/farfetchd/back.4bpp.lz"

  .globl gMonShinyPalette_Farfetchd
gMonShinyPalette_Farfetchd:
  .incbin "build/graphics/pokemon/farfetchd/shiny_palette.gbapal.lz"

	.globl gMonIcon_Farfetchd
gMonIcon_Farfetchd: @ 0x08C68AE4 [083]
  .incbin "build/graphics/pokemon/farfetchd/icon.4bpp"
	@ analyzed canonical ROM range 0x08C68EE4-0x08C69257
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Farfetchd
gMonFootprint_Farfetchd:
	.incbin "build/graphics/pokemon/farfetchd/footprint.1bpp"
	.globl gMonStillFrontPic_Doduo
gMonStillFrontPic_Doduo:
	.incbin "build/graphics/pokemon/doduo/still_front.4bpp.lz"
  .globl gMonPalette_Doduo
gMonPalette_Doduo:
  .incbin "build/graphics/pokemon/doduo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Doduo
gMonBackPic_Doduo:
  .incbin "build/graphics/pokemon/doduo/back.4bpp.lz"

  .globl gMonShinyPalette_Doduo
gMonShinyPalette_Doduo:
  .incbin "build/graphics/pokemon/doduo/shiny_palette.gbapal.lz"

	.globl gMonIcon_Doduo
gMonIcon_Doduo: @ 0x08C695B8 [084]
  .incbin "build/graphics/pokemon/doduo/icon.4bpp"
	@ analyzed canonical ROM range 0x08C699B8-0x08C69EB3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Doduo
gMonFootprint_Doduo:
	.incbin "build/graphics/pokemon/doduo/footprint.1bpp"
	.globl gMonStillFrontPic_Dodrio
gMonStillFrontPic_Dodrio:
	.incbin "build/graphics/pokemon/dodrio/still_front.4bpp.lz"
  .globl gMonPalette_Dodrio
gMonPalette_Dodrio:
  .incbin "build/graphics/pokemon/dodrio/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dodrio
gMonBackPic_Dodrio:
  .incbin "build/graphics/pokemon/dodrio/back.4bpp.lz"

  .globl gMonShinyPalette_Dodrio
gMonShinyPalette_Dodrio:
  .incbin "build/graphics/pokemon/dodrio/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dodrio
gMonIcon_Dodrio: @ 0x08C6A368 [085]
  .incbin "build/graphics/pokemon/dodrio/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6A768-0x08C6AA8F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Dodrio
gMonFootprint_Dodrio:
	.incbin "build/graphics/pokemon/dodrio/footprint.1bpp"
	.globl gMonStillFrontPic_Seel
gMonStillFrontPic_Seel:
	.incbin "build/graphics/pokemon/seel/still_front.4bpp.lz"
  .globl gMonPalette_Seel
gMonPalette_Seel:
  .incbin "build/graphics/pokemon/seel/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Seel
gMonBackPic_Seel:
  .incbin "build/graphics/pokemon/seel/back.4bpp.lz"

  .globl gMonShinyPalette_Seel
gMonShinyPalette_Seel:
  .incbin "build/graphics/pokemon/seel/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Seel
gMonIcon_Seel: @ 0x08C6ADCC [086]
  .incbin "build/graphics/pokemon/seel/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6B1CC-0x08C6B5B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Seel
gMonFootprint_Seel:
	.incbin "build/graphics/pokemon/seel/footprint.1bpp"
	.globl gMonStillFrontPic_Dewgong
gMonStillFrontPic_Dewgong:
	.incbin "build/graphics/pokemon/dewgong/still_front.4bpp.lz"
  .globl gMonPalette_Dewgong
gMonPalette_Dewgong:
  .incbin "build/graphics/pokemon/dewgong/normal_palette.gbapal.lz"
  .space 0x3, 0x00
  .globl gMonBackPic_Dewgong
gMonBackPic_Dewgong:
  .incbin "build/graphics/pokemon/dewgong/back.4bpp.lz"

  .globl gMonShinyPalette_Dewgong
gMonShinyPalette_Dewgong:
  .incbin "build/graphics/pokemon/dewgong/shiny_palette.gbapal.lz"
  .space 0x3, 0x00
	.globl gMonIcon_Dewgong
gMonIcon_Dewgong: @ 0x08C6B888 [087]
  .incbin "build/graphics/pokemon/dewgong/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6BC88-0x08C6BFC3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Dewgong
gMonFootprint_Dewgong:
	.incbin "build/graphics/pokemon/dewgong/footprint.1bpp"
	.globl gMonStillFrontPic_Grimer
gMonStillFrontPic_Grimer:
	.incbin "build/graphics/pokemon/grimer/still_front.4bpp.lz"
  .globl gMonPalette_Grimer
gMonPalette_Grimer:
  .incbin "build/graphics/pokemon/grimer/normal_palette.gbapal.lz"

  .globl gMonBackPic_Grimer
gMonBackPic_Grimer:
  .incbin "build/graphics/pokemon/grimer/back.4bpp.lz"

  .globl gMonShinyPalette_Grimer
gMonShinyPalette_Grimer:
  .incbin "build/graphics/pokemon/grimer/shiny_palette.gbapal.lz"

	.globl gMonIcon_Grimer
gMonIcon_Grimer: @ 0x08C6C2F0 [088]
  .incbin "build/graphics/pokemon/grimer/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6C6F0-0x08C6CB5B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Grimer
gMonFootprint_Grimer:
	.incbin "build/graphics/pokemon/grimer/footprint.1bpp"
	.globl gMonStillFrontPic_Muk
gMonStillFrontPic_Muk:
	.incbin "build/graphics/pokemon/muk/still_front.4bpp.lz"
  .globl gMonPalette_Muk
gMonPalette_Muk:
  .incbin "build/graphics/pokemon/muk/normal_palette.gbapal.lz"

  .globl gMonBackPic_Muk
gMonBackPic_Muk:
  .incbin "build/graphics/pokemon/muk/back.4bpp.lz"

  .globl gMonShinyPalette_Muk
gMonShinyPalette_Muk:
  .incbin "build/graphics/pokemon/muk/shiny_palette.gbapal.lz"

	.globl gMonIcon_Muk
gMonIcon_Muk: @ 0x08C6CEFC [089]
  .incbin "build/graphics/pokemon/muk/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6D2FC-0x08C6D583
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Muk
gMonFootprint_Muk:
	.incbin "build/graphics/pokemon/muk/footprint.1bpp"
	.globl gMonStillFrontPic_Shellder
gMonStillFrontPic_Shellder:
	.incbin "build/graphics/pokemon/shellder/still_front.4bpp.lz"
  .globl gMonPalette_Shellder
gMonPalette_Shellder:
  .incbin "build/graphics/pokemon/shellder/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shellder
gMonBackPic_Shellder:
  .incbin "build/graphics/pokemon/shellder/back.4bpp.lz"

  .globl gMonShinyPalette_Shellder
gMonShinyPalette_Shellder:
  .incbin "build/graphics/pokemon/shellder/shiny_palette.gbapal.lz"

	.globl gMonIcon_Shellder
gMonIcon_Shellder: @ 0x08C6D8E0 [090]
  .incbin "build/graphics/pokemon/shellder/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6DCE0-0x08C6E137
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Shellder
gMonFootprint_Shellder:
	.incbin "build/graphics/pokemon/shellder/footprint.1bpp"
	.globl gMonStillFrontPic_Cloyster
gMonStillFrontPic_Cloyster:
	.incbin "build/graphics/pokemon/cloyster/still_front.4bpp.lz"
  .globl gMonPalette_Cloyster
gMonPalette_Cloyster:
  .incbin "build/graphics/pokemon/cloyster/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cloyster
gMonBackPic_Cloyster:
  .incbin "build/graphics/pokemon/cloyster/back.4bpp.lz"

  .globl gMonShinyPalette_Cloyster
gMonShinyPalette_Cloyster:
  .incbin "build/graphics/pokemon/cloyster/shiny_palette.gbapal.lz"

	.globl gMonIcon_Cloyster
gMonIcon_Cloyster: @ 0x08C6E58C [091]
  .incbin "build/graphics/pokemon/cloyster/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6E98C-0x08C6ED63
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Cloyster
gMonFootprint_Cloyster:
	.incbin "build/graphics/pokemon/cloyster/footprint.1bpp"
	.globl gMonStillFrontPic_Gastly
gMonStillFrontPic_Gastly:
	.incbin "build/graphics/pokemon/gastly/still_front.4bpp.lz"
  .globl gMonPalette_Gastly
gMonPalette_Gastly:
  .incbin "build/graphics/pokemon/gastly/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Gastly
gMonBackPic_Gastly:
  .incbin "build/graphics/pokemon/gastly/back.4bpp.lz"

  .globl gMonShinyPalette_Gastly
gMonShinyPalette_Gastly:
  .incbin "build/graphics/pokemon/gastly/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gastly
gMonIcon_Gastly: @ 0x08C6F0D8 [092]
  .incbin "build/graphics/pokemon/gastly/icon.4bpp"
	@ analyzed canonical ROM range 0x08C6F4D8-0x08C6F8F7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Gastly
gMonFootprint_Gastly:
	.incbin "build/graphics/pokemon/gastly/footprint.1bpp"
	.globl gMonStillFrontPic_Haunter
gMonStillFrontPic_Haunter:
	.incbin "build/graphics/pokemon/haunter/still_front.4bpp.lz"
  .globl gMonPalette_Haunter
gMonPalette_Haunter:
  .incbin "build/graphics/pokemon/haunter/normal_palette.gbapal.lz"

  .globl gMonBackPic_Haunter
gMonBackPic_Haunter:
  .incbin "build/graphics/pokemon/haunter/back.4bpp.lz"

  .globl gMonShinyPalette_Haunter
gMonShinyPalette_Haunter:
  .incbin "build/graphics/pokemon/haunter/shiny_palette.gbapal.lz"

	.globl gMonIcon_Haunter
gMonIcon_Haunter: @ 0x08C6FC68 [093]
  .incbin "build/graphics/pokemon/haunter/icon.4bpp"
	@ analyzed canonical ROM range 0x08C70068-0x08C70423
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Haunter
gMonFootprint_Haunter:
	.incbin "build/graphics/pokemon/haunter/footprint.1bpp"
	.globl gMonStillFrontPic_Gengar
gMonStillFrontPic_Gengar:
	.incbin "build/graphics/pokemon/gengar/still_front.4bpp.lz"
  .globl gMonPalette_Gengar
gMonPalette_Gengar:
  .incbin "build/graphics/pokemon/gengar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gengar
gMonBackPic_Gengar:
  .incbin "build/graphics/pokemon/gengar/back.4bpp.lz"

  .globl gMonShinyPalette_Gengar
gMonShinyPalette_Gengar:
  .incbin "build/graphics/pokemon/gengar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gengar
gMonIcon_Gengar: @ 0x08C70754 [094]
  .incbin "build/graphics/pokemon/gengar/icon.4bpp"
	@ analyzed canonical ROM range 0x08C70B54-0x08C70FEB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Gengar
gMonFootprint_Gengar:
	.incbin "build/graphics/pokemon/gengar/footprint.1bpp"
	.globl gMonStillFrontPic_Onix
gMonStillFrontPic_Onix:
	.incbin "build/graphics/pokemon/onix/still_front.4bpp.lz"
  .globl gMonPalette_Onix
gMonPalette_Onix:
  .incbin "build/graphics/pokemon/onix/normal_palette.gbapal.lz"
  .space 0x1, 0x00
  .globl gMonBackPic_Onix
gMonBackPic_Onix:
  .incbin "build/graphics/pokemon/onix/back.4bpp.lz"

  .globl gMonShinyPalette_Onix
gMonShinyPalette_Onix:
  .incbin "build/graphics/pokemon/onix/shiny_palette.gbapal.lz"
  .space 0x1, 0x00
	.globl gMonIcon_Onix
gMonIcon_Onix: @ 0x08C713A0 [095]
  .incbin "build/graphics/pokemon/onix/icon.4bpp"
	@ analyzed canonical ROM range 0x08C717A0-0x08C71B37
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Onix
gMonFootprint_Onix:
	.incbin "build/graphics/pokemon/onix/footprint.1bpp"
	.globl gMonStillFrontPic_Drowzee
gMonStillFrontPic_Drowzee:
	.incbin "build/graphics/pokemon/drowzee/still_front.4bpp.lz"
  .globl gMonPalette_Drowzee
gMonPalette_Drowzee:
  .incbin "build/graphics/pokemon/drowzee/normal_palette.gbapal.lz"
  .space 0x2, 0x00
  .globl gMonBackPic_Drowzee
gMonBackPic_Drowzee:
  .incbin "build/graphics/pokemon/drowzee/back.4bpp.lz"

  .globl gMonShinyPalette_Drowzee
gMonShinyPalette_Drowzee:
  .incbin "build/graphics/pokemon/drowzee/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Drowzee
gMonIcon_Drowzee: @ 0x08C71DDC [096]
  .incbin "build/graphics/pokemon/drowzee/icon.4bpp"
	@ analyzed canonical ROM range 0x08C721DC-0x08C725E7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Drowzee
gMonFootprint_Drowzee:
	.incbin "build/graphics/pokemon/drowzee/footprint.1bpp"
	.globl gMonStillFrontPic_Hypno
gMonStillFrontPic_Hypno:
	.incbin "build/graphics/pokemon/hypno/still_front.4bpp.lz"
  .globl gMonPalette_Hypno
gMonPalette_Hypno:
  .incbin "build/graphics/pokemon/hypno/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hypno
gMonBackPic_Hypno:
  .incbin "build/graphics/pokemon/hypno/back.4bpp.lz"

  .globl gMonShinyPalette_Hypno
gMonShinyPalette_Hypno:
  .incbin "build/graphics/pokemon/hypno/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hypno
gMonIcon_Hypno: @ 0x08C72960 [097]
  .incbin "build/graphics/pokemon/hypno/icon.4bpp"
	@ analyzed canonical ROM range 0x08C72D60-0x08C73037
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Hypno
gMonFootprint_Hypno:
	.incbin "build/graphics/pokemon/hypno/footprint.1bpp"
	.globl gMonStillFrontPic_Krabby
gMonStillFrontPic_Krabby:
	.incbin "build/graphics/pokemon/krabby/still_front.4bpp.lz"
  .globl gMonPalette_Krabby
gMonPalette_Krabby:
  .incbin "build/graphics/pokemon/krabby/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Krabby
gMonBackPic_Krabby:
  .incbin "build/graphics/pokemon/krabby/back.4bpp.lz"

  .globl gMonShinyPalette_Krabby
gMonShinyPalette_Krabby:
  .incbin "build/graphics/pokemon/krabby/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Krabby
gMonIcon_Krabby: @ 0x08C73414 [098]
  .incbin "build/graphics/pokemon/krabby/icon.4bpp"
	@ analyzed canonical ROM range 0x08C73814-0x08C73D67
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Krabby
gMonFootprint_Krabby:
	.incbin "build/graphics/pokemon/krabby/footprint.1bpp"
	.globl gMonStillFrontPic_Kingler
gMonStillFrontPic_Kingler:
	.incbin "build/graphics/pokemon/kingler/still_front.4bpp.lz"
  .globl gMonPalette_Kingler
gMonPalette_Kingler:
  .incbin "build/graphics/pokemon/kingler/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kingler
gMonBackPic_Kingler:
  .incbin "build/graphics/pokemon/kingler/back.4bpp.lz"

  .globl gMonShinyPalette_Kingler
gMonShinyPalette_Kingler:
  .incbin "build/graphics/pokemon/kingler/shiny_palette.gbapal.lz"

	.globl gMonIcon_Kingler
gMonIcon_Kingler: @ 0x08C74134 [099]
  .incbin "build/graphics/pokemon/kingler/icon.4bpp"
	@ analyzed canonical ROM range 0x08C74534-0x08C7475B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kingler
gMonFootprint_Kingler:
	.incbin "build/graphics/pokemon/kingler/footprint.1bpp"
	.globl gMonStillFrontPic_Voltorb
gMonStillFrontPic_Voltorb:
	.incbin "build/graphics/pokemon/voltorb/still_front.4bpp.lz"
  .globl gMonPalette_Voltorb
gMonPalette_Voltorb:
  .incbin "build/graphics/pokemon/voltorb/normal_palette.gbapal.lz"
  .space 0x2, 0x00
  .globl gMonBackPic_Voltorb
gMonBackPic_Voltorb:
  .incbin "build/graphics/pokemon/voltorb/back.4bpp.lz"

  .globl gMonShinyPalette_Voltorb
gMonShinyPalette_Voltorb:
  .incbin "build/graphics/pokemon/voltorb/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Voltorb
gMonIcon_Voltorb: @ 0x08C74A18 [100]
  .incbin "build/graphics/pokemon/voltorb/icon.4bpp"
	@ analyzed canonical ROM range 0x08C74E18-0x08C750A3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Voltorb
gMonFootprint_Voltorb:
	.incbin "build/graphics/pokemon/voltorb/footprint.1bpp"
	.globl gMonStillFrontPic_Electrode
gMonStillFrontPic_Electrode:
	.incbin "build/graphics/pokemon/electrode/still_front.4bpp.lz"
  .globl gMonPalette_Electrode
gMonPalette_Electrode:
  .incbin "build/graphics/pokemon/electrode/normal_palette.gbapal.lz"

  .globl gMonBackPic_Electrode
gMonBackPic_Electrode:
  .incbin "build/graphics/pokemon/electrode/back.4bpp.lz"

  .globl gMonShinyPalette_Electrode
gMonShinyPalette_Electrode:
  .incbin "build/graphics/pokemon/electrode/shiny_palette.gbapal.lz"

	.globl gMonIcon_Electrode
gMonIcon_Electrode: @ 0x08C7535C [101]
  .incbin "build/graphics/pokemon/electrode/icon.4bpp"
	@ analyzed canonical ROM range 0x08C7575C-0x08C75B7F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Electrode
gMonFootprint_Electrode:
	.incbin "build/graphics/pokemon/electrode/footprint.1bpp"
	.globl gMonStillFrontPic_Exeggcute
gMonStillFrontPic_Exeggcute:
	.incbin "build/graphics/pokemon/exeggcute/still_front.4bpp.lz"
  .globl gMonPalette_Exeggcute
gMonPalette_Exeggcute:
  .incbin "build/graphics/pokemon/exeggcute/normal_palette.gbapal.lz"
  .space 0x2, 0x00
  .globl gMonBackPic_Exeggcute
gMonBackPic_Exeggcute:
  .incbin "build/graphics/pokemon/exeggcute/back.4bpp.lz"

  .globl gMonShinyPalette_Exeggcute
gMonShinyPalette_Exeggcute:
  .incbin "build/graphics/pokemon/exeggcute/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Exeggcute
gMonIcon_Exeggcute: @ 0x08C75ED0 [102]
  .incbin "build/graphics/pokemon/exeggcute/icon.4bpp"
	@ analyzed canonical ROM range 0x08C762D0-0x08C767EF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Exeggcute
gMonFootprint_Exeggcute:
	.incbin "build/graphics/pokemon/exeggcute/footprint.1bpp"
	.globl gMonStillFrontPic_Exeggutor
gMonStillFrontPic_Exeggutor:
	.incbin "build/graphics/pokemon/exeggutor/still_front.4bpp.lz"
  .globl gMonPalette_Exeggutor
gMonPalette_Exeggutor:
  .incbin "build/graphics/pokemon/exeggutor/normal_palette.gbapal.lz"

  .globl gMonBackPic_Exeggutor
gMonBackPic_Exeggutor:
  .incbin "build/graphics/pokemon/exeggutor/back.4bpp.lz"

  .globl gMonShinyPalette_Exeggutor
gMonShinyPalette_Exeggutor:
  .incbin "build/graphics/pokemon/exeggutor/shiny_palette.gbapal.lz"

	.globl gMonIcon_Exeggutor
gMonIcon_Exeggutor: @ 0x08C76CE0 [103]
  .incbin "build/graphics/pokemon/exeggutor/icon.4bpp"
	@ analyzed canonical ROM range 0x08C770E0-0x08C773CF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Exeggutor
gMonFootprint_Exeggutor:
	.incbin "build/graphics/pokemon/exeggutor/footprint.1bpp"
	.globl gMonStillFrontPic_Cubone
gMonStillFrontPic_Cubone:
	.incbin "build/graphics/pokemon/cubone/still_front.4bpp.lz"
  .globl gMonPalette_Cubone
gMonPalette_Cubone:
  .incbin "build/graphics/pokemon/cubone/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cubone
gMonBackPic_Cubone:
  .incbin "build/graphics/pokemon/cubone/back.4bpp.lz"

  .globl gMonShinyPalette_Cubone
gMonShinyPalette_Cubone:
  .incbin "build/graphics/pokemon/cubone/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 4

	.globl gMonIcon_Cubone
gMonIcon_Cubone: @ 0x08C77760 [104]
  .incbin "build/graphics/pokemon/cubone/icon.4bpp"
	@ analyzed canonical ROM range 0x08C77B60-0x08C77F07
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Cubone
gMonFootprint_Cubone:
	.incbin "build/graphics/pokemon/cubone/footprint.1bpp"
	.globl gMonStillFrontPic_Marowak
gMonStillFrontPic_Marowak:
	.incbin "build/graphics/pokemon/marowak/still_front.4bpp.lz"
  .globl gMonPalette_Marowak
gMonPalette_Marowak:
  .incbin "build/graphics/pokemon/marowak/normal_palette.gbapal.lz"

  .globl gMonBackPic_Marowak
gMonBackPic_Marowak:
  .incbin "build/graphics/pokemon/marowak/back.4bpp.lz"

  .globl gMonShinyPalette_Marowak
gMonShinyPalette_Marowak:
  .incbin "build/graphics/pokemon/marowak/shiny_palette.gbapal.lz"

	.globl gMonIcon_Marowak
gMonIcon_Marowak: @ 0x08C782A0 [105]
  .incbin "build/graphics/pokemon/marowak/icon.4bpp"
	@ analyzed canonical ROM range 0x08C786A0-0x08C78ABF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Marowak
gMonFootprint_Marowak:
	.incbin "build/graphics/pokemon/marowak/footprint.1bpp"
	.globl gMonStillFrontPic_Hitmonlee
gMonStillFrontPic_Hitmonlee:
	.incbin "build/graphics/pokemon/hitmonlee/still_front.4bpp.lz"
  .globl gMonPalette_Hitmonlee
gMonPalette_Hitmonlee:
  .incbin "build/graphics/pokemon/hitmonlee/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hitmonlee
gMonBackPic_Hitmonlee:
  .incbin "build/graphics/pokemon/hitmonlee/back.4bpp.lz"

  .globl gMonShinyPalette_Hitmonlee
gMonShinyPalette_Hitmonlee:
  .incbin "build/graphics/pokemon/hitmonlee/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hitmonlee
gMonIcon_Hitmonlee: @ 0x08C78DB4 [106]
  .incbin "build/graphics/pokemon/hitmonlee/icon.4bpp"
	@ analyzed canonical ROM range 0x08C791B4-0x08C79513
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Hitmonlee
gMonFootprint_Hitmonlee:
	.incbin "build/graphics/pokemon/hitmonlee/footprint.1bpp"
	.globl gMonStillFrontPic_Hitmonchan
gMonStillFrontPic_Hitmonchan:
	.incbin "build/graphics/pokemon/hitmonchan/still_front.4bpp.lz"
  .globl gMonPalette_Hitmonchan
gMonPalette_Hitmonchan:
  .incbin "build/graphics/pokemon/hitmonchan/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hitmonchan
gMonBackPic_Hitmonchan:
  .incbin "build/graphics/pokemon/hitmonchan/back.4bpp.lz"

  .globl gMonShinyPalette_Hitmonchan
gMonShinyPalette_Hitmonchan:
  .incbin "build/graphics/pokemon/hitmonchan/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hitmonchan
gMonIcon_Hitmonchan: @ 0x08C798A8 [107]
  .incbin "build/graphics/pokemon/hitmonchan/icon.4bpp"
	@ analyzed canonical ROM range 0x08C79CA8-0x08C7A07F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Hitmonchan
gMonFootprint_Hitmonchan:
	.incbin "build/graphics/pokemon/hitmonchan/footprint.1bpp"
	.globl gMonStillFrontPic_Lickitung
gMonStillFrontPic_Lickitung:
	.incbin "build/graphics/pokemon/lickitung/still_front.4bpp.lz"
  .globl gMonPalette_Lickitung
gMonPalette_Lickitung:
  .incbin "build/graphics/pokemon/lickitung/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lickitung
gMonBackPic_Lickitung:
  .incbin "build/graphics/pokemon/lickitung/back.4bpp.lz"

  .globl gMonShinyPalette_Lickitung
gMonShinyPalette_Lickitung:
  .incbin "build/graphics/pokemon/lickitung/shiny_palette.gbapal.lz"

	.globl gMonIcon_Lickitung
gMonIcon_Lickitung: @ 0x08C7A390 [108]
  .incbin "build/graphics/pokemon/lickitung/icon.4bpp"
	@ analyzed canonical ROM range 0x08C7A790-0x08C7AB0B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Lickitung
gMonFootprint_Lickitung:
	.incbin "build/graphics/pokemon/lickitung/footprint.1bpp"
	.globl gMonStillFrontPic_Koffing
gMonStillFrontPic_Koffing:
	.incbin "build/graphics/pokemon/koffing/still_front.4bpp.lz"
  .globl gMonPalette_Koffing
gMonPalette_Koffing:
  .incbin "build/graphics/pokemon/koffing/normal_palette.gbapal.lz"

  .globl gMonBackPic_Koffing
gMonBackPic_Koffing:
  .incbin "build/graphics/pokemon/koffing/back.4bpp.lz"

  .globl gMonShinyPalette_Koffing
gMonShinyPalette_Koffing:
  .incbin "build/graphics/pokemon/koffing/shiny_palette.gbapal.lz"

	.globl gMonIcon_Koffing
gMonIcon_Koffing: @ 0x08C7AE5C [109]
  .incbin "build/graphics/pokemon/koffing/icon.4bpp"
	@ analyzed canonical ROM range 0x08C7B25C-0x08C7B703
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Koffing
gMonFootprint_Koffing:
	.incbin "build/graphics/pokemon/koffing/footprint.1bpp"
	.globl gMonStillFrontPic_Weezing
gMonStillFrontPic_Weezing:
	.incbin "build/graphics/pokemon/weezing/still_front.4bpp.lz"
  .globl gMonPalette_Weezing
gMonPalette_Weezing:
  .incbin "build/graphics/pokemon/weezing/normal_palette.gbapal.lz"

  .globl gMonBackPic_Weezing
gMonBackPic_Weezing:
  .incbin "build/graphics/pokemon/weezing/back.4bpp.lz"

  .globl gMonShinyPalette_Weezing
gMonShinyPalette_Weezing:
  .incbin "build/graphics/pokemon/weezing/shiny_palette.gbapal.lz"

	.globl gMonIcon_Weezing
gMonIcon_Weezing: @ 0x08C7BA84 [110]
  .incbin "build/graphics/pokemon/weezing/icon.4bpp"
	@ analyzed canonical ROM range 0x08C7BE84-0x08C7C2A7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Weezing
gMonFootprint_Weezing:
	.incbin "build/graphics/pokemon/weezing/footprint.1bpp"
	.globl gMonStillFrontPic_Rhyhorn
gMonStillFrontPic_Rhyhorn:
	.incbin "build/graphics/pokemon/rhyhorn/still_front.4bpp.lz"
  .globl gMonPalette_Rhyhorn
gMonPalette_Rhyhorn:
  .incbin "build/graphics/pokemon/rhyhorn/normal_palette.gbapal.lz"
  .space 0x1, 0x00
  .globl gMonBackPic_Rhyhorn
gMonBackPic_Rhyhorn:
  .incbin "build/graphics/pokemon/rhyhorn/back.4bpp.lz"

  .globl gMonShinyPalette_Rhyhorn
gMonShinyPalette_Rhyhorn:
  .incbin "build/graphics/pokemon/rhyhorn/shiny_palette.gbapal.lz"
  .space 0x1, 0x00
	.globl gMonIcon_Rhyhorn
gMonIcon_Rhyhorn: @ 0x08C7C630 [111]
  .incbin "build/graphics/pokemon/rhyhorn/icon.4bpp"
	@ analyzed canonical ROM range 0x08C7CA30-0x08C7CF57
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Rhyhorn
gMonFootprint_Rhyhorn:
	.incbin "build/graphics/pokemon/rhyhorn/footprint.1bpp"
	.globl gMonStillFrontPic_Rhydon
gMonStillFrontPic_Rhydon:
	.incbin "build/graphics/pokemon/rhydon/still_front.4bpp.lz"
  .globl gMonPalette_Rhydon
gMonPalette_Rhydon:
  .incbin "build/graphics/pokemon/rhydon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rhydon
gMonBackPic_Rhydon:
  .incbin "build/graphics/pokemon/rhydon/back.4bpp.lz"

  .globl gMonShinyPalette_Rhydon
gMonShinyPalette_Rhydon:
  .incbin "build/graphics/pokemon/rhydon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Rhydon
gMonIcon_Rhydon: @ 0x08C7D3F8 [112]
  .incbin "build/graphics/pokemon/rhydon/icon.4bpp"
	@ analyzed canonical ROM range 0x08C7D7F8-0x08C7DB6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Rhydon
gMonFootprint_Rhydon:
	.incbin "build/graphics/pokemon/rhydon/footprint.1bpp"
	.globl gMonStillFrontPic_Chansey
gMonStillFrontPic_Chansey:
	.incbin "build/graphics/pokemon/chansey/still_front.4bpp.lz"
  .globl gMonPalette_Chansey
gMonPalette_Chansey:
  .incbin "build/graphics/pokemon/chansey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chansey
gMonBackPic_Chansey:
  .incbin "build/graphics/pokemon/chansey/back.4bpp.lz"

  .globl gMonShinyPalette_Chansey
gMonShinyPalette_Chansey:
  .incbin "build/graphics/pokemon/chansey/shiny_palette.gbapal.lz"

	.globl gMonIcon_Chansey
gMonIcon_Chansey: @ 0x08C7DE88 [113]
  .incbin "build/graphics/pokemon/chansey/icon.4bpp"
	@ analyzed canonical ROM range 0x08C7E288-0x08C7E67B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Chansey
gMonFootprint_Chansey:
	.incbin "build/graphics/pokemon/chansey/footprint.1bpp"
	.globl gMonStillFrontPic_Tangela
gMonStillFrontPic_Tangela:
	.incbin "build/graphics/pokemon/tangela/still_front.4bpp.lz"
  .globl gMonPalette_Tangela
gMonPalette_Tangela:
  .incbin "build/graphics/pokemon/tangela/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tangela
gMonBackPic_Tangela:
  .incbin "build/graphics/pokemon/tangela/back.4bpp.lz"

  .globl gMonShinyPalette_Tangela
gMonShinyPalette_Tangela:
  .incbin "build/graphics/pokemon/tangela/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tangela
gMonIcon_Tangela: @ 0x08C7EA70 [114]
  .incbin "build/graphics/pokemon/tangela/icon.4bpp"
	@ analyzed canonical ROM range 0x08C7EE70-0x08C7F387
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Tangela
gMonFootprint_Tangela:
	.incbin "build/graphics/pokemon/tangela/footprint.1bpp"
	.globl gMonStillFrontPic_Kangaskhan
gMonStillFrontPic_Kangaskhan:
	.incbin "build/graphics/pokemon/kangaskhan/still_front.4bpp.lz"
  .globl gMonPalette_Kangaskhan
gMonPalette_Kangaskhan:
  .incbin "build/graphics/pokemon/kangaskhan/normal_palette.gbapal.lz"
  .space 0x1, 0x00

  .globl gMonBackPic_Kangaskhan
gMonBackPic_Kangaskhan:
  .incbin "build/graphics/pokemon/kangaskhan/back.4bpp.lz"

  .globl gMonShinyPalette_Kangaskhan
gMonShinyPalette_Kangaskhan:
  .incbin "build/graphics/pokemon/kangaskhan/shiny_palette.gbapal.lz"
  .space 0x1, 0x00
	.globl gMonIcon_Kangaskhan
gMonIcon_Kangaskhan: @ 0x08C7F808 [115]
  .incbin "build/graphics/pokemon/kangaskhan/icon.4bpp"
	@ analyzed canonical ROM range 0x08C7FC08-0x08C7FE9F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kangaskhan
gMonFootprint_Kangaskhan:
	.incbin "build/graphics/pokemon/kangaskhan/footprint.1bpp"
	.globl gMonStillFrontPic_Horsea
gMonStillFrontPic_Horsea:
	.incbin "build/graphics/pokemon/horsea/still_front.4bpp.lz"
  .globl gMonPalette_Horsea
gMonPalette_Horsea:
  .incbin "build/graphics/pokemon/horsea/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Horsea
gMonBackPic_Horsea:
  .incbin "build/graphics/pokemon/horsea/back.4bpp.lz"

  .globl gMonShinyPalette_Horsea
gMonShinyPalette_Horsea:
  .incbin "build/graphics/pokemon/horsea/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Horsea
gMonIcon_Horsea: @ 0x08C801D0 [116]
  .incbin "build/graphics/pokemon/horsea/icon.4bpp"
	@ analyzed canonical ROM range 0x08C805D0-0x08C809AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Horsea
gMonFootprint_Horsea:
	.incbin "build/graphics/pokemon/horsea/footprint.1bpp"
	.globl gMonStillFrontPic_Seadra
gMonStillFrontPic_Seadra:
	.incbin "build/graphics/pokemon/seadra/still_front.4bpp.lz"
  .globl gMonPalette_Seadra
gMonPalette_Seadra:
  .incbin "build/graphics/pokemon/seadra/normal_palette.gbapal.lz"

  .globl gMonBackPic_Seadra
gMonBackPic_Seadra:
  .incbin "build/graphics/pokemon/seadra/back.4bpp.lz"

  .globl gMonShinyPalette_Seadra
gMonShinyPalette_Seadra:
  .incbin "build/graphics/pokemon/seadra/shiny_palette.gbapal.lz"

	.globl gMonIcon_Seadra
gMonIcon_Seadra: @ 0x08C80DA0 [117]
  .incbin "build/graphics/pokemon/seadra/icon.4bpp"
	@ analyzed canonical ROM range 0x08C811A0-0x08C81527
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Seadra
gMonFootprint_Seadra:
	.incbin "build/graphics/pokemon/seadra/footprint.1bpp"
	.globl gMonStillFrontPic_Goldeen
gMonStillFrontPic_Goldeen:
	.incbin "build/graphics/pokemon/goldeen/still_front.4bpp.lz"
  .globl gMonPalette_Goldeen
gMonPalette_Goldeen:
  .incbin "build/graphics/pokemon/goldeen/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Goldeen
gMonBackPic_Goldeen:
  .incbin "build/graphics/pokemon/goldeen/back.4bpp.lz"

  .globl gMonShinyPalette_Goldeen
gMonShinyPalette_Goldeen:
  .incbin "build/graphics/pokemon/goldeen/shiny_palette.gbapal.lz"

	.globl gMonIcon_Goldeen
gMonIcon_Goldeen: @ 0x08C818E8 [118]
  .incbin "build/graphics/pokemon/goldeen/icon.4bpp"
	@ analyzed canonical ROM range 0x08C81CE8-0x08C8217B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Goldeen
gMonFootprint_Goldeen:
	.incbin "build/graphics/pokemon/goldeen/footprint.1bpp"
	.globl gMonStillFrontPic_Seaking
gMonStillFrontPic_Seaking:
	.incbin "build/graphics/pokemon/seaking/still_front.4bpp.lz"
  .globl gMonPalette_Seaking
gMonPalette_Seaking:
  .incbin "build/graphics/pokemon/seaking/normal_palette.gbapal.lz"

  .globl gMonBackPic_Seaking
gMonBackPic_Seaking:
  .incbin "build/graphics/pokemon/seaking/back.4bpp.lz"

  .globl gMonShinyPalette_Seaking
gMonShinyPalette_Seaking:
  .incbin "build/graphics/pokemon/seaking/shiny_palette.gbapal.lz"

	.globl gMonIcon_Seaking
gMonIcon_Seaking: @ 0x08C8251C [119]
  .incbin "build/graphics/pokemon/seaking/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8291C-0x08C82C1F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Seaking
gMonFootprint_Seaking:
	.incbin "build/graphics/pokemon/seaking/footprint.1bpp"
	.globl gMonStillFrontPic_Staryu
gMonStillFrontPic_Staryu:
	.incbin "build/graphics/pokemon/staryu/still_front.4bpp.lz"
  .globl gMonPalette_Staryu
gMonPalette_Staryu:
  .incbin "build/graphics/pokemon/staryu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Staryu
gMonBackPic_Staryu:
  .incbin "build/graphics/pokemon/staryu/back.4bpp.lz"

  .globl gMonShinyPalette_Staryu
gMonShinyPalette_Staryu:
  .incbin "build/graphics/pokemon/staryu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Staryu
gMonIcon_Staryu: @ 0x08C82EFC [120]
  .incbin "build/graphics/pokemon/staryu/icon.4bpp"
	@ analyzed canonical ROM range 0x08C832FC-0x08C83743
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Staryu
gMonFootprint_Staryu:
	.incbin "build/graphics/pokemon/staryu/footprint.1bpp"
	.globl gMonStillFrontPic_Starmie
gMonStillFrontPic_Starmie:
	.incbin "build/graphics/pokemon/starmie/still_front.4bpp.lz"
  .globl gMonPalette_Starmie
gMonPalette_Starmie:
  .incbin "build/graphics/pokemon/starmie/normal_palette.gbapal.lz"

  .globl gMonBackPic_Starmie
gMonBackPic_Starmie:
  .incbin "build/graphics/pokemon/starmie/back.4bpp.lz"

  .globl gMonShinyPalette_Starmie
gMonShinyPalette_Starmie:
  .incbin "build/graphics/pokemon/starmie/shiny_palette.gbapal.lz"

	.globl gMonIcon_Starmie
gMonIcon_Starmie: @ 0x08C83A38 [121]
  .incbin "build/graphics/pokemon/starmie/icon.4bpp"
	@ analyzed canonical ROM range 0x08C83E38-0x08C84207
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Starmie
gMonFootprint_Starmie:
	.incbin "build/graphics/pokemon/starmie/footprint.1bpp"
	.globl gMonStillFrontPic_MrMime
gMonStillFrontPic_MrMime:
	.incbin "build/graphics/pokemon/mr_mime/still_front.4bpp.lz"
  .globl gMonPalette_MrMime
gMonPalette_MrMime:
  .incbin "build/graphics/pokemon/mr_mime/normal_palette.gbapal.lz"

  .globl gMonBackPic_MrMime
gMonBackPic_MrMime:
  .incbin "build/graphics/pokemon/mr_mime/back.4bpp.lz"

  .globl gMonShinyPalette_MrMime
gMonShinyPalette_MrMime:
  .incbin "build/graphics/pokemon/mr_mime/shiny_palette.gbapal.lz"

	.globl gMonIcon_MrMime
gMonIcon_MrMime: @ 0x08C8458C [122]
  .incbin "build/graphics/pokemon/mr_mime/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8498C-0x08C84E57
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_MrMime
gMonFootprint_MrMime:
	.incbin "build/graphics/pokemon/mr_mime/footprint.1bpp"
	.globl gMonStillFrontPic_Scyther
gMonStillFrontPic_Scyther:
	.incbin "build/graphics/pokemon/scyther/still_front.4bpp.lz"
  .globl gMonPalette_Scyther
gMonPalette_Scyther:
  .incbin "build/graphics/pokemon/scyther/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Scyther
gMonBackPic_Scyther:
  .incbin "build/graphics/pokemon/scyther/back.4bpp.lz"

  .globl gMonShinyPalette_Scyther
gMonShinyPalette_Scyther:
  .incbin "build/graphics/pokemon/scyther/shiny_palette.gbapal.lz"

	.globl gMonIcon_Scyther
gMonIcon_Scyther: @ 0x08C85250 [123]
  .incbin "build/graphics/pokemon/scyther/icon.4bpp"
	@ analyzed canonical ROM range 0x08C85650-0x08C85B0B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Scyther
gMonFootprint_Scyther:
	.incbin "build/graphics/pokemon/scyther/footprint.1bpp"
	.globl gMonStillFrontPic_Jynx
gMonStillFrontPic_Jynx:
	.incbin "build/graphics/pokemon/jynx/still_front.4bpp.lz"
  .globl gMonPalette_Jynx
gMonPalette_Jynx:
  .incbin "build/graphics/pokemon/jynx/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jynx
gMonBackPic_Jynx:
  .incbin "build/graphics/pokemon/jynx/back.4bpp.lz"

  .globl gMonShinyPalette_Jynx
gMonShinyPalette_Jynx:
  .incbin "build/graphics/pokemon/jynx/shiny_palette.gbapal.lz"

	.globl gMonIcon_Jynx
gMonIcon_Jynx: @ 0x08C85E54 [124]
  .incbin "build/graphics/pokemon/jynx/icon.4bpp"
	@ analyzed canonical ROM range 0x08C86254-0x08C866EF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Jynx
gMonFootprint_Jynx:
	.incbin "build/graphics/pokemon/jynx/footprint.1bpp"
	.globl gMonStillFrontPic_Electabuzz
gMonStillFrontPic_Electabuzz:
	.incbin "build/graphics/pokemon/electabuzz/still_front.4bpp.lz"
  .globl gMonPalette_Electabuzz
gMonPalette_Electabuzz:
  .incbin "build/graphics/pokemon/electabuzz/normal_palette.gbapal.lz"

  .globl gMonBackPic_Electabuzz
gMonBackPic_Electabuzz:
  .incbin "build/graphics/pokemon/electabuzz/back.4bpp.lz"

  .globl gMonShinyPalette_Electabuzz
gMonShinyPalette_Electabuzz:
  .incbin "build/graphics/pokemon/electabuzz/shiny_palette.gbapal.lz"

	.globl gMonIcon_Electabuzz
gMonIcon_Electabuzz: @ 0x08C86A50 [125]
  .incbin "build/graphics/pokemon/electabuzz/icon.4bpp"
	@ analyzed canonical ROM range 0x08C86E50-0x08C87317
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Electabuzz
gMonFootprint_Electabuzz:
	.incbin "build/graphics/pokemon/electabuzz/footprint.1bpp"
	.globl gMonStillFrontPic_Magmar
gMonStillFrontPic_Magmar:
	.incbin "build/graphics/pokemon/magmar/still_front.4bpp.lz"
  .globl gMonPalette_Magmar
gMonPalette_Magmar:
  .incbin "build/graphics/pokemon/magmar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magmar
gMonBackPic_Magmar:
  .incbin "build/graphics/pokemon/magmar/back.4bpp.lz"

  .globl gMonShinyPalette_Magmar
gMonShinyPalette_Magmar:
  .incbin "build/graphics/pokemon/magmar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magmar
gMonIcon_Magmar: @ 0x08C876B0 [126]
  .incbin "build/graphics/pokemon/magmar/icon.4bpp"
	@ analyzed canonical ROM range 0x08C87AB0-0x08C87EF7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Magmar
gMonFootprint_Magmar:
	.incbin "build/graphics/pokemon/magmar/footprint.1bpp"
	.globl gMonStillFrontPic_Pinsir
gMonStillFrontPic_Pinsir:
	.incbin "build/graphics/pokemon/pinsir/still_front.4bpp.lz"
  .globl gMonPalette_Pinsir
gMonPalette_Pinsir:
  .incbin "build/graphics/pokemon/pinsir/normal_palette.gbapal.lz"
  .space 0x2, 0x00
  .globl gMonBackPic_Pinsir
gMonBackPic_Pinsir:
  .incbin "build/graphics/pokemon/pinsir/back.4bpp.lz"

  .globl gMonShinyPalette_Pinsir
gMonShinyPalette_Pinsir:
  .incbin "build/graphics/pokemon/pinsir/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Pinsir
gMonIcon_Pinsir: @ 0x08C88294 [127]
  .incbin "build/graphics/pokemon/pinsir/icon.4bpp"
	@ analyzed canonical ROM range 0x08C88694-0x08C88B83
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Pinsir
gMonFootprint_Pinsir:
	.incbin "build/graphics/pokemon/pinsir/footprint.1bpp"
	.globl gMonStillFrontPic_Tauros
gMonStillFrontPic_Tauros:
	.incbin "build/graphics/pokemon/tauros/still_front.4bpp.lz"
  .globl gMonPalette_Tauros
gMonPalette_Tauros:
  .incbin "build/graphics/pokemon/tauros/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tauros
gMonBackPic_Tauros:
  .incbin "build/graphics/pokemon/tauros/back.4bpp.lz"

  .globl gMonShinyPalette_Tauros
gMonShinyPalette_Tauros:
  .incbin "build/graphics/pokemon/tauros/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tauros
gMonIcon_Tauros: @ 0x08C88E88 [128]
  .incbin "build/graphics/pokemon/tauros/icon.4bpp"
	@ analyzed canonical ROM range 0x08C89288-0x08C895F7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Tauros
gMonFootprint_Tauros:
	.incbin "build/graphics/pokemon/tauros/footprint.1bpp"
	.globl gMonStillFrontPic_Magikarp
gMonStillFrontPic_Magikarp:
	.incbin "build/graphics/pokemon/magikarp/still_front.4bpp.lz"
  .globl gMonPalette_Magikarp
gMonPalette_Magikarp:
  .incbin "build/graphics/pokemon/magikarp/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magikarp
gMonBackPic_Magikarp:
  .incbin "build/graphics/pokemon/magikarp/back.4bpp.lz"

  .globl gMonShinyPalette_Magikarp
gMonShinyPalette_Magikarp:
  .incbin "build/graphics/pokemon/magikarp/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magikarp
gMonIcon_Magikarp: @ 0x08C89978 [129]
  .incbin "build/graphics/pokemon/magikarp/icon.4bpp"
	@ analyzed canonical ROM range 0x08C89D78-0x08C8A2FF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Magikarp
gMonFootprint_Magikarp:
	.incbin "build/graphics/pokemon/magikarp/footprint.1bpp"
	.globl gMonStillFrontPic_Gyarados
gMonStillFrontPic_Gyarados:
	.incbin "build/graphics/pokemon/gyarados/still_front.4bpp.lz"
  .globl gMonPalette_Gyarados
gMonPalette_Gyarados:
  .incbin "build/graphics/pokemon/gyarados/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gyarados
gMonBackPic_Gyarados:
  .incbin "build/graphics/pokemon/gyarados/back.4bpp.lz"

  .globl gMonShinyPalette_Gyarados
gMonShinyPalette_Gyarados:
  .incbin "build/graphics/pokemon/gyarados/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gyarados
gMonIcon_Gyarados: @ 0x08C8A824 [130]
  .incbin "build/graphics/pokemon/gyarados/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8AC24-0x08C8B003
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Gyarados
gMonFootprint_Gyarados:
	.incbin "build/graphics/pokemon/gyarados/footprint.1bpp"
	.globl gMonStillFrontPic_Lapras
gMonStillFrontPic_Lapras:
	.incbin "build/graphics/pokemon/lapras/still_front.4bpp.lz"
  .globl gMonPalette_Lapras
gMonPalette_Lapras:
  .incbin "build/graphics/pokemon/lapras/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lapras
gMonBackPic_Lapras:
  .incbin "build/graphics/pokemon/lapras/back.4bpp.lz"

  .globl gMonShinyPalette_Lapras
gMonShinyPalette_Lapras:
  .incbin "build/graphics/pokemon/lapras/shiny_palette.gbapal.lz"

	.globl gMonIcon_Lapras
gMonIcon_Lapras: @ 0x08C8B398 [131]
  .incbin "build/graphics/pokemon/lapras/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8B798-0x08C8B9A7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Lapras
gMonFootprint_Lapras:
	.incbin "build/graphics/pokemon/lapras/footprint.1bpp"
	.globl gMonStillFrontPic_Ditto
gMonStillFrontPic_Ditto:
	.incbin "build/graphics/pokemon/ditto/still_front.4bpp.lz"
  .globl gMonPalette_Ditto
gMonPalette_Ditto:
  .incbin "build/graphics/pokemon/ditto/normal_palette.gbapal.lz"
  .space 0x3, 0x00
  .globl gMonBackPic_Ditto
gMonBackPic_Ditto:
  .incbin "build/graphics/pokemon/ditto/back.4bpp.lz"

  .globl gMonShinyPalette_Ditto
gMonShinyPalette_Ditto:
  .incbin "build/graphics/pokemon/ditto/shiny_palette.gbapal.lz"
  .space 0x3, 0x00
	.globl gMonIcon_Ditto
gMonIcon_Ditto: @ 0x08C8BBE8 [132]
  .incbin "build/graphics/pokemon/ditto/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8BFE8-0x08C8C2AB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ditto
gMonFootprint_Ditto:
	.incbin "build/graphics/pokemon/ditto/footprint.1bpp"
	.globl gMonStillFrontPic_Eevee
gMonStillFrontPic_Eevee:
	.incbin "build/graphics/pokemon/eevee/still_front.4bpp.lz"
  .globl gMonPalette_Eevee
gMonPalette_Eevee:
  .incbin "build/graphics/pokemon/eevee/normal_palette.gbapal.lz"

  .globl gMonBackPic_Eevee
gMonBackPic_Eevee:
  .incbin "build/graphics/pokemon/eevee/back.4bpp.lz"

  .globl gMonShinyPalette_Eevee
gMonShinyPalette_Eevee:
  .incbin "build/graphics/pokemon/eevee/shiny_palette.gbapal.lz"

	.globl gMonIcon_Eevee
gMonIcon_Eevee: @ 0x08C8C61C [133]
  .incbin "build/graphics/pokemon/eevee/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8CA1C-0x08C8CDCF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Eevee
gMonFootprint_Eevee:
	.incbin "build/graphics/pokemon/eevee/footprint.1bpp"
	.globl gMonStillFrontPic_Vaporeon
gMonStillFrontPic_Vaporeon:
	.incbin "build/graphics/pokemon/vaporeon/still_front.4bpp.lz"
  .globl gMonPalette_Vaporeon
gMonPalette_Vaporeon:
  .incbin "build/graphics/pokemon/vaporeon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vaporeon
gMonBackPic_Vaporeon:
  .incbin "build/graphics/pokemon/vaporeon/back.4bpp.lz"

  .globl gMonShinyPalette_Vaporeon
gMonShinyPalette_Vaporeon:
  .incbin "build/graphics/pokemon/vaporeon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Vaporeon
gMonIcon_Vaporeon: @ 0x08C8D0E8 [134]
  .incbin "build/graphics/pokemon/vaporeon/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8D4E8-0x08C8D8A7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Vaporeon
gMonFootprint_Vaporeon:
	.incbin "build/graphics/pokemon/vaporeon/footprint.1bpp"
	.globl gMonStillFrontPic_Jolteon
gMonStillFrontPic_Jolteon:
	.incbin "build/graphics/pokemon/jolteon/still_front.4bpp.lz"
  .globl gMonPalette_Jolteon
gMonPalette_Jolteon:
  .incbin "build/graphics/pokemon/jolteon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jolteon
gMonBackPic_Jolteon:
  .incbin "build/graphics/pokemon/jolteon/back.4bpp.lz"

  .globl gMonShinyPalette_Jolteon
gMonShinyPalette_Jolteon:
  .incbin "build/graphics/pokemon/jolteon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Jolteon
gMonIcon_Jolteon: @ 0x08C8DC88 [135]
  .incbin "build/graphics/pokemon/jolteon/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8E088-0x08C8E423
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Jolteon
gMonFootprint_Jolteon:
	.incbin "build/graphics/pokemon/jolteon/footprint.1bpp"
	.globl gMonStillFrontPic_Flareon
gMonStillFrontPic_Flareon:
	.incbin "build/graphics/pokemon/flareon/still_front.4bpp.lz"
  .globl gMonPalette_Flareon
gMonPalette_Flareon:
  .incbin "build/graphics/pokemon/flareon/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Flareon
gMonBackPic_Flareon:
  .incbin "build/graphics/pokemon/flareon/back.4bpp.lz"

  .globl gMonShinyPalette_Flareon
gMonShinyPalette_Flareon:
  .incbin "build/graphics/pokemon/flareon/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
.elseif .L__inc_fragment_select_a13e2e144708 == 5
	.globl gMonIcon_Flareon
gMonIcon_Flareon: @ 0x08C8E804 [136]
  .incbin "build/graphics/pokemon/flareon/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8EC04-0x08C8EEDF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Flareon
gMonFootprint_Flareon:
	.incbin "build/graphics/pokemon/flareon/footprint.1bpp"
	.globl gMonStillFrontPic_Porygon
gMonStillFrontPic_Porygon:
	.incbin "build/graphics/pokemon/porygon/still_front.4bpp.lz"
  .globl gMonPalette_Porygon
gMonPalette_Porygon:
  .incbin "build/graphics/pokemon/porygon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Porygon
gMonBackPic_Porygon:
  .incbin "build/graphics/pokemon/porygon/back.4bpp.lz"

  .globl gMonShinyPalette_Porygon
gMonShinyPalette_Porygon:
  .incbin "build/graphics/pokemon/porygon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Porygon
gMonIcon_Porygon: @ 0x08C8F1E0 [137]
  .incbin "build/graphics/pokemon/porygon/icon.4bpp"
	@ analyzed canonical ROM range 0x08C8F5E0-0x08C8F8A7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Porygon
gMonFootprint_Porygon:
	.incbin "build/graphics/pokemon/porygon/footprint.1bpp"
	.globl gMonStillFrontPic_Omanyte
gMonStillFrontPic_Omanyte:
	.incbin "build/graphics/pokemon/omanyte/still_front.4bpp.lz"
  .globl gMonPalette_Omanyte
gMonPalette_Omanyte:
  .incbin "build/graphics/pokemon/omanyte/normal_palette.gbapal.lz"

  .globl gMonBackPic_Omanyte
gMonBackPic_Omanyte:
  .incbin "build/graphics/pokemon/omanyte/back.4bpp.lz"

  .globl gMonShinyPalette_Omanyte
gMonShinyPalette_Omanyte:
  .incbin "build/graphics/pokemon/omanyte/shiny_palette.gbapal.lz"

	.globl gMonIcon_Omanyte
gMonIcon_Omanyte: @ 0x08C8FC44 [138]
  .incbin "build/graphics/pokemon/omanyte/icon.4bpp"
	@ analyzed canonical ROM range 0x08C90044-0x08C90423
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Omanyte
gMonFootprint_Omanyte:
	.incbin "build/graphics/pokemon/omanyte/footprint.1bpp"
	.globl gMonStillFrontPic_Omastar
gMonStillFrontPic_Omastar:
	.incbin "build/graphics/pokemon/omastar/still_front.4bpp.lz"
  .globl gMonPalette_Omastar
gMonPalette_Omastar:
  .incbin "build/graphics/pokemon/omastar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Omastar
gMonBackPic_Omastar:
  .incbin "build/graphics/pokemon/omastar/back.4bpp.lz"

  .globl gMonShinyPalette_Omastar
gMonShinyPalette_Omastar:
  .incbin "build/graphics/pokemon/omastar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Omastar
gMonIcon_Omastar: @ 0x08C907B4 [139]
  .incbin "build/graphics/pokemon/omastar/icon.4bpp"
	@ analyzed canonical ROM range 0x08C90BB4-0x08C90E43
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Omastar
gMonFootprint_Omastar:
	.incbin "build/graphics/pokemon/omastar/footprint.1bpp"
	.globl gMonStillFrontPic_Kabuto
gMonStillFrontPic_Kabuto:
	.incbin "build/graphics/pokemon/kabuto/still_front.4bpp.lz"
  .globl gMonPalette_Kabuto
gMonPalette_Kabuto:
  .incbin "build/graphics/pokemon/kabuto/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kabuto
gMonBackPic_Kabuto:
  .incbin "build/graphics/pokemon/kabuto/back.4bpp.lz"

  .globl gMonShinyPalette_Kabuto
gMonShinyPalette_Kabuto:
  .incbin "build/graphics/pokemon/kabuto/shiny_palette.gbapal.lz"

	.globl gMonIcon_Kabuto
gMonIcon_Kabuto: @ 0x08C9112C [140]
  .incbin "build/graphics/pokemon/kabuto/icon.4bpp"
	@ analyzed canonical ROM range 0x08C9152C-0x08C9194B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kabuto
gMonFootprint_Kabuto:
	.incbin "build/graphics/pokemon/kabuto/footprint.1bpp"
	.globl gMonStillFrontPic_Kabutops
gMonStillFrontPic_Kabutops:
	.incbin "build/graphics/pokemon/kabutops/still_front.4bpp.lz"
  .globl gMonPalette_Kabutops
gMonPalette_Kabutops:
  .incbin "build/graphics/pokemon/kabutops/normal_palette.gbapal.lz"
  .space 0x2, 0x00
  .globl gMonBackPic_Kabutops
gMonBackPic_Kabutops:
  .incbin "build/graphics/pokemon/kabutops/back.4bpp.lz"

  .globl gMonShinyPalette_Kabutops
gMonShinyPalette_Kabutops:
  .incbin "build/graphics/pokemon/kabutops/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Kabutops
gMonIcon_Kabutops: @ 0x08C91D38 [141]
  .incbin "build/graphics/pokemon/kabutops/icon.4bpp"
	@ analyzed canonical ROM range 0x08C92138-0x08C925D7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kabutops
gMonFootprint_Kabutops:
	.incbin "build/graphics/pokemon/kabutops/footprint.1bpp"
	.globl gMonStillFrontPic_Aerodactyl
gMonStillFrontPic_Aerodactyl:
	.incbin "build/graphics/pokemon/aerodactyl/still_front.4bpp.lz"
  .globl gMonPalette_Aerodactyl
gMonPalette_Aerodactyl:
  .incbin "build/graphics/pokemon/aerodactyl/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Aerodactyl
gMonBackPic_Aerodactyl:
  .incbin "build/graphics/pokemon/aerodactyl/back.4bpp.lz"

  .globl gMonShinyPalette_Aerodactyl
gMonShinyPalette_Aerodactyl:
  .incbin "build/graphics/pokemon/aerodactyl/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Aerodactyl
gMonIcon_Aerodactyl: @ 0x08C9292C [142]
  .incbin "build/graphics/pokemon/aerodactyl/icon.4bpp"
	@ analyzed canonical ROM range 0x08C92D2C-0x08C9318F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Aerodactyl
gMonFootprint_Aerodactyl:
	.incbin "build/graphics/pokemon/aerodactyl/footprint.1bpp"
	.globl gMonStillFrontPic_Snorlax
gMonStillFrontPic_Snorlax:
	.incbin "build/graphics/pokemon/snorlax/still_front.4bpp.lz"
  .globl gMonPalette_Snorlax
gMonPalette_Snorlax:
  .incbin "build/graphics/pokemon/snorlax/normal_palette.gbapal.lz"

  .globl gMonBackPic_Snorlax
gMonBackPic_Snorlax:
  .incbin "build/graphics/pokemon/snorlax/back.4bpp.lz"

  .globl gMonShinyPalette_Snorlax
gMonShinyPalette_Snorlax:
  .incbin "build/graphics/pokemon/snorlax/shiny_palette.gbapal.lz"

	.globl gMonIcon_Snorlax
gMonIcon_Snorlax: @ 0x08C933FC [143]
  .incbin "build/graphics/pokemon/snorlax/icon.4bpp"
	@ analyzed canonical ROM range 0x08C937FC-0x08C93D13
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Snorlax
gMonFootprint_Snorlax:
	.incbin "build/graphics/pokemon/snorlax/footprint.1bpp"
	.globl gMonStillFrontPic_Articuno
gMonStillFrontPic_Articuno:
	.incbin "build/graphics/pokemon/articuno/still_front.4bpp.lz"
  .globl gMonPalette_Articuno
gMonPalette_Articuno:
  .incbin "build/graphics/pokemon/articuno/normal_palette.gbapal.lz"

  .globl gMonBackPic_Articuno
gMonBackPic_Articuno:
  .incbin "build/graphics/pokemon/articuno/back.4bpp.lz"

  .globl gMonShinyPalette_Articuno
gMonShinyPalette_Articuno:
  .incbin "build/graphics/pokemon/articuno/shiny_palette.gbapal.lz"

	.globl gMonIcon_Articuno
gMonIcon_Articuno: @ 0x08C93FC0 [144]
  .incbin "build/graphics/pokemon/articuno/icon.4bpp"
	@ analyzed canonical ROM range 0x08C943C0-0x08C94853
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Articuno
gMonFootprint_Articuno:
	.incbin "build/graphics/pokemon/articuno/footprint.1bpp"
	.globl gMonStillFrontPic_Zapdos
gMonStillFrontPic_Zapdos:
	.incbin "build/graphics/pokemon/zapdos/still_front.4bpp.lz"
  .globl gMonPalette_Zapdos
gMonPalette_Zapdos:
  .incbin "build/graphics/pokemon/zapdos/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zapdos
gMonBackPic_Zapdos:
  .incbin "build/graphics/pokemon/zapdos/back.4bpp.lz"

  .globl gMonShinyPalette_Zapdos
gMonShinyPalette_Zapdos:
  .incbin "build/graphics/pokemon/zapdos/shiny_palette.gbapal.lz"

	.globl gMonIcon_Zapdos
gMonIcon_Zapdos: @ 0x08C94BE0 [145]
  .incbin "build/graphics/pokemon/zapdos/icon.4bpp"
	@ analyzed canonical ROM range 0x08C94FE0-0x08C955AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Zapdos
gMonFootprint_Zapdos:
	.incbin "build/graphics/pokemon/zapdos/footprint.1bpp"
	.globl gMonStillFrontPic_Moltres
gMonStillFrontPic_Moltres:
	.incbin "build/graphics/pokemon/moltres/still_front.4bpp.lz"
  .globl gMonPalette_Moltres
gMonPalette_Moltres:
  .incbin "build/graphics/pokemon/moltres/normal_palette.gbapal.lz"

  .globl gMonBackPic_Moltres
gMonBackPic_Moltres:
  .incbin "build/graphics/pokemon/moltres/back.4bpp.lz"

  .globl gMonShinyPalette_Moltres
gMonShinyPalette_Moltres:
  .incbin "build/graphics/pokemon/moltres/shiny_palette.gbapal.lz"

	.globl gMonIcon_Moltres
gMonIcon_Moltres: @ 0x08C9593C [146]
  .incbin "build/graphics/pokemon/moltres/icon.4bpp"
	@ analyzed canonical ROM range 0x08C95D3C-0x08C96013
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Moltres
gMonFootprint_Moltres:
	.incbin "build/graphics/pokemon/moltres/footprint.1bpp"
	.globl gMonStillFrontPic_Dratini
gMonStillFrontPic_Dratini:
	.incbin "build/graphics/pokemon/dratini/still_front.4bpp.lz"
  .globl gMonPalette_Dratini
gMonPalette_Dratini:
  .incbin "build/graphics/pokemon/dratini/normal_palette.gbapal.lz"
  .space 0x2, 0x00
  .globl gMonBackPic_Dratini
gMonBackPic_Dratini:
  .incbin "build/graphics/pokemon/dratini/back.4bpp.lz"

  .globl gMonShinyPalette_Dratini
gMonShinyPalette_Dratini:
  .incbin "build/graphics/pokemon/dratini/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Dratini
gMonIcon_Dratini: @ 0x08C962EC [147]
  .incbin "build/graphics/pokemon/dratini/icon.4bpp"
	@ analyzed canonical ROM range 0x08C966EC-0x08C96A6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Dratini
gMonFootprint_Dratini:
	.incbin "build/graphics/pokemon/dratini/footprint.1bpp"
	.globl gMonStillFrontPic_Dragonair
gMonStillFrontPic_Dragonair:
	.incbin "build/graphics/pokemon/dragonair/still_front.4bpp.lz"
  .globl gMonPalette_Dragonair
gMonPalette_Dragonair:
  .incbin "build/graphics/pokemon/dragonair/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dragonair
gMonBackPic_Dragonair:
  .incbin "build/graphics/pokemon/dragonair/back.4bpp.lz"

  .globl gMonShinyPalette_Dragonair
gMonShinyPalette_Dragonair:
  .incbin "build/graphics/pokemon/dragonair/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dragonair
gMonIcon_Dragonair: @ 0x08C96DCC [148]
  .incbin "build/graphics/pokemon/dragonair/icon.4bpp"
	@ analyzed canonical ROM range 0x08C971CC-0x08C9775B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Dragonair
gMonFootprint_Dragonair:
	.incbin "build/graphics/pokemon/dragonair/footprint.1bpp"
	.globl gMonStillFrontPic_Dragonite
gMonStillFrontPic_Dragonite:
	.incbin "build/graphics/pokemon/dragonite/still_front.4bpp.lz"
  .globl gMonPalette_Dragonite
gMonPalette_Dragonite:
  .incbin "build/graphics/pokemon/dragonite/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dragonite
gMonBackPic_Dragonite:
  .incbin "build/graphics/pokemon/dragonite/back.4bpp.lz"

  .globl gMonShinyPalette_Dragonite
gMonShinyPalette_Dragonite:
  .incbin "build/graphics/pokemon/dragonite/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dragonite
gMonIcon_Dragonite: @ 0x08C97AA8 [149]
  .incbin "build/graphics/pokemon/dragonite/icon.4bpp"
	@ analyzed canonical ROM range 0x08C97EA8-0x08C98303
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Dragonite
gMonFootprint_Dragonite:
	.incbin "build/graphics/pokemon/dragonite/footprint.1bpp"
	.globl gMonStillFrontPic_Mewtwo
gMonStillFrontPic_Mewtwo:
	.incbin "build/graphics/pokemon/mewtwo/still_front.4bpp.lz"
  .globl gMonPalette_Mewtwo
gMonPalette_Mewtwo:
  .incbin "build/graphics/pokemon/mewtwo/normal_palette.gbapal.lz"
  .space 0x2, 0x00
  .globl gMonBackPic_Mewtwo
gMonBackPic_Mewtwo:
  .incbin "build/graphics/pokemon/mewtwo/back.4bpp.lz"

  .globl gMonShinyPalette_Mewtwo
gMonShinyPalette_Mewtwo:
  .incbin "build/graphics/pokemon/mewtwo/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Mewtwo
gMonIcon_Mewtwo: @ 0x08C98718 [150]
  .incbin "build/graphics/pokemon/mewtwo/icon.4bpp"
	@ analyzed canonical ROM range 0x08C98B18-0x08C98DB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Mewtwo
gMonFootprint_Mewtwo:
	.incbin "build/graphics/pokemon/mewtwo/footprint.1bpp"
	.globl gMonStillFrontPic_Mew
gMonStillFrontPic_Mew:
	.incbin "build/graphics/pokemon/mew/still_front.4bpp.lz"
  .globl gMonPalette_Mew
gMonPalette_Mew:
  .incbin "build/graphics/pokemon/mew/normal_palette.gbapal.lz"
  .space 0x2, 0x00
  .globl gMonBackPic_Mew
gMonBackPic_Mew:
  .incbin "build/graphics/pokemon/mew/back.4bpp.lz"

  .globl gMonShinyPalette_Mew
gMonShinyPalette_Mew:
  .incbin "build/graphics/pokemon/mew/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Mew
gMonIcon_Mew: @ 0x08C990CC [151]
  .incbin "build/graphics/pokemon/mew/icon.4bpp"
	@ analyzed canonical ROM range 0x08C994CC-0x08C99753
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Mew
gMonFootprint_Mew:
	.incbin "build/graphics/pokemon/mew/footprint.1bpp"
	.globl gMonStillFrontPic_Chikorita
gMonStillFrontPic_Chikorita:
	.incbin "build/graphics/pokemon/chikorita/still_front.4bpp.lz"
  .globl gMonPalette_Chikorita
gMonPalette_Chikorita:
  .incbin "build/graphics/pokemon/chikorita/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chikorita
gMonBackPic_Chikorita:
  .incbin "build/graphics/pokemon/chikorita/back.4bpp.lz"

  .globl gMonShinyPalette_Chikorita
gMonShinyPalette_Chikorita:
  .incbin "build/graphics/pokemon/chikorita/shiny_palette.gbapal.lz"

	.globl gMonIcon_Chikorita
gMonIcon_Chikorita: @ 0x08C99A68 [152]
  .incbin "build/graphics/pokemon/chikorita/icon.4bpp"
	@ analyzed canonical ROM range 0x08C99E68-0x08C9A25B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Chikorita
gMonFootprint_Chikorita:
	.incbin "build/graphics/pokemon/chikorita/footprint.1bpp"
	.globl gMonStillFrontPic_Bayleef
gMonStillFrontPic_Bayleef:
	.incbin "build/graphics/pokemon/bayleef/still_front.4bpp.lz"
  .globl gMonPalette_Bayleef
gMonPalette_Bayleef:
  .incbin "build/graphics/pokemon/bayleef/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bayleef
gMonBackPic_Bayleef:
  .incbin "build/graphics/pokemon/bayleef/back.4bpp.lz"

  .globl gMonShinyPalette_Bayleef
gMonShinyPalette_Bayleef:
  .incbin "build/graphics/pokemon/bayleef/shiny_palette.gbapal.lz"

	.globl gMonIcon_Bayleef
gMonIcon_Bayleef: @ 0x08C9A63C [153]
  .incbin "build/graphics/pokemon/bayleef/icon.4bpp"
	@ analyzed canonical ROM range 0x08C9AA3C-0x08C9AFB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Bayleef
gMonFootprint_Bayleef:
	.incbin "build/graphics/pokemon/bayleef/footprint.1bpp"
	.globl gMonStillFrontPic_Meganium
gMonStillFrontPic_Meganium:
	.incbin "build/graphics/pokemon/meganium/still_front.4bpp.lz"
  .globl gMonPalette_Meganium
gMonPalette_Meganium:
  .incbin "build/graphics/pokemon/meganium/normal_palette.gbapal.lz"

  .globl gMonBackPic_Meganium
gMonBackPic_Meganium:
  .incbin "build/graphics/pokemon/meganium/back.4bpp.lz"

  .globl gMonShinyPalette_Meganium
gMonShinyPalette_Meganium:
  .incbin "build/graphics/pokemon/meganium/shiny_palette.gbapal.lz"

	.globl gMonIcon_Meganium
gMonIcon_Meganium: @ 0x08C9B358 [154]
  .incbin "build/graphics/pokemon/meganium/icon.4bpp"
	@ analyzed canonical ROM range 0x08C9B758-0x08C9BA03
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Meganium
gMonFootprint_Meganium:
	.incbin "build/graphics/pokemon/meganium/footprint.1bpp"
	.globl gMonStillFrontPic_Cyndaquil
gMonStillFrontPic_Cyndaquil:
	.incbin "build/graphics/pokemon/cyndaquil/still_front.4bpp.lz"
  .globl gMonPalette_Cyndaquil
gMonPalette_Cyndaquil:
  .incbin "build/graphics/pokemon/cyndaquil/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cyndaquil
gMonBackPic_Cyndaquil:
  .incbin "build/graphics/pokemon/cyndaquil/back.4bpp.lz"

  .globl gMonShinyPalette_Cyndaquil
gMonShinyPalette_Cyndaquil:
  .incbin "build/graphics/pokemon/cyndaquil/shiny_palette.gbapal.lz"

	.globl gMonIcon_Cyndaquil
gMonIcon_Cyndaquil: @ 0x08C9BD80 [155]
  .incbin "build/graphics/pokemon/cyndaquil/icon.4bpp"
	@ analyzed canonical ROM range 0x08C9C180-0x08C9C4BB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Cyndaquil
gMonFootprint_Cyndaquil:
	.incbin "build/graphics/pokemon/cyndaquil/footprint.1bpp"
	.globl gMonStillFrontPic_Quilava
gMonStillFrontPic_Quilava:
	.incbin "build/graphics/pokemon/quilava/still_front.4bpp.lz"
  .globl gMonPalette_Quilava
gMonPalette_Quilava:
  .incbin "build/graphics/pokemon/quilava/normal_palette.gbapal.lz"

  .globl gMonBackPic_Quilava
gMonBackPic_Quilava:
  .incbin "build/graphics/pokemon/quilava/back.4bpp.lz"

  .globl gMonShinyPalette_Quilava
gMonShinyPalette_Quilava:
  .incbin "build/graphics/pokemon/quilava/shiny_palette.gbapal.lz"

	.globl gMonIcon_Quilava
gMonIcon_Quilava: @ 0x08C9C880 [156]
  .incbin "build/graphics/pokemon/quilava/icon.4bpp"
	@ analyzed canonical ROM range 0x08C9CC80-0x08C9D0C7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Quilava
gMonFootprint_Quilava:
	.incbin "build/graphics/pokemon/quilava/footprint.1bpp"
	.globl gMonStillFrontPic_Typhlosion
gMonStillFrontPic_Typhlosion:
	.incbin "build/graphics/pokemon/typhlosion/still_front.4bpp.lz"
  .globl gMonPalette_Typhlosion
gMonPalette_Typhlosion:
  .incbin "build/graphics/pokemon/typhlosion/normal_palette.gbapal.lz"

  .globl gMonBackPic_Typhlosion
gMonBackPic_Typhlosion:
  .incbin "build/graphics/pokemon/typhlosion/back.4bpp.lz"

  .globl gMonShinyPalette_Typhlosion
gMonShinyPalette_Typhlosion:
  .incbin "build/graphics/pokemon/typhlosion/shiny_palette.gbapal.lz"

	.globl gMonIcon_Typhlosion
gMonIcon_Typhlosion: @ 0x08C9D51C [157]
  .incbin "build/graphics/pokemon/typhlosion/icon.4bpp"
	@ analyzed canonical ROM range 0x08C9D91C-0x08C9DBDF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Typhlosion
gMonFootprint_Typhlosion:
	.incbin "build/graphics/pokemon/typhlosion/footprint.1bpp"
	.globl gMonStillFrontPic_Totodile
gMonStillFrontPic_Totodile:
	.incbin "build/graphics/pokemon/totodile/still_front.4bpp.lz"
  .globl gMonPalette_Totodile
gMonPalette_Totodile:
  .incbin "build/graphics/pokemon/totodile/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Totodile
gMonBackPic_Totodile:
  .incbin "build/graphics/pokemon/totodile/back.4bpp.lz"

  .globl gMonShinyPalette_Totodile
gMonShinyPalette_Totodile:
  .incbin "build/graphics/pokemon/totodile/shiny_palette.gbapal.lz"

	.globl gMonIcon_Totodile
gMonIcon_Totodile: @ 0x08C9DF10 [158]
  .incbin "build/graphics/pokemon/totodile/icon.4bpp"
	@ analyzed canonical ROM range 0x08C9E310-0x08C9E697
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Totodile
gMonFootprint_Totodile:
	.incbin "build/graphics/pokemon/totodile/footprint.1bpp"
	.globl gMonStillFrontPic_Croconaw
gMonStillFrontPic_Croconaw:
	.incbin "build/graphics/pokemon/croconaw/still_front.4bpp.lz"
  .globl gMonPalette_Croconaw
gMonPalette_Croconaw:
  .incbin "build/graphics/pokemon/croconaw/normal_palette.gbapal.lz"

  .globl gMonBackPic_Croconaw
gMonBackPic_Croconaw:
  .incbin "build/graphics/pokemon/croconaw/back.4bpp.lz"

  .globl gMonShinyPalette_Croconaw
gMonShinyPalette_Croconaw:
  .incbin "build/graphics/pokemon/croconaw/shiny_palette.gbapal.lz"

	.globl gMonIcon_Croconaw
gMonIcon_Croconaw: @ 0x08C9EA38 [159]
  .incbin "build/graphics/pokemon/croconaw/icon.4bpp"
	@ analyzed canonical ROM range 0x08C9EE38-0x08C9F3C3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Croconaw
gMonFootprint_Croconaw:
	.incbin "build/graphics/pokemon/croconaw/footprint.1bpp"
	.globl gMonStillFrontPic_Feraligatr
gMonStillFrontPic_Feraligatr:
	.incbin "build/graphics/pokemon/feraligatr/still_front.4bpp.lz"
  .globl gMonPalette_Feraligatr
gMonPalette_Feraligatr:
  .incbin "build/graphics/pokemon/feraligatr/normal_palette.gbapal.lz"

  .globl gMonBackPic_Feraligatr
gMonBackPic_Feraligatr:
  .incbin "build/graphics/pokemon/feraligatr/back.4bpp.lz"

  .globl gMonShinyPalette_Feraligatr
gMonShinyPalette_Feraligatr:
  .incbin "build/graphics/pokemon/feraligatr/shiny_palette.gbapal.lz"

	.globl gMonIcon_Feraligatr
gMonIcon_Feraligatr: @ 0x08C9F8E0 [160]
  .incbin "build/graphics/pokemon/feraligatr/icon.4bpp"
	@ analyzed canonical ROM range 0x08C9FCE0-0x08C9FFDB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Feraligatr
gMonFootprint_Feraligatr:
	.incbin "build/graphics/pokemon/feraligatr/footprint.1bpp"
	.globl gMonStillFrontPic_Sentret
gMonStillFrontPic_Sentret:
	.incbin "build/graphics/pokemon/sentret/still_front.4bpp.lz"
  .globl gMonPalette_Sentret
gMonPalette_Sentret:
  .incbin "build/graphics/pokemon/sentret/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sentret
gMonBackPic_Sentret:
  .incbin "build/graphics/pokemon/sentret/back.4bpp.lz"

  .globl gMonShinyPalette_Sentret
gMonShinyPalette_Sentret:
  .incbin "build/graphics/pokemon/sentret/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sentret
gMonIcon_Sentret: @ 0x08CA02D0 [161]
  .incbin "build/graphics/pokemon/sentret/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA06D0-0x08CA0A23
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sentret
gMonFootprint_Sentret:
	.incbin "build/graphics/pokemon/sentret/footprint.1bpp"
	.globl gMonStillFrontPic_Furret
gMonStillFrontPic_Furret:
	.incbin "build/graphics/pokemon/furret/still_front.4bpp.lz"
  .globl gMonPalette_Furret
gMonPalette_Furret:
  .incbin "build/graphics/pokemon/furret/normal_palette.gbapal.lz"

  .globl gMonBackPic_Furret
gMonBackPic_Furret:
  .incbin "build/graphics/pokemon/furret/back.4bpp.lz"

  .globl gMonShinyPalette_Furret
gMonShinyPalette_Furret:
  .incbin "build/graphics/pokemon/furret/shiny_palette.gbapal.lz"

	.globl gMonIcon_Furret
gMonIcon_Furret: @ 0x08CA0D9C [162]
  .incbin "build/graphics/pokemon/furret/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA119C-0x08CA143F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Furret
gMonFootprint_Furret:
	.incbin "build/graphics/pokemon/furret/footprint.1bpp"
	.globl gMonStillFrontPic_Hoothoot
gMonStillFrontPic_Hoothoot:
	.incbin "build/graphics/pokemon/hoothoot/still_front.4bpp.lz"
  .globl gMonPalette_Hoothoot
gMonPalette_Hoothoot:
  .incbin "build/graphics/pokemon/hoothoot/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hoothoot
gMonBackPic_Hoothoot:
  .incbin "build/graphics/pokemon/hoothoot/back.4bpp.lz"

  .globl gMonShinyPalette_Hoothoot
gMonShinyPalette_Hoothoot:
  .incbin "build/graphics/pokemon/hoothoot/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hoothoot
gMonIcon_Hoothoot: @ 0x08CA1798 [163]
  .incbin "build/graphics/pokemon/hoothoot/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA1B98-0x08CA1F0B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Hoothoot
gMonFootprint_Hoothoot:
	.incbin "build/graphics/pokemon/hoothoot/footprint.1bpp"
	.globl gMonStillFrontPic_Noctowl
gMonStillFrontPic_Noctowl:
	.incbin "build/graphics/pokemon/noctowl/still_front.4bpp.lz"
  .globl gMonPalette_Noctowl
gMonPalette_Noctowl:
  .incbin "build/graphics/pokemon/noctowl/normal_palette.gbapal.lz"

  .globl gMonBackPic_Noctowl
gMonBackPic_Noctowl:
  .incbin "build/graphics/pokemon/noctowl/back.4bpp.lz"

  .globl gMonShinyPalette_Noctowl
gMonShinyPalette_Noctowl:
  .incbin "build/graphics/pokemon/noctowl/shiny_palette.gbapal.lz"

	.globl gMonIcon_Noctowl
gMonIcon_Noctowl: @ 0x08CA22B8 [164]
  .incbin "build/graphics/pokemon/noctowl/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA26B8-0x08CA29CB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Noctowl
gMonFootprint_Noctowl:
	.incbin "build/graphics/pokemon/noctowl/footprint.1bpp"
	.globl gMonStillFrontPic_Ledyba
gMonStillFrontPic_Ledyba:
	.incbin "build/graphics/pokemon/ledyba/still_front.4bpp.lz"
  .globl gMonPalette_Ledyba
gMonPalette_Ledyba:
  .incbin "build/graphics/pokemon/ledyba/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ledyba
gMonBackPic_Ledyba:
  .incbin "build/graphics/pokemon/ledyba/back.4bpp.lz"

  .globl gMonShinyPalette_Ledyba
gMonShinyPalette_Ledyba:
  .incbin "build/graphics/pokemon/ledyba/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ledyba
gMonIcon_Ledyba: @ 0x08CA2D4C [165]
  .incbin "build/graphics/pokemon/ledyba/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA314C-0x08CA34F3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ledyba
gMonFootprint_Ledyba:
	.incbin "build/graphics/pokemon/ledyba/footprint.1bpp"
	.globl gMonStillFrontPic_Ledian
gMonStillFrontPic_Ledian:
	.incbin "build/graphics/pokemon/ledian/still_front.4bpp.lz"
  .globl gMonPalette_Ledian
gMonPalette_Ledian:
  .incbin "build/graphics/pokemon/ledian/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ledian
gMonBackPic_Ledian:
  .incbin "build/graphics/pokemon/ledian/back.4bpp.lz"

  .globl gMonShinyPalette_Ledian
gMonShinyPalette_Ledian:
  .incbin "build/graphics/pokemon/ledian/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ledian
gMonIcon_Ledian: @ 0x08CA389C [166]
  .incbin "build/graphics/pokemon/ledian/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA3C9C-0x08CA3F2F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ledian
gMonFootprint_Ledian:
	.incbin "build/graphics/pokemon/ledian/footprint.1bpp"
	.globl gMonStillFrontPic_Spinarak
gMonStillFrontPic_Spinarak:
	.incbin "build/graphics/pokemon/spinarak/still_front.4bpp.lz"
  .globl gMonPalette_Spinarak
gMonPalette_Spinarak:
  .incbin "build/graphics/pokemon/spinarak/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spinarak
gMonBackPic_Spinarak:
  .incbin "build/graphics/pokemon/spinarak/back.4bpp.lz"

  .globl gMonShinyPalette_Spinarak
gMonShinyPalette_Spinarak:
  .incbin "build/graphics/pokemon/spinarak/shiny_palette.gbapal.lz"

	.globl gMonIcon_Spinarak
gMonIcon_Spinarak: @ 0x08CA41E4 [167]
  .incbin "build/graphics/pokemon/spinarak/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA45E4-0x08CA49C3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Spinarak
gMonFootprint_Spinarak:
	.incbin "build/graphics/pokemon/spinarak/footprint.1bpp"
	.globl gMonStillFrontPic_Ariados
gMonStillFrontPic_Ariados:
	.incbin "build/graphics/pokemon/ariados/still_front.4bpp.lz"
  .globl gMonPalette_Ariados
gMonPalette_Ariados:
  .incbin "build/graphics/pokemon/ariados/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ariados
gMonBackPic_Ariados:
  .incbin "build/graphics/pokemon/ariados/back.4bpp.lz"

  .globl gMonShinyPalette_Ariados
gMonShinyPalette_Ariados:
  .incbin "build/graphics/pokemon/ariados/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ariados
gMonIcon_Ariados: @ 0x08CA4D8C [168]
  .incbin "build/graphics/pokemon/ariados/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA518C-0x08CA555B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ariados
gMonFootprint_Ariados:
	.incbin "build/graphics/pokemon/ariados/footprint.1bpp"
	.globl gMonStillFrontPic_Crobat
gMonStillFrontPic_Crobat:
	.incbin "build/graphics/pokemon/crobat/still_front.4bpp.lz"
  .globl gMonPalette_Crobat
gMonPalette_Crobat:
  .incbin "build/graphics/pokemon/crobat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Crobat
gMonBackPic_Crobat:
  .incbin "build/graphics/pokemon/crobat/back.4bpp.lz"

  .globl gMonShinyPalette_Crobat
gMonShinyPalette_Crobat:
  .incbin "build/graphics/pokemon/crobat/shiny_palette.gbapal.lz"

	.globl gMonIcon_Crobat
gMonIcon_Crobat: @ 0x08CA58B4 [169]
  .incbin "build/graphics/pokemon/crobat/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA5CB4-0x08CA5FAB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Crobat
gMonFootprint_Crobat:
	.incbin "build/graphics/pokemon/crobat/footprint.1bpp"
	.globl gMonStillFrontPic_Chinchou
gMonStillFrontPic_Chinchou:
	.incbin "build/graphics/pokemon/chinchou/still_front.4bpp.lz"
  .globl gMonPalette_Chinchou
gMonPalette_Chinchou:
  .incbin "build/graphics/pokemon/chinchou/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chinchou
gMonBackPic_Chinchou:
  .incbin "build/graphics/pokemon/chinchou/back.4bpp.lz"

  .globl gMonShinyPalette_Chinchou
gMonShinyPalette_Chinchou:
  .incbin "build/graphics/pokemon/chinchou/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 6

	.globl gMonIcon_Chinchou
gMonIcon_Chinchou: @ 0x08CA62F4 [170]
  .incbin "build/graphics/pokemon/chinchou/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA66F4-0x08CA6A83
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Chinchou
gMonFootprint_Chinchou:
	.incbin "build/graphics/pokemon/chinchou/footprint.1bpp"
	.globl gMonStillFrontPic_Lanturn
gMonStillFrontPic_Lanturn:
	.incbin "build/graphics/pokemon/lanturn/still_front.4bpp.lz"
  .globl gMonPalette_Lanturn
gMonPalette_Lanturn:
  .incbin "build/graphics/pokemon/lanturn/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lanturn
gMonBackPic_Lanturn:
  .incbin "build/graphics/pokemon/lanturn/back.4bpp.lz"

  .globl gMonShinyPalette_Lanturn
gMonShinyPalette_Lanturn:
  .incbin "build/graphics/pokemon/lanturn/shiny_palette.gbapal.lz"

	.globl gMonIcon_Lanturn
gMonIcon_Lanturn: @ 0x08CA6DD4 [171]
  .incbin "build/graphics/pokemon/lanturn/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA71D4-0x08CA740F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Lanturn
gMonFootprint_Lanturn:
	.incbin "build/graphics/pokemon/lanturn/footprint.1bpp"
	.globl gMonStillFrontPic_Pichu
gMonStillFrontPic_Pichu:
	.incbin "build/graphics/pokemon/pichu/still_front.4bpp.lz"
  .globl gMonPalette_Pichu
gMonPalette_Pichu:
  .incbin "build/graphics/pokemon/pichu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pichu
gMonBackPic_Pichu:
  .incbin "build/graphics/pokemon/pichu/back.4bpp.lz"

  .globl gMonShinyPalette_Pichu
gMonShinyPalette_Pichu:
  .incbin "build/graphics/pokemon/pichu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Pichu
gMonIcon_Pichu: @ 0x08CA76BC [172]
  .incbin "build/graphics/pokemon/pichu/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA7ABC-0x08CA7CBB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Pichu
gMonFootprint_Pichu:
	.incbin "build/graphics/pokemon/pichu/footprint.1bpp"
	.globl gMonStillFrontPic_Cleffa
gMonStillFrontPic_Cleffa:
	.incbin "build/graphics/pokemon/cleffa/still_front.4bpp.lz"
  .globl gMonPalette_Cleffa
gMonPalette_Cleffa:
  .incbin "build/graphics/pokemon/cleffa/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cleffa
gMonBackPic_Cleffa:
  .incbin "build/graphics/pokemon/cleffa/back.4bpp.lz"

  .globl gMonShinyPalette_Cleffa
gMonShinyPalette_Cleffa:
  .incbin "build/graphics/pokemon/cleffa/shiny_palette.gbapal.lz"

	.globl gMonIcon_Cleffa
gMonIcon_Cleffa: @ 0x08CA7F48 [173]
  .incbin "build/graphics/pokemon/cleffa/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA8348-0x08CA854F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Cleffa
gMonFootprint_Cleffa:
	.incbin "build/graphics/pokemon/cleffa/footprint.1bpp"
	.globl gMonStillFrontPic_Igglybuff
gMonStillFrontPic_Igglybuff:
	.incbin "build/graphics/pokemon/igglybuff/still_front.4bpp.lz"
  .globl gMonPalette_Igglybuff
gMonPalette_Igglybuff:
  .incbin "build/graphics/pokemon/igglybuff/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Igglybuff
gMonBackPic_Igglybuff:
  .incbin "build/graphics/pokemon/igglybuff/back.4bpp.lz"

  .globl gMonShinyPalette_Igglybuff
gMonShinyPalette_Igglybuff:
  .incbin "build/graphics/pokemon/igglybuff/shiny_palette.gbapal.lz"

	.globl gMonIcon_Igglybuff
gMonIcon_Igglybuff: @ 0x08CA87DC [174]
  .incbin "build/graphics/pokemon/igglybuff/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA8BDC-0x08CA8DCF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Igglybuff
gMonFootprint_Igglybuff:
	.incbin "build/graphics/pokemon/igglybuff/footprint.1bpp"
	.globl gMonStillFrontPic_Togepi
gMonStillFrontPic_Togepi:
	.incbin "build/graphics/pokemon/togepi/still_front.4bpp.lz"
  .globl gMonPalette_Togepi
gMonPalette_Togepi:
  .incbin "build/graphics/pokemon/togepi/normal_palette.gbapal.lz"

  .globl gMonBackPic_Togepi
gMonBackPic_Togepi:
  .incbin "build/graphics/pokemon/togepi/back.4bpp.lz"

  .globl gMonShinyPalette_Togepi
gMonShinyPalette_Togepi:
  .incbin "build/graphics/pokemon/togepi/shiny_palette.gbapal.lz"

	.globl gMonIcon_Togepi
gMonIcon_Togepi: @ 0x08CA9094 [175]
  .incbin "build/graphics/pokemon/togepi/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA9494-0x08CA9727
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Togepi
gMonFootprint_Togepi:
	.incbin "build/graphics/pokemon/togepi/footprint.1bpp"
	.globl gMonStillFrontPic_Togetic
gMonStillFrontPic_Togetic:
	.incbin "build/graphics/pokemon/togetic/still_front.4bpp.lz"
  .globl gMonPalette_Togetic
gMonPalette_Togetic:
  .incbin "build/graphics/pokemon/togetic/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Togetic
gMonBackPic_Togetic:
  .incbin "build/graphics/pokemon/togetic/back.4bpp.lz"

  .globl gMonShinyPalette_Togetic
gMonShinyPalette_Togetic:
  .incbin "build/graphics/pokemon/togetic/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Togetic
gMonIcon_Togetic: @ 0x08CA9AA4 [176]
  .incbin "build/graphics/pokemon/togetic/icon.4bpp"
	@ analyzed canonical ROM range 0x08CA9EA4-0x08CAA08F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Togetic
gMonFootprint_Togetic:
	.incbin "build/graphics/pokemon/togetic/footprint.1bpp"
	.globl gMonStillFrontPic_Natu
gMonStillFrontPic_Natu:
	.incbin "build/graphics/pokemon/natu/still_front.4bpp.lz"
  .globl gMonPalette_Natu
gMonPalette_Natu:
  .incbin "build/graphics/pokemon/natu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Natu
gMonBackPic_Natu:
  .incbin "build/graphics/pokemon/natu/back.4bpp.lz"

  .globl gMonShinyPalette_Natu
gMonShinyPalette_Natu:
  .incbin "build/graphics/pokemon/natu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Natu
gMonIcon_Natu: @ 0x08CAA2F4 [177]
  .incbin "build/graphics/pokemon/natu/icon.4bpp"
	@ analyzed canonical ROM range 0x08CAA6F4-0x08CAA9EF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Natu
gMonFootprint_Natu:
	.incbin "build/graphics/pokemon/natu/footprint.1bpp"
	.globl gMonStillFrontPic_Xatu
gMonStillFrontPic_Xatu:
	.incbin "build/graphics/pokemon/xatu/still_front.4bpp.lz"
  .globl gMonPalette_Xatu
gMonPalette_Xatu:
  .incbin "build/graphics/pokemon/xatu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Xatu
gMonBackPic_Xatu:
  .incbin "build/graphics/pokemon/xatu/back.4bpp.lz"

  .globl gMonShinyPalette_Xatu
gMonShinyPalette_Xatu:
  .incbin "build/graphics/pokemon/xatu/shiny_palette.gbapal.lz"

	.globl gMonIcon_Xatu
gMonIcon_Xatu: @ 0x08CAADB8 [178]
  .incbin "build/graphics/pokemon/xatu/icon.4bpp"
	@ analyzed canonical ROM range 0x08CAB1B8-0x08CAB48B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Xatu
gMonFootprint_Xatu:
	.incbin "build/graphics/pokemon/xatu/footprint.1bpp"
	.globl gMonStillFrontPic_Mareep
gMonStillFrontPic_Mareep:
	.incbin "build/graphics/pokemon/mareep/still_front.4bpp.lz"
  .globl gMonPalette_Mareep
gMonPalette_Mareep:
  .incbin "build/graphics/pokemon/mareep/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mareep
gMonBackPic_Mareep:
  .incbin "build/graphics/pokemon/mareep/back.4bpp.lz"

  .globl gMonShinyPalette_Mareep
gMonShinyPalette_Mareep:
  .incbin "build/graphics/pokemon/mareep/shiny_palette.gbapal.lz"

	.globl gMonIcon_Mareep
gMonIcon_Mareep: @ 0x08CAB7D0 [179]
  .incbin "build/graphics/pokemon/mareep/icon.4bpp"
	@ analyzed canonical ROM range 0x08CABBD0-0x08CABEEF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Mareep
gMonFootprint_Mareep:
	.incbin "build/graphics/pokemon/mareep/footprint.1bpp"
	.globl gMonStillFrontPic_Flaaffy
gMonStillFrontPic_Flaaffy:
	.incbin "build/graphics/pokemon/flaaffy/still_front.4bpp.lz"
  .globl gMonPalette_Flaaffy
gMonPalette_Flaaffy:
  .incbin "build/graphics/pokemon/flaaffy/normal_palette.gbapal.lz"

  .globl gMonBackPic_Flaaffy
gMonBackPic_Flaaffy:
  .incbin "build/graphics/pokemon/flaaffy/back.4bpp.lz"

  .globl gMonShinyPalette_Flaaffy
gMonShinyPalette_Flaaffy:
  .incbin "build/graphics/pokemon/flaaffy/shiny_palette.gbapal.lz"

	.globl gMonIcon_Flaaffy
gMonIcon_Flaaffy: @ 0x08CAC25C [180]
  .incbin "build/graphics/pokemon/flaaffy/icon.4bpp"
	@ analyzed canonical ROM range 0x08CAC65C-0x08CAC9D7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Flaaffy
gMonFootprint_Flaaffy:
	.incbin "build/graphics/pokemon/flaaffy/footprint.1bpp"
	.globl gMonStillFrontPic_Ampharos
gMonStillFrontPic_Ampharos:
	.incbin "build/graphics/pokemon/ampharos/still_front.4bpp.lz"
  .globl gMonPalette_Ampharos
gMonPalette_Ampharos:
  .incbin "build/graphics/pokemon/ampharos/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ampharos
gMonBackPic_Ampharos:
  .incbin "build/graphics/pokemon/ampharos/back.4bpp.lz"

  .globl gMonShinyPalette_Ampharos
gMonShinyPalette_Ampharos:
  .incbin "build/graphics/pokemon/ampharos/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ampharos
gMonIcon_Ampharos: @ 0x08CACDA0 [181]
  .incbin "build/graphics/pokemon/ampharos/icon.4bpp"
	@ analyzed canonical ROM range 0x08CAD1A0-0x08CAD42F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ampharos
gMonFootprint_Ampharos:
	.incbin "build/graphics/pokemon/ampharos/footprint.1bpp"
	.globl gMonStillFrontPic_Bellossom
gMonStillFrontPic_Bellossom:
	.incbin "build/graphics/pokemon/bellossom/still_front.4bpp.lz"
  .globl gMonPalette_Bellossom
gMonPalette_Bellossom:
  .incbin "build/graphics/pokemon/bellossom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Bellossom
gMonBackPic_Bellossom:
  .incbin "build/graphics/pokemon/bellossom/back.4bpp.lz"

  .globl gMonShinyPalette_Bellossom
gMonShinyPalette_Bellossom:
  .incbin "build/graphics/pokemon/bellossom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Bellossom
gMonIcon_Bellossom: @ 0x08CAD7A4 [182]
  .incbin "build/graphics/pokemon/bellossom/icon.4bpp"
	@ analyzed canonical ROM range 0x08CADBA4-0x08CADE87
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Bellossom
gMonFootprint_Bellossom:
	.incbin "build/graphics/pokemon/bellossom/footprint.1bpp"
	.globl gMonStillFrontPic_Marill
gMonStillFrontPic_Marill:
	.incbin "build/graphics/pokemon/marill/still_front.4bpp.lz"
  .globl gMonPalette_Marill
gMonPalette_Marill:
  .incbin "build/graphics/pokemon/marill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Marill
gMonBackPic_Marill:
  .incbin "build/graphics/pokemon/marill/back.4bpp.lz"

  .globl gMonShinyPalette_Marill
gMonShinyPalette_Marill:
  .incbin "build/graphics/pokemon/marill/shiny_palette.gbapal.lz"

	.globl gMonIcon_Marill
gMonIcon_Marill: @ 0x08CAE184 [183]
  .incbin "build/graphics/pokemon/marill/icon.4bpp"
	@ analyzed canonical ROM range 0x08CAE584-0x08CAE8A3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Marill
gMonFootprint_Marill:
	.incbin "build/graphics/pokemon/marill/footprint.1bpp"
	.globl gMonStillFrontPic_Azumarill
gMonStillFrontPic_Azumarill:
	.incbin "build/graphics/pokemon/azumarill/still_front.4bpp.lz"
  .globl gMonPalette_Azumarill
gMonPalette_Azumarill:
  .incbin "build/graphics/pokemon/azumarill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Azumarill
gMonBackPic_Azumarill:
  .incbin "build/graphics/pokemon/azumarill/back.4bpp.lz"

  .globl gMonShinyPalette_Azumarill
gMonShinyPalette_Azumarill:
  .incbin "build/graphics/pokemon/azumarill/shiny_palette.gbapal.lz"

	.globl gMonIcon_Azumarill
gMonIcon_Azumarill: @ 0x08CAEBB0 [184]
  .incbin "build/graphics/pokemon/azumarill/icon.4bpp"
	@ analyzed canonical ROM range 0x08CAEFB0-0x08CAF2E7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Azumarill
gMonFootprint_Azumarill:
	.incbin "build/graphics/pokemon/azumarill/footprint.1bpp"
	.globl gMonStillFrontPic_Sudowoodo
gMonStillFrontPic_Sudowoodo:
	.incbin "build/graphics/pokemon/sudowoodo/still_front.4bpp.lz"
  .globl gMonPalette_Sudowoodo
gMonPalette_Sudowoodo:
  .incbin "build/graphics/pokemon/sudowoodo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sudowoodo
gMonBackPic_Sudowoodo:
  .incbin "build/graphics/pokemon/sudowoodo/back.4bpp.lz"

  .globl gMonShinyPalette_Sudowoodo
gMonShinyPalette_Sudowoodo:
  .incbin "build/graphics/pokemon/sudowoodo/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sudowoodo
gMonIcon_Sudowoodo: @ 0x08CAF694 [185]
  .incbin "build/graphics/pokemon/sudowoodo/icon.4bpp"
	@ analyzed canonical ROM range 0x08CAFA94-0x08CAFDEF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sudowoodo
gMonFootprint_Sudowoodo:
	.incbin "build/graphics/pokemon/sudowoodo/footprint.1bpp"
	.globl gMonStillFrontPic_Politoed
gMonStillFrontPic_Politoed:
	.incbin "build/graphics/pokemon/politoed/still_front.4bpp.lz"
  .globl gMonPalette_Politoed
gMonPalette_Politoed:
  .incbin "build/graphics/pokemon/politoed/normal_palette.gbapal.lz"

  .globl gMonBackPic_Politoed
gMonBackPic_Politoed:
  .incbin "build/graphics/pokemon/politoed/back.4bpp.lz"

  .globl gMonShinyPalette_Politoed
gMonShinyPalette_Politoed:
  .incbin "build/graphics/pokemon/politoed/shiny_palette.gbapal.lz"

	.globl gMonIcon_Politoed
gMonIcon_Politoed: @ 0x08CB00FC [186]
  .incbin "build/graphics/pokemon/politoed/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB04FC-0x08CB07CF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Politoed
gMonFootprint_Politoed:
	.incbin "build/graphics/pokemon/politoed/footprint.1bpp"
	.globl gMonStillFrontPic_Hoppip
gMonStillFrontPic_Hoppip:
	.incbin "build/graphics/pokemon/hoppip/still_front.4bpp.lz"
  .globl gMonPalette_Hoppip
gMonPalette_Hoppip:
  .incbin "build/graphics/pokemon/hoppip/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hoppip
gMonBackPic_Hoppip:
  .incbin "build/graphics/pokemon/hoppip/back.4bpp.lz"

  .globl gMonShinyPalette_Hoppip
gMonShinyPalette_Hoppip:
  .incbin "build/graphics/pokemon/hoppip/shiny_palette.gbapal.lz"
  .space 0x1, 0x00
	.globl gMonIcon_Hoppip
gMonIcon_Hoppip: @ 0x08CB0B00 [187]
  .incbin "build/graphics/pokemon/hoppip/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB0F00-0x08CB11A7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Hoppip
gMonFootprint_Hoppip:
	.incbin "build/graphics/pokemon/hoppip/footprint.1bpp"
	.globl gMonStillFrontPic_Skiploom
gMonStillFrontPic_Skiploom:
	.incbin "build/graphics/pokemon/skiploom/still_front.4bpp.lz"
  .globl gMonPalette_Skiploom
gMonPalette_Skiploom:
  .incbin "build/graphics/pokemon/skiploom/normal_palette.gbapal.lz"
  .space 0x1, 0x00

  .globl gMonBackPic_Skiploom
gMonBackPic_Skiploom:
  .incbin "build/graphics/pokemon/skiploom/back.4bpp.lz"

  .globl gMonShinyPalette_Skiploom
gMonShinyPalette_Skiploom:
  .incbin "build/graphics/pokemon/skiploom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Skiploom
gMonIcon_Skiploom: @ 0x08CB14D8 [188]
  .incbin "build/graphics/pokemon/skiploom/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB18D8-0x08CB1C63
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Skiploom
gMonFootprint_Skiploom:
	.incbin "build/graphics/pokemon/skiploom/footprint.1bpp"
	.globl gMonStillFrontPic_Jumpluff
gMonStillFrontPic_Jumpluff:
	.incbin "build/graphics/pokemon/jumpluff/still_front.4bpp.lz"
  .globl gMonPalette_Jumpluff
gMonPalette_Jumpluff:
  .incbin "build/graphics/pokemon/jumpluff/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jumpluff
gMonBackPic_Jumpluff:
  .incbin "build/graphics/pokemon/jumpluff/back.4bpp.lz"

  .globl gMonShinyPalette_Jumpluff
gMonShinyPalette_Jumpluff:
  .incbin "build/graphics/pokemon/jumpluff/shiny_palette.gbapal.lz"

	.globl gMonIcon_Jumpluff
gMonIcon_Jumpluff: @ 0x08CB20AC [189]
  .incbin "build/graphics/pokemon/jumpluff/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB24AC-0x08CB27C7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Jumpluff
gMonFootprint_Jumpluff:
	.incbin "build/graphics/pokemon/jumpluff/footprint.1bpp"
	.globl gMonStillFrontPic_Aipom
gMonStillFrontPic_Aipom:
	.incbin "build/graphics/pokemon/aipom/still_front.4bpp.lz"
  .globl gMonPalette_Aipom
gMonPalette_Aipom:
  .incbin "build/graphics/pokemon/aipom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Aipom
gMonBackPic_Aipom:
  .incbin "build/graphics/pokemon/aipom/back.4bpp.lz"

  .globl gMonShinyPalette_Aipom
gMonShinyPalette_Aipom:
  .incbin "build/graphics/pokemon/aipom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Aipom
gMonIcon_Aipom: @ 0x08CB2B0C [190]
  .incbin "build/graphics/pokemon/aipom/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB2F0C-0x08CB3163
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Aipom
gMonFootprint_Aipom:
	.incbin "build/graphics/pokemon/aipom/footprint.1bpp"
	.globl gMonStillFrontPic_Sunkern
gMonStillFrontPic_Sunkern:
	.incbin "build/graphics/pokemon/sunkern/still_front.4bpp.lz"
  .globl gMonPalette_Sunkern
gMonPalette_Sunkern:
  .incbin "build/graphics/pokemon/sunkern/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sunkern
gMonBackPic_Sunkern:
  .incbin "build/graphics/pokemon/sunkern/back.4bpp.lz"

  .globl gMonShinyPalette_Sunkern
gMonShinyPalette_Sunkern:
  .incbin "build/graphics/pokemon/sunkern/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sunkern
gMonIcon_Sunkern: @ 0x08CB3478 [191]
  .incbin "build/graphics/pokemon/sunkern/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB3878-0x08CB3BEF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sunkern
gMonFootprint_Sunkern:
	.incbin "build/graphics/pokemon/sunkern/footprint.1bpp"
	.globl gMonStillFrontPic_Sunflora
gMonStillFrontPic_Sunflora:
	.incbin "build/graphics/pokemon/sunflora/still_front.4bpp.lz"
  .globl gMonPalette_Sunflora
gMonPalette_Sunflora:
  .incbin "build/graphics/pokemon/sunflora/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sunflora
gMonBackPic_Sunflora:
  .incbin "build/graphics/pokemon/sunflora/back.4bpp.lz"

  .globl gMonShinyPalette_Sunflora
gMonShinyPalette_Sunflora:
  .incbin "build/graphics/pokemon/sunflora/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sunflora
gMonIcon_Sunflora: @ 0x08CB3FE0 [192]
  .incbin "build/graphics/pokemon/sunflora/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB43E0-0x08CB4783
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sunflora
gMonFootprint_Sunflora:
	.incbin "build/graphics/pokemon/sunflora/footprint.1bpp"
	.globl gMonStillFrontPic_Yanma
gMonStillFrontPic_Yanma:
	.incbin "build/graphics/pokemon/yanma/still_front.4bpp.lz"
  .globl gMonPalette_Yanma
gMonPalette_Yanma:
  .incbin "build/graphics/pokemon/yanma/normal_palette.gbapal.lz"

  .globl gMonBackPic_Yanma
gMonBackPic_Yanma:
  .incbin "build/graphics/pokemon/yanma/back.4bpp.lz"

  .globl gMonShinyPalette_Yanma
gMonShinyPalette_Yanma:
  .incbin "build/graphics/pokemon/yanma/shiny_palette.gbapal.lz"

	.globl gMonIcon_Yanma
gMonIcon_Yanma: @ 0x08CB4B88 [193]
  .incbin "build/graphics/pokemon/yanma/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB4F88-0x08CB51E7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Yanma
gMonFootprint_Yanma:
	.incbin "build/graphics/pokemon/yanma/footprint.1bpp"
	.globl gMonStillFrontPic_Wooper
gMonStillFrontPic_Wooper:
	.incbin "build/graphics/pokemon/wooper/still_front.4bpp.lz"
  .globl gMonPalette_Wooper
gMonPalette_Wooper:
  .incbin "build/graphics/pokemon/wooper/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Wooper
gMonBackPic_Wooper:
  .incbin "build/graphics/pokemon/wooper/back.4bpp.lz"

  .globl gMonShinyPalette_Wooper
gMonShinyPalette_Wooper:
  .incbin "build/graphics/pokemon/wooper/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Wooper
gMonIcon_Wooper: @ 0x08CB54C4 [194]
  .incbin "build/graphics/pokemon/wooper/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB58C4-0x08CB5C57
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Wooper
gMonFootprint_Wooper:
	.incbin "build/graphics/pokemon/wooper/footprint.1bpp"
	.globl gMonStillFrontPic_Quagsire
gMonStillFrontPic_Quagsire:
	.incbin "build/graphics/pokemon/quagsire/still_front.4bpp.lz"
  .globl gMonPalette_Quagsire
gMonPalette_Quagsire:
  .incbin "build/graphics/pokemon/quagsire/normal_palette.gbapal.lz"

  .globl gMonBackPic_Quagsire
gMonBackPic_Quagsire:
  .incbin "build/graphics/pokemon/quagsire/back.4bpp.lz"

  .globl gMonShinyPalette_Quagsire
gMonShinyPalette_Quagsire:
  .incbin "build/graphics/pokemon/quagsire/shiny_palette.gbapal.lz"

	.globl gMonIcon_Quagsire
gMonIcon_Quagsire: @ 0x08CB5FA4 [195]
  .incbin "build/graphics/pokemon/quagsire/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB63A4-0x08CB6703
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Quagsire
gMonFootprint_Quagsire:
	.incbin "build/graphics/pokemon/quagsire/footprint.1bpp"
	.globl gMonStillFrontPic_Espeon
gMonStillFrontPic_Espeon:
	.incbin "build/graphics/pokemon/espeon/still_front.4bpp.lz"
  .globl gMonPalette_Espeon
gMonPalette_Espeon:
  .incbin "build/graphics/pokemon/espeon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Espeon
gMonBackPic_Espeon:
  .incbin "build/graphics/pokemon/espeon/back.4bpp.lz"

  .globl gMonShinyPalette_Espeon
gMonShinyPalette_Espeon:
  .incbin "build/graphics/pokemon/espeon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Espeon
gMonIcon_Espeon: @ 0x08CB6A28 [196]
  .incbin "build/graphics/pokemon/espeon/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB6E28-0x08CB715B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Espeon
gMonFootprint_Espeon:
	.incbin "build/graphics/pokemon/espeon/footprint.1bpp"
	.globl gMonStillFrontPic_Umbreon
gMonStillFrontPic_Umbreon:
	.incbin "build/graphics/pokemon/umbreon/still_front.4bpp.lz"
  .globl gMonPalette_Umbreon
gMonPalette_Umbreon:
  .incbin "build/graphics/pokemon/umbreon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Umbreon
gMonBackPic_Umbreon:
  .incbin "build/graphics/pokemon/umbreon/back.4bpp.lz"

  .globl gMonShinyPalette_Umbreon
gMonShinyPalette_Umbreon:
  .incbin "build/graphics/pokemon/umbreon/shiny_palette.gbapal.lz"

	.globl gMonIcon_Umbreon
gMonIcon_Umbreon: @ 0x08CB74C0 [197]
  .incbin "build/graphics/pokemon/umbreon/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB78C0-0x08CB7BBF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Umbreon
gMonFootprint_Umbreon:
	.incbin "build/graphics/pokemon/umbreon/footprint.1bpp"
	.globl gMonStillFrontPic_Murkrow
gMonStillFrontPic_Murkrow:
	.incbin "build/graphics/pokemon/murkrow/still_front.4bpp.lz"
  .globl gMonPalette_Murkrow
gMonPalette_Murkrow:
  .incbin "build/graphics/pokemon/murkrow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Murkrow
gMonBackPic_Murkrow:
  .incbin "build/graphics/pokemon/murkrow/back.4bpp.lz"

  .globl gMonShinyPalette_Murkrow
gMonShinyPalette_Murkrow:
  .incbin "build/graphics/pokemon/murkrow/shiny_palette.gbapal.lz"

	.globl gMonIcon_Murkrow
gMonIcon_Murkrow: @ 0x08CB7F28 [198]
  .incbin "build/graphics/pokemon/murkrow/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB8328-0x08CB86FB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Murkrow
gMonFootprint_Murkrow:
	.incbin "build/graphics/pokemon/murkrow/footprint.1bpp"
	.globl gMonStillFrontPic_Slowking
gMonStillFrontPic_Slowking:
	.incbin "build/graphics/pokemon/slowking/still_front.4bpp.lz"
  .globl gMonPalette_Slowking
gMonPalette_Slowking:
  .incbin "build/graphics/pokemon/slowking/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slowking
gMonBackPic_Slowking:
  .incbin "build/graphics/pokemon/slowking/back.4bpp.lz"

  .globl gMonShinyPalette_Slowking
gMonShinyPalette_Slowking:
  .incbin "build/graphics/pokemon/slowking/shiny_palette.gbapal.lz"

	.globl gMonIcon_Slowking
gMonIcon_Slowking: @ 0x08CB8AD8 [199]
  .incbin "build/graphics/pokemon/slowking/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB8ED8-0x08CB91B7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Slowking
gMonFootprint_Slowking:
	.incbin "build/graphics/pokemon/slowking/footprint.1bpp"
	.globl gMonStillFrontPic_Misdreavus
gMonStillFrontPic_Misdreavus:
	.incbin "build/graphics/pokemon/misdreavus/still_front.4bpp.lz"
  .globl gMonPalette_Misdreavus
gMonPalette_Misdreavus:
  .incbin "build/graphics/pokemon/misdreavus/normal_palette.gbapal.lz"

  .globl gMonBackPic_Misdreavus
gMonBackPic_Misdreavus:
  .incbin "build/graphics/pokemon/misdreavus/back.4bpp.lz"

  .globl gMonShinyPalette_Misdreavus
gMonShinyPalette_Misdreavus:
  .incbin "build/graphics/pokemon/misdreavus/shiny_palette.gbapal.lz"

	.globl gMonIcon_Misdreavus
gMonIcon_Misdreavus: @ 0x08CB952C [200]
  .incbin "build/graphics/pokemon/misdreavus/icon.4bpp"
	@ analyzed canonical ROM range 0x08CB992C-0x08CB9B1F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Misdreavus
gMonFootprint_Misdreavus:
	.incbin "build/graphics/pokemon/misdreavus/footprint.1bpp"
	.globl gMonStillFrontPic_Unown
gMonStillFrontPic_Unown:
	.incbin "build/graphics/pokemon/unown/still_front.4bpp.lz"
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
  .space 0x3, 0x00

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
  .space 0x3, 0x00
	.globl gMonIcon_Unown
gMonIcon_Unown: @ 0x08CB9D60 [201]
  .incbin "build/graphics/pokemon/unown/icon.4bpp"
	@ analyzed canonical ROM range 0x08CBA160-0x08CBA4CF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Unown
gMonFootprint_Unown:
	.incbin "build/graphics/pokemon/unown/footprint.1bpp"
	.globl gMonStillFrontPic_Wobbuffet
gMonStillFrontPic_Wobbuffet:
	.incbin "build/graphics/pokemon/wobbuffet/still_front.4bpp.lz"
  .globl gMonPalette_Wobbuffet
gMonPalette_Wobbuffet:
  .incbin "build/graphics/pokemon/wobbuffet/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wobbuffet
gMonBackPic_Wobbuffet:
  .incbin "build/graphics/pokemon/wobbuffet/back.4bpp.lz"

  .globl gMonShinyPalette_Wobbuffet
gMonShinyPalette_Wobbuffet:
  .incbin "build/graphics/pokemon/wobbuffet/shiny_palette.gbapal.lz"

	.globl gMonIcon_Wobbuffet
gMonIcon_Wobbuffet: @ 0x08CBA764 [202]
  .incbin "build/graphics/pokemon/wobbuffet/icon.4bpp"
	@ analyzed canonical ROM range 0x08CBAB64-0x08CBAF87
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Wobbuffet
gMonFootprint_Wobbuffet:
	.incbin "build/graphics/pokemon/wobbuffet/footprint.1bpp"
	.globl gMonStillFrontPic_Girafarig
gMonStillFrontPic_Girafarig:
	.incbin "build/graphics/pokemon/girafarig/still_front.4bpp.lz"
  .globl gMonPalette_Girafarig
gMonPalette_Girafarig:
  .incbin "build/graphics/pokemon/girafarig/normal_palette.gbapal.lz"

  .globl gMonBackPic_Girafarig
gMonBackPic_Girafarig:
  .incbin "build/graphics/pokemon/girafarig/back.4bpp.lz"

  .globl gMonShinyPalette_Girafarig
gMonShinyPalette_Girafarig:
  .incbin "build/graphics/pokemon/girafarig/shiny_palette.gbapal.lz"

	.globl gMonIcon_Girafarig
gMonIcon_Girafarig: @ 0x08CBB384 [203]
  .incbin "build/graphics/pokemon/girafarig/icon.4bpp"
	@ analyzed canonical ROM range 0x08CBB784-0x08CBBAE3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Girafarig
gMonFootprint_Girafarig:
	.incbin "build/graphics/pokemon/girafarig/footprint.1bpp"
	.globl gMonStillFrontPic_Pineco
gMonStillFrontPic_Pineco:
	.incbin "build/graphics/pokemon/pineco/still_front.4bpp.lz"
  .globl gMonPalette_Pineco
gMonPalette_Pineco:
  .incbin "build/graphics/pokemon/pineco/normal_palette.gbapal.lz"
  .space 0x3, 0x00

  .globl gMonBackPic_Pineco
gMonBackPic_Pineco:
  .incbin "build/graphics/pokemon/pineco/back.4bpp.lz"

  .globl gMonShinyPalette_Pineco
gMonShinyPalette_Pineco:
  .incbin "build/graphics/pokemon/pineco/shiny_palette.gbapal.lz"
  .space 0x3, 0x00
	.globl gMonIcon_Pineco
gMonIcon_Pineco: @ 0x08CBBE04 [204]
  .incbin "build/graphics/pokemon/pineco/icon.4bpp"
	@ analyzed canonical ROM range 0x08CBC204-0x08CBC63F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Pineco
gMonFootprint_Pineco:
	.incbin "build/graphics/pokemon/pineco/footprint.1bpp"
	.globl gMonStillFrontPic_Forretress
gMonStillFrontPic_Forretress:
	.incbin "build/graphics/pokemon/forretress/still_front.4bpp.lz"
  .globl gMonPalette_Forretress
gMonPalette_Forretress:
  .incbin "build/graphics/pokemon/forretress/normal_palette.gbapal.lz"

  .globl gMonBackPic_Forretress
gMonBackPic_Forretress:
  .incbin "build/graphics/pokemon/forretress/back.4bpp.lz"

  .globl gMonShinyPalette_Forretress
gMonShinyPalette_Forretress:
  .incbin "build/graphics/pokemon/forretress/shiny_palette.gbapal.lz"

	.globl gMonIcon_Forretress
gMonIcon_Forretress: @ 0x08CBC950 [205]
  .incbin "build/graphics/pokemon/forretress/icon.4bpp"
	@ analyzed canonical ROM range 0x08CBCD50-0x08CBD07F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Forretress
gMonFootprint_Forretress:
	.incbin "build/graphics/pokemon/forretress/footprint.1bpp"
	.globl gMonStillFrontPic_Dunsparce
gMonStillFrontPic_Dunsparce:
	.incbin "build/graphics/pokemon/dunsparce/still_front.4bpp.lz"
  .globl gMonPalette_Dunsparce
gMonPalette_Dunsparce:
  .incbin "build/graphics/pokemon/dunsparce/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dunsparce
gMonBackPic_Dunsparce:
  .incbin "build/graphics/pokemon/dunsparce/back.4bpp.lz"

  .globl gMonShinyPalette_Dunsparce
gMonShinyPalette_Dunsparce:
  .incbin "build/graphics/pokemon/dunsparce/shiny_palette.gbapal.lz"

	.globl gMonIcon_Dunsparce
gMonIcon_Dunsparce: @ 0x08CBD3CC [206]
  .incbin "build/graphics/pokemon/dunsparce/icon.4bpp"
	@ analyzed canonical ROM range 0x08CBD7CC-0x08CBDC13
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Dunsparce
gMonFootprint_Dunsparce:
	.incbin "build/graphics/pokemon/dunsparce/footprint.1bpp"
	.globl gMonStillFrontPic_Gligar
gMonStillFrontPic_Gligar:
	.incbin "build/graphics/pokemon/gligar/still_front.4bpp.lz"
  .globl gMonPalette_Gligar
gMonPalette_Gligar:
  .incbin "build/graphics/pokemon/gligar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gligar
gMonBackPic_Gligar:
  .incbin "build/graphics/pokemon/gligar/back.4bpp.lz"

  .globl gMonShinyPalette_Gligar
gMonShinyPalette_Gligar:
  .incbin "build/graphics/pokemon/gligar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Gligar
gMonIcon_Gligar: @ 0x08CBE03C [207]
  .incbin "build/graphics/pokemon/gligar/icon.4bpp"
	@ analyzed canonical ROM range 0x08CBE43C-0x08CBE923
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Gligar
gMonFootprint_Gligar:
	.incbin "build/graphics/pokemon/gligar/footprint.1bpp"
	.globl gMonStillFrontPic_Steelix
gMonStillFrontPic_Steelix:
	.incbin "build/graphics/pokemon/steelix/still_front.4bpp.lz"
  .globl gMonPalette_Steelix
gMonPalette_Steelix:
  .incbin "build/graphics/pokemon/steelix/normal_palette.gbapal.lz"
  .space 0x3, 0x00

  .globl gMonBackPic_Steelix
gMonBackPic_Steelix:
  .incbin "build/graphics/pokemon/steelix/back.4bpp.lz"

  .globl gMonShinyPalette_Steelix
gMonShinyPalette_Steelix:
  .incbin "build/graphics/pokemon/steelix/shiny_palette.gbapal.lz"
  .space 0x3, 0x00
.elseif .L__inc_fragment_select_a13e2e144708 == 7
	.globl gMonIcon_Steelix
gMonIcon_Steelix: @ 0x08CBED78 [208]
  .incbin "build/graphics/pokemon/steelix/icon.4bpp"
	@ analyzed canonical ROM range 0x08CBF178-0x08CBF46B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Steelix
gMonFootprint_Steelix:
	.incbin "build/graphics/pokemon/steelix/footprint.1bpp"
	.globl gMonStillFrontPic_Snubbull
gMonStillFrontPic_Snubbull:
	.incbin "build/graphics/pokemon/snubbull/still_front.4bpp.lz"
  .globl gMonPalette_Snubbull
gMonPalette_Snubbull:
  .incbin "build/graphics/pokemon/snubbull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Snubbull
gMonBackPic_Snubbull:
  .incbin "build/graphics/pokemon/snubbull/back.4bpp.lz"

  .globl gMonShinyPalette_Snubbull
gMonShinyPalette_Snubbull:
  .incbin "build/graphics/pokemon/snubbull/shiny_palette.gbapal.lz"

	.globl gMonIcon_Snubbull
gMonIcon_Snubbull: @ 0x08CBF7E4 [209]
  .incbin "build/graphics/pokemon/snubbull/icon.4bpp"
	@ analyzed canonical ROM range 0x08CBFBE4-0x08CBFF8F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Snubbull
gMonFootprint_Snubbull:
	.incbin "build/graphics/pokemon/snubbull/footprint.1bpp"
	.globl gMonStillFrontPic_Granbull
gMonStillFrontPic_Granbull:
	.incbin "build/graphics/pokemon/granbull/still_front.4bpp.lz"
  .globl gMonPalette_Granbull
gMonPalette_Granbull:
  .incbin "build/graphics/pokemon/granbull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Granbull
gMonBackPic_Granbull:
  .incbin "build/graphics/pokemon/granbull/back.4bpp.lz"

  .globl gMonShinyPalette_Granbull
gMonShinyPalette_Granbull:
  .incbin "build/graphics/pokemon/granbull/shiny_palette.gbapal.lz"

	.globl gMonIcon_Granbull
gMonIcon_Granbull: @ 0x08CC0304 [210]
  .incbin "build/graphics/pokemon/granbull/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC0704-0x08CC09E3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Granbull
gMonFootprint_Granbull:
	.incbin "build/graphics/pokemon/granbull/footprint.1bpp"
	.globl gMonStillFrontPic_Qwilfish
gMonStillFrontPic_Qwilfish:
	.incbin "build/graphics/pokemon/qwilfish/still_front.4bpp.lz"
  .globl gMonPalette_Qwilfish
gMonPalette_Qwilfish:
  .incbin "build/graphics/pokemon/qwilfish/normal_palette.gbapal.lz"

  .globl gMonBackPic_Qwilfish
gMonBackPic_Qwilfish:
  .incbin "build/graphics/pokemon/qwilfish/back.4bpp.lz"

  .globl gMonShinyPalette_Qwilfish
gMonShinyPalette_Qwilfish:
  .incbin "build/graphics/pokemon/qwilfish/shiny_palette.gbapal.lz"

	.globl gMonIcon_Qwilfish
gMonIcon_Qwilfish: @ 0x08CC0D14 [211]
  .incbin "build/graphics/pokemon/qwilfish/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC1114-0x08CC161B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Qwilfish
gMonFootprint_Qwilfish:
	.incbin "build/graphics/pokemon/qwilfish/footprint.1bpp"
	.globl gMonStillFrontPic_Scizor
gMonStillFrontPic_Scizor:
	.incbin "build/graphics/pokemon/scizor/still_front.4bpp.lz"
  .globl gMonPalette_Scizor
gMonPalette_Scizor:
  .incbin "build/graphics/pokemon/scizor/normal_palette.gbapal.lz"

  .globl gMonBackPic_Scizor
gMonBackPic_Scizor:
  .incbin "build/graphics/pokemon/scizor/back.4bpp.lz"

  .globl gMonShinyPalette_Scizor
gMonShinyPalette_Scizor:
  .incbin "build/graphics/pokemon/scizor/shiny_palette.gbapal.lz"

	.globl gMonIcon_Scizor
gMonIcon_Scizor: @ 0x08CC19EC [212]
  .incbin "build/graphics/pokemon/scizor/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC1DEC-0x08CC20D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Scizor
gMonFootprint_Scizor:
	.incbin "build/graphics/pokemon/scizor/footprint.1bpp"
	.globl gMonStillFrontPic_Shuckle
gMonStillFrontPic_Shuckle:
	.incbin "build/graphics/pokemon/shuckle/still_front.4bpp.lz"
  .globl gMonPalette_Shuckle
gMonPalette_Shuckle:
  .incbin "build/graphics/pokemon/shuckle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shuckle
gMonBackPic_Shuckle:
  .incbin "build/graphics/pokemon/shuckle/back.4bpp.lz"

  .globl gMonShinyPalette_Shuckle
gMonShinyPalette_Shuckle:
  .incbin "build/graphics/pokemon/shuckle/shiny_palette.gbapal.lz"

	.globl gMonIcon_Shuckle
gMonIcon_Shuckle: @ 0x08CC237C [213]
  .incbin "build/graphics/pokemon/shuckle/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC277C-0x08CC2B8B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Shuckle
gMonFootprint_Shuckle:
	.incbin "build/graphics/pokemon/shuckle/footprint.1bpp"
	.globl gMonStillFrontPic_Heracross
gMonStillFrontPic_Heracross:
	.incbin "build/graphics/pokemon/heracross/still_front.4bpp.lz"
  .globl gMonPalette_Heracross
gMonPalette_Heracross:
  .incbin "build/graphics/pokemon/heracross/normal_palette.gbapal.lz"

  .globl gMonBackPic_Heracross
gMonBackPic_Heracross:
  .incbin "build/graphics/pokemon/heracross/back.4bpp.lz"

  .globl gMonShinyPalette_Heracross
gMonShinyPalette_Heracross:
  .incbin "build/graphics/pokemon/heracross/shiny_palette.gbapal.lz"

	.globl gMonIcon_Heracross
gMonIcon_Heracross: @ 0x08CC2F4C [214]
  .incbin "build/graphics/pokemon/heracross/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC334C-0x08CC36AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Heracross
gMonFootprint_Heracross:
	.incbin "build/graphics/pokemon/heracross/footprint.1bpp"
	.globl gMonStillFrontPic_Sneasel
gMonStillFrontPic_Sneasel:
	.incbin "build/graphics/pokemon/sneasel/still_front.4bpp.lz"
  .globl gMonPalette_Sneasel
gMonPalette_Sneasel:
  .incbin "build/graphics/pokemon/sneasel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sneasel
gMonBackPic_Sneasel:
  .incbin "build/graphics/pokemon/sneasel/back.4bpp.lz"

  .globl gMonShinyPalette_Sneasel
gMonShinyPalette_Sneasel:
  .incbin "build/graphics/pokemon/sneasel/shiny_palette.gbapal.lz"

	.globl gMonIcon_Sneasel
gMonIcon_Sneasel: @ 0x08CC3A24 [215]
  .incbin "build/graphics/pokemon/sneasel/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC3E24-0x08CC40AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sneasel
gMonFootprint_Sneasel:
	.incbin "build/graphics/pokemon/sneasel/footprint.1bpp"
	.globl gMonStillFrontPic_Teddiursa
gMonStillFrontPic_Teddiursa:
	.incbin "build/graphics/pokemon/teddiursa/still_front.4bpp.lz"
  .globl gMonPalette_Teddiursa
gMonPalette_Teddiursa:
  .incbin "build/graphics/pokemon/teddiursa/normal_palette.gbapal.lz"

  .globl gMonBackPic_Teddiursa
gMonBackPic_Teddiursa:
  .incbin "build/graphics/pokemon/teddiursa/back.4bpp.lz"

  .globl gMonShinyPalette_Teddiursa
gMonShinyPalette_Teddiursa:
  .incbin "build/graphics/pokemon/teddiursa/shiny_palette.gbapal.lz"

	.globl gMonIcon_Teddiursa
gMonIcon_Teddiursa: @ 0x08CC4378 [216]
  .incbin "build/graphics/pokemon/teddiursa/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC4778-0x08CC4BCF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Teddiursa
gMonFootprint_Teddiursa:
	.incbin "build/graphics/pokemon/teddiursa/footprint.1bpp"
	.globl gMonStillFrontPic_Ursaring
gMonStillFrontPic_Ursaring:
	.incbin "build/graphics/pokemon/ursaring/still_front.4bpp.lz"
  .globl gMonPalette_Ursaring
gMonPalette_Ursaring:
  .incbin "build/graphics/pokemon/ursaring/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ursaring
gMonBackPic_Ursaring:
  .incbin "build/graphics/pokemon/ursaring/back.4bpp.lz"

  .globl gMonShinyPalette_Ursaring
gMonShinyPalette_Ursaring:
  .incbin "build/graphics/pokemon/ursaring/shiny_palette.gbapal.lz"

	.globl gMonIcon_Ursaring
gMonIcon_Ursaring: @ 0x08CC4FA8 [217]
  .incbin "build/graphics/pokemon/ursaring/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC53A8-0x08CC563B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ursaring
gMonFootprint_Ursaring:
	.incbin "build/graphics/pokemon/ursaring/footprint.1bpp"
	.globl gMonStillFrontPic_Slugma
gMonStillFrontPic_Slugma:
	.incbin "build/graphics/pokemon/slugma/still_front.4bpp.lz"
  .globl gMonPalette_Slugma
gMonPalette_Slugma:
  .incbin "build/graphics/pokemon/slugma/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slugma
gMonBackPic_Slugma:
  .incbin "build/graphics/pokemon/slugma/back.4bpp.lz"

  .globl gMonShinyPalette_Slugma
gMonShinyPalette_Slugma:
  .incbin "build/graphics/pokemon/slugma/shiny_palette.gbapal.lz"

	.globl gMonIcon_Slugma
gMonIcon_Slugma: @ 0x08CC596C [218]
  .incbin "build/graphics/pokemon/slugma/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC5D6C-0x08CC60D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Slugma
gMonFootprint_Slugma:
	.incbin "build/graphics/pokemon/slugma/footprint.1bpp"
	.globl gMonStillFrontPic_Magcargo
gMonStillFrontPic_Magcargo:
	.incbin "build/graphics/pokemon/magcargo/still_front.4bpp.lz"
  .globl gMonPalette_Magcargo
gMonPalette_Magcargo:
  .incbin "build/graphics/pokemon/magcargo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magcargo
gMonBackPic_Magcargo:
  .incbin "build/graphics/pokemon/magcargo/back.4bpp.lz"

  .globl gMonShinyPalette_Magcargo
gMonShinyPalette_Magcargo:
  .incbin "build/graphics/pokemon/magcargo/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magcargo
gMonIcon_Magcargo: @ 0x08CC653C [219]
  .incbin "build/graphics/pokemon/magcargo/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC693C-0x08CC6B57
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Magcargo
gMonFootprint_Magcargo:
	.incbin "build/graphics/pokemon/magcargo/footprint.1bpp"
	.globl gMonStillFrontPic_Swinub
gMonStillFrontPic_Swinub:
	.incbin "build/graphics/pokemon/swinub/still_front.4bpp.lz"
  .globl gMonPalette_Swinub
gMonPalette_Swinub:
  .incbin "build/graphics/pokemon/swinub/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swinub
gMonBackPic_Swinub:
  .incbin "build/graphics/pokemon/swinub/back.4bpp.lz"

  .globl gMonShinyPalette_Swinub
gMonShinyPalette_Swinub:
  .incbin "build/graphics/pokemon/swinub/shiny_palette.gbapal.lz"

	.globl gMonIcon_Swinub
gMonIcon_Swinub: @ 0x08CC6DE4 [220]
  .incbin "build/graphics/pokemon/swinub/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC71E4-0x08CC752B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Swinub
gMonFootprint_Swinub:
	.incbin "build/graphics/pokemon/swinub/footprint.1bpp"
	.globl gMonStillFrontPic_Piloswine
gMonStillFrontPic_Piloswine:
	.incbin "build/graphics/pokemon/piloswine/still_front.4bpp.lz"
  .globl gMonPalette_Piloswine
gMonPalette_Piloswine:
  .incbin "build/graphics/pokemon/piloswine/normal_palette.gbapal.lz"

  .globl gMonBackPic_Piloswine
gMonBackPic_Piloswine:
  .incbin "build/graphics/pokemon/piloswine/back.4bpp.lz"

  .globl gMonShinyPalette_Piloswine
gMonShinyPalette_Piloswine:
  .incbin "build/graphics/pokemon/piloswine/shiny_palette.gbapal.lz"

	.globl gMonIcon_Piloswine
gMonIcon_Piloswine: @ 0x08CC77C8 [221]
  .incbin "build/graphics/pokemon/piloswine/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC7BC8-0x08CC7ECF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Piloswine
gMonFootprint_Piloswine:
	.incbin "build/graphics/pokemon/piloswine/footprint.1bpp"
	.globl gMonStillFrontPic_Corsola
gMonStillFrontPic_Corsola:
	.incbin "build/graphics/pokemon/corsola/still_front.4bpp.lz"
  .globl gMonPalette_Corsola
gMonPalette_Corsola:
  .incbin "build/graphics/pokemon/corsola/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Corsola
gMonBackPic_Corsola:
  .incbin "build/graphics/pokemon/corsola/back.4bpp.lz"

  .globl gMonShinyPalette_Corsola
gMonShinyPalette_Corsola:
  .incbin "build/graphics/pokemon/corsola/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Corsola
gMonIcon_Corsola: @ 0x08CC81E0 [222]
  .incbin "build/graphics/pokemon/corsola/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC85E0-0x08CC8867
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Corsola
gMonFootprint_Corsola:
	.incbin "build/graphics/pokemon/corsola/footprint.1bpp"
	.globl gMonStillFrontPic_Remoraid
gMonStillFrontPic_Remoraid:
	.incbin "build/graphics/pokemon/remoraid/still_front.4bpp.lz"
  .globl gMonPalette_Remoraid
gMonPalette_Remoraid:
  .incbin "build/graphics/pokemon/remoraid/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Remoraid
gMonBackPic_Remoraid:
  .incbin "build/graphics/pokemon/remoraid/back.4bpp.lz"

  .globl gMonShinyPalette_Remoraid
gMonShinyPalette_Remoraid:
  .incbin "build/graphics/pokemon/remoraid/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Remoraid
gMonIcon_Remoraid: @ 0x08CC8BCC [223]
  .incbin "build/graphics/pokemon/remoraid/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC8FCC-0x08CC931F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Remoraid
gMonFootprint_Remoraid:
	.incbin "build/graphics/pokemon/remoraid/footprint.1bpp"
	.globl gMonStillFrontPic_Octillery
gMonStillFrontPic_Octillery:
	.incbin "build/graphics/pokemon/octillery/still_front.4bpp.lz"
  .globl gMonPalette_Octillery
gMonPalette_Octillery:
  .incbin "build/graphics/pokemon/octillery/normal_palette.gbapal.lz"

  .globl gMonBackPic_Octillery
gMonBackPic_Octillery:
  .incbin "build/graphics/pokemon/octillery/back.4bpp.lz"

  .globl gMonShinyPalette_Octillery
gMonShinyPalette_Octillery:
  .incbin "build/graphics/pokemon/octillery/shiny_palette.gbapal.lz"

	.globl gMonIcon_Octillery
gMonIcon_Octillery: @ 0x08CC9628 [224]
  .incbin "build/graphics/pokemon/octillery/icon.4bpp"
	@ analyzed canonical ROM range 0x08CC9A28-0x08CC9DB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Octillery
gMonFootprint_Octillery:
	.incbin "build/graphics/pokemon/octillery/footprint.1bpp"
	.globl gMonStillFrontPic_Delibird
gMonStillFrontPic_Delibird:
	.incbin "build/graphics/pokemon/delibird/still_front.4bpp.lz"
  .globl gMonPalette_Delibird
gMonPalette_Delibird:
  .incbin "build/graphics/pokemon/delibird/normal_palette.gbapal.lz"

  .globl gMonBackPic_Delibird
gMonBackPic_Delibird:
  .incbin "build/graphics/pokemon/delibird/back.4bpp.lz"

  .globl gMonShinyPalette_Delibird
gMonShinyPalette_Delibird:
  .incbin "build/graphics/pokemon/delibird/shiny_palette.gbapal.lz"

	.globl gMonIcon_Delibird
gMonIcon_Delibird: @ 0x08CCA1C8 [225]
  .incbin "build/graphics/pokemon/delibird/icon.4bpp"
	@ analyzed canonical ROM range 0x08CCA5C8-0x08CCAA83
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Delibird
gMonFootprint_Delibird:
	.incbin "build/graphics/pokemon/delibird/footprint.1bpp"
	.globl gMonStillFrontPic_Mantine
gMonStillFrontPic_Mantine:
	.incbin "build/graphics/pokemon/mantine/still_front.4bpp.lz"
  .globl gMonPalette_Mantine
gMonPalette_Mantine:
  .incbin "build/graphics/pokemon/mantine/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mantine
gMonBackPic_Mantine:
  .incbin "build/graphics/pokemon/mantine/back.4bpp.lz"

  .globl gMonShinyPalette_Mantine
gMonShinyPalette_Mantine:
  .incbin "build/graphics/pokemon/mantine/shiny_palette.gbapal.lz"

	.globl gMonIcon_Mantine
gMonIcon_Mantine: @ 0x08CCAD74 [226]
  .incbin "build/graphics/pokemon/mantine/icon.4bpp"
	@ analyzed canonical ROM range 0x08CCB174-0x08CCB673
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Mantine
gMonFootprint_Mantine:
	.incbin "build/graphics/pokemon/mantine/footprint.1bpp"
	.globl gMonStillFrontPic_Skarmory
gMonStillFrontPic_Skarmory:
	.incbin "build/graphics/pokemon/skarmory/still_front.4bpp.lz"
  .globl gMonPalette_Skarmory
gMonPalette_Skarmory:
  .incbin "build/graphics/pokemon/skarmory/normal_palette.gbapal.lz"

  .globl gMonBackPic_Skarmory
gMonBackPic_Skarmory:
  .incbin "build/graphics/pokemon/skarmory/back.4bpp.lz"

  .globl gMonShinyPalette_Skarmory
gMonShinyPalette_Skarmory:
  .incbin "build/graphics/pokemon/skarmory/shiny_palette.gbapal.lz"

	.globl gMonIcon_Skarmory
gMonIcon_Skarmory: @ 0x08CCB9C8 [227]
  .incbin "build/graphics/pokemon/skarmory/icon.4bpp"
	@ analyzed canonical ROM range 0x08CCBDC8-0x08CCC09F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Skarmory
gMonFootprint_Skarmory:
	.incbin "build/graphics/pokemon/skarmory/footprint.1bpp"
	.globl gMonStillFrontPic_Houndour
gMonStillFrontPic_Houndour:
	.incbin "build/graphics/pokemon/houndour/still_front.4bpp.lz"
  .globl gMonPalette_Houndour
gMonPalette_Houndour:
  .incbin "build/graphics/pokemon/houndour/normal_palette.gbapal.lz"

  .globl gMonBackPic_Houndour
gMonBackPic_Houndour:
  .incbin "build/graphics/pokemon/houndour/back.4bpp.lz"

  .globl gMonShinyPalette_Houndour
gMonShinyPalette_Houndour:
  .incbin "build/graphics/pokemon/houndour/shiny_palette.gbapal.lz"

	.globl gMonIcon_Houndour
gMonIcon_Houndour: @ 0x08CCC370 [228]
  .incbin "build/graphics/pokemon/houndour/icon.4bpp"
	@ analyzed canonical ROM range 0x08CCC770-0x08CCCB8F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Houndour
gMonFootprint_Houndour:
	.incbin "build/graphics/pokemon/houndour/footprint.1bpp"
	.globl gMonStillFrontPic_Houndoom
gMonStillFrontPic_Houndoom:
	.incbin "build/graphics/pokemon/houndoom/still_front.4bpp.lz"
  .globl gMonPalette_Houndoom
gMonPalette_Houndoom:
  .incbin "build/graphics/pokemon/houndoom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Houndoom
gMonBackPic_Houndoom:
  .incbin "build/graphics/pokemon/houndoom/back.4bpp.lz"

  .globl gMonShinyPalette_Houndoom
gMonShinyPalette_Houndoom:
  .incbin "build/graphics/pokemon/houndoom/shiny_palette.gbapal.lz"

	.globl gMonIcon_Houndoom
gMonIcon_Houndoom: @ 0x08CCCF04 [229]
  .incbin "build/graphics/pokemon/houndoom/icon.4bpp"
	@ analyzed canonical ROM range 0x08CCD304-0x08CCD743
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Houndoom
gMonFootprint_Houndoom:
	.incbin "build/graphics/pokemon/houndoom/footprint.1bpp"
	.globl gMonStillFrontPic_Kingdra
gMonStillFrontPic_Kingdra:
	.incbin "build/graphics/pokemon/kingdra/still_front.4bpp.lz"
  .globl gMonPalette_Kingdra
gMonPalette_Kingdra:
  .incbin "build/graphics/pokemon/kingdra/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kingdra
gMonBackPic_Kingdra:
  .incbin "build/graphics/pokemon/kingdra/back.4bpp.lz"

  .globl gMonShinyPalette_Kingdra
gMonShinyPalette_Kingdra:
  .incbin "build/graphics/pokemon/kingdra/shiny_palette.gbapal.lz"

	.globl gMonIcon_Kingdra
gMonIcon_Kingdra: @ 0x08CCDB48 [230]
  .incbin "build/graphics/pokemon/kingdra/icon.4bpp"
	@ analyzed canonical ROM range 0x08CCDF48-0x08CCE1C3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kingdra
gMonFootprint_Kingdra:
	.incbin "build/graphics/pokemon/kingdra/footprint.1bpp"
	.globl gMonStillFrontPic_Phanpy
gMonStillFrontPic_Phanpy:
	.incbin "build/graphics/pokemon/phanpy/still_front.4bpp.lz"
  .globl gMonPalette_Phanpy
gMonPalette_Phanpy:
  .incbin "build/graphics/pokemon/phanpy/normal_palette.gbapal.lz"

  .globl gMonBackPic_Phanpy
gMonBackPic_Phanpy:
  .incbin "build/graphics/pokemon/phanpy/back.4bpp.lz"

  .globl gMonShinyPalette_Phanpy
gMonShinyPalette_Phanpy:
  .incbin "build/graphics/pokemon/phanpy/shiny_palette.gbapal.lz"

	.globl gMonIcon_Phanpy
gMonIcon_Phanpy: @ 0x08CCE4D8 [231]
  .incbin "build/graphics/pokemon/phanpy/icon.4bpp"
	@ analyzed canonical ROM range 0x08CCE8D8-0x08CCED6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Phanpy
gMonFootprint_Phanpy:
	.incbin "build/graphics/pokemon/phanpy/footprint.1bpp"
	.globl gMonStillFrontPic_Donphan
gMonStillFrontPic_Donphan:
	.incbin "build/graphics/pokemon/donphan/still_front.4bpp.lz"
  .globl gMonPalette_Donphan
gMonPalette_Donphan:
  .incbin "build/graphics/pokemon/donphan/normal_palette.gbapal.lz"

  .globl gMonBackPic_Donphan
gMonBackPic_Donphan:
  .incbin "build/graphics/pokemon/donphan/back.4bpp.lz"

  .globl gMonShinyPalette_Donphan
gMonShinyPalette_Donphan:
  .incbin "build/graphics/pokemon/donphan/shiny_palette.gbapal.lz"

	.globl gMonIcon_Donphan
gMonIcon_Donphan: @ 0x08CCF0B8 [232]
  .incbin "build/graphics/pokemon/donphan/icon.4bpp"
	@ analyzed canonical ROM range 0x08CCF4B8-0x08CCF75F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Donphan
gMonFootprint_Donphan:
	.incbin "build/graphics/pokemon/donphan/footprint.1bpp"
	.globl gMonStillFrontPic_Porygon2
gMonStillFrontPic_Porygon2:
	.incbin "build/graphics/pokemon/porygon2/still_front.4bpp.lz"
  .globl gMonPalette_Porygon2
gMonPalette_Porygon2:
  .incbin "build/graphics/pokemon/porygon2/normal_palette.gbapal.lz"

  .globl gMonBackPic_Porygon2
gMonBackPic_Porygon2:
  .incbin "build/graphics/pokemon/porygon2/back.4bpp.lz"

  .globl gMonShinyPalette_Porygon2
gMonShinyPalette_Porygon2:
  .incbin "build/graphics/pokemon/porygon2/shiny_palette.gbapal.lz"

	.globl gMonIcon_Porygon2
gMonIcon_Porygon2: @ 0x08CCFACC [233]
  .incbin "build/graphics/pokemon/porygon2/icon.4bpp"
	@ analyzed canonical ROM range 0x08CCFECC-0x08CD02FF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Porygon2
gMonFootprint_Porygon2:
	.incbin "build/graphics/pokemon/porygon2/footprint.1bpp"
	.globl gMonStillFrontPic_Stantler
gMonStillFrontPic_Stantler:
	.incbin "build/graphics/pokemon/stantler/still_front.4bpp.lz"
  .globl gMonPalette_Stantler
gMonPalette_Stantler:
  .incbin "build/graphics/pokemon/stantler/normal_palette.gbapal.lz"

  .globl gMonBackPic_Stantler
gMonBackPic_Stantler:
  .incbin "build/graphics/pokemon/stantler/back.4bpp.lz"

  .globl gMonShinyPalette_Stantler
gMonShinyPalette_Stantler:
  .incbin "build/graphics/pokemon/stantler/shiny_palette.gbapal.lz"

	.globl gMonIcon_Stantler
gMonIcon_Stantler: @ 0x08CD069C [234]
  .incbin "build/graphics/pokemon/stantler/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD0A9C-0x08CD0E4F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Stantler
gMonFootprint_Stantler:
	.incbin "build/graphics/pokemon/stantler/footprint.1bpp"
	.globl gMonStillFrontPic_Smeargle
gMonStillFrontPic_Smeargle:
	.incbin "build/graphics/pokemon/smeargle/still_front.4bpp.lz"
  .globl gMonPalette_Smeargle
gMonPalette_Smeargle:
  .incbin "build/graphics/pokemon/smeargle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Smeargle
gMonBackPic_Smeargle:
  .incbin "build/graphics/pokemon/smeargle/back.4bpp.lz"

  .globl gMonShinyPalette_Smeargle
gMonShinyPalette_Smeargle:
  .incbin "build/graphics/pokemon/smeargle/shiny_palette.gbapal.lz"

	.globl gMonIcon_Smeargle
gMonIcon_Smeargle: @ 0x08CD11C4 [235]
  .incbin "build/graphics/pokemon/smeargle/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD15C4-0x08CD186F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Smeargle
gMonFootprint_Smeargle:
	.incbin "build/graphics/pokemon/smeargle/footprint.1bpp"
	.globl gMonStillFrontPic_Tyrogue
gMonStillFrontPic_Tyrogue:
	.incbin "build/graphics/pokemon/tyrogue/still_front.4bpp.lz"
  .globl gMonPalette_Tyrogue
gMonPalette_Tyrogue:
  .incbin "build/graphics/pokemon/tyrogue/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tyrogue
gMonBackPic_Tyrogue:
  .incbin "build/graphics/pokemon/tyrogue/back.4bpp.lz"

  .globl gMonShinyPalette_Tyrogue
gMonShinyPalette_Tyrogue:
  .incbin "build/graphics/pokemon/tyrogue/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tyrogue
gMonIcon_Tyrogue: @ 0x08CD1BDC [236]
  .incbin "build/graphics/pokemon/tyrogue/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD1FDC-0x08CD2387
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Tyrogue
gMonFootprint_Tyrogue:
	.incbin "build/graphics/pokemon/tyrogue/footprint.1bpp"
	.globl gMonStillFrontPic_Hitmontop
gMonStillFrontPic_Hitmontop:
	.incbin "build/graphics/pokemon/hitmontop/still_front.4bpp.lz"
  .globl gMonPalette_Hitmontop
gMonPalette_Hitmontop:
  .incbin "build/graphics/pokemon/hitmontop/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hitmontop
gMonBackPic_Hitmontop:
  .incbin "build/graphics/pokemon/hitmontop/back.4bpp.lz"

  .globl gMonShinyPalette_Hitmontop
gMonShinyPalette_Hitmontop:
  .incbin "build/graphics/pokemon/hitmontop/shiny_palette.gbapal.lz"

	.globl gMonIcon_Hitmontop
gMonIcon_Hitmontop: @ 0x08CD2800 [237]
  .incbin "build/graphics/pokemon/hitmontop/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD2C00-0x08CD2E77
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Hitmontop
gMonFootprint_Hitmontop:
	.incbin "build/graphics/pokemon/hitmontop/footprint.1bpp"
	.globl gMonStillFrontPic_Smoochum
gMonStillFrontPic_Smoochum:
	.incbin "build/graphics/pokemon/smoochum/still_front.4bpp.lz"
  .globl gMonPalette_Smoochum
gMonPalette_Smoochum:
  .incbin "build/graphics/pokemon/smoochum/normal_palette.gbapal.lz"

  .globl gMonBackPic_Smoochum
gMonBackPic_Smoochum:
  .incbin "build/graphics/pokemon/smoochum/back.4bpp.lz"

  .globl gMonShinyPalette_Smoochum
gMonShinyPalette_Smoochum:
  .incbin "build/graphics/pokemon/smoochum/shiny_palette.gbapal.lz"

	.globl gMonIcon_Smoochum
gMonIcon_Smoochum: @ 0x08CD3140 [238]
  .incbin "build/graphics/pokemon/smoochum/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD3540-0x08CD3867
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Smoochum
gMonFootprint_Smoochum:
	.incbin "build/graphics/pokemon/smoochum/footprint.1bpp"
	.globl gMonStillFrontPic_Elekid
gMonStillFrontPic_Elekid:
	.incbin "build/graphics/pokemon/elekid/still_front.4bpp.lz"
  .globl gMonPalette_Elekid
gMonPalette_Elekid:
  .incbin "build/graphics/pokemon/elekid/normal_palette.gbapal.lz"

  .globl gMonBackPic_Elekid
gMonBackPic_Elekid:
  .incbin "build/graphics/pokemon/elekid/back.4bpp.lz"

  .globl gMonShinyPalette_Elekid
gMonShinyPalette_Elekid:
  .incbin "build/graphics/pokemon/elekid/shiny_palette.gbapal.lz"

	.globl gMonIcon_Elekid
gMonIcon_Elekid: @ 0x08CD3C10 [239]
  .incbin "build/graphics/pokemon/elekid/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD4010-0x08CD42B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Elekid
gMonFootprint_Elekid:
	.incbin "build/graphics/pokemon/elekid/footprint.1bpp"
	.globl gMonStillFrontPic_Magby
gMonStillFrontPic_Magby:
	.incbin "build/graphics/pokemon/magby/still_front.4bpp.lz"
  .globl gMonPalette_Magby
gMonPalette_Magby:
  .incbin "build/graphics/pokemon/magby/normal_palette.gbapal.lz"

  .globl gMonBackPic_Magby
gMonBackPic_Magby:
  .incbin "build/graphics/pokemon/magby/back.4bpp.lz"

  .globl gMonShinyPalette_Magby
gMonShinyPalette_Magby:
  .incbin "build/graphics/pokemon/magby/shiny_palette.gbapal.lz"

	.globl gMonIcon_Magby
gMonIcon_Magby: @ 0x08CD45B0 [240]
  .incbin "build/graphics/pokemon/magby/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD49B0-0x08CD4D7F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Magby
gMonFootprint_Magby:
	.incbin "build/graphics/pokemon/magby/footprint.1bpp"
	.globl gMonStillFrontPic_Miltank
gMonStillFrontPic_Miltank:
	.incbin "build/graphics/pokemon/miltank/still_front.4bpp.lz"
  .globl gMonPalette_Miltank
gMonPalette_Miltank:
  .incbin "build/graphics/pokemon/miltank/normal_palette.gbapal.lz"

  .globl gMonBackPic_Miltank
gMonBackPic_Miltank:
  .incbin "build/graphics/pokemon/miltank/back.4bpp.lz"

  .globl gMonShinyPalette_Miltank
gMonShinyPalette_Miltank:
  .incbin "build/graphics/pokemon/miltank/shiny_palette.gbapal.lz"

	.globl gMonIcon_Miltank
gMonIcon_Miltank: @ 0x08CD516C [241]
  .incbin "build/graphics/pokemon/miltank/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD556C-0x08CD5973
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Miltank
gMonFootprint_Miltank:
	.incbin "build/graphics/pokemon/miltank/footprint.1bpp"
	.globl gMonStillFrontPic_Blissey
gMonStillFrontPic_Blissey:
	.incbin "build/graphics/pokemon/blissey/still_front.4bpp.lz"
  .globl gMonPalette_Blissey
gMonPalette_Blissey:
  .incbin "build/graphics/pokemon/blissey/normal_palette.gbapal.lz"

  .globl gMonBackPic_Blissey
gMonBackPic_Blissey:
  .incbin "build/graphics/pokemon/blissey/back.4bpp.lz"

  .globl gMonShinyPalette_Blissey
gMonShinyPalette_Blissey:
  .incbin "build/graphics/pokemon/blissey/shiny_palette.gbapal.lz"

	.globl gMonIcon_Blissey
gMonIcon_Blissey: @ 0x08CD5C90 [242]
  .incbin "build/graphics/pokemon/blissey/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD6090-0x08CD662B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Blissey
gMonFootprint_Blissey:
	.incbin "build/graphics/pokemon/blissey/footprint.1bpp"
	.globl gMonStillFrontPic_Raikou
gMonStillFrontPic_Raikou:
	.incbin "build/graphics/pokemon/raikou/still_front.4bpp.lz"
  .globl gMonPalette_Raikou
gMonPalette_Raikou:
  .incbin "build/graphics/pokemon/raikou/normal_palette.gbapal.lz"

  .globl gMonBackPic_Raikou
gMonBackPic_Raikou:
  .incbin "build/graphics/pokemon/raikou/back.4bpp.lz"

  .globl gMonShinyPalette_Raikou
gMonShinyPalette_Raikou:
  .incbin "build/graphics/pokemon/raikou/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 8

	.globl gMonIcon_Raikou
gMonIcon_Raikou: @ 0x08CD6A24 [243]
  .incbin "build/graphics/pokemon/raikou/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD6E24-0x08CD743F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Raikou
gMonFootprint_Raikou:
	.incbin "build/graphics/pokemon/raikou/footprint.1bpp"
	.globl gMonStillFrontPic_Entei
gMonStillFrontPic_Entei:
	.incbin "build/graphics/pokemon/entei/still_front.4bpp.lz"
  .globl gMonPalette_Entei
gMonPalette_Entei:
  .incbin "build/graphics/pokemon/entei/normal_palette.gbapal.lz"

  .globl gMonBackPic_Entei
gMonBackPic_Entei:
  .incbin "build/graphics/pokemon/entei/back.4bpp.lz"

  .globl gMonShinyPalette_Entei
gMonShinyPalette_Entei:
  .incbin "build/graphics/pokemon/entei/shiny_palette.gbapal.lz"

	.globl gMonIcon_Entei
gMonIcon_Entei: @ 0x08CD78B4 [244]
  .incbin "build/graphics/pokemon/entei/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD7CB4-0x08CD8257
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Entei
gMonFootprint_Entei:
	.incbin "build/graphics/pokemon/entei/footprint.1bpp"
	.globl gMonStillFrontPic_Suicune
gMonStillFrontPic_Suicune:
	.incbin "build/graphics/pokemon/suicune/still_front.4bpp.lz"
  .globl gMonPalette_Suicune
gMonPalette_Suicune:
  .incbin "build/graphics/pokemon/suicune/normal_palette.gbapal.lz"

  .globl gMonBackPic_Suicune
gMonBackPic_Suicune:
  .incbin "build/graphics/pokemon/suicune/back.4bpp.lz"

  .globl gMonShinyPalette_Suicune
gMonShinyPalette_Suicune:
  .incbin "build/graphics/pokemon/suicune/shiny_palette.gbapal.lz"

	.globl gMonIcon_Suicune
gMonIcon_Suicune: @ 0x08CD8784 [245]
  .incbin "build/graphics/pokemon/suicune/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD8B84-0x08CD8DFF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Suicune
gMonFootprint_Suicune:
	.incbin "build/graphics/pokemon/suicune/footprint.1bpp"
	.globl gMonStillFrontPic_Larvitar
gMonStillFrontPic_Larvitar:
	.incbin "build/graphics/pokemon/larvitar/still_front.4bpp.lz"
  .globl gMonPalette_Larvitar
gMonPalette_Larvitar:
  .incbin "build/graphics/pokemon/larvitar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Larvitar
gMonBackPic_Larvitar:
  .incbin "build/graphics/pokemon/larvitar/back.4bpp.lz"

  .globl gMonShinyPalette_Larvitar
gMonShinyPalette_Larvitar:
  .incbin "build/graphics/pokemon/larvitar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Larvitar
gMonIcon_Larvitar: @ 0x08CD90FC [246]
  .incbin "build/graphics/pokemon/larvitar/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD94FC-0x08CD980B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Larvitar
gMonFootprint_Larvitar:
	.incbin "build/graphics/pokemon/larvitar/footprint.1bpp"
	.globl gMonStillFrontPic_Pupitar
gMonStillFrontPic_Pupitar:
	.incbin "build/graphics/pokemon/pupitar/still_front.4bpp.lz"
  .globl gMonPalette_Pupitar
gMonPalette_Pupitar:
  .incbin "build/graphics/pokemon/pupitar/normal_palette.gbapal.lz"
  .space 0x3, 0x00

  .globl gMonBackPic_Pupitar
gMonBackPic_Pupitar:
  .incbin "build/graphics/pokemon/pupitar/back.4bpp.lz"

  .globl gMonShinyPalette_Pupitar
gMonShinyPalette_Pupitar:
  .incbin "build/graphics/pokemon/pupitar/shiny_palette.gbapal.lz"
  .space 0x2, 0x00
	.globl gMonIcon_Pupitar
gMonIcon_Pupitar: @ 0x08CD9B94 [247]
  .incbin "build/graphics/pokemon/pupitar/icon.4bpp"
	@ analyzed canonical ROM range 0x08CD9F94-0x08CDA4EF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Pupitar
gMonFootprint_Pupitar:
	.incbin "build/graphics/pokemon/pupitar/footprint.1bpp"
	.globl gMonStillFrontPic_Tyranitar
gMonStillFrontPic_Tyranitar:
	.incbin "build/graphics/pokemon/tyranitar/still_front.4bpp.lz"
  .globl gMonPalette_Tyranitar
gMonPalette_Tyranitar:
  .incbin "build/graphics/pokemon/tyranitar/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tyranitar
gMonBackPic_Tyranitar:
  .incbin "build/graphics/pokemon/tyranitar/back.4bpp.lz"

  .globl gMonShinyPalette_Tyranitar
gMonShinyPalette_Tyranitar:
  .incbin "build/graphics/pokemon/tyranitar/shiny_palette.gbapal.lz"

	.globl gMonIcon_Tyranitar
gMonIcon_Tyranitar: @ 0x08CDA92C [248]
  .incbin "build/graphics/pokemon/tyranitar/icon.4bpp"
	@ analyzed canonical ROM range 0x08CDAD2C-0x08CDB20F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Tyranitar
gMonFootprint_Tyranitar:
	.incbin "build/graphics/pokemon/tyranitar/footprint.1bpp"
	.globl gMonStillFrontPic_Lugia
gMonStillFrontPic_Lugia:
	.incbin "build/graphics/pokemon/lugia/still_front.4bpp.lz"
  .globl gMonPalette_Lugia
gMonPalette_Lugia:
  .incbin "build/graphics/pokemon/lugia/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Lugia
gMonBackPic_Lugia:
  .incbin "build/graphics/pokemon/lugia/back.4bpp.lz"

  .globl gMonShinyPalette_Lugia
gMonShinyPalette_Lugia:
  .incbin "build/graphics/pokemon/lugia/shiny_palette.gbapal.lz"

	.globl gMonIcon_Lugia
gMonIcon_Lugia: @ 0x08CDB634 [249]
  .incbin "build/graphics/pokemon/lugia/icon.4bpp"
	@ analyzed canonical ROM range 0x08CDBA34-0x08CDC0A7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Lugia
gMonFootprint_Lugia:
	.incbin "build/graphics/pokemon/lugia/footprint.1bpp"
	.globl gMonStillFrontPic_HoOh
gMonStillFrontPic_HoOh:
	.incbin "build/graphics/pokemon/ho_oh/still_front.4bpp.lz"
  .globl gMonPalette_HoOh
gMonPalette_HoOh:
  .incbin "build/graphics/pokemon/ho_oh/normal_palette.gbapal.lz"

  .globl gMonBackPic_HoOh
gMonBackPic_HoOh:
  .incbin "build/graphics/pokemon/ho_oh/back.4bpp.lz"

  .globl gMonShinyPalette_HoOh
gMonShinyPalette_HoOh:
  .incbin "build/graphics/pokemon/ho_oh/shiny_palette.gbapal.lz"

	.globl gMonIcon_HoOh
gMonIcon_HoOh: @ 0x08CDC508 [250]
  .incbin "build/graphics/pokemon/ho_oh/icon.4bpp"
	@ analyzed canonical ROM range 0x08CDC908-0x08CDCB9F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_HoOh
gMonFootprint_HoOh:
	.incbin "build/graphics/pokemon/ho_oh/footprint.1bpp"
	.globl gMonStillFrontPic_Celebi
gMonStillFrontPic_Celebi:
	.incbin "build/graphics/pokemon/celebi/still_front.4bpp.lz"
  .globl gMonPalette_Celebi
gMonPalette_Celebi:
  .incbin "build/graphics/pokemon/celebi/normal_palette.gbapal.lz"

  .globl gMonBackPic_Celebi
gMonBackPic_Celebi:
  .incbin "build/graphics/pokemon/celebi/back.4bpp.lz"

  .globl gMonShinyPalette_Celebi
gMonShinyPalette_Celebi:
  .incbin "build/graphics/pokemon/celebi/shiny_palette.gbapal.lz"

	.globl gMonIcon_Celebi
gMonIcon_Celebi: @ 0x08CDCF9C [251]
	.globl gMonStillFrontPic_DoubleQuestionMark
	.set gMonStillFrontPic_DoubleQuestionMark, gMonIcon_Celebi + 0x420
	@ Semantic alias for compressed still-front sprite at 0x08CDD3BC.
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_ICON_ASSET
  .incbin "build/graphics/pokemon/celebi/icon.4bpp"
  @ ANALYSIS: RAW_RANGE offset=0xCDD39C, size=0x1A0
  .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03
  .byte 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  .byte 0x10, 0x00, 0x08, 0x00, 0x2A, 0x00, 0x00, 0xE0, 0x01, 0x22, 0x00, 0x03, 0x12, 0x20, 0x03, 0x20
  .byte 0x60, 0x22, 0x10, 0x07, 0xB0, 0x1C, 0x22, 0x22, 0x22, 0x11, 0x11, 0xCF, 0x70, 0x01, 0xF0, 0x1F
  .byte 0x22, 0x02, 0x00, 0x16, 0x50, 0x03, 0x10, 0x4B, 0xF0, 0x01, 0xBF, 0x60, 0x2B, 0x02, 0xF0, 0x14
  .byte 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xDC, 0xF0, 0x68, 0x10, 0x7F, 0x20
  .byte 0x00, 0x43, 0x00, 0x03, 0x10, 0x55, 0x12, 0x11, 0x39, 0x11, 0x21, 0x80, 0x03, 0x10, 0x0F, 0x10
  .byte 0x18, 0x22, 0x11, 0x00, 0x26, 0xFB, 0x10, 0x03, 0x50, 0xAE, 0x10, 0x07, 0x60, 0x13, 0x00, 0x24
  .byte 0x00, 0x50, 0x03, 0x00, 0x2A, 0xED, 0x10, 0x50, 0x90, 0x03, 0x00, 0x86, 0x00, 0x30, 0x03, 0x20
  .byte 0xB7, 0x21, 0xD0, 0x03, 0xFF, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0
  .byte 0x7F, 0xF0, 0x7F, 0x70, 0x67, 0xFF, 0x50, 0x03, 0x11, 0x5F, 0x91, 0x23, 0x50, 0x67, 0xD0, 0x83
  .byte 0x70, 0x01, 0x80, 0x6F, 0x10, 0x7F, 0xFB, 0x90, 0x8F, 0x20, 0xC0, 0xD0, 0x73, 0x10, 0x87, 0x50
  .byte 0x93, 0x02, 0x20, 0x22, 0xF0, 0x7F, 0xFF, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0
  .byte 0x7F, 0xD0, 0x7F, 0xF2, 0x15, 0xF0, 0x01, 0xFF, 0x10, 0x64, 0xF0, 0x03, 0x10, 0x03, 0x00, 0xAB
  .byte 0x00, 0x63, 0x11, 0x83, 0xC0, 0x01, 0x11, 0x6B, 0xD7, 0x42, 0x83, 0x30, 0x67, 0x21, 0x00, 0xB8
  .byte 0x21, 0x00, 0x34, 0x10, 0x03, 0xF2, 0x94, 0xFF, 0xF0, 0x01, 0xF0, 0x7F, 0xF0, 0x03, 0xF0, 0x7F
  .byte 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x01, 0xBB, 0x90, 0x01, 0x12, 0x01, 0x5B, 0xF0, 0x03
  .byte 0x50, 0x03, 0x11, 0x00, 0x58, 0x02, 0xC5, 0x7F, 0x00, 0xF0, 0x03, 0x30, 0x03, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x7F, 0xF0, 0x03, 0xFF, 0xF0, 0x7F, 0xF0, 0x03, 0xF0, 0x4D, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x7F, 0xB2, 0x93, 0x54, 0x3D, 0xFF, 0x30, 0x7F, 0xF0, 0x1D, 0x50, 0x1D, 0xF0
  .byte 0x7F, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x7F, 0xF0, 0x61, 0xFC, 0xF0, 0x7F, 0xF0, 0x1D, 0xF0, 0x7F
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x12, 0x11, 0xBF, 0x05, 0x86, 0x11, 0x14, 0x49, 0xF0, 0x03
  .byte 0x24, 0xC1, 0x00, 0x67, 0xA5, 0x73, 0xA0, 0x03, 0xFF, 0xF0, 0x4F, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x7F, 0xF0, 0x7B, 0xF0, 0x7F, 0xF0, 0x03, 0xF0, 0x7F, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xA3, 0x78
  .byte 0x00, 0x7B, 0x72, 0x6F, 0xF1, 0x69, 0x92, 0x7F, 0xF0, 0x1D, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x7F, 0xF0, 0x1D, 0xF0, 0x01, 0x80, 0xF0, 0x01, 0x00, 0x00

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
  .space 0x2, 0x00

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
	.globl gMonStillFrontPic_Treecko
	.set gMonStillFrontPic_Treecko, gMonShinyPalette_OldUnownZ + 0x14
	@ Semantic alias for compressed still-front sprite at 0x08CDD6E8.
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_PALETTE_ASSET
  .incbin "build/graphics/pokemon/old_unown_z/shiny_palette.gbapal.lz"

  @ ANALYSIS: RAW_RANGE offset=0xCDD6E6, size=0x30A
  .byte 0x00, 0x00, 0x10, 0x00, 0x08, 0x00, 0x3F, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF2, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x00
  .byte 0xE0, 0x00, 0x03, 0xBE, 0xAA, 0x00, 0x03, 0xCD, 0x00, 0x0A, 0xCC, 0x30, 0x03, 0xD0, 0x00, 0x03
  .byte 0xCE, 0x90, 0x10, 0x0B, 0xFF, 0x0E, 0x00, 0x07, 0xFB, 0x00, 0xBD, 0xCC, 0x02, 0xCC, 0xFF, 0xBB
  .byte 0xCC, 0xCC, 0xEF, 0x00, 0x03, 0xBE, 0x48, 0xCB, 0x30, 0x03, 0xCD, 0xCB, 0x00, 0x1F, 0x00, 0x00
  .byte 0x0F, 0xAA, 0x00, 0x03, 0xFC, 0x00, 0x03, 0xEC, 0x00, 0x03, 0xCC, 0x00, 0x0C, 0xCC, 0x7F, 0x0E
  .byte 0x00, 0x03, 0x00, 0x10, 0x10, 0x03, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFE, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xB0, 0xF5, 0x00, 0xA8, 0x20, 0xE3, 0xDE, 0xA8, 0x40
  .byte 0xEF, 0xD3, 0x40, 0x03, 0x23, 0x10, 0x03, 0xBC, 0x00, 0x00, 0x00, 0x30, 0xBB, 0xEC, 0xBC, 0xCC
  .byte 0xDC, 0xEC, 0xCC, 0x00, 0xCC, 0xED, 0xDC, 0xCC, 0xEC, 0x2A, 0xDC, 0xCC, 0x02, 0xDC, 0x1A, 0xCC
  .byte 0xCC, 0x2C, 0x12, 0x30, 0x03, 0xDC, 0x40, 0x22, 0x10, 0x03, 0xEE, 0xFD, 0x00, 0x00, 0x2F, 0xFE
  .byte 0x00, 0x00, 0x00, 0x1F, 0xD2, 0x00, 0x00, 0x1E, 0xD2, 0x50, 0x0F, 0x20, 0x03, 0x1F, 0x00, 0x03
  .byte 0x2F, 0xD3, 0x0F, 0x00, 0x3F, 0x22, 0xDD, 0x11, 0x19, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xC2, 0xF0, 0x01, 0xF0, 0x01, 0x00, 0xBE, 0xEC, 0xFF, 0x00, 0xDE, 0xDF, 0x00
  .byte 0x00, 0xEF, 0xCE, 0xDE, 0xE0, 0xBB, 0xCC, 0xDC, 0x24, 0xE0, 0xCC, 0x00, 0xEF, 0xFF, 0xCF, 0x41
  .byte 0xE3, 0x00, 0xFF, 0x84, 0x00, 0xF7, 0xBB, 0x0F, 0x00, 0xF0, 0x01, 0xB6, 0xE0, 0xDC, 0xA0, 0x00
  .byte 0xAD, 0xCF, 0x00, 0xCA, 0xF0, 0xDC, 0xEE, 0xEE, 0x00, 0x82, 0x00, 0xDB, 0xEE, 0xEF, 0xCD, 0xCC
  .byte 0xCC, 0x00, 0x01, 0x3D, 0x80, 0x00, 0x03, 0xDC, 0xEC, 0xEC, 0xDD, 0xDD, 0xCC, 0xED, 0x00, 0xE7
  .byte 0x7E, 0xDD, 0x6E, 0x66, 0x66, 0xFF, 0x67, 0x00, 0x66, 0xD6, 0xEE, 0xFE, 0x66, 0xD7, 0xDD, 0x7E
  .byte 0x01, 0x66, 0xDD, 0xD3, 0xDD, 0x0E, 0x00, 0xDD, 0x01, 0x03, 0x78, 0xDE, 0x00, 0x03, 0x10, 0xEE
  .byte 0x00, 0x06, 0x02, 0x0F, 0xEE, 0xFE, 0xFE, 0x18, 0xEF, 0xDD, 0xCC, 0x00, 0x31, 0x40, 0x63, 0xF0
  .byte 0xCB, 0x00, 0x00, 0xFF, 0xEF, 0xCC, 0xF0, 0xCB, 0xDE, 0xED, 0xF0, 0x00, 0xCC, 0xDE, 0xDD, 0xCF
  .byte 0xEE, 0xDD, 0xDE, 0xCC, 0x07, 0xCC, 0xDD, 0xFF, 0xDC, 0xFE, 0x00, 0x1A, 0x00, 0x01, 0x11, 0x85
  .byte 0xEF, 0x10, 0x03, 0x11, 0x2D, 0x12, 0x43, 0xED, 0x40, 0x0B, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xE7, 0xF0, 0x01, 0xF0, 0x01, 0x80, 0x01, 0xFF, 0xEF, 0x02, 0xF3, 0x10, 0xA3, 0xF0, 0x01, 0x80
  .byte 0x10, 0x01, 0xDD, 0x57, 0x66, 0xD6, 0xDE, 0x56, 0x55, 0x02, 0xD6, 0x70, 0x55, 0x55, 0x75, 0x60
  .byte 0x00, 0x03, 0x57, 0x10, 0x55, 0x55, 0x65, 0x50, 0x03, 0x77, 0x55, 0x55, 0x77, 0x00, 0xCD, 0xCC
  .byte 0xEC, 0xFF, 0xDD, 0xFE, 0x0F, 0x00, 0x7F, 0xED, 0x00, 0xB0, 0x10, 0xFF, 0x01, 0x0E, 0x21, 0x0F
  .byte 0x50, 0x03, 0xF0, 0x58, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x80, 0x90, 0x01, 0x60, 0x77, 0x67, 0x76, 0x70, 0x66
  .byte 0x66, 0x00, 0xD6, 0xF0, 0x67, 0x66, 0xDD, 0xF0, 0xFE, 0xDF, 0x00, 0xDD, 0xF0, 0xEE, 0xFF, 0xDE
  .byte 0xF0, 0xEE, 0x8F, 0x00, 0xDF, 0xFE, 0xFE, 0x8F, 0xDF, 0xDF, 0xFD, 0x8F, 0x20, 0xE8, 0xDD, 0x02
  .byte 0x30, 0xDD, 0xFE, 0x98, 0x99, 0xED, 0x01, 0x99, 0x99, 0x44, 0xFD, 0x99, 0x99, 0x49, 0x00, 0x03
  .byte 0x01, 0x99, 0xED, 0x9F, 0x99, 0x99, 0xEC, 0x8F, 0x00, 0x03, 0x14, 0xF8, 0x99, 0x99, 0x10, 0x43
  .byte 0xF8, 0x01, 0x17, 0x44, 0x84, 0x01, 0xFF, 0x00, 0x44, 0x44, 0x44, 0xF8, 0x49, 0x00, 0x04, 0x6A
  .byte 0x99, 0x00, 0x04, 0x00, 0x2A, 0x49, 0x00, 0x2A, 0x94, 0xD0, 0x6F, 0x0F, 0x00, 0x80, 0x8F, 0x00
  .byte 0xF4, 0x4F, 0x94, 0x0F, 0x49, 0x01, 0x9F, 0x99, 0x89, 0x94, 0x89, 0x99, 0xF9, 0xF0, 0x91, 0xF8
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xA4, 0x08, 0xFF, 0x00, 0xEE, 0x00, 0xCE, 0xCC
  .byte 0xE0, 0xEB, 0xDD, 0xDD, 0xE0, 0xBC, 0x00, 0xDC, 0xCB, 0x00, 0xCF, 0xEC, 0xCC, 0x00, 0xF0, 0x42
  .byte 0xFF, 0x21, 0xBA, 0xDF, 0xFD, 0xF0, 0xF8, 0x01, 0xC7, 0xFF, 0x82, 0x04, 0xCB, 0xFE, 0xCC, 0xFD
  .byte 0x00, 0xDE, 0x00, 0x0B, 0xCF, 0x0C, 0xFE, 0x0F, 0xE0, 0xCB, 0x03, 0x2F, 0x22, 0xDB, 0xCC, 0x8F
  .byte 0x00, 0x9F, 0x99, 0xCC, 0x8F, 0xF8, 0x9F, 0xCC, 0xFE, 0x00, 0x88, 0xF8, 0xCC, 0xDC, 0xFF, 0x88
  .byte 0xCC, 0xCC, 0x01, 0xCB, 0xFF, 0xBD, 0xDC, 0xCC, 0x0F, 0xCE, 0x03, 0x76, 0x74, 0xF0, 0x00, 0xF7
  .byte 0x00, 0xE3, 0x10, 0xE7, 0x99, 0x01, 0x12, 0x99, 0x88, 0x06, 0xFF, 0x98, 0x99, 0xFF, 0x00, 0x30
  .byte 0x57, 0x50, 0x01, 0x99, 0xE0, 0x00, 0xE3, 0x00, 0x1A, 0x10, 0x03, 0x0F, 0x99, 0x99, 0x8F, 0x00
  .byte 0x3F, 0xFF, 0x8F, 0xF0, 0x9D, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xE0, 0xF0, 0x01, 0xF0, 0x01, 0xB0, 0x01, 0x00, 0x00, 0x00

  .globl gMonPalette_Treecko
gMonPalette_Treecko:
  .incbin "build/graphics/pokemon/treecko/normal_palette.gbapal.lz"

  .globl gMonBackPic_Treecko
gMonBackPic_Treecko:
  .incbin "build/graphics/pokemon/treecko/back.4bpp.lz"

  .globl gMonShinyPalette_Treecko
gMonShinyPalette_Treecko:
  .incbin "build/graphics/pokemon/treecko/shiny_palette.gbapal.lz"

  .globl gMonIcon_Treecko
gMonIcon_Treecko: @ 0x08CDDD40 [277]
  .incbin "build/graphics/pokemon/treecko/icon.4bpp"
	@ analyzed canonical ROM range 0x08CDE140-0x08CDE5EB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Treecko
gMonFootprint_Treecko:
	.incbin "build/graphics/pokemon/treecko/footprint.1bpp"
	.globl gMonStillFrontPic_Grovyle
gMonStillFrontPic_Grovyle:
	.incbin "build/graphics/pokemon/grovyle/still_front.4bpp.lz"
  .globl gMonPalette_Grovyle
gMonPalette_Grovyle:
  .incbin "build/graphics/pokemon/grovyle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Grovyle
gMonBackPic_Grovyle:
  .incbin "build/graphics/pokemon/grovyle/back.4bpp.lz"

  .globl gMonShinyPalette_Grovyle
gMonShinyPalette_Grovyle:
  .incbin "build/graphics/pokemon/grovyle/shiny_palette.gbapal.lz"

  .globl gMonIcon_Grovyle
gMonIcon_Grovyle: @ 0x08CDE978 [278]
  .incbin "build/graphics/pokemon/grovyle/icon.4bpp"
	@ analyzed canonical ROM range 0x08CDED78-0x08CDF29B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Grovyle
gMonFootprint_Grovyle:
	.incbin "build/graphics/pokemon/grovyle/footprint.1bpp"
	.globl gMonStillFrontPic_Sceptile
gMonStillFrontPic_Sceptile:
	.incbin "build/graphics/pokemon/sceptile/still_front.4bpp.lz"
  .globl gMonPalette_Sceptile
gMonPalette_Sceptile:
  .incbin "build/graphics/pokemon/sceptile/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sceptile
gMonBackPic_Sceptile:
  .incbin "build/graphics/pokemon/sceptile/back.4bpp.lz"

  .globl gMonShinyPalette_Sceptile
gMonShinyPalette_Sceptile:
  .incbin "build/graphics/pokemon/sceptile/shiny_palette.gbapal.lz"

  .globl gMonIcon_Sceptile
gMonIcon_Sceptile: @ 0x08CDF6E8 [279]
  .incbin "build/graphics/pokemon/sceptile/icon.4bpp"
	@ analyzed canonical ROM range 0x08CDFAE8-0x08CDFDA3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sceptile
gMonFootprint_Sceptile:
	.incbin "build/graphics/pokemon/sceptile/footprint.1bpp"
	.globl gMonStillFrontPic_Torchic
gMonStillFrontPic_Torchic:
	.incbin "build/graphics/pokemon/torchic/still_front.4bpp.lz"
  .globl gMonPalette_Torchic
gMonPalette_Torchic:
  .incbin "build/graphics/pokemon/torchic/normal_palette.gbapal.lz"

  .globl gMonBackPic_Torchic
gMonBackPic_Torchic:
  .incbin "build/graphics/pokemon/torchic/back.4bpp.lz"

  .globl gMonShinyPalette_Torchic
gMonShinyPalette_Torchic:
  .incbin "build/graphics/pokemon/torchic/shiny_palette.gbapal.lz"

  .globl gMonIcon_Torchic
gMonIcon_Torchic: @ 0x08CE00CC [280]
  .incbin "build/graphics/pokemon/torchic/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE04CC-0x08CE08D7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Torchic
gMonFootprint_Torchic:
	.incbin "build/graphics/pokemon/torchic/footprint.1bpp"
	.globl gMonStillFrontPic_Combusken
gMonStillFrontPic_Combusken:
	.incbin "build/graphics/pokemon/combusken/still_front.4bpp.lz"
  .globl gMonPalette_Combusken
gMonPalette_Combusken:
  .incbin "build/graphics/pokemon/combusken/normal_palette.gbapal.lz"

  .globl gMonBackPic_Combusken
gMonBackPic_Combusken:
  .incbin "build/graphics/pokemon/combusken/back.4bpp.lz"

  .globl gMonShinyPalette_Combusken
gMonShinyPalette_Combusken:
  .incbin "build/graphics/pokemon/combusken/shiny_palette.gbapal.lz"

  .globl gMonIcon_Combusken
gMonIcon_Combusken: @ 0x08CE0CF8 [281]
  .incbin "build/graphics/pokemon/combusken/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE10F8-0x08CE1867
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Combusken
gMonFootprint_Combusken:
	.incbin "build/graphics/pokemon/combusken/footprint.1bpp"
	.globl gMonStillFrontPic_Blaziken
gMonStillFrontPic_Blaziken:
	.incbin "build/graphics/pokemon/blaziken/still_front.4bpp.lz"
  .globl gMonPalette_Blaziken
gMonPalette_Blaziken:
  .incbin "build/graphics/pokemon/blaziken/normal_palette.gbapal.lz"

  .globl gMonBackPic_Blaziken
gMonBackPic_Blaziken:
  .incbin "build/graphics/pokemon/blaziken/back.4bpp.lz"

  .globl gMonShinyPalette_Blaziken
gMonShinyPalette_Blaziken:
  .incbin "build/graphics/pokemon/blaziken/shiny_palette.gbapal.lz"

  .globl gMonIcon_Blaziken
gMonIcon_Blaziken: @ 0x08CE1C94 [282]
  .incbin "build/graphics/pokemon/blaziken/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE2094-0x08CE236B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Blaziken
gMonFootprint_Blaziken:
	.incbin "build/graphics/pokemon/blaziken/footprint.1bpp"
	.globl gMonStillFrontPic_Mudkip
gMonStillFrontPic_Mudkip:
	.incbin "build/graphics/pokemon/mudkip/still_front.4bpp.lz"
  .globl gMonPalette_Mudkip
gMonPalette_Mudkip:
  .incbin "build/graphics/pokemon/mudkip/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mudkip
gMonBackPic_Mudkip:
  .incbin "build/graphics/pokemon/mudkip/back.4bpp.lz"

  .globl gMonShinyPalette_Mudkip
gMonShinyPalette_Mudkip:
  .incbin "build/graphics/pokemon/mudkip/shiny_palette.gbapal.lz"

  .globl gMonIcon_Mudkip
gMonIcon_Mudkip: @ 0x08CE269C [283]
  .incbin "build/graphics/pokemon/mudkip/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE2A9C-0x08CE311B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Mudkip
gMonFootprint_Mudkip:
	.incbin "build/graphics/pokemon/mudkip/footprint.1bpp"
	.globl gMonStillFrontPic_Marshtomp
gMonStillFrontPic_Marshtomp:
	.incbin "build/graphics/pokemon/marshtomp/still_front.4bpp.lz"
  .globl gMonPalette_Marshtomp
gMonPalette_Marshtomp:
  .incbin "build/graphics/pokemon/marshtomp/normal_palette.gbapal.lz"

  .globl gMonBackPic_Marshtomp
gMonBackPic_Marshtomp:
  .incbin "build/graphics/pokemon/marshtomp/back.4bpp.lz"

  .globl gMonShinyPalette_Marshtomp
gMonShinyPalette_Marshtomp:
  .incbin "build/graphics/pokemon/marshtomp/shiny_palette.gbapal.lz"

  .globl gMonIcon_Marshtomp
gMonIcon_Marshtomp: @ 0x08CE351C [284]
  .incbin "build/graphics/pokemon/marshtomp/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE391C-0x08CE3EB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Marshtomp
gMonFootprint_Marshtomp:
	.incbin "build/graphics/pokemon/marshtomp/footprint.1bpp"
	.globl gMonStillFrontPic_Swampert
gMonStillFrontPic_Swampert:
	.incbin "build/graphics/pokemon/swampert/still_front.4bpp.lz"
  .globl gMonPalette_Swampert
gMonPalette_Swampert:
  .incbin "build/graphics/pokemon/swampert/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swampert
gMonBackPic_Swampert:
  .incbin "build/graphics/pokemon/swampert/back.4bpp.lz"

  .globl gMonShinyPalette_Swampert
gMonShinyPalette_Swampert:
  .incbin "build/graphics/pokemon/swampert/shiny_palette.gbapal.lz"

  .globl gMonIcon_Swampert
gMonIcon_Swampert: @ 0x08CE42BC [285]
  .incbin "build/graphics/pokemon/swampert/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE46BC-0x08CE4C7F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Swampert
gMonFootprint_Swampert:
	.incbin "build/graphics/pokemon/swampert/footprint.1bpp"
	.globl gMonStillFrontPic_Poochyena
gMonStillFrontPic_Poochyena:
	.incbin "build/graphics/pokemon/poochyena/still_front.4bpp.lz"
  .globl gMonPalette_Poochyena
gMonPalette_Poochyena:
  .incbin "build/graphics/pokemon/poochyena/normal_palette.gbapal.lz"

  .globl gMonBackPic_Poochyena
gMonBackPic_Poochyena:
  .incbin "build/graphics/pokemon/poochyena/back.4bpp.lz"

  .globl gMonShinyPalette_Poochyena
gMonShinyPalette_Poochyena:
  .incbin "build/graphics/pokemon/poochyena/shiny_palette.gbapal.lz"

  .globl gMonIcon_Poochyena
gMonIcon_Poochyena: @ 0x08CE4FFC [286]
  .incbin "build/graphics/pokemon/poochyena/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE53FC-0x08CE5853
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Poochyena
gMonFootprint_Poochyena:
	.incbin "build/graphics/pokemon/poochyena/footprint.1bpp"
	.globl gMonStillFrontPic_Mightyena
gMonStillFrontPic_Mightyena:
	.incbin "build/graphics/pokemon/mightyena/still_front.4bpp.lz"
  .globl gMonPalette_Mightyena
gMonPalette_Mightyena:
  .incbin "build/graphics/pokemon/mightyena/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mightyena
gMonBackPic_Mightyena:
  .incbin "build/graphics/pokemon/mightyena/back.4bpp.lz"

  .globl gMonShinyPalette_Mightyena
gMonShinyPalette_Mightyena:
  .incbin "build/graphics/pokemon/mightyena/shiny_palette.gbapal.lz"

  .globl gMonIcon_Mightyena
gMonIcon_Mightyena: @ 0x08CE5C1C [287]
  .incbin "build/graphics/pokemon/mightyena/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE601C-0x08CE640B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Mightyena
gMonFootprint_Mightyena:
	.incbin "build/graphics/pokemon/mightyena/footprint.1bpp"
	.globl gMonStillFrontPic_Zigzagoon
gMonStillFrontPic_Zigzagoon:
	.incbin "build/graphics/pokemon/zigzagoon/still_front.4bpp.lz"
  .globl gMonPalette_Zigzagoon
gMonPalette_Zigzagoon:
  .incbin "build/graphics/pokemon/zigzagoon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zigzagoon
gMonBackPic_Zigzagoon:
  .incbin "build/graphics/pokemon/zigzagoon/back.4bpp.lz"

  .globl gMonShinyPalette_Zigzagoon
gMonShinyPalette_Zigzagoon:
  .incbin "build/graphics/pokemon/zigzagoon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Zigzagoon
gMonIcon_Zigzagoon: @ 0x08CE679C [288]
  .incbin "build/graphics/pokemon/zigzagoon/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE6B9C-0x08CE6F2B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Zigzagoon
gMonFootprint_Zigzagoon:
	.incbin "build/graphics/pokemon/zigzagoon/footprint.1bpp"
	.globl gMonStillFrontPic_Linoone
gMonStillFrontPic_Linoone:
	.incbin "build/graphics/pokemon/linoone/still_front.4bpp.lz"
  .globl gMonPalette_Linoone
gMonPalette_Linoone:
  .incbin "build/graphics/pokemon/linoone/normal_palette.gbapal.lz"

  .globl gMonBackPic_Linoone
gMonBackPic_Linoone:
  .incbin "build/graphics/pokemon/linoone/back.4bpp.lz"

  .globl gMonShinyPalette_Linoone
gMonShinyPalette_Linoone:
  .incbin "build/graphics/pokemon/linoone/shiny_palette.gbapal.lz"

  .globl gMonIcon_Linoone
gMonIcon_Linoone: @ 0x08CE7250 [289]
  .incbin "build/graphics/pokemon/linoone/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE7650-0x08CE78F7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Linoone
gMonFootprint_Linoone:
	.incbin "build/graphics/pokemon/linoone/footprint.1bpp"
	.globl gMonStillFrontPic_Wurmple
gMonStillFrontPic_Wurmple:
	.incbin "build/graphics/pokemon/wurmple/still_front.4bpp.lz"
  .globl gMonPalette_Wurmple
gMonPalette_Wurmple:
  .incbin "build/graphics/pokemon/wurmple/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wurmple
gMonBackPic_Wurmple:
  .incbin "build/graphics/pokemon/wurmple/back.4bpp.lz"

  .globl gMonShinyPalette_Wurmple
gMonShinyPalette_Wurmple:
  .incbin "build/graphics/pokemon/wurmple/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wurmple
gMonIcon_Wurmple: @ 0x08CE7B94 [290]
  .incbin "build/graphics/pokemon/wurmple/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE7F94-0x08CE8233
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Wurmple
gMonFootprint_Wurmple:
	.incbin "build/graphics/pokemon/wurmple/footprint.1bpp"
	.globl gMonStillFrontPic_Silcoon
gMonStillFrontPic_Silcoon:
	.incbin "build/graphics/pokemon/silcoon/still_front.4bpp.lz"
  .globl gMonPalette_Silcoon
gMonPalette_Silcoon:
  .incbin "build/graphics/pokemon/silcoon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Silcoon
gMonBackPic_Silcoon:
  .incbin "build/graphics/pokemon/silcoon/back.4bpp.lz"

  .globl gMonShinyPalette_Silcoon
gMonShinyPalette_Silcoon:
  .incbin "build/graphics/pokemon/silcoon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Silcoon
gMonIcon_Silcoon: @ 0x08CE84A0 [291]
  .incbin "build/graphics/pokemon/silcoon/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE88A0-0x08CE8C17
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Silcoon
gMonFootprint_Silcoon:
	.incbin "build/graphics/pokemon/silcoon/footprint.1bpp"
	.globl gMonStillFrontPic_Beautifly
gMonStillFrontPic_Beautifly:
	.incbin "build/graphics/pokemon/beautifly/still_front.4bpp.lz"
  .globl gMonPalette_Beautifly
gMonPalette_Beautifly:
  .incbin "build/graphics/pokemon/beautifly/normal_palette.gbapal.lz"

  .globl gMonBackPic_Beautifly
gMonBackPic_Beautifly:
  .incbin "build/graphics/pokemon/beautifly/back.4bpp.lz"

  .globl gMonShinyPalette_Beautifly
gMonShinyPalette_Beautifly:
  .incbin "build/graphics/pokemon/beautifly/shiny_palette.gbapal.lz"

  .globl gMonIcon_Beautifly
gMonIcon_Beautifly: @ 0x08CE9018 [292]
  .incbin "build/graphics/pokemon/beautifly/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE9418-0x08CE96A3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Beautifly
gMonFootprint_Beautifly:
	.incbin "build/graphics/pokemon/beautifly/footprint.1bpp"
	.globl gMonStillFrontPic_Cascoon
gMonStillFrontPic_Cascoon:
	.incbin "build/graphics/pokemon/cascoon/still_front.4bpp.lz"
  .globl gMonPalette_Cascoon
gMonPalette_Cascoon:
  .incbin "build/graphics/pokemon/cascoon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cascoon
gMonBackPic_Cascoon:
  .incbin "build/graphics/pokemon/cascoon/back.4bpp.lz"

  .globl gMonShinyPalette_Cascoon
gMonShinyPalette_Cascoon:
  .incbin "build/graphics/pokemon/cascoon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Cascoon
gMonIcon_Cascoon: @ 0x08CE9904 [293]
  .incbin "build/graphics/pokemon/cascoon/icon.4bpp"
	@ analyzed canonical ROM range 0x08CE9D04-0x08CEA08B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Cascoon
gMonFootprint_Cascoon:
	.incbin "build/graphics/pokemon/cascoon/footprint.1bpp"
	.globl gMonStillFrontPic_Dustox
gMonStillFrontPic_Dustox:
	.incbin "build/graphics/pokemon/dustox/still_front.4bpp.lz"
  .globl gMonPalette_Dustox
gMonPalette_Dustox:
  .incbin "build/graphics/pokemon/dustox/normal_palette.gbapal.lz"

  .globl gMonBackPic_Dustox
gMonBackPic_Dustox:
  .incbin "build/graphics/pokemon/dustox/back.4bpp.lz"

  .globl gMonShinyPalette_Dustox
gMonShinyPalette_Dustox:
  .incbin "build/graphics/pokemon/dustox/shiny_palette.gbapal.lz"

  .globl gMonIcon_Dustox
gMonIcon_Dustox: @ 0x08CEA334 [294]
  .incbin "build/graphics/pokemon/dustox/icon.4bpp"
	@ analyzed canonical ROM range 0x08CEA734-0x08CEA9B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Dustox
gMonFootprint_Dustox:
	.incbin "build/graphics/pokemon/dustox/footprint.1bpp"
	.globl gMonStillFrontPic_Lotad
gMonStillFrontPic_Lotad:
	.incbin "build/graphics/pokemon/lotad/still_front.4bpp.lz"
  .globl gMonPalette_Lotad
gMonPalette_Lotad:
  .incbin "build/graphics/pokemon/lotad/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lotad
gMonBackPic_Lotad:
  .incbin "build/graphics/pokemon/lotad/back.4bpp.lz"

  .globl gMonShinyPalette_Lotad
gMonShinyPalette_Lotad:
  .incbin "build/graphics/pokemon/lotad/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lotad
gMonIcon_Lotad: @ 0x08CEACEC [295]
  .incbin "build/graphics/pokemon/lotad/icon.4bpp"
	@ analyzed canonical ROM range 0x08CEB0EC-0x08CEB423
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Lotad
gMonFootprint_Lotad:
	.incbin "build/graphics/pokemon/lotad/footprint.1bpp"
	.globl gMonStillFrontPic_Lombre
gMonStillFrontPic_Lombre:
	.incbin "build/graphics/pokemon/lombre/still_front.4bpp.lz"
  .globl gMonPalette_Lombre
gMonPalette_Lombre:
  .incbin "build/graphics/pokemon/lombre/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lombre
gMonBackPic_Lombre:
  .incbin "build/graphics/pokemon/lombre/back.4bpp.lz"

  .globl gMonShinyPalette_Lombre
gMonShinyPalette_Lombre:
  .incbin "build/graphics/pokemon/lombre/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lombre
gMonIcon_Lombre: @ 0x08CEB770 [296]
  .incbin "build/graphics/pokemon/lombre/icon.4bpp"
	@ analyzed canonical ROM range 0x08CEBB70-0x08CEC073
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Lombre
gMonFootprint_Lombre:
	.incbin "build/graphics/pokemon/lombre/footprint.1bpp"
	.globl gMonStillFrontPic_Ludicolo
gMonStillFrontPic_Ludicolo:
	.incbin "build/graphics/pokemon/ludicolo/still_front.4bpp.lz"
  .globl gMonPalette_Ludicolo
gMonPalette_Ludicolo:
  .incbin "build/graphics/pokemon/ludicolo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ludicolo
gMonBackPic_Ludicolo:
  .incbin "build/graphics/pokemon/ludicolo/back.4bpp.lz"

  .globl gMonShinyPalette_Ludicolo
gMonShinyPalette_Ludicolo:
  .incbin "build/graphics/pokemon/ludicolo/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 9

  .globl gMonIcon_Ludicolo
gMonIcon_Ludicolo: @ 0x08CEC3C0 [297]
  .incbin "build/graphics/pokemon/ludicolo/icon.4bpp"
	@ analyzed canonical ROM range 0x08CEC7C0-0x08CECA73
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ludicolo
gMonFootprint_Ludicolo:
	.incbin "build/graphics/pokemon/ludicolo/footprint.1bpp"
	.globl gMonStillFrontPic_Seedot
gMonStillFrontPic_Seedot:
	.incbin "build/graphics/pokemon/seedot/still_front.4bpp.lz"
  .globl gMonPalette_Seedot
gMonPalette_Seedot:
  .incbin "build/graphics/pokemon/seedot/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Seedot
gMonBackPic_Seedot:
  .incbin "build/graphics/pokemon/seedot/back.4bpp.lz"

  .globl gMonShinyPalette_Seedot
gMonShinyPalette_Seedot:
  .incbin "build/graphics/pokemon/seedot/shiny_palette.gbapal.lz"
  .space 0x2, 0x00

	.globl gMonIcon_Seedot
gMonIcon_Seedot: @ 0x08CECDA4 [298]
  .incbin "build/graphics/pokemon/seedot/icon.4bpp"
	@ analyzed canonical ROM range 0x08CED1A4-0x08CED4AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Seedot
gMonFootprint_Seedot:
	.incbin "build/graphics/pokemon/seedot/footprint.1bpp"
	.globl gMonStillFrontPic_Nuzleaf
gMonStillFrontPic_Nuzleaf:
	.incbin "build/graphics/pokemon/nuzleaf/still_front.4bpp.lz"
  .globl gMonPalette_Nuzleaf
gMonPalette_Nuzleaf:
  .incbin "build/graphics/pokemon/nuzleaf/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nuzleaf
gMonBackPic_Nuzleaf:
  .incbin "build/graphics/pokemon/nuzleaf/back.4bpp.lz"

  .globl gMonShinyPalette_Nuzleaf
gMonShinyPalette_Nuzleaf:
  .incbin "build/graphics/pokemon/nuzleaf/shiny_palette.gbapal.lz"

  .globl gMonIcon_Nuzleaf
gMonIcon_Nuzleaf: @ 0x08CED7C8 [299]
  .incbin "build/graphics/pokemon/nuzleaf/icon.4bpp"
	@ analyzed canonical ROM range 0x08CEDBC8-0x08CEE0A3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Nuzleaf
gMonFootprint_Nuzleaf:
	.incbin "build/graphics/pokemon/nuzleaf/footprint.1bpp"
	.globl gMonStillFrontPic_Shiftry
gMonStillFrontPic_Shiftry:
	.incbin "build/graphics/pokemon/shiftry/still_front.4bpp.lz"
  .globl gMonPalette_Shiftry
gMonPalette_Shiftry:
  .incbin "build/graphics/pokemon/shiftry/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shiftry
gMonBackPic_Shiftry:
  .incbin "build/graphics/pokemon/shiftry/back.4bpp.lz"

  .globl gMonShinyPalette_Shiftry
gMonShinyPalette_Shiftry:
  .incbin "build/graphics/pokemon/shiftry/shiny_palette.gbapal.lz"

  .globl gMonIcon_Shiftry
gMonIcon_Shiftry: @ 0x08CEE3B8 [300]
  .incbin "build/graphics/pokemon/shiftry/icon.4bpp"
	@ analyzed canonical ROM range 0x08CEE7B8-0x08CEEA77
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Shiftry
gMonFootprint_Shiftry:
	.incbin "build/graphics/pokemon/shiftry/footprint.1bpp"
	.globl gMonStillFrontPic_Nincada
gMonStillFrontPic_Nincada:
	.incbin "build/graphics/pokemon/nincada/still_front.4bpp.lz"
  .globl gMonPalette_Nincada
gMonPalette_Nincada:
  .incbin "build/graphics/pokemon/nincada/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nincada
gMonBackPic_Nincada:
  .incbin "build/graphics/pokemon/nincada/back.4bpp.lz"

  .globl gMonShinyPalette_Nincada
gMonShinyPalette_Nincada:
  .incbin "build/graphics/pokemon/nincada/shiny_palette.gbapal.lz"

  .globl gMonIcon_Nincada
gMonIcon_Nincada: @ 0x08CEED80 [301]
  .incbin "build/graphics/pokemon/nincada/icon.4bpp"
	@ analyzed canonical ROM range 0x08CEF180-0x08CEF50F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Nincada
gMonFootprint_Nincada:
	.incbin "build/graphics/pokemon/nincada/footprint.1bpp"
	.globl gMonStillFrontPic_Ninjask
gMonStillFrontPic_Ninjask:
	.incbin "build/graphics/pokemon/ninjask/still_front.4bpp.lz"
  .globl gMonPalette_Ninjask
gMonPalette_Ninjask:
  .incbin "build/graphics/pokemon/ninjask/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ninjask
gMonBackPic_Ninjask:
  .incbin "build/graphics/pokemon/ninjask/back.4bpp.lz"

  .globl gMonShinyPalette_Ninjask
gMonShinyPalette_Ninjask:
  .incbin "build/graphics/pokemon/ninjask/shiny_palette.gbapal.lz"

  .globl gMonIcon_Ninjask
gMonIcon_Ninjask: @ 0x08CEF92C [302]
  .incbin "build/graphics/pokemon/ninjask/icon.4bpp"
	@ analyzed canonical ROM range 0x08CEFD2C-0x08CF006B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ninjask
gMonFootprint_Ninjask:
	.incbin "build/graphics/pokemon/ninjask/footprint.1bpp"
	.globl gMonStillFrontPic_Shedinja
gMonStillFrontPic_Shedinja:
	.incbin "build/graphics/pokemon/shedinja/still_front.4bpp.lz"
  .globl gMonPalette_Shedinja
gMonPalette_Shedinja:
  .incbin "build/graphics/pokemon/shedinja/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Shedinja
gMonBackPic_Shedinja:
  .incbin "build/graphics/pokemon/shedinja/back.4bpp.lz"

  .globl gMonShinyPalette_Shedinja
gMonShinyPalette_Shedinja:
  .incbin "build/graphics/pokemon/shedinja/shiny_palette.gbapal.lz"

  .globl gMonIcon_Shedinja
gMonIcon_Shedinja: @ 0x08CF045C [303]
  .incbin "build/graphics/pokemon/shedinja/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF085C-0x08CF0AD3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Shedinja
gMonFootprint_Shedinja:
	.incbin "build/graphics/pokemon/shedinja/footprint.1bpp"
	.globl gMonStillFrontPic_Taillow
gMonStillFrontPic_Taillow:
	.incbin "build/graphics/pokemon/taillow/still_front.4bpp.lz"
  .globl gMonPalette_Taillow
gMonPalette_Taillow:
  .incbin "build/graphics/pokemon/taillow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Taillow
gMonBackPic_Taillow:
  .incbin "build/graphics/pokemon/taillow/back.4bpp.lz"

  .globl gMonShinyPalette_Taillow
gMonShinyPalette_Taillow:
  .incbin "build/graphics/pokemon/taillow/shiny_palette.gbapal.lz"

  .globl gMonIcon_Taillow
gMonIcon_Taillow: @ 0x08CF0D44 [304]
  .incbin "build/graphics/pokemon/taillow/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF1144-0x08CF1527
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Taillow
gMonFootprint_Taillow:
	.incbin "build/graphics/pokemon/taillow/footprint.1bpp"
	.globl gMonStillFrontPic_Swellow
gMonStillFrontPic_Swellow:
	.incbin "build/graphics/pokemon/swellow/still_front.4bpp.lz"
  .globl gMonPalette_Swellow
gMonPalette_Swellow:
  .incbin "build/graphics/pokemon/swellow/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swellow
gMonBackPic_Swellow:
  .incbin "build/graphics/pokemon/swellow/back.4bpp.lz"

  .globl gMonShinyPalette_Swellow
gMonShinyPalette_Swellow:
  .incbin "build/graphics/pokemon/swellow/shiny_palette.gbapal.lz"

  .globl gMonIcon_Swellow
gMonIcon_Swellow: @ 0x08CF18B0 [305]
  .incbin "build/graphics/pokemon/swellow/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF1CB0-0x08CF1F37
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Swellow
gMonFootprint_Swellow:
	.incbin "build/graphics/pokemon/swellow/footprint.1bpp"
	.globl gMonStillFrontPic_Shroomish
gMonStillFrontPic_Shroomish:
	.incbin "build/graphics/pokemon/shroomish/still_front.4bpp.lz"
  .globl gMonPalette_Shroomish
gMonPalette_Shroomish:
  .incbin "build/graphics/pokemon/shroomish/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shroomish
gMonBackPic_Shroomish:
  .incbin "build/graphics/pokemon/shroomish/back.4bpp.lz"

  .globl gMonShinyPalette_Shroomish
gMonShinyPalette_Shroomish:
  .incbin "build/graphics/pokemon/shroomish/shiny_palette.gbapal.lz"

  .globl gMonIcon_Shroomish
gMonIcon_Shroomish: @ 0x08CF2268 [306]
  .incbin "build/graphics/pokemon/shroomish/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF2668-0x08CF2A6F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Shroomish
gMonFootprint_Shroomish:
	.incbin "build/graphics/pokemon/shroomish/footprint.1bpp"
	.globl gMonStillFrontPic_Breloom
gMonStillFrontPic_Breloom:
	.incbin "build/graphics/pokemon/breloom/still_front.4bpp.lz"
  .globl gMonPalette_Breloom
gMonPalette_Breloom:
  .incbin "build/graphics/pokemon/breloom/normal_palette.gbapal.lz"

  .globl gMonBackPic_Breloom
gMonBackPic_Breloom:
  .incbin "build/graphics/pokemon/breloom/back.4bpp.lz"

  .globl gMonShinyPalette_Breloom
gMonShinyPalette_Breloom:
  .incbin "build/graphics/pokemon/breloom/shiny_palette.gbapal.lz"

  .globl gMonIcon_Breloom
gMonIcon_Breloom: @ 0x08CF2EA0 [307]
  .incbin "build/graphics/pokemon/breloom/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF32A0-0x08CF35B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Breloom
gMonFootprint_Breloom:
	.incbin "build/graphics/pokemon/breloom/footprint.1bpp"
	.globl gMonStillFrontPic_Spinda
gMonStillFrontPic_Spinda:
	.incbin "build/graphics/pokemon/spinda/still_front.4bpp.lz"
  .globl gMonPalette_Spinda
gMonPalette_Spinda:
  .incbin "build/graphics/pokemon/spinda/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spinda
gMonBackPic_Spinda:
  .incbin "build/graphics/pokemon/spinda/back.4bpp.lz"

  .globl gMonShinyPalette_Spinda
gMonShinyPalette_Spinda:
  .incbin "build/graphics/pokemon/spinda/shiny_palette.gbapal.lz"

  .globl gMonIcon_Spinda
gMonIcon_Spinda: @ 0x08CF3940 [308]
  .incbin "build/graphics/pokemon/spinda/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF3D40-0x08CF3F9B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Spinda
gMonFootprint_Spinda:
	.incbin "build/graphics/pokemon/spinda/footprint.1bpp"
	.globl gMonStillFrontPic_Wingull
gMonStillFrontPic_Wingull:
	.incbin "build/graphics/pokemon/wingull/still_front.4bpp.lz"
  .globl gMonPalette_Wingull
gMonPalette_Wingull:
  .incbin "build/graphics/pokemon/wingull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wingull
gMonBackPic_Wingull:
  .incbin "build/graphics/pokemon/wingull/back.4bpp.lz"

  .globl gMonShinyPalette_Wingull
gMonShinyPalette_Wingull:
  .incbin "build/graphics/pokemon/wingull/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wingull
gMonIcon_Wingull: @ 0x08CF433C [309]
  .incbin "build/graphics/pokemon/wingull/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF473C-0x08CF4AF3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Wingull
gMonFootprint_Wingull:
	.incbin "build/graphics/pokemon/wingull/footprint.1bpp"
	.globl gMonStillFrontPic_Pelipper
gMonStillFrontPic_Pelipper:
	.incbin "build/graphics/pokemon/pelipper/still_front.4bpp.lz"
  .globl gMonPalette_Pelipper
gMonPalette_Pelipper:
  .incbin "build/graphics/pokemon/pelipper/normal_palette.gbapal.lz"

  .globl gMonBackPic_Pelipper
gMonBackPic_Pelipper:
  .incbin "build/graphics/pokemon/pelipper/back.4bpp.lz"

  .globl gMonShinyPalette_Pelipper
gMonShinyPalette_Pelipper:
  .incbin "build/graphics/pokemon/pelipper/shiny_palette.gbapal.lz"

  .globl gMonIcon_Pelipper
gMonIcon_Pelipper: @ 0x08CF4EC4 [310]
  .incbin "build/graphics/pokemon/pelipper/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF52C4-0x08CF54EF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Pelipper
gMonFootprint_Pelipper:
	.incbin "build/graphics/pokemon/pelipper/footprint.1bpp"
	.globl gMonStillFrontPic_Surskit
gMonStillFrontPic_Surskit:
	.incbin "build/graphics/pokemon/surskit/still_front.4bpp.lz"
  .globl gMonPalette_Surskit
gMonPalette_Surskit:
  .incbin "build/graphics/pokemon/surskit/normal_palette.gbapal.lz"

  .globl gMonBackPic_Surskit
gMonBackPic_Surskit:
  .incbin "build/graphics/pokemon/surskit/back.4bpp.lz"

  .globl gMonShinyPalette_Surskit
gMonShinyPalette_Surskit:
  .incbin "build/graphics/pokemon/surskit/shiny_palette.gbapal.lz"

  .globl gMonIcon_Surskit
gMonIcon_Surskit: @ 0x08CF5778 [311]
  .incbin "build/graphics/pokemon/surskit/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF5B78-0x08CF5F33
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Surskit
gMonFootprint_Surskit:
	.incbin "build/graphics/pokemon/surskit/footprint.1bpp"
	.globl gMonStillFrontPic_Masquerain
gMonStillFrontPic_Masquerain:
	.incbin "build/graphics/pokemon/masquerain/still_front.4bpp.lz"
  .globl gMonPalette_Masquerain
gMonPalette_Masquerain:
  .incbin "build/graphics/pokemon/masquerain/normal_palette.gbapal.lz"

  .globl gMonBackPic_Masquerain
gMonBackPic_Masquerain:
  .incbin "build/graphics/pokemon/masquerain/back.4bpp.lz"

  .globl gMonShinyPalette_Masquerain
gMonShinyPalette_Masquerain:
  .incbin "build/graphics/pokemon/masquerain/shiny_palette.gbapal.lz"

  .globl gMonIcon_Masquerain
gMonIcon_Masquerain: @ 0x08CF62DC [312]
  .incbin "build/graphics/pokemon/masquerain/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF66DC-0x08CF69DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Masquerain
gMonFootprint_Masquerain:
	.incbin "build/graphics/pokemon/masquerain/footprint.1bpp"
	.globl gMonStillFrontPic_Wailmer
gMonStillFrontPic_Wailmer:
	.incbin "build/graphics/pokemon/wailmer/still_front.4bpp.lz"
  .globl gMonPalette_Wailmer
gMonPalette_Wailmer:
  .incbin "build/graphics/pokemon/wailmer/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wailmer
gMonBackPic_Wailmer:
  .incbin "build/graphics/pokemon/wailmer/back.4bpp.lz"

  .globl gMonShinyPalette_Wailmer
gMonShinyPalette_Wailmer:
  .incbin "build/graphics/pokemon/wailmer/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wailmer
gMonIcon_Wailmer: @ 0x08CF6C10 [313]
  .incbin "build/graphics/pokemon/wailmer/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF7010-0x08CF73F3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Wailmer
gMonFootprint_Wailmer:
	.incbin "build/graphics/pokemon/wailmer/footprint.1bpp"
	.globl gMonStillFrontPic_Wailord
gMonStillFrontPic_Wailord:
	.incbin "build/graphics/pokemon/wailord/still_front.4bpp.lz"
  .globl gMonPalette_Wailord
gMonPalette_Wailord:
  .incbin "build/graphics/pokemon/wailord/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wailord
gMonBackPic_Wailord:
  .incbin "build/graphics/pokemon/wailord/back.4bpp.lz"

  .globl gMonShinyPalette_Wailord
gMonShinyPalette_Wailord:
  .incbin "build/graphics/pokemon/wailord/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wailord
gMonIcon_Wailord: @ 0x08CF765C [314]
  .incbin "build/graphics/pokemon/wailord/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF7A5C-0x08CF7D7B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Wailord
gMonFootprint_Wailord:
	.incbin "build/graphics/pokemon/wailord/footprint.1bpp"
	.globl gMonStillFrontPic_Skitty
gMonStillFrontPic_Skitty:
	.incbin "build/graphics/pokemon/skitty/still_front.4bpp.lz"
  .globl gMonPalette_Skitty
gMonPalette_Skitty:
  .incbin "build/graphics/pokemon/skitty/normal_palette.gbapal.lz"

  .globl gMonBackPic_Skitty
gMonBackPic_Skitty:
  .incbin "build/graphics/pokemon/skitty/back.4bpp.lz"

  .globl gMonShinyPalette_Skitty
gMonShinyPalette_Skitty:
  .incbin "build/graphics/pokemon/skitty/shiny_palette.gbapal.lz"

  .globl gMonIcon_Skitty
gMonIcon_Skitty: @ 0x08CF8114 [315]
  .incbin "build/graphics/pokemon/skitty/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF8514-0x08CF88BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Skitty
gMonFootprint_Skitty:
	.incbin "build/graphics/pokemon/skitty/footprint.1bpp"
	.globl gMonStillFrontPic_Delcatty
gMonStillFrontPic_Delcatty:
	.incbin "build/graphics/pokemon/delcatty/still_front.4bpp.lz"
  .globl gMonPalette_Delcatty
gMonPalette_Delcatty:
  .incbin "build/graphics/pokemon/delcatty/normal_palette.gbapal.lz"

  .globl gMonBackPic_Delcatty
gMonBackPic_Delcatty:
  .incbin "build/graphics/pokemon/delcatty/back.4bpp.lz"

  .globl gMonShinyPalette_Delcatty
gMonShinyPalette_Delcatty:
  .incbin "build/graphics/pokemon/delcatty/shiny_palette.gbapal.lz"

  .globl gMonIcon_Delcatty
gMonIcon_Delcatty: @ 0x08CF8CAC [316]
  .incbin "build/graphics/pokemon/delcatty/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF90AC-0x08CF944B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Delcatty
gMonFootprint_Delcatty:
	.incbin "build/graphics/pokemon/delcatty/footprint.1bpp"
	.globl gMonStillFrontPic_Kecleon
gMonStillFrontPic_Kecleon:
	.incbin "build/graphics/pokemon/kecleon/still_front.4bpp.lz"
  .globl gMonPalette_Kecleon
gMonPalette_Kecleon:
  .incbin "build/graphics/pokemon/kecleon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kecleon
gMonBackPic_Kecleon:
  .incbin "build/graphics/pokemon/kecleon/back.4bpp.lz"

  .globl gMonShinyPalette_Kecleon
gMonShinyPalette_Kecleon:
  .incbin "build/graphics/pokemon/kecleon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Kecleon
gMonIcon_Kecleon: @ 0x08CF9874 [317]
  .incbin "build/graphics/pokemon/kecleon/icon.4bpp"
	@ analyzed canonical ROM range 0x08CF9C74-0x08CF9EB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kecleon
gMonFootprint_Kecleon:
	.incbin "build/graphics/pokemon/kecleon/footprint.1bpp"
	.globl gMonStillFrontPic_Baltoy
gMonStillFrontPic_Baltoy:
	.incbin "build/graphics/pokemon/baltoy/still_front.4bpp.lz"
  .globl gMonPalette_Baltoy
gMonPalette_Baltoy:
  .incbin "build/graphics/pokemon/baltoy/normal_palette.gbapal.lz"
  .space 0x1, 0x00

  .globl gMonBackPic_Baltoy
gMonBackPic_Baltoy:
  .incbin "build/graphics/pokemon/baltoy/back.4bpp.lz"

  .globl gMonShinyPalette_Baltoy
gMonShinyPalette_Baltoy:
  .incbin "build/graphics/pokemon/baltoy/shiny_palette.gbapal.lz"

  .space 0x1, 0x00
	.globl gMonIcon_Baltoy
gMonIcon_Baltoy: @ 0x08CFA1A0 [318]
  .incbin "build/graphics/pokemon/baltoy/icon.4bpp"
	@ analyzed canonical ROM range 0x08CFA5A0-0x08CFA977
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Baltoy
gMonFootprint_Baltoy:
	.incbin "build/graphics/pokemon/baltoy/footprint.1bpp"
	.globl gMonStillFrontPic_Claydol
gMonStillFrontPic_Claydol:
	.incbin "build/graphics/pokemon/claydol/still_front.4bpp.lz"
  .globl gMonPalette_Claydol
gMonPalette_Claydol:
  .incbin "build/graphics/pokemon/claydol/normal_palette.gbapal.lz"

  .globl gMonBackPic_Claydol
gMonBackPic_Claydol:
  .incbin "build/graphics/pokemon/claydol/back.4bpp.lz"

  .globl gMonShinyPalette_Claydol
gMonShinyPalette_Claydol:
  .incbin "build/graphics/pokemon/claydol/shiny_palette.gbapal.lz"

  .globl gMonIcon_Claydol
gMonIcon_Claydol: @ 0x08CFAD9C [319]
  .incbin "build/graphics/pokemon/claydol/icon.4bpp"
	@ analyzed canonical ROM range 0x08CFB19C-0x08CFB487
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Claydol
gMonFootprint_Claydol:
	.incbin "build/graphics/pokemon/claydol/footprint.1bpp"
	.globl gMonStillFrontPic_Nosepass
gMonStillFrontPic_Nosepass:
	.incbin "build/graphics/pokemon/nosepass/still_front.4bpp.lz"
  .globl gMonPalette_Nosepass
gMonPalette_Nosepass:
  .incbin "build/graphics/pokemon/nosepass/normal_palette.gbapal.lz"

  .globl gMonBackPic_Nosepass
gMonBackPic_Nosepass:
  .incbin "build/graphics/pokemon/nosepass/back.4bpp.lz"

  .globl gMonShinyPalette_Nosepass
gMonShinyPalette_Nosepass:
  .incbin "build/graphics/pokemon/nosepass/shiny_palette.gbapal.lz"

  .globl gMonIcon_Nosepass
gMonIcon_Nosepass: @ 0x08CFB778 [320]
  .incbin "build/graphics/pokemon/nosepass/icon.4bpp"
	@ analyzed canonical ROM range 0x08CFBB78-0x08CFC043
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Nosepass
gMonFootprint_Nosepass:
	.incbin "build/graphics/pokemon/nosepass/footprint.1bpp"
	.globl gMonStillFrontPic_Torkoal
gMonStillFrontPic_Torkoal:
	.incbin "build/graphics/pokemon/torkoal/still_front.4bpp.lz"
  .globl gMonPalette_Torkoal
gMonPalette_Torkoal:
  .incbin "build/graphics/pokemon/torkoal/normal_palette.gbapal.lz"

  .globl gMonBackPic_Torkoal
gMonBackPic_Torkoal:
  .incbin "build/graphics/pokemon/torkoal/back.4bpp.lz"

  .globl gMonShinyPalette_Torkoal
gMonShinyPalette_Torkoal:
  .incbin "build/graphics/pokemon/torkoal/shiny_palette.gbapal.lz"

  .globl gMonIcon_Torkoal
gMonIcon_Torkoal: @ 0x08CFC35C [321]
  .incbin "build/graphics/pokemon/torkoal/icon.4bpp"
	@ analyzed canonical ROM range 0x08CFC75C-0x08CFCA4F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Torkoal
gMonFootprint_Torkoal:
	.incbin "build/graphics/pokemon/torkoal/footprint.1bpp"
	.globl gMonStillFrontPic_Sableye
gMonStillFrontPic_Sableye:
	.incbin "build/graphics/pokemon/sableye/still_front.4bpp.lz"
  .globl gMonPalette_Sableye
gMonPalette_Sableye:
  .incbin "build/graphics/pokemon/sableye/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sableye
gMonBackPic_Sableye:
  .incbin "build/graphics/pokemon/sableye/back.4bpp.lz"

  .globl gMonShinyPalette_Sableye
gMonShinyPalette_Sableye:
  .incbin "build/graphics/pokemon/sableye/shiny_palette.gbapal.lz"

  .globl gMonIcon_Sableye
gMonIcon_Sableye: @ 0x08CFCDC8 [322]
  .incbin "build/graphics/pokemon/sableye/icon.4bpp"
	@ analyzed canonical ROM range 0x08CFD1C8-0x08CFD477
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sableye
gMonFootprint_Sableye:
	.incbin "build/graphics/pokemon/sableye/footprint.1bpp"
	.globl gMonStillFrontPic_Barboach
gMonStillFrontPic_Barboach:
	.incbin "build/graphics/pokemon/barboach/still_front.4bpp.lz"
  .globl gMonPalette_Barboach
gMonPalette_Barboach:
  .incbin "build/graphics/pokemon/barboach/normal_palette.gbapal.lz"

  .globl gMonBackPic_Barboach
gMonBackPic_Barboach:
  .incbin "build/graphics/pokemon/barboach/back.4bpp.lz"

  .globl gMonShinyPalette_Barboach
gMonShinyPalette_Barboach:
  .incbin "build/graphics/pokemon/barboach/shiny_palette.gbapal.lz"

  .globl gMonIcon_Barboach
gMonIcon_Barboach: @ 0x08CFD758 [323]
  .incbin "build/graphics/pokemon/barboach/icon.4bpp"
	@ analyzed canonical ROM range 0x08CFDB58-0x08CFDEEF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Barboach
gMonFootprint_Barboach:
	.incbin "build/graphics/pokemon/barboach/footprint.1bpp"
	.globl gMonStillFrontPic_Whiscash
gMonStillFrontPic_Whiscash:
	.incbin "build/graphics/pokemon/whiscash/still_front.4bpp.lz"
  .globl gMonPalette_Whiscash
gMonPalette_Whiscash:
  .incbin "build/graphics/pokemon/whiscash/normal_palette.gbapal.lz"

  .globl gMonBackPic_Whiscash
gMonBackPic_Whiscash:
  .incbin "build/graphics/pokemon/whiscash/back.4bpp.lz"

  .globl gMonShinyPalette_Whiscash
gMonShinyPalette_Whiscash:
  .incbin "build/graphics/pokemon/whiscash/shiny_palette.gbapal.lz"

  .globl gMonIcon_Whiscash
gMonIcon_Whiscash: @ 0x08CFE28C [324]
  .incbin "build/graphics/pokemon/whiscash/icon.4bpp"
	@ analyzed canonical ROM range 0x08CFE68C-0x08CFE86B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Whiscash
gMonFootprint_Whiscash:
	.incbin "build/graphics/pokemon/whiscash/footprint.1bpp"
	.globl gMonStillFrontPic_Luvdisc
gMonStillFrontPic_Luvdisc:
	.incbin "build/graphics/pokemon/luvdisc/still_front.4bpp.lz"
  .globl gMonPalette_Luvdisc
gMonPalette_Luvdisc:
  .incbin "build/graphics/pokemon/luvdisc/normal_palette.gbapal.lz"

  .globl gMonBackPic_Luvdisc
gMonBackPic_Luvdisc:
  .incbin "build/graphics/pokemon/luvdisc/back.4bpp.lz"

  .globl gMonShinyPalette_Luvdisc
gMonShinyPalette_Luvdisc:
  .incbin "build/graphics/pokemon/luvdisc/shiny_palette.gbapal.lz"

	.globl gMonIcon_Luvdisc
gMonIcon_Luvdisc: @ 0x08CFEA88 [325]
  .incbin "build/graphics/pokemon/luvdisc/icon.4bpp"
	@ analyzed canonical ROM range 0x08CFEE88-0x08CFF203
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Luvdisc
gMonFootprint_Luvdisc:
	.incbin "build/graphics/pokemon/luvdisc/footprint.1bpp"
	.globl gMonStillFrontPic_Corphish
gMonStillFrontPic_Corphish:
	.incbin "build/graphics/pokemon/corphish/still_front.4bpp.lz"
  .globl gMonPalette_Corphish
gMonPalette_Corphish:
  .incbin "build/graphics/pokemon/corphish/normal_palette.gbapal.lz"

  .globl gMonBackPic_Corphish
gMonBackPic_Corphish:
  .incbin "build/graphics/pokemon/corphish/back.4bpp.lz"

  .globl gMonShinyPalette_Corphish
gMonShinyPalette_Corphish:
  .incbin "build/graphics/pokemon/corphish/shiny_palette.gbapal.lz"

  .globl gMonIcon_Corphish
gMonIcon_Corphish: @ 0x08CFF570 [326]
  .incbin "build/graphics/pokemon/corphish/icon.4bpp"
	@ analyzed canonical ROM range 0x08CFF970-0x08CFFE1F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Corphish
gMonFootprint_Corphish:
	.incbin "build/graphics/pokemon/corphish/footprint.1bpp"
	.globl gMonStillFrontPic_Crawdaunt
gMonStillFrontPic_Crawdaunt:
	.incbin "build/graphics/pokemon/crawdaunt/still_front.4bpp.lz"
  .globl gMonPalette_Crawdaunt
gMonPalette_Crawdaunt:
  .incbin "build/graphics/pokemon/crawdaunt/normal_palette.gbapal.lz"

  .globl gMonBackPic_Crawdaunt
gMonBackPic_Crawdaunt:
  .incbin "build/graphics/pokemon/crawdaunt/back.4bpp.lz"

  .globl gMonShinyPalette_Crawdaunt
gMonShinyPalette_Crawdaunt:
  .incbin "build/graphics/pokemon/crawdaunt/shiny_palette.gbapal.lz"

  .globl gMonIcon_Crawdaunt
gMonIcon_Crawdaunt: @ 0x08D00254 [327]
  .incbin "build/graphics/pokemon/crawdaunt/icon.4bpp"
	@ analyzed canonical ROM range 0x08D00654-0x08D008FF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Crawdaunt
gMonFootprint_Crawdaunt:
	.incbin "build/graphics/pokemon/crawdaunt/footprint.1bpp"
	.globl gMonStillFrontPic_Feebas
gMonStillFrontPic_Feebas:
	.incbin "build/graphics/pokemon/feebas/still_front.4bpp.lz"
  .globl gMonPalette_Feebas
gMonPalette_Feebas:
  .incbin "build/graphics/pokemon/feebas/normal_palette.gbapal.lz"

  .globl gMonBackPic_Feebas
gMonBackPic_Feebas:
  .incbin "build/graphics/pokemon/feebas/back.4bpp.lz"

  .globl gMonShinyPalette_Feebas
gMonShinyPalette_Feebas:
  .incbin "build/graphics/pokemon/feebas/shiny_palette.gbapal.lz"

  .globl gMonIcon_Feebas
gMonIcon_Feebas: @ 0x08D00C88 [328]
  .incbin "build/graphics/pokemon/feebas/icon.4bpp"
	@ analyzed canonical ROM range 0x08D01088-0x08D01537
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Feebas
gMonFootprint_Feebas:
	.incbin "build/graphics/pokemon/feebas/footprint.1bpp"
	.globl gMonStillFrontPic_Milotic
gMonStillFrontPic_Milotic:
	.incbin "build/graphics/pokemon/milotic/still_front.4bpp.lz"
  .globl gMonPalette_Milotic
gMonPalette_Milotic:
  .incbin "build/graphics/pokemon/milotic/normal_palette.gbapal.lz"

  .globl gMonBackPic_Milotic
gMonBackPic_Milotic:
  .incbin "build/graphics/pokemon/milotic/back.4bpp.lz"

  .globl gMonShinyPalette_Milotic
gMonShinyPalette_Milotic:
  .incbin "build/graphics/pokemon/milotic/shiny_palette.gbapal.lz"

  .globl gMonIcon_Milotic
gMonIcon_Milotic: @ 0x08D0187C [329]
  .incbin "build/graphics/pokemon/milotic/icon.4bpp"
	@ analyzed canonical ROM range 0x08D01C7C-0x08D01FC7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Milotic
gMonFootprint_Milotic:
	.incbin "build/graphics/pokemon/milotic/footprint.1bpp"
	.globl gMonStillFrontPic_Carvanha
gMonStillFrontPic_Carvanha:
	.incbin "build/graphics/pokemon/carvanha/still_front.4bpp.lz"
  .globl gMonPalette_Carvanha
gMonPalette_Carvanha:
  .incbin "build/graphics/pokemon/carvanha/normal_palette.gbapal.lz"

  .globl gMonBackPic_Carvanha
gMonBackPic_Carvanha:
  .incbin "build/graphics/pokemon/carvanha/back.4bpp.lz"

  .globl gMonShinyPalette_Carvanha
gMonShinyPalette_Carvanha:
  .incbin "build/graphics/pokemon/carvanha/shiny_palette.gbapal.lz"

  .globl gMonIcon_Carvanha
gMonIcon_Carvanha: @ 0x08D02328 [330]
  .incbin "build/graphics/pokemon/carvanha/icon.4bpp"
	@ analyzed canonical ROM range 0x08D02728-0x08D02AD7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Carvanha
gMonFootprint_Carvanha:
	.incbin "build/graphics/pokemon/carvanha/footprint.1bpp"
	.globl gMonStillFrontPic_Sharpedo
gMonStillFrontPic_Sharpedo:
	.incbin "build/graphics/pokemon/sharpedo/still_front.4bpp.lz"
  .globl gMonPalette_Sharpedo
gMonPalette_Sharpedo:
  .incbin "build/graphics/pokemon/sharpedo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sharpedo
gMonBackPic_Sharpedo:
  .incbin "build/graphics/pokemon/sharpedo/back.4bpp.lz"

  .globl gMonShinyPalette_Sharpedo
gMonShinyPalette_Sharpedo:
  .incbin "build/graphics/pokemon/sharpedo/shiny_palette.gbapal.lz"

  .globl gMonIcon_Sharpedo
gMonIcon_Sharpedo: @ 0x08D02E80 [331]
  .incbin "build/graphics/pokemon/sharpedo/icon.4bpp"
	@ analyzed canonical ROM range 0x08D03280-0x08D034BB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sharpedo
gMonFootprint_Sharpedo:
	.incbin "build/graphics/pokemon/sharpedo/footprint.1bpp"
	.globl gMonStillFrontPic_Trapinch
gMonStillFrontPic_Trapinch:
	.incbin "build/graphics/pokemon/trapinch/still_front.4bpp.lz"
  .globl gMonPalette_Trapinch
gMonPalette_Trapinch:
  .incbin "build/graphics/pokemon/trapinch/normal_palette.gbapal.lz"
  .space 0x2, 0x00
 
  .globl gMonBackPic_Trapinch
gMonBackPic_Trapinch:
  .incbin "build/graphics/pokemon/trapinch/back.4bpp.lz"

  .globl gMonShinyPalette_Trapinch
gMonShinyPalette_Trapinch:
  .incbin "build/graphics/pokemon/trapinch/shiny_palette.gbapal.lz"
  .space 0x2, 0x00

	.globl gMonIcon_Trapinch
gMonIcon_Trapinch: @ 0x08D0372C [332]
  .incbin "build/graphics/pokemon/trapinch/icon.4bpp"
	@ analyzed canonical ROM range 0x08D03B2C-0x08D03EBB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Trapinch
gMonFootprint_Trapinch:
	.incbin "build/graphics/pokemon/trapinch/footprint.1bpp"
	.globl gMonStillFrontPic_Vibrava
gMonStillFrontPic_Vibrava:
	.incbin "build/graphics/pokemon/vibrava/still_front.4bpp.lz"
  .globl gMonPalette_Vibrava
gMonPalette_Vibrava:
  .incbin "build/graphics/pokemon/vibrava/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vibrava
gMonBackPic_Vibrava:
  .incbin "build/graphics/pokemon/vibrava/back.4bpp.lz"

  .globl gMonShinyPalette_Vibrava
gMonShinyPalette_Vibrava:
  .incbin "build/graphics/pokemon/vibrava/shiny_palette.gbapal.lz"

  .globl gMonIcon_Vibrava
gMonIcon_Vibrava: @ 0x08D04184 [333]
  .incbin "build/graphics/pokemon/vibrava/icon.4bpp"
	@ analyzed canonical ROM range 0x08D04584-0x08D04A93
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Vibrava
gMonFootprint_Vibrava:
	.incbin "build/graphics/pokemon/vibrava/footprint.1bpp"
	.globl gMonStillFrontPic_Flygon
gMonStillFrontPic_Flygon:
	.incbin "build/graphics/pokemon/flygon/still_front.4bpp.lz"
  .globl gMonPalette_Flygon
gMonPalette_Flygon:
  .incbin "build/graphics/pokemon/flygon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Flygon
gMonBackPic_Flygon:
  .incbin "build/graphics/pokemon/flygon/back.4bpp.lz"

  .globl gMonShinyPalette_Flygon
gMonShinyPalette_Flygon:
  .incbin "build/graphics/pokemon/flygon/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 10

  .globl gMonIcon_Flygon
gMonIcon_Flygon: @ 0x08D04F20 [334]
  .incbin "build/graphics/pokemon/flygon/icon.4bpp"
	@ analyzed canonical ROM range 0x08D05320-0x08D05657
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Flygon
gMonFootprint_Flygon:
	.incbin "build/graphics/pokemon/flygon/footprint.1bpp"
	.globl gMonStillFrontPic_Makuhita
gMonStillFrontPic_Makuhita:
	.incbin "build/graphics/pokemon/makuhita/still_front.4bpp.lz"
  .globl gMonPalette_Makuhita
gMonPalette_Makuhita:
  .incbin "build/graphics/pokemon/makuhita/normal_palette.gbapal.lz"

  .globl gMonBackPic_Makuhita
gMonBackPic_Makuhita:
  .incbin "build/graphics/pokemon/makuhita/back.4bpp.lz"

  .globl gMonShinyPalette_Makuhita
gMonShinyPalette_Makuhita:
  .incbin "build/graphics/pokemon/makuhita/shiny_palette.gbapal.lz"

	.globl gMonIcon_Makuhita
gMonIcon_Makuhita: @ 0x08D05994 [335]
  .incbin "build/graphics/pokemon/makuhita/icon.4bpp"
	@ analyzed canonical ROM range 0x08D05D94-0x08D06263
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Makuhita
gMonFootprint_Makuhita:
	.incbin "build/graphics/pokemon/makuhita/footprint.1bpp"
	.globl gMonStillFrontPic_Hariyama
gMonStillFrontPic_Hariyama:
	.incbin "build/graphics/pokemon/hariyama/still_front.4bpp.lz"
  .globl gMonPalette_Hariyama
gMonPalette_Hariyama:
  .incbin "build/graphics/pokemon/hariyama/normal_palette.gbapal.lz"

  .globl gMonBackPic_Hariyama
gMonBackPic_Hariyama:
  .incbin "build/graphics/pokemon/hariyama/back.4bpp.lz"

  .globl gMonShinyPalette_Hariyama
gMonShinyPalette_Hariyama:
  .incbin "build/graphics/pokemon/hariyama/shiny_palette.gbapal.lz"

  .globl gMonIcon_Hariyama
gMonIcon_Hariyama: @ 0x08D06694 [336]
  .incbin "build/graphics/pokemon/hariyama/icon.4bpp"
	@ analyzed canonical ROM range 0x08D06A94-0x08D06D43
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Hariyama
gMonFootprint_Hariyama:
	.incbin "build/graphics/pokemon/hariyama/footprint.1bpp"
	.globl gMonStillFrontPic_Electrike
gMonStillFrontPic_Electrike:
	.incbin "build/graphics/pokemon/electrike/still_front.4bpp.lz"
  .globl gMonPalette_Electrike
gMonPalette_Electrike:
  .incbin "build/graphics/pokemon/electrike/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Electrike
gMonBackPic_Electrike:
  .incbin "build/graphics/pokemon/electrike/back.4bpp.lz"

  .globl gMonShinyPalette_Electrike
gMonShinyPalette_Electrike:
  .incbin "build/graphics/pokemon/electrike/shiny_palette.gbapal.lz"
  .space 0x2, 0x00

	.globl gMonIcon_Electrike
gMonIcon_Electrike: @ 0x08D07020 [337]
  .incbin "build/graphics/pokemon/electrike/icon.4bpp"
	@ analyzed canonical ROM range 0x08D07420-0x08D0776F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Electrike
gMonFootprint_Electrike:
	.incbin "build/graphics/pokemon/electrike/footprint.1bpp"
	.globl gMonStillFrontPic_Manectric
gMonStillFrontPic_Manectric:
	.incbin "build/graphics/pokemon/manectric/still_front.4bpp.lz"
  .globl gMonPalette_Manectric
gMonPalette_Manectric:
  .incbin "build/graphics/pokemon/manectric/normal_palette.gbapal.lz"

  .globl gMonBackPic_Manectric
gMonBackPic_Manectric:
  .incbin "build/graphics/pokemon/manectric/back.4bpp.lz"

  .globl gMonShinyPalette_Manectric
gMonShinyPalette_Manectric:
  .incbin "build/graphics/pokemon/manectric/shiny_palette.gbapal.lz"

  .globl gMonIcon_Manectric
gMonIcon_Manectric: @ 0x08D079EC [338]
  .incbin "build/graphics/pokemon/manectric/icon.4bpp"
	@ analyzed canonical ROM range 0x08D07DEC-0x08D080DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Manectric
gMonFootprint_Manectric:
	.incbin "build/graphics/pokemon/manectric/footprint.1bpp"
	.globl gMonStillFrontPic_Numel
gMonStillFrontPic_Numel:
	.incbin "build/graphics/pokemon/numel/still_front.4bpp.lz"
  .globl gMonPalette_Numel
gMonPalette_Numel:
  .incbin "build/graphics/pokemon/numel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Numel
gMonBackPic_Numel:
  .incbin "build/graphics/pokemon/numel/back.4bpp.lz"

  .globl gMonShinyPalette_Numel
gMonShinyPalette_Numel:
  .incbin "build/graphics/pokemon/numel/shiny_palette.gbapal.lz"

  .globl gMonIcon_Numel
gMonIcon_Numel: @ 0x08D083E8 [339]
  .incbin "build/graphics/pokemon/numel/icon.4bpp"
	@ analyzed canonical ROM range 0x08D087E8-0x08D08C1F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Numel
gMonFootprint_Numel:
	.incbin "build/graphics/pokemon/numel/footprint.1bpp"
	.globl gMonStillFrontPic_Camerupt
gMonStillFrontPic_Camerupt:
	.incbin "build/graphics/pokemon/camerupt/still_front.4bpp.lz"
  .globl gMonPalette_Camerupt
gMonPalette_Camerupt:
  .incbin "build/graphics/pokemon/camerupt/normal_palette.gbapal.lz"

  .globl gMonBackPic_Camerupt
gMonBackPic_Camerupt:
  .incbin "build/graphics/pokemon/camerupt/back.4bpp.lz"

  .globl gMonShinyPalette_Camerupt
gMonShinyPalette_Camerupt:
  .incbin "build/graphics/pokemon/camerupt/shiny_palette.gbapal.lz"

  .globl gMonIcon_Camerupt
gMonIcon_Camerupt: @ 0x08D08F34 [340]
  .incbin "build/graphics/pokemon/camerupt/icon.4bpp"
	@ analyzed canonical ROM range 0x08D09334-0x08D095C7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Camerupt
gMonFootprint_Camerupt:
	.incbin "build/graphics/pokemon/camerupt/footprint.1bpp"
	.globl gMonStillFrontPic_Spheal
gMonStillFrontPic_Spheal:
	.incbin "build/graphics/pokemon/spheal/still_front.4bpp.lz"
  .globl gMonPalette_Spheal
gMonPalette_Spheal:
  .incbin "build/graphics/pokemon/spheal/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Spheal
gMonBackPic_Spheal:
  .incbin "build/graphics/pokemon/spheal/back.4bpp.lz"

  .globl gMonShinyPalette_Spheal
gMonShinyPalette_Spheal:
  .incbin "build/graphics/pokemon/spheal/shiny_palette.gbapal.lz"
  .space 0x2, 0x00

	.globl gMonIcon_Spheal
gMonIcon_Spheal: @ 0x08D09814 [341]
  .incbin "build/graphics/pokemon/spheal/icon.4bpp"
	@ analyzed canonical ROM range 0x08D09C14-0x08D09FB3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Spheal
gMonFootprint_Spheal:
	.incbin "build/graphics/pokemon/spheal/footprint.1bpp"
	.globl gMonStillFrontPic_Sealeo
gMonStillFrontPic_Sealeo:
	.incbin "build/graphics/pokemon/sealeo/still_front.4bpp.lz"
  .globl gMonPalette_Sealeo
gMonPalette_Sealeo:
  .incbin "build/graphics/pokemon/sealeo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Sealeo
gMonBackPic_Sealeo:
  .incbin "build/graphics/pokemon/sealeo/back.4bpp.lz"

  .globl gMonShinyPalette_Sealeo
gMonShinyPalette_Sealeo:
  .incbin "build/graphics/pokemon/sealeo/shiny_palette.gbapal.lz"

  .globl gMonIcon_Sealeo
gMonIcon_Sealeo: @ 0x08D0A280 [342]
  .incbin "build/graphics/pokemon/sealeo/icon.4bpp"
	@ analyzed canonical ROM range 0x08D0A680-0x08D0AE13
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Sealeo
gMonFootprint_Sealeo:
	.incbin "build/graphics/pokemon/sealeo/footprint.1bpp"
	.globl gMonStillFrontPic_Walrein
gMonStillFrontPic_Walrein:
	.incbin "build/graphics/pokemon/walrein/still_front.4bpp.lz"
  .globl gMonPalette_Walrein
gMonPalette_Walrein:
  .incbin "build/graphics/pokemon/walrein/normal_palette.gbapal.lz"

  .globl gMonBackPic_Walrein
gMonBackPic_Walrein:
  .incbin "build/graphics/pokemon/walrein/back.4bpp.lz"

  .globl gMonShinyPalette_Walrein
gMonShinyPalette_Walrein:
  .incbin "build/graphics/pokemon/walrein/shiny_palette.gbapal.lz"

  .globl gMonIcon_Walrein
gMonIcon_Walrein: @ 0x08D0B1EC [343]
  .incbin "build/graphics/pokemon/walrein/icon.4bpp"
	@ analyzed canonical ROM range 0x08D0B5EC-0x08D0B91B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Walrein
gMonFootprint_Walrein:
	.incbin "build/graphics/pokemon/walrein/footprint.1bpp"
	.globl gMonStillFrontPic_Cacnea
gMonStillFrontPic_Cacnea:
	.incbin "build/graphics/pokemon/cacnea/still_front.4bpp.lz"
  .globl gMonPalette_Cacnea
gMonPalette_Cacnea:
  .incbin "build/graphics/pokemon/cacnea/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cacnea
gMonBackPic_Cacnea:
  .incbin "build/graphics/pokemon/cacnea/back.4bpp.lz"

  .globl gMonShinyPalette_Cacnea
gMonShinyPalette_Cacnea:
  .incbin "build/graphics/pokemon/cacnea/shiny_palette.gbapal.lz"

  .globl gMonIcon_Cacnea
gMonIcon_Cacnea: @ 0x08D0BCCC [344]
  .incbin "build/graphics/pokemon/cacnea/icon.4bpp"
	@ analyzed canonical ROM range 0x08D0C0CC-0x08D0C523
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Cacnea
gMonFootprint_Cacnea:
	.incbin "build/graphics/pokemon/cacnea/footprint.1bpp"
	.globl gMonStillFrontPic_Cacturne
gMonStillFrontPic_Cacturne:
	.incbin "build/graphics/pokemon/cacturne/still_front.4bpp.lz"
  .globl gMonPalette_Cacturne
gMonPalette_Cacturne:
  .incbin "build/graphics/pokemon/cacturne/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cacturne
gMonBackPic_Cacturne:
  .incbin "build/graphics/pokemon/cacturne/back.4bpp.lz"

  .globl gMonShinyPalette_Cacturne
gMonShinyPalette_Cacturne:
  .incbin "build/graphics/pokemon/cacturne/shiny_palette.gbapal.lz"

  .globl gMonIcon_Cacturne
gMonIcon_Cacturne: @ 0x08D0C874 [345]
  .incbin "build/graphics/pokemon/cacturne/icon.4bpp"
	@ analyzed canonical ROM range 0x08D0CC74-0x08D0CF57
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Cacturne
gMonFootprint_Cacturne:
	.incbin "build/graphics/pokemon/cacturne/footprint.1bpp"
	.globl gMonStillFrontPic_Snorunt
gMonStillFrontPic_Snorunt:
	.incbin "build/graphics/pokemon/snorunt/still_front.4bpp.lz"
  .globl gMonPalette_Snorunt
gMonPalette_Snorunt:
  .incbin "build/graphics/pokemon/snorunt/normal_palette.gbapal.lz"

  .globl gMonBackPic_Snorunt
gMonBackPic_Snorunt:
  .incbin "build/graphics/pokemon/snorunt/back.4bpp.lz"

  .globl gMonShinyPalette_Snorunt
gMonShinyPalette_Snorunt:
  .incbin "build/graphics/pokemon/snorunt/shiny_palette.gbapal.lz"

  .globl gMonIcon_Snorunt
gMonIcon_Snorunt: @ 0x08D0D28C [346]
  .incbin "build/graphics/pokemon/snorunt/icon.4bpp"
	@ analyzed canonical ROM range 0x08D0D68C-0x08D0DA73
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Snorunt
gMonFootprint_Snorunt:
	.incbin "build/graphics/pokemon/snorunt/footprint.1bpp"
	.globl gMonStillFrontPic_Glalie
gMonStillFrontPic_Glalie:
	.incbin "build/graphics/pokemon/glalie/still_front.4bpp.lz"
  .globl gMonPalette_Glalie
gMonPalette_Glalie:
  .incbin "build/graphics/pokemon/glalie/normal_palette.gbapal.lz"

  .globl gMonBackPic_Glalie
gMonBackPic_Glalie:
  .incbin "build/graphics/pokemon/glalie/back.4bpp.lz"

  .globl gMonShinyPalette_Glalie
gMonShinyPalette_Glalie:
  .incbin "build/graphics/pokemon/glalie/shiny_palette.gbapal.lz"

  .globl gMonIcon_Glalie
gMonIcon_Glalie: @ 0x08D0DE74 [347]
  .incbin "build/graphics/pokemon/glalie/icon.4bpp"
	@ analyzed canonical ROM range 0x08D0E274-0x08D0E5BB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Glalie
gMonFootprint_Glalie:
	.incbin "build/graphics/pokemon/glalie/footprint.1bpp"
	.globl gMonStillFrontPic_Lunatone
gMonStillFrontPic_Lunatone:
	.incbin "build/graphics/pokemon/lunatone/still_front.4bpp.lz"
  .globl gMonPalette_Lunatone
gMonPalette_Lunatone:
  .incbin "build/graphics/pokemon/lunatone/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lunatone
gMonBackPic_Lunatone:
  .incbin "build/graphics/pokemon/lunatone/back.4bpp.lz"

  .globl gMonShinyPalette_Lunatone
gMonShinyPalette_Lunatone:
  .incbin "build/graphics/pokemon/lunatone/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lunatone
gMonIcon_Lunatone: @ 0x08D0E964 [348]
  .incbin "build/graphics/pokemon/lunatone/icon.4bpp"
	@ analyzed canonical ROM range 0x08D0ED64-0x08D0F1CF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Lunatone
gMonFootprint_Lunatone:
	.incbin "build/graphics/pokemon/lunatone/footprint.1bpp"
	.globl gMonStillFrontPic_Solrock
gMonStillFrontPic_Solrock:
	.incbin "build/graphics/pokemon/solrock/still_front.4bpp.lz"
  .globl gMonPalette_Solrock
gMonPalette_Solrock:
  .incbin "build/graphics/pokemon/solrock/normal_palette.gbapal.lz"

  .globl gMonBackPic_Solrock
gMonBackPic_Solrock:
  .incbin "build/graphics/pokemon/solrock/back.4bpp.lz"

  .globl gMonShinyPalette_Solrock
gMonShinyPalette_Solrock:
  .incbin "build/graphics/pokemon/solrock/shiny_palette.gbapal.lz"

  .globl gMonIcon_Solrock
gMonIcon_Solrock: @ 0x08D0F60C [349]
  .incbin "build/graphics/pokemon/solrock/icon.4bpp"
	@ analyzed canonical ROM range 0x08D0FA0C-0x08D0FCF3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Solrock
gMonFootprint_Solrock:
	.incbin "build/graphics/pokemon/solrock/footprint.1bpp"
	.globl gMonStillFrontPic_Azurill
gMonStillFrontPic_Azurill:
	.incbin "build/graphics/pokemon/azurill/still_front.4bpp.lz"
  .globl gMonPalette_Azurill
gMonPalette_Azurill:
  .incbin "build/graphics/pokemon/azurill/normal_palette.gbapal.lz"

  .globl gMonBackPic_Azurill
gMonBackPic_Azurill:
  .incbin "build/graphics/pokemon/azurill/back.4bpp.lz"

  .globl gMonShinyPalette_Azurill
gMonShinyPalette_Azurill:
  .incbin "build/graphics/pokemon/azurill/shiny_palette.gbapal.lz"

  .globl gMonIcon_Azurill
gMonIcon_Azurill: @ 0x08D1005C [350]
  .incbin "build/graphics/pokemon/azurill/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1045C-0x08D106E7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Azurill
gMonFootprint_Azurill:
	.incbin "build/graphics/pokemon/azurill/footprint.1bpp"
	.globl gMonStillFrontPic_Spoink
gMonStillFrontPic_Spoink:
	.incbin "build/graphics/pokemon/spoink/still_front.4bpp.lz"
  .globl gMonPalette_Spoink
gMonPalette_Spoink:
  .incbin "build/graphics/pokemon/spoink/normal_palette.gbapal.lz"

  .globl gMonBackPic_Spoink
gMonBackPic_Spoink:
  .incbin "build/graphics/pokemon/spoink/back.4bpp.lz"

  .globl gMonShinyPalette_Spoink
gMonShinyPalette_Spoink:
  .incbin "build/graphics/pokemon/spoink/shiny_palette.gbapal.lz"

  .globl gMonIcon_Spoink
gMonIcon_Spoink: @ 0x08D10978 [351]
  .incbin "build/graphics/pokemon/spoink/icon.4bpp"
	@ analyzed canonical ROM range 0x08D10D78-0x08D11153
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Spoink
gMonFootprint_Spoink:
	.incbin "build/graphics/pokemon/spoink/footprint.1bpp"
	.globl gMonStillFrontPic_Grumpig
gMonStillFrontPic_Grumpig:
	.incbin "build/graphics/pokemon/grumpig/still_front.4bpp.lz"
  .globl gMonPalette_Grumpig
gMonPalette_Grumpig:
  .incbin "build/graphics/pokemon/grumpig/normal_palette.gbapal.lz"

  .globl gMonBackPic_Grumpig
gMonBackPic_Grumpig:
  .incbin "build/graphics/pokemon/grumpig/back.4bpp.lz"

  .globl gMonShinyPalette_Grumpig
gMonShinyPalette_Grumpig:
  .incbin "build/graphics/pokemon/grumpig/shiny_palette.gbapal.lz"

  .globl gMonIcon_Grumpig
gMonIcon_Grumpig: @ 0x08D11504 [352]
  .incbin "build/graphics/pokemon/grumpig/icon.4bpp"
	@ analyzed canonical ROM range 0x08D11904-0x08D11BAF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Grumpig
gMonFootprint_Grumpig:
	.incbin "build/graphics/pokemon/grumpig/footprint.1bpp"
	.globl gMonStillFrontPic_Plusle
gMonStillFrontPic_Plusle:
	.incbin "build/graphics/pokemon/plusle/still_front.4bpp.lz"
  .globl gMonPalette_Plusle
gMonPalette_Plusle:
  .incbin "build/graphics/pokemon/plusle/normal_palette.gbapal.lz"

  .globl gMonBackPic_Plusle
gMonBackPic_Plusle:
  .incbin "build/graphics/pokemon/plusle/back.4bpp.lz"

  .globl gMonShinyPalette_Plusle
gMonShinyPalette_Plusle:
  .incbin "build/graphics/pokemon/plusle/shiny_palette.gbapal.lz"

  .globl gMonIcon_Plusle
gMonIcon_Plusle: @ 0x08D11EB8 [353]
  .incbin "build/graphics/pokemon/plusle/icon.4bpp"
	@ analyzed canonical ROM range 0x08D122B8-0x08D1253F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Plusle
gMonFootprint_Plusle:
	.incbin "build/graphics/pokemon/plusle/footprint.1bpp"
	.globl gMonStillFrontPic_Minun
gMonStillFrontPic_Minun:
	.incbin "build/graphics/pokemon/minun/still_front.4bpp.lz"
  .globl gMonPalette_Minun
gMonPalette_Minun:
  .incbin "build/graphics/pokemon/minun/normal_palette.gbapal.lz"

  .globl gMonBackPic_Minun
gMonBackPic_Minun:
  .incbin "build/graphics/pokemon/minun/back.4bpp.lz"

  .globl gMonShinyPalette_Minun
gMonShinyPalette_Minun:
  .incbin "build/graphics/pokemon/minun/shiny_palette.gbapal.lz"

  .globl gMonIcon_Minun
gMonIcon_Minun: @ 0x08D12858 [354]
  .incbin "build/graphics/pokemon/minun/icon.4bpp"
	@ analyzed canonical ROM range 0x08D12C58-0x08D13033
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Minun
gMonFootprint_Minun:
	.incbin "build/graphics/pokemon/minun/footprint.1bpp"
	.globl gMonStillFrontPic_Mawile
gMonStillFrontPic_Mawile:
	.incbin "build/graphics/pokemon/mawile/still_front.4bpp.lz"
  .globl gMonPalette_Mawile
gMonPalette_Mawile:
  .incbin "build/graphics/pokemon/mawile/normal_palette.gbapal.lz"

  .globl gMonBackPic_Mawile
gMonBackPic_Mawile:
  .incbin "build/graphics/pokemon/mawile/back.4bpp.lz"

  .globl gMonShinyPalette_Mawile
gMonShinyPalette_Mawile:
  .incbin "build/graphics/pokemon/mawile/shiny_palette.gbapal.lz"

  .globl gMonIcon_Mawile
gMonIcon_Mawile: @ 0x08D13484 [355]
  .incbin "build/graphics/pokemon/mawile/icon.4bpp"
	@ analyzed canonical ROM range 0x08D13884-0x08D13B5B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Mawile
gMonFootprint_Mawile:
	.incbin "build/graphics/pokemon/mawile/footprint.1bpp"
	.globl gMonStillFrontPic_Meditite
gMonStillFrontPic_Meditite:
	.incbin "build/graphics/pokemon/meditite/still_front.4bpp.lz"
  .globl gMonPalette_Meditite
gMonPalette_Meditite:
  .incbin "build/graphics/pokemon/meditite/normal_palette.gbapal.lz"

  .globl gMonBackPic_Meditite
gMonBackPic_Meditite:
  .incbin "build/graphics/pokemon/meditite/back.4bpp.lz"

  .globl gMonShinyPalette_Meditite
gMonShinyPalette_Meditite:
  .incbin "build/graphics/pokemon/meditite/shiny_palette.gbapal.lz"

	.globl gMonIcon_Meditite
gMonIcon_Meditite: @ 0x08D13E70 [356]
  .incbin "build/graphics/pokemon/meditite/icon.4bpp"
	@ analyzed canonical ROM range 0x08D14270-0x08D145BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Meditite
gMonFootprint_Meditite:
	.incbin "build/graphics/pokemon/meditite/footprint.1bpp"
	.globl gMonStillFrontPic_Medicham
gMonStillFrontPic_Medicham:
	.incbin "build/graphics/pokemon/medicham/still_front.4bpp.lz"
  .globl gMonPalette_Medicham
gMonPalette_Medicham:
  .incbin "build/graphics/pokemon/medicham/normal_palette.gbapal.lz"

  .globl gMonBackPic_Medicham
gMonBackPic_Medicham:
  .incbin "build/graphics/pokemon/medicham/back.4bpp.lz"

  .globl gMonShinyPalette_Medicham
gMonShinyPalette_Medicham:
  .incbin "build/graphics/pokemon/medicham/shiny_palette.gbapal.lz"

  .globl gMonIcon_Medicham
gMonIcon_Medicham: @ 0x08D14948 [357]
  .incbin "build/graphics/pokemon/medicham/icon.4bpp"
	@ analyzed canonical ROM range 0x08D14D48-0x08D15317
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Medicham
gMonFootprint_Medicham:
	.incbin "build/graphics/pokemon/medicham/footprint.1bpp"
	.globl gMonStillFrontPic_Swablu
gMonStillFrontPic_Swablu:
	.incbin "build/graphics/pokemon/swablu/still_front.4bpp.lz"
  .globl gMonPalette_Swablu
gMonPalette_Swablu:
  .incbin "build/graphics/pokemon/swablu/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swablu
gMonBackPic_Swablu:
  .incbin "build/graphics/pokemon/swablu/back.4bpp.lz"

  .globl gMonShinyPalette_Swablu
gMonShinyPalette_Swablu:
  .incbin "build/graphics/pokemon/swablu/shiny_palette.gbapal.lz"

  .globl gMonIcon_Swablu
gMonIcon_Swablu: @ 0x08D15720 [358]
  .incbin "build/graphics/pokemon/swablu/icon.4bpp"
	@ analyzed canonical ROM range 0x08D15B20-0x08D15F1B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Swablu
gMonFootprint_Swablu:
	.incbin "build/graphics/pokemon/swablu/footprint.1bpp"
	.globl gMonStillFrontPic_Altaria
gMonStillFrontPic_Altaria:
	.incbin "build/graphics/pokemon/altaria/still_front.4bpp.lz"
  .globl gMonPalette_Altaria
gMonPalette_Altaria:
  .incbin "build/graphics/pokemon/altaria/normal_palette.gbapal.lz"

  .globl gMonBackPic_Altaria
gMonBackPic_Altaria:
  .incbin "build/graphics/pokemon/altaria/back.4bpp.lz"

  .globl gMonShinyPalette_Altaria
gMonShinyPalette_Altaria:
  .incbin "build/graphics/pokemon/altaria/shiny_palette.gbapal.lz"

  .globl gMonIcon_Altaria
gMonIcon_Altaria: @ 0x08D162E4 [359]
  .incbin "build/graphics/pokemon/altaria/icon.4bpp"
	@ analyzed canonical ROM range 0x08D166E4-0x08D1699B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Altaria
gMonFootprint_Altaria:
	.incbin "build/graphics/pokemon/altaria/footprint.1bpp"
	.globl gMonStillFrontPic_Wynaut
gMonStillFrontPic_Wynaut:
	.incbin "build/graphics/pokemon/wynaut/still_front.4bpp.lz"
  .globl gMonPalette_Wynaut
gMonPalette_Wynaut:
  .incbin "build/graphics/pokemon/wynaut/normal_palette.gbapal.lz"

  .globl gMonBackPic_Wynaut
gMonBackPic_Wynaut:
  .incbin "build/graphics/pokemon/wynaut/back.4bpp.lz"

  .globl gMonShinyPalette_Wynaut
gMonShinyPalette_Wynaut:
  .incbin "build/graphics/pokemon/wynaut/shiny_palette.gbapal.lz"

  .globl gMonIcon_Wynaut
gMonIcon_Wynaut: @ 0x08D16C7C [360]
  .incbin "build/graphics/pokemon/wynaut/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1707C-0x08D1738B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Wynaut
gMonFootprint_Wynaut:
	.incbin "build/graphics/pokemon/wynaut/footprint.1bpp"
	.globl gMonStillFrontPic_Duskull
gMonStillFrontPic_Duskull:
	.incbin "build/graphics/pokemon/duskull/still_front.4bpp.lz"
  .globl gMonPalette_Duskull
gMonPalette_Duskull:
  .incbin "build/graphics/pokemon/duskull/normal_palette.gbapal.lz"

  .globl gMonBackPic_Duskull
gMonBackPic_Duskull:
  .incbin "build/graphics/pokemon/duskull/back.4bpp.lz"

  .globl gMonShinyPalette_Duskull
gMonShinyPalette_Duskull:
  .incbin "build/graphics/pokemon/duskull/shiny_palette.gbapal.lz"

  .globl gMonIcon_Duskull
gMonIcon_Duskull: @ 0x08D1768C [361]
  .incbin "build/graphics/pokemon/duskull/icon.4bpp"
	@ analyzed canonical ROM range 0x08D17A8C-0x08D17E4B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Duskull
gMonFootprint_Duskull:
	.incbin "build/graphics/pokemon/duskull/footprint.1bpp"
	.globl gMonStillFrontPic_Dusclops
gMonStillFrontPic_Dusclops:
	.incbin "build/graphics/pokemon/dusclops/still_front.4bpp.lz"
  .globl gMonPalette_Dusclops
gMonPalette_Dusclops:
  .incbin "build/graphics/pokemon/dusclops/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Dusclops
gMonBackPic_Dusclops:
  .incbin "build/graphics/pokemon/dusclops/back.4bpp.lz"

  .globl gMonShinyPalette_Dusclops
gMonShinyPalette_Dusclops:
  .incbin "build/graphics/pokemon/dusclops/shiny_palette.gbapal.lz"
  .space 0x2, 0x00

	.globl gMonIcon_Dusclops
gMonIcon_Dusclops: @ 0x08D18188 [362]
  .incbin "build/graphics/pokemon/dusclops/icon.4bpp"
	@ analyzed canonical ROM range 0x08D18588-0x08D18913
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Dusclops
gMonFootprint_Dusclops:
	.incbin "build/graphics/pokemon/dusclops/footprint.1bpp"
	.globl gMonStillFrontPic_Roselia
gMonStillFrontPic_Roselia:
	.incbin "build/graphics/pokemon/roselia/still_front.4bpp.lz"
  .globl gMonPalette_Roselia
gMonPalette_Roselia:
  .incbin "build/graphics/pokemon/roselia/normal_palette.gbapal.lz"

  .globl gMonBackPic_Roselia
gMonBackPic_Roselia:
  .incbin "build/graphics/pokemon/roselia/back.4bpp.lz"

  .globl gMonShinyPalette_Roselia
gMonShinyPalette_Roselia:
  .incbin "build/graphics/pokemon/roselia/shiny_palette.gbapal.lz"

  .globl gMonIcon_Roselia
gMonIcon_Roselia: @ 0x08D18D2C [363]
  .incbin "build/graphics/pokemon/roselia/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1912C-0x08D19433
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Roselia
gMonFootprint_Roselia:
	.incbin "build/graphics/pokemon/roselia/footprint.1bpp"
	.globl gMonStillFrontPic_Slakoth
gMonStillFrontPic_Slakoth:
	.incbin "build/graphics/pokemon/slakoth/still_front.4bpp.lz"
  .globl gMonPalette_Slakoth
gMonPalette_Slakoth:
  .incbin "build/graphics/pokemon/slakoth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slakoth
gMonBackPic_Slakoth:
  .incbin "build/graphics/pokemon/slakoth/back.4bpp.lz"

  .globl gMonShinyPalette_Slakoth
gMonShinyPalette_Slakoth:
  .incbin "build/graphics/pokemon/slakoth/shiny_palette.gbapal.lz"

  .globl gMonIcon_Slakoth
gMonIcon_Slakoth: @ 0x08D1976C [364]
  .incbin "build/graphics/pokemon/slakoth/icon.4bpp"
	@ analyzed canonical ROM range 0x08D19B6C-0x08D19F87
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Slakoth
gMonFootprint_Slakoth:
	.incbin "build/graphics/pokemon/slakoth/footprint.1bpp"
	.globl gMonStillFrontPic_Vigoroth
gMonStillFrontPic_Vigoroth:
	.incbin "build/graphics/pokemon/vigoroth/still_front.4bpp.lz"
  .globl gMonPalette_Vigoroth
gMonPalette_Vigoroth:
  .incbin "build/graphics/pokemon/vigoroth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Vigoroth
gMonBackPic_Vigoroth:
  .incbin "build/graphics/pokemon/vigoroth/back.4bpp.lz"

  .globl gMonShinyPalette_Vigoroth
gMonShinyPalette_Vigoroth:
  .incbin "build/graphics/pokemon/vigoroth/shiny_palette.gbapal.lz"

  .globl gMonIcon_Vigoroth
gMonIcon_Vigoroth: @ 0x08D1A2A0 [365]
  .incbin "build/graphics/pokemon/vigoroth/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1A6A0-0x08D1AB93
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Vigoroth
gMonFootprint_Vigoroth:
	.incbin "build/graphics/pokemon/vigoroth/footprint.1bpp"
	.globl gMonStillFrontPic_Slaking
gMonStillFrontPic_Slaking:
	.incbin "build/graphics/pokemon/slaking/still_front.4bpp.lz"
  .globl gMonPalette_Slaking
gMonPalette_Slaking:
  .incbin "build/graphics/pokemon/slaking/normal_palette.gbapal.lz"

  .globl gMonBackPic_Slaking
gMonBackPic_Slaking:
  .incbin "build/graphics/pokemon/slaking/back.4bpp.lz"

  .globl gMonShinyPalette_Slaking
gMonShinyPalette_Slaking:
  .incbin "build/graphics/pokemon/slaking/shiny_palette.gbapal.lz"

  .globl gMonIcon_Slaking
gMonIcon_Slaking: @ 0x08D1AFA8 [366]
  .incbin "build/graphics/pokemon/slaking/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1B3A8-0x08D1B5DF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Slaking
gMonFootprint_Slaking:
	.incbin "build/graphics/pokemon/slaking/footprint.1bpp"
	.globl gMonStillFrontPic_Gulpin
gMonStillFrontPic_Gulpin:
	.incbin "build/graphics/pokemon/gulpin/still_front.4bpp.lz"
  .globl gMonPalette_Gulpin
gMonPalette_Gulpin:
  .incbin "build/graphics/pokemon/gulpin/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gulpin
gMonBackPic_Gulpin:
  .incbin "build/graphics/pokemon/gulpin/back.4bpp.lz"

  .globl gMonShinyPalette_Gulpin
gMonShinyPalette_Gulpin:
  .incbin "build/graphics/pokemon/gulpin/shiny_palette.gbapal.lz"

  .globl gMonIcon_Gulpin
gMonIcon_Gulpin: @ 0x08D1B8B4 [367]
  .incbin "build/graphics/pokemon/gulpin/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1BCB4-0x08D1C017
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Gulpin
gMonFootprint_Gulpin:
	.incbin "build/graphics/pokemon/gulpin/footprint.1bpp"
	.globl gMonStillFrontPic_Swalot
gMonStillFrontPic_Swalot:
	.incbin "build/graphics/pokemon/swalot/still_front.4bpp.lz"
  .globl gMonPalette_Swalot
gMonPalette_Swalot:
  .incbin "build/graphics/pokemon/swalot/normal_palette.gbapal.lz"

  .globl gMonBackPic_Swalot
gMonBackPic_Swalot:
  .incbin "build/graphics/pokemon/swalot/back.4bpp.lz"

  .globl gMonShinyPalette_Swalot
gMonShinyPalette_Swalot:
  .incbin "build/graphics/pokemon/swalot/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 11

  .globl gMonIcon_Swalot
gMonIcon_Swalot: @ 0x08D1C3B0 [368]
  .incbin "build/graphics/pokemon/swalot/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1C7B0-0x08D1CD47
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Swalot
gMonFootprint_Swalot:
	.incbin "build/graphics/pokemon/swalot/footprint.1bpp"
	.globl gMonStillFrontPic_Tropius
gMonStillFrontPic_Tropius:
	.incbin "build/graphics/pokemon/tropius/still_front.4bpp.lz"
  .globl gMonPalette_Tropius
gMonPalette_Tropius:
  .incbin "build/graphics/pokemon/tropius/normal_palette.gbapal.lz"

  .globl gMonBackPic_Tropius
gMonBackPic_Tropius:
  .incbin "build/graphics/pokemon/tropius/back.4bpp.lz"

  .globl gMonShinyPalette_Tropius
gMonShinyPalette_Tropius:
  .incbin "build/graphics/pokemon/tropius/shiny_palette.gbapal.lz"

  .globl gMonIcon_Tropius
gMonIcon_Tropius: @ 0x08D1D0BC [369]
  .incbin "build/graphics/pokemon/tropius/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1D4BC-0x08D1D76F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Tropius
gMonFootprint_Tropius:
	.incbin "build/graphics/pokemon/tropius/footprint.1bpp"
	.globl gMonStillFrontPic_Whismur
gMonStillFrontPic_Whismur:
	.incbin "build/graphics/pokemon/whismur/still_front.4bpp.lz"
  .globl gMonPalette_Whismur
gMonPalette_Whismur:
  .incbin "build/graphics/pokemon/whismur/normal_palette.gbapal.lz"

  .globl gMonBackPic_Whismur
gMonBackPic_Whismur:
  .incbin "build/graphics/pokemon/whismur/back.4bpp.lz"

  .globl gMonShinyPalette_Whismur
gMonShinyPalette_Whismur:
  .incbin "build/graphics/pokemon/whismur/shiny_palette.gbapal.lz"

  .globl gMonIcon_Whismur
gMonIcon_Whismur: @ 0x08D1DA30 [370]
  .incbin "build/graphics/pokemon/whismur/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1DE30-0x08D1E2C7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Whismur
gMonFootprint_Whismur:
	.incbin "build/graphics/pokemon/whismur/footprint.1bpp"
	.globl gMonStillFrontPic_Loudred
gMonStillFrontPic_Loudred:
	.incbin "build/graphics/pokemon/loudred/still_front.4bpp.lz"
  .globl gMonPalette_Loudred
gMonPalette_Loudred:
  .incbin "build/graphics/pokemon/loudred/normal_palette.gbapal.lz"

  .globl gMonBackPic_Loudred
gMonBackPic_Loudred:
  .incbin "build/graphics/pokemon/loudred/back.4bpp.lz"

  .globl gMonShinyPalette_Loudred
gMonShinyPalette_Loudred:
  .incbin "build/graphics/pokemon/loudred/shiny_palette.gbapal.lz"

  .globl gMonIcon_Loudred
gMonIcon_Loudred: @ 0x08D1E688 [371]
  .incbin "build/graphics/pokemon/loudred/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1EA88-0x08D1F00F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Loudred
gMonFootprint_Loudred:
	.incbin "build/graphics/pokemon/loudred/footprint.1bpp"
	.globl gMonStillFrontPic_Exploud
gMonStillFrontPic_Exploud:
	.incbin "build/graphics/pokemon/exploud/still_front.4bpp.lz"
  .globl gMonPalette_Exploud
gMonPalette_Exploud:
  .incbin "build/graphics/pokemon/exploud/normal_palette.gbapal.lz"

  .globl gMonBackPic_Exploud
gMonBackPic_Exploud:
  .incbin "build/graphics/pokemon/exploud/back.4bpp.lz"

  .globl gMonShinyPalette_Exploud
gMonShinyPalette_Exploud:
  .incbin "build/graphics/pokemon/exploud/shiny_palette.gbapal.lz"

  .globl gMonIcon_Exploud
gMonIcon_Exploud: @ 0x08D1F46C [372]
  .incbin "build/graphics/pokemon/exploud/icon.4bpp"
	@ analyzed canonical ROM range 0x08D1F86C-0x08D1FB63
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Exploud
gMonFootprint_Exploud:
	.incbin "build/graphics/pokemon/exploud/footprint.1bpp"
	.globl gMonStillFrontPic_Clamperl
gMonStillFrontPic_Clamperl:
	.incbin "build/graphics/pokemon/clamperl/still_front.4bpp.lz"
  .globl gMonPalette_Clamperl
gMonPalette_Clamperl:
  .incbin "build/graphics/pokemon/clamperl/normal_palette.gbapal.lz"

  .globl gMonBackPic_Clamperl
gMonBackPic_Clamperl:
  .incbin "build/graphics/pokemon/clamperl/back.4bpp.lz"

  .globl gMonShinyPalette_Clamperl
gMonShinyPalette_Clamperl:
  .incbin "build/graphics/pokemon/clamperl/shiny_palette.gbapal.lz"

  .globl gMonIcon_Clamperl
gMonIcon_Clamperl: @ 0x08D1FE48 [373]
  .incbin "build/graphics/pokemon/clamperl/icon.4bpp"
	@ analyzed canonical ROM range 0x08D20248-0x08D20633
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Clamperl
gMonFootprint_Clamperl:
	.incbin "build/graphics/pokemon/clamperl/footprint.1bpp"
	.globl gMonStillFrontPic_Huntail
gMonStillFrontPic_Huntail:
	.incbin "build/graphics/pokemon/huntail/still_front.4bpp.lz"
  .globl gMonPalette_Huntail
gMonPalette_Huntail:
  .incbin "build/graphics/pokemon/huntail/normal_palette.gbapal.lz"

  .globl gMonBackPic_Huntail
gMonBackPic_Huntail:
  .incbin "build/graphics/pokemon/huntail/back.4bpp.lz"

  .globl gMonShinyPalette_Huntail
gMonShinyPalette_Huntail:
  .incbin "build/graphics/pokemon/huntail/shiny_palette.gbapal.lz"

  .globl gMonIcon_Huntail
gMonIcon_Huntail: @ 0x08D209D8 [374]
  .incbin "build/graphics/pokemon/huntail/icon.4bpp"
	@ analyzed canonical ROM range 0x08D20DD8-0x08D21107
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Huntail
gMonFootprint_Huntail:
	.incbin "build/graphics/pokemon/huntail/footprint.1bpp"
	.globl gMonStillFrontPic_Gorebyss
gMonStillFrontPic_Gorebyss:
	.incbin "build/graphics/pokemon/gorebyss/still_front.4bpp.lz"
  .globl gMonPalette_Gorebyss
gMonPalette_Gorebyss:
  .incbin "build/graphics/pokemon/gorebyss/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gorebyss
gMonBackPic_Gorebyss:
  .incbin "build/graphics/pokemon/gorebyss/back.4bpp.lz"

  .globl gMonShinyPalette_Gorebyss
gMonShinyPalette_Gorebyss:
  .incbin "build/graphics/pokemon/gorebyss/shiny_palette.gbapal.lz"

  .globl gMonIcon_Gorebyss
gMonIcon_Gorebyss: @ 0x08D21440 [375]
  .incbin "build/graphics/pokemon/gorebyss/icon.4bpp"
	@ analyzed canonical ROM range 0x08D21840-0x08D21C8F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Gorebyss
gMonFootprint_Gorebyss:
	.incbin "build/graphics/pokemon/gorebyss/footprint.1bpp"
	.globl gMonStillFrontPic_Absol
gMonStillFrontPic_Absol:
	.incbin "build/graphics/pokemon/absol/still_front.4bpp.lz"
  .globl gMonPalette_Absol
gMonPalette_Absol:
  .incbin "build/graphics/pokemon/absol/normal_palette.gbapal.lz"

  .globl gMonBackPic_Absol
gMonBackPic_Absol:
  .incbin "build/graphics/pokemon/absol/back.4bpp.lz"

  .globl gMonShinyPalette_Absol
gMonShinyPalette_Absol:
  .incbin "build/graphics/pokemon/absol/shiny_palette.gbapal.lz"

  .globl gMonIcon_Absol
gMonIcon_Absol: @ 0x08D22040 [376]
  .incbin "build/graphics/pokemon/absol/icon.4bpp"
	@ analyzed canonical ROM range 0x08D22440-0x08D22697
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Absol
gMonFootprint_Absol:
	.incbin "build/graphics/pokemon/absol/footprint.1bpp"
	.globl gMonStillFrontPic_Shuppet
gMonStillFrontPic_Shuppet:
	.incbin "build/graphics/pokemon/shuppet/still_front.4bpp.lz"
  .globl gMonPalette_Shuppet
gMonPalette_Shuppet:
  .incbin "build/graphics/pokemon/shuppet/normal_palette.gbapal.lz"
  .space 0x2, 0x00
  .globl gMonBackPic_Shuppet
gMonBackPic_Shuppet:
  .incbin "build/graphics/pokemon/shuppet/back.4bpp.lz"

  .globl gMonShinyPalette_Shuppet
gMonShinyPalette_Shuppet:
  .incbin "build/graphics/pokemon/shuppet/shiny_palette.gbapal.lz"
  .space 0x2, 0x00

	.globl gMonIcon_Shuppet
gMonIcon_Shuppet: @ 0x08D22980 [377]
  .incbin "build/graphics/pokemon/shuppet/icon.4bpp"
	@ analyzed canonical ROM range 0x08D22D80-0x08D23053
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Shuppet
gMonFootprint_Shuppet:
	.incbin "build/graphics/pokemon/shuppet/footprint.1bpp"
	.globl gMonStillFrontPic_Banette
gMonStillFrontPic_Banette:
	.incbin "build/graphics/pokemon/banette/still_front.4bpp.lz"
  .globl gMonPalette_Banette
gMonPalette_Banette:
  .incbin "build/graphics/pokemon/banette/normal_palette.gbapal.lz"

  .globl gMonBackPic_Banette
gMonBackPic_Banette:
  .incbin "build/graphics/pokemon/banette/back.4bpp.lz"

  .globl gMonShinyPalette_Banette
gMonShinyPalette_Banette:
  .incbin "build/graphics/pokemon/banette/shiny_palette.gbapal.lz"

  .globl gMonIcon_Banette
gMonIcon_Banette: @ 0x08D23320 [378]
  .incbin "build/graphics/pokemon/banette/icon.4bpp"
	@ analyzed canonical ROM range 0x08D23720-0x08D23B5F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Banette
gMonFootprint_Banette:
	.incbin "build/graphics/pokemon/banette/footprint.1bpp"
	.globl gMonStillFrontPic_Seviper
gMonStillFrontPic_Seviper:
	.incbin "build/graphics/pokemon/seviper/still_front.4bpp.lz"
  .globl gMonPalette_Seviper
gMonPalette_Seviper:
  .incbin "build/graphics/pokemon/seviper/normal_palette.gbapal.lz"

  .globl gMonBackPic_Seviper
gMonBackPic_Seviper:
  .incbin "build/graphics/pokemon/seviper/back.4bpp.lz"

  .globl gMonShinyPalette_Seviper
gMonShinyPalette_Seviper:
  .incbin "build/graphics/pokemon/seviper/shiny_palette.gbapal.lz"

  .globl gMonIcon_Seviper
gMonIcon_Seviper: @ 0x08D2403C [379]
  .incbin "build/graphics/pokemon/seviper/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2443C-0x08D24827
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Seviper
gMonFootprint_Seviper:
	.incbin "build/graphics/pokemon/seviper/footprint.1bpp"
	.globl gMonStillFrontPic_Zangoose
gMonStillFrontPic_Zangoose:
	.incbin "build/graphics/pokemon/zangoose/still_front.4bpp.lz"
  .globl gMonPalette_Zangoose
gMonPalette_Zangoose:
  .incbin "build/graphics/pokemon/zangoose/normal_palette.gbapal.lz"

  .globl gMonBackPic_Zangoose
gMonBackPic_Zangoose:
  .incbin "build/graphics/pokemon/zangoose/back.4bpp.lz"

  .globl gMonShinyPalette_Zangoose
gMonShinyPalette_Zangoose:
  .incbin "build/graphics/pokemon/zangoose/shiny_palette.gbapal.lz"

  .globl gMonIcon_Zangoose
gMonIcon_Zangoose: @ 0x08D24BEC [380]
  .incbin "build/graphics/pokemon/zangoose/icon.4bpp"
	@ analyzed canonical ROM range 0x08D24FEC-0x08D2539F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Zangoose
gMonFootprint_Zangoose:
	.incbin "build/graphics/pokemon/zangoose/footprint.1bpp"
	.globl gMonStillFrontPic_Relicanth
gMonStillFrontPic_Relicanth:
	.incbin "build/graphics/pokemon/relicanth/still_front.4bpp.lz"
  .globl gMonPalette_Relicanth
gMonPalette_Relicanth:
  .incbin "build/graphics/pokemon/relicanth/normal_palette.gbapal.lz"

  .globl gMonBackPic_Relicanth
gMonBackPic_Relicanth:
  .incbin "build/graphics/pokemon/relicanth/back.4bpp.lz"

  .globl gMonShinyPalette_Relicanth
gMonShinyPalette_Relicanth:
  .incbin "build/graphics/pokemon/relicanth/shiny_palette.gbapal.lz"

  .globl gMonIcon_Relicanth
gMonIcon_Relicanth: @ 0x08D25748 [381]
  .incbin "build/graphics/pokemon/relicanth/icon.4bpp"
	@ analyzed canonical ROM range 0x08D25B48-0x08D25D4F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Relicanth
gMonFootprint_Relicanth:
	.incbin "build/graphics/pokemon/relicanth/footprint.1bpp"
	.globl gMonStillFrontPic_Aron
gMonStillFrontPic_Aron:
	.incbin "build/graphics/pokemon/aron/still_front.4bpp.lz"
  .globl gMonPalette_Aron
gMonPalette_Aron:
  .incbin "build/graphics/pokemon/aron/normal_palette.gbapal.lz"

  .globl gMonBackPic_Aron
gMonBackPic_Aron:
  .incbin "build/graphics/pokemon/aron/back.4bpp.lz"

  .globl gMonShinyPalette_Aron
gMonShinyPalette_Aron:
  .incbin "build/graphics/pokemon/aron/shiny_palette.gbapal.lz"

  .globl gMonIcon_Aron
gMonIcon_Aron: @ 0x08D25FC8 [382]
  .incbin "build/graphics/pokemon/aron/icon.4bpp"
	@ analyzed canonical ROM range 0x08D263C8-0x08D267B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Aron
gMonFootprint_Aron:
	.incbin "build/graphics/pokemon/aron/footprint.1bpp"
	.globl gMonStillFrontPic_Lairon
gMonStillFrontPic_Lairon:
	.incbin "build/graphics/pokemon/lairon/still_front.4bpp.lz"
  .globl gMonPalette_Lairon
gMonPalette_Lairon:
  .incbin "build/graphics/pokemon/lairon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lairon
gMonBackPic_Lairon:
  .incbin "build/graphics/pokemon/lairon/back.4bpp.lz"

  .globl gMonShinyPalette_Lairon
gMonShinyPalette_Lairon:
  .incbin "build/graphics/pokemon/lairon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lairon
gMonIcon_Lairon: @ 0x08D26AF0 [383]
  .incbin "build/graphics/pokemon/lairon/icon.4bpp"
	@ analyzed canonical ROM range 0x08D26EF0-0x08D2748B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Lairon
gMonFootprint_Lairon:
	.incbin "build/graphics/pokemon/lairon/footprint.1bpp"
	.globl gMonStillFrontPic_Aggron
gMonStillFrontPic_Aggron:
	.incbin "build/graphics/pokemon/aggron/still_front.4bpp.lz"
  .globl gMonPalette_Aggron
gMonPalette_Aggron:
  .incbin "build/graphics/pokemon/aggron/normal_palette.gbapal.lz"

  .globl gMonBackPic_Aggron
gMonBackPic_Aggron:
  .incbin "build/graphics/pokemon/aggron/back.4bpp.lz"

  .globl gMonShinyPalette_Aggron
gMonShinyPalette_Aggron:
  .incbin "build/graphics/pokemon/aggron/shiny_palette.gbapal.lz"

  .globl gMonIcon_Aggron
gMonIcon_Aggron: @ 0x08D27904 [384]
  .incbin "build/graphics/pokemon/aggron/icon.4bpp"
	@ analyzed canonical ROM range 0x08D27D04-0x08D287AB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Aggron
gMonFootprint_Aggron:
	.incbin "build/graphics/pokemon/aggron/footprint.1bpp"
	.globl gMonStillFrontPic_CastformNormal
gMonStillFrontPic_CastformNormal:
	.incbin "build/graphics/pokemon/castform_normal/still_front.4bpp.lz"
  .globl gMonPalette_CastformNormal
gMonPalette_CastformNormal:
  .incbin "build/graphics/pokemon/castform_normal/normal_palette.gbapal.lz"
  .space 0x3, 0x00

  .globl gMonBackPic_CastformNormal
gMonBackPic_CastformNormal:
  .incbin "build/graphics/pokemon/castform_normal/back.4bpp.lz"

  .globl gMonShinyPalette_CastformNormal
gMonShinyPalette_CastformNormal:
  .incbin "build/graphics/pokemon/castform_normal/shiny_palette.gbapal.lz"
 
	.globl gMonIcon_CastformNormal
gMonIcon_CastformNormal: @ 0x08D29264 [385]
  .incbin "build/graphics/pokemon/castform_normal/icon.4bpp"
	@ analyzed canonical ROM range 0x08D29664-0x08D29A13
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_CastformNormal
gMonFootprint_CastformNormal:
	.incbin "build/graphics/pokemon/castform_normal/footprint.1bpp"
	.globl gMonStillFrontPic_Volbeat
gMonStillFrontPic_Volbeat:
	.incbin "build/graphics/pokemon/volbeat/still_front.4bpp.lz"
  .globl gMonPalette_Volbeat
gMonPalette_Volbeat:
  .incbin "build/graphics/pokemon/volbeat/normal_palette.gbapal.lz"

  .globl gMonBackPic_Volbeat
gMonBackPic_Volbeat:
  .incbin "build/graphics/pokemon/volbeat/back.4bpp.lz"

  .globl gMonShinyPalette_Volbeat
gMonShinyPalette_Volbeat:
  .incbin "build/graphics/pokemon/volbeat/shiny_palette.gbapal.lz"

  .globl gMonIcon_Volbeat
gMonIcon_Volbeat: @ 0x08D29DC4 [386]
  .incbin "build/graphics/pokemon/volbeat/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2A1C4-0x08D2A557
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Volbeat
gMonFootprint_Volbeat:
	.incbin "build/graphics/pokemon/volbeat/footprint.1bpp"
	.globl gMonStillFrontPic_Illumise
gMonStillFrontPic_Illumise:
	.incbin "build/graphics/pokemon/illumise/still_front.4bpp.lz"
  .globl gMonPalette_Illumise
gMonPalette_Illumise:
  .incbin "build/graphics/pokemon/illumise/normal_palette.gbapal.lz"

  .globl gMonBackPic_Illumise
gMonBackPic_Illumise:
  .incbin "build/graphics/pokemon/illumise/back.4bpp.lz"

  .globl gMonShinyPalette_Illumise
gMonShinyPalette_Illumise:
  .incbin "build/graphics/pokemon/illumise/shiny_palette.gbapal.lz"

  .globl gMonIcon_Illumise
gMonIcon_Illumise: @ 0x08D2A8C4 [387]
  .incbin "build/graphics/pokemon/illumise/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2ACC4-0x08D2B027
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Illumise
gMonFootprint_Illumise:
	.incbin "build/graphics/pokemon/illumise/footprint.1bpp"
	.globl gMonStillFrontPic_Lileep
gMonStillFrontPic_Lileep:
	.incbin "build/graphics/pokemon/lileep/still_front.4bpp.lz"
  .globl gMonPalette_Lileep
gMonPalette_Lileep:
  .incbin "build/graphics/pokemon/lileep/normal_palette.gbapal.lz"

  .globl gMonBackPic_Lileep
gMonBackPic_Lileep:
  .incbin "build/graphics/pokemon/lileep/back.4bpp.lz"

  .globl gMonShinyPalette_Lileep
gMonShinyPalette_Lileep:
  .incbin "build/graphics/pokemon/lileep/shiny_palette.gbapal.lz"

  .globl gMonIcon_Lileep
gMonIcon_Lileep: @ 0x08D2B3BC [388]
  .incbin "build/graphics/pokemon/lileep/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2B7BC-0x08D2BBF7
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Lileep
gMonFootprint_Lileep:
	.incbin "build/graphics/pokemon/lileep/footprint.1bpp"
	.globl gMonStillFrontPic_Cradily
gMonStillFrontPic_Cradily:
	.incbin "build/graphics/pokemon/cradily/still_front.4bpp.lz"
  .globl gMonPalette_Cradily
gMonPalette_Cradily:
  .incbin "build/graphics/pokemon/cradily/normal_palette.gbapal.lz"

  .globl gMonBackPic_Cradily
gMonBackPic_Cradily:
  .incbin "build/graphics/pokemon/cradily/back.4bpp.lz"

  .globl gMonShinyPalette_Cradily
gMonShinyPalette_Cradily:
  .incbin "build/graphics/pokemon/cradily/shiny_palette.gbapal.lz"

  .globl gMonIcon_Cradily
gMonIcon_Cradily: @ 0x08D2C044 [389]
  .incbin "build/graphics/pokemon/cradily/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2C444-0x08D2C787
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Cradily
gMonFootprint_Cradily:
	.incbin "build/graphics/pokemon/cradily/footprint.1bpp"
	.globl gMonStillFrontPic_Anorith
gMonStillFrontPic_Anorith:
	.incbin "build/graphics/pokemon/anorith/still_front.4bpp.lz"
  .globl gMonPalette_Anorith
gMonPalette_Anorith:
  .incbin "build/graphics/pokemon/anorith/normal_palette.gbapal.lz"

  .globl gMonBackPic_Anorith
gMonBackPic_Anorith:
  .incbin "build/graphics/pokemon/anorith/back.4bpp.lz"

  .globl gMonShinyPalette_Anorith
gMonShinyPalette_Anorith:
  .incbin "build/graphics/pokemon/anorith/shiny_palette.gbapal.lz"

  .globl gMonIcon_Anorith
gMonIcon_Anorith: @ 0x08D2CA20 [390]
  .incbin "build/graphics/pokemon/anorith/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2CE20-0x08D2D3BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Anorith
gMonFootprint_Anorith:
	.incbin "build/graphics/pokemon/anorith/footprint.1bpp"
	.globl gMonStillFrontPic_Armaldo
gMonStillFrontPic_Armaldo:
	.incbin "build/graphics/pokemon/armaldo/still_front.4bpp.lz"
  .globl gMonPalette_Armaldo
gMonPalette_Armaldo:
  .incbin "build/graphics/pokemon/armaldo/normal_palette.gbapal.lz"

  .globl gMonBackPic_Armaldo
gMonBackPic_Armaldo:
  .incbin "build/graphics/pokemon/armaldo/back.4bpp.lz"

  .globl gMonShinyPalette_Armaldo
gMonShinyPalette_Armaldo:
  .incbin "build/graphics/pokemon/armaldo/shiny_palette.gbapal.lz"

  .globl gMonIcon_Armaldo
gMonIcon_Armaldo: @ 0x08D2D848 [391]
  .incbin "build/graphics/pokemon/armaldo/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2DC48-0x08D2DE97
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Armaldo
gMonFootprint_Armaldo:
	.incbin "build/graphics/pokemon/armaldo/footprint.1bpp"
	.globl gMonStillFrontPic_Ralts
gMonStillFrontPic_Ralts:
	.incbin "build/graphics/pokemon/ralts/still_front.4bpp.lz"
  .globl gMonPalette_Ralts
gMonPalette_Ralts:
  .incbin "build/graphics/pokemon/ralts/normal_palette.gbapal.lz"

  .globl gMonBackPic_Ralts
gMonBackPic_Ralts:
  .incbin "build/graphics/pokemon/ralts/back.4bpp.lz"

  .globl gMonShinyPalette_Ralts
gMonShinyPalette_Ralts:
  .incbin "build/graphics/pokemon/ralts/shiny_palette.gbapal.lz"

  .globl gMonIcon_Ralts
gMonIcon_Ralts: @ 0x08D2E124 [392]
  .incbin "build/graphics/pokemon/ralts/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2E524-0x08D2E83F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Ralts
gMonFootprint_Ralts:
	.incbin "build/graphics/pokemon/ralts/footprint.1bpp"
	.globl gMonStillFrontPic_Kirlia
gMonStillFrontPic_Kirlia:
	.incbin "build/graphics/pokemon/kirlia/still_front.4bpp.lz"
  .globl gMonPalette_Kirlia
gMonPalette_Kirlia:
  .incbin "build/graphics/pokemon/kirlia/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kirlia
gMonBackPic_Kirlia:
  .incbin "build/graphics/pokemon/kirlia/back.4bpp.lz"

  .globl gMonShinyPalette_Kirlia
gMonShinyPalette_Kirlia:
  .incbin "build/graphics/pokemon/kirlia/shiny_palette.gbapal.lz"

  .globl gMonIcon_Kirlia
gMonIcon_Kirlia: @ 0x08D2EC04 [393]
  .incbin "build/graphics/pokemon/kirlia/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2F004-0x08D2F39F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kirlia
gMonFootprint_Kirlia:
	.incbin "build/graphics/pokemon/kirlia/footprint.1bpp"
	.globl gMonStillFrontPic_Gardevoir
gMonStillFrontPic_Gardevoir:
	.incbin "build/graphics/pokemon/gardevoir/still_front.4bpp.lz"
  .globl gMonPalette_Gardevoir
gMonPalette_Gardevoir:
  .incbin "build/graphics/pokemon/gardevoir/normal_palette.gbapal.lz"

  .globl gMonBackPic_Gardevoir
gMonBackPic_Gardevoir:
  .incbin "build/graphics/pokemon/gardevoir/back.4bpp.lz"

  .globl gMonShinyPalette_Gardevoir
gMonShinyPalette_Gardevoir:
  .incbin "build/graphics/pokemon/gardevoir/shiny_palette.gbapal.lz"

  .globl gMonIcon_Gardevoir
gMonIcon_Gardevoir: @ 0x08D2F724 [394]
  .incbin "build/graphics/pokemon/gardevoir/icon.4bpp"
	@ analyzed canonical ROM range 0x08D2FB24-0x08D2FDBB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Gardevoir
gMonFootprint_Gardevoir:
	.incbin "build/graphics/pokemon/gardevoir/footprint.1bpp"
	.globl gMonStillFrontPic_Bagon
gMonStillFrontPic_Bagon:
	.incbin "build/graphics/pokemon/bagon/still_front.4bpp.lz"
  .globl gMonPalette_Bagon
gMonPalette_Bagon:
  .incbin "build/graphics/pokemon/bagon/normal_palette.gbapal.lz"
  .space 0x1, 0x00

  .globl gMonBackPic_Bagon
gMonBackPic_Bagon:
  .incbin "build/graphics/pokemon/bagon/back.4bpp.lz"

  .globl gMonShinyPalette_Bagon
gMonShinyPalette_Bagon:
  .incbin "build/graphics/pokemon/bagon/shiny_palette.gbapal.lz"

  .space 0x1, 0x00
	.globl gMonIcon_Bagon
gMonIcon_Bagon: @ 0x08D300F4 [395]
  .incbin "build/graphics/pokemon/bagon/icon.4bpp"
	@ analyzed canonical ROM range 0x08D304F4-0x08D30817
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Bagon
gMonFootprint_Bagon:
	.incbin "build/graphics/pokemon/bagon/footprint.1bpp"
	.globl gMonStillFrontPic_Shelgon
gMonStillFrontPic_Shelgon:
	.incbin "build/graphics/pokemon/shelgon/still_front.4bpp.lz"
  .globl gMonPalette_Shelgon
gMonPalette_Shelgon:
  .incbin "build/graphics/pokemon/shelgon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Shelgon
gMonBackPic_Shelgon:
  .incbin "build/graphics/pokemon/shelgon/back.4bpp.lz"

  .globl gMonShinyPalette_Shelgon
gMonShinyPalette_Shelgon:
  .incbin "build/graphics/pokemon/shelgon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Shelgon
gMonIcon_Shelgon: @ 0x08D30B50 [396]
  .incbin "build/graphics/pokemon/shelgon/icon.4bpp"
	@ analyzed canonical ROM range 0x08D30F50-0x08D313D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Shelgon
gMonFootprint_Shelgon:
	.incbin "build/graphics/pokemon/shelgon/footprint.1bpp"
	.globl gMonStillFrontPic_Salamence
gMonStillFrontPic_Salamence:
	.incbin "build/graphics/pokemon/salamence/still_front.4bpp.lz"
  .globl gMonPalette_Salamence
gMonPalette_Salamence:
  .incbin "build/graphics/pokemon/salamence/normal_palette.gbapal.lz"

  .globl gMonBackPic_Salamence
gMonBackPic_Salamence:
  .incbin "build/graphics/pokemon/salamence/back.4bpp.lz"

  .globl gMonShinyPalette_Salamence
gMonShinyPalette_Salamence:
  .incbin "build/graphics/pokemon/salamence/shiny_palette.gbapal.lz"

  .globl gMonIcon_Salamence
gMonIcon_Salamence: @ 0x08D31708 [397]
  .incbin "build/graphics/pokemon/salamence/icon.4bpp"
	@ analyzed canonical ROM range 0x08D31B08-0x08D31D97
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Salamence
gMonFootprint_Salamence:
	.incbin "build/graphics/pokemon/salamence/footprint.1bpp"
	.globl gMonStillFrontPic_Beldum
gMonStillFrontPic_Beldum:
	.incbin "build/graphics/pokemon/beldum/still_front.4bpp.lz"
  .globl gMonPalette_Beldum
gMonPalette_Beldum:
  .incbin "build/graphics/pokemon/beldum/normal_palette.gbapal.lz"

  .globl gMonBackPic_Beldum
gMonBackPic_Beldum:
  .incbin "build/graphics/pokemon/beldum/back.4bpp.lz"

  .globl gMonShinyPalette_Beldum
gMonShinyPalette_Beldum:
  .incbin "build/graphics/pokemon/beldum/shiny_palette.gbapal.lz"

  .globl gMonIcon_Beldum
gMonIcon_Beldum: @ 0x08D320D8 [398]
  .incbin "build/graphics/pokemon/beldum/icon.4bpp"
	@ analyzed canonical ROM range 0x08D324D8-0x08D32953
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Beldum
gMonFootprint_Beldum:
	.incbin "build/graphics/pokemon/beldum/footprint.1bpp"
	.globl gMonStillFrontPic_Metang
gMonStillFrontPic_Metang:
	.incbin "build/graphics/pokemon/metang/still_front.4bpp.lz"
  .globl gMonPalette_Metang
gMonPalette_Metang:
  .incbin "build/graphics/pokemon/metang/normal_palette.gbapal.lz"

  .globl gMonBackPic_Metang
gMonBackPic_Metang:
  .incbin "build/graphics/pokemon/metang/back.4bpp.lz"

  .globl gMonShinyPalette_Metang
gMonShinyPalette_Metang:
  .incbin "build/graphics/pokemon/metang/shiny_palette.gbapal.lz"

  .globl gMonIcon_Metang
gMonIcon_Metang: @ 0x08D32CC8 [399]
  .incbin "build/graphics/pokemon/metang/icon.4bpp"
	@ analyzed canonical ROM range 0x08D330C8-0x08D3354B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Metang
gMonFootprint_Metang:
	.incbin "build/graphics/pokemon/metang/footprint.1bpp"
	.globl gMonStillFrontPic_Metagross
gMonStillFrontPic_Metagross:
	.incbin "build/graphics/pokemon/metagross/still_front.4bpp.lz"
  .globl gMonPalette_Metagross
gMonPalette_Metagross:
  .incbin "build/graphics/pokemon/metagross/normal_palette.gbapal.lz"

  .globl gMonBackPic_Metagross
gMonBackPic_Metagross:
  .incbin "build/graphics/pokemon/metagross/back.4bpp.lz"

  .globl gMonShinyPalette_Metagross
gMonShinyPalette_Metagross:
  .incbin "build/graphics/pokemon/metagross/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 12

  .globl gMonIcon_Metagross
gMonIcon_Metagross: @ 0x08D33868 [400]
  .incbin "build/graphics/pokemon/metagross/icon.4bpp"
	@ analyzed canonical ROM range 0x08D33C68-0x08D34143
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Metagross
gMonFootprint_Metagross:
	.incbin "build/graphics/pokemon/metagross/footprint.1bpp"
	.globl gMonStillFrontPic_Regirock
gMonStillFrontPic_Regirock:
	.incbin "build/graphics/pokemon/regirock/still_front.4bpp.lz"
  .globl gMonPalette_Regirock
gMonPalette_Regirock:
  .incbin "build/graphics/pokemon/regirock/normal_palette.gbapal.lz"

  .globl gMonBackPic_Regirock
gMonBackPic_Regirock:
  .incbin "build/graphics/pokemon/regirock/back.4bpp.lz"

  .globl gMonShinyPalette_Regirock
gMonShinyPalette_Regirock:
  .incbin "build/graphics/pokemon/regirock/shiny_palette.gbapal.lz"

  .globl gMonIcon_Regirock
gMonIcon_Regirock: @ 0x08D345E0 [401]
  .incbin "build/graphics/pokemon/regirock/icon.4bpp"
	@ analyzed canonical ROM range 0x08D349E0-0x08D34E47
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Regirock
gMonFootprint_Regirock:
	.incbin "build/graphics/pokemon/regirock/footprint.1bpp"
	.globl gMonStillFrontPic_Regice
gMonStillFrontPic_Regice:
	.incbin "build/graphics/pokemon/regice/still_front.4bpp.lz"
  .globl gMonPalette_Regice
gMonPalette_Regice:
  .incbin "build/graphics/pokemon/regice/normal_palette.gbapal.lz"
  .space 0x2, 0x00

  .globl gMonBackPic_Regice
gMonBackPic_Regice:
  .incbin "build/graphics/pokemon/regice/back.4bpp.lz"

  .globl gMonShinyPalette_Regice
gMonShinyPalette_Regice:
  .incbin "build/graphics/pokemon/regice/shiny_palette.gbapal.lz"
  .space 0x2, 0x00

	.globl gMonIcon_Regice
gMonIcon_Regice: @ 0x08D35188 [402]
  .incbin "build/graphics/pokemon/regice/icon.4bpp"
	@ analyzed canonical ROM range 0x08D35588-0x08D35A2F
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Regice
gMonFootprint_Regice:
	.incbin "build/graphics/pokemon/regice/footprint.1bpp"
	.globl gMonStillFrontPic_Registeel
gMonStillFrontPic_Registeel:
	.incbin "build/graphics/pokemon/registeel/still_front.4bpp.lz"
  .globl gMonPalette_Registeel
gMonPalette_Registeel:
  .incbin "build/graphics/pokemon/registeel/normal_palette.gbapal.lz"

  .globl gMonBackPic_Registeel
gMonBackPic_Registeel:
  .incbin "build/graphics/pokemon/registeel/back.4bpp.lz"

  .globl gMonShinyPalette_Registeel
gMonShinyPalette_Registeel:
  .incbin "build/graphics/pokemon/registeel/shiny_palette.gbapal.lz"

  .globl gMonIcon_Registeel
gMonIcon_Registeel: @ 0x08D35DB8 [403]
  .incbin "build/graphics/pokemon/registeel/icon.4bpp"
	@ analyzed canonical ROM range 0x08D361B8-0x08D36647
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Registeel
gMonFootprint_Registeel:
	.incbin "build/graphics/pokemon/registeel/footprint.1bpp"
	.globl gMonStillFrontPic_Kyogre
gMonStillFrontPic_Kyogre:
	.incbin "build/graphics/pokemon/kyogre/still_front.4bpp.lz"
  .globl gMonPalette_Kyogre
gMonPalette_Kyogre:
  .incbin "build/graphics/pokemon/kyogre/normal_palette.gbapal.lz"

  .globl gMonBackPic_Kyogre
gMonBackPic_Kyogre:
  .incbin "build/graphics/pokemon/kyogre/back.4bpp.lz"

  .globl gMonShinyPalette_Kyogre
gMonShinyPalette_Kyogre:
  .incbin "build/graphics/pokemon/kyogre/shiny_palette.gbapal.lz"

  .globl gMonIcon_Kyogre
gMonIcon_Kyogre: @ 0x08D36910 [404]
  .incbin "build/graphics/pokemon/kyogre/icon.4bpp"
	@ analyzed canonical ROM range 0x08D36D10-0x08D372C3
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Kyogre
gMonFootprint_Kyogre:
	.incbin "build/graphics/pokemon/kyogre/footprint.1bpp"
	.globl gMonStillFrontPic_Groudon
gMonStillFrontPic_Groudon:
	.incbin "build/graphics/pokemon/groudon/still_front.4bpp.lz"
  .globl gMonPalette_Groudon
gMonPalette_Groudon:
  .incbin "build/graphics/pokemon/groudon/normal_palette.gbapal.lz"

  .globl gMonBackPic_Groudon
gMonBackPic_Groudon:
  .incbin "build/graphics/pokemon/groudon/back.4bpp.lz"

  .globl gMonShinyPalette_Groudon
gMonShinyPalette_Groudon:
  .incbin "build/graphics/pokemon/groudon/shiny_palette.gbapal.lz"

  .globl gMonIcon_Groudon
gMonIcon_Groudon: @ 0x08D3777C [405]
  .incbin "build/graphics/pokemon/groudon/icon.4bpp"
	@ analyzed canonical ROM range 0x08D37B7C-0x08D38387
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Groudon
gMonFootprint_Groudon:
	.incbin "build/graphics/pokemon/groudon/footprint.1bpp"
	.globl gMonStillFrontPic_Rayquaza
gMonStillFrontPic_Rayquaza:
	.incbin "build/graphics/pokemon/rayquaza/still_front.4bpp.lz"
  .globl gMonPalette_Rayquaza
gMonPalette_Rayquaza:
  .incbin "build/graphics/pokemon/rayquaza/normal_palette.gbapal.lz"

  .globl gMonBackPic_Rayquaza
gMonBackPic_Rayquaza:
  .incbin "build/graphics/pokemon/rayquaza/back.4bpp.lz"

  .globl gMonShinyPalette_Rayquaza
gMonShinyPalette_Rayquaza:
  .incbin "build/graphics/pokemon/rayquaza/shiny_palette.gbapal.lz"

  .globl gMonIcon_Rayquaza
gMonIcon_Rayquaza: @ 0x08D38710 [406]
  .incbin "build/graphics/pokemon/rayquaza/icon.4bpp"
	@ analyzed canonical ROM range 0x08D38B10-0x08D38F53
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Rayquaza
gMonFootprint_Rayquaza:
	.incbin "build/graphics/pokemon/rayquaza/footprint.1bpp"
	.globl gMonStillFrontPic_Latias
gMonStillFrontPic_Latias:
	.incbin "build/graphics/pokemon/latias/still_front.4bpp.lz"
  .globl gMonPalette_Latias
gMonPalette_Latias:
  .incbin "build/graphics/pokemon/latias/normal_palette.gbapal.lz"

  .globl gMonBackPic_Latias
gMonBackPic_Latias:
  .incbin "build/graphics/pokemon/latias/back.4bpp.lz"

  .globl gMonShinyPalette_Latias
gMonShinyPalette_Latias:
  .incbin "build/graphics/pokemon/latias/shiny_palette.gbapal.lz"

  .globl gMonIcon_Latias
gMonIcon_Latias: @ 0x08D392A0 [407]
  .incbin "build/graphics/pokemon/latias/icon.4bpp"
	@ analyzed canonical ROM range 0x08D396A0-0x08D39B13
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Latias
gMonFootprint_Latias:
	.incbin "build/graphics/pokemon/latias/footprint.1bpp"
	.globl gMonStillFrontPic_Latios
gMonStillFrontPic_Latios:
	.incbin "build/graphics/pokemon/latios/still_front.4bpp.lz"
  .globl gMonPalette_Latios
gMonPalette_Latios:
  .incbin "build/graphics/pokemon/latios/normal_palette.gbapal.lz"

  .globl gMonBackPic_Latios
gMonBackPic_Latios:
  .incbin "build/graphics/pokemon/latios/back.4bpp.lz"

  .globl gMonShinyPalette_Latios
gMonShinyPalette_Latios:
  .incbin "build/graphics/pokemon/latios/shiny_palette.gbapal.lz"

  .globl gMonIcon_Latios
gMonIcon_Latios: @ 0x08D39EC4 [408]
  .incbin "build/graphics/pokemon/latios/icon.4bpp"
	@ analyzed canonical ROM range 0x08D3A2C4-0x08D3A5EF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Latios
gMonFootprint_Latios:
	.incbin "build/graphics/pokemon/latios/footprint.1bpp"
	.globl gMonStillFrontPic_Jirachi
gMonStillFrontPic_Jirachi:
	.incbin "build/graphics/pokemon/jirachi/still_front.4bpp.lz"
  .globl gMonPalette_Jirachi
gMonPalette_Jirachi:
  .incbin "build/graphics/pokemon/jirachi/normal_palette.gbapal.lz"

  .globl gMonBackPic_Jirachi
gMonBackPic_Jirachi:
  .incbin "build/graphics/pokemon/jirachi/back.4bpp.lz"

  .globl gMonShinyPalette_Jirachi
gMonShinyPalette_Jirachi:
  .incbin "build/graphics/pokemon/jirachi/shiny_palette.gbapal.lz"

  .globl gMonIcon_Jirachi
gMonIcon_Jirachi: @ 0x08D3A9E0 [409]
  .incbin "build/graphics/pokemon/jirachi/icon.4bpp"
	@ analyzed canonical ROM range 0x08D3ADE0-0x08D3B1DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.globl gMonFootprint_Jirachi
gMonFootprint_Jirachi:
	.incbin "build/graphics/pokemon/jirachi/footprint.1bpp"
	.globl gMonStillFrontPic_DeoxysNormal
gMonStillFrontPic_DeoxysNormal:
	.incbin "build/graphics/pokemon/deoxys_normal/still_front.4bpp.lz"
  .globl gMonPalette_DeoxysNormal
gMonPalette_DeoxysNormal:
  .incbin "build/graphics/pokemon/deoxys_normal/normal_palette.gbapal.lz"

  .globl gMonBackPic_DeoxysNormal
gMonBackPic_DeoxysNormal:
  .incbin "build/graphics/pokemon/deoxys_normal/back.4bpp.lz"

  .globl gMonShinyPalette_DeoxysNormal
gMonShinyPalette_DeoxysNormal:
  .incbin "build/graphics/pokemon/deoxys_normal/shiny_palette.gbapal.lz"
.elseif .L__inc_fragment_select_a13e2e144708 == 13

  .globl gMonPalette_Chimecho
gMonPalette_Chimecho:
  .incbin "build/graphics/pokemon/chimecho/normal_palette.gbapal.lz"

  .globl gMonBackPic_Chimecho
gMonBackPic_Chimecho:
  .incbin "build/graphics/pokemon/chimecho/back.4bpp.lz"

  .globl gMonShinyPalette_Chimecho
gMonShinyPalette_Chimecho:
  .incbin "build/graphics/pokemon/chimecho/shiny_palette.gbapal.lz"

  .globl gMonIcon_Chimecho
gMonIcon_Chimecho: @ 0x08D441CC [411]
  .incbin "build/graphics/pokemon/chimecho/icon.4bpp"
  .space 0x20, 0x00

  .globl gMonBackPic_Egg
gMonBackPic_Egg:
  .incbin "build/graphics/pokemon/egg/back.4bpp.lz"

  .globl gMonPalette_Egg
  .globl gMonShinyPalette_Egg
gMonPalette_Egg:
gMonShinyPalette_Egg:
	.globl gMonStillFrontPic_UnownB
	.set gMonStillFrontPic_UnownB, gMonShinyPalette_Egg + 0x20
	@ Semantic alias for compressed still-front sprite at 0x08D447C0.
	@ ANALYSIS: SEMANTIC_NUMERIC_MON_PALETTE_ASSET
  .incbin "build/graphics/pokemon/egg/shiny_palette.gbapal.lz"
 
  @ ANALYSIS: RAW_RANGE offset=0xD447BD, size=0x1DB
  .byte 0x00, 0x00, 0x00, 0x10, 0x00, 0x08, 0x00, 0x3F, 0x00, 0x00, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF4, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0x00, 0x01, 0x90, 0x40, 0x03, 0x89, 0x00, 0x00, 0x00, 0x60, 0x66, 0x00, 0x90, 0x96, 0x99, 0x00
  .byte 0x00, 0x89, 0x44, 0x87, 0x90, 0x48, 0x77, 0x88, 0x89, 0x00, 0x74, 0x98, 0x66, 0x48, 0x97, 0x49
  .byte 0x55, 0x47, 0x00, 0x98, 0x55, 0x55, 0x74, 0x49, 0x55, 0x69, 0x06, 0xC8, 0x00, 0x24, 0x10, 0x04
  .byte 0x88, 0x69, 0x00, 0x03, 0x98, 0x06, 0x00, 0x40, 0x86, 0x00, 0x08, 0x64, 0x89, 0x98, 0x06, 0x55
  .byte 0x86, 0x0E, 0x98, 0x06, 0x57, 0x64, 0x10, 0x15, 0xF0, 0x01, 0x50, 0x01, 0x66, 0xFF, 0xF0, 0x12
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0x50, 0x01, 0x96, 0x00
  .byte 0xE3, 0x00, 0x86, 0x40, 0x03, 0x60, 0x40, 0x03, 0x60, 0x01, 0x87, 0x00, 0x59, 0x95, 0x65, 0x87
  .byte 0x56, 0x65, 0x86, 0x88, 0x00, 0x46, 0x75, 0x66, 0x88, 0x68, 0x55, 0x55, 0x89, 0x00, 0x98, 0x46
  .byte 0x55, 0x86, 0x88, 0x68, 0x66, 0x60, 0x00, 0x88, 0x88, 0x78, 0x00, 0x96, 0x88, 0x88, 0x56, 0x16
  .byte 0x65, 0x88, 0x79, 0x00, 0x03, 0x99, 0x10, 0xEB, 0x10, 0xF3, 0x64, 0x00, 0x79, 0x98, 0x06, 0x86
  .byte 0x87, 0x69, 0x00, 0x77, 0xAB, 0x01, 0x0B, 0x98, 0x00, 0xFD, 0x97, 0x01, 0x1B, 0x99, 0x00, 0x03
  .byte 0xF0, 0xEB, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xF0, 0x01, 0xC4, 0xF0, 0x01, 0x00, 0x01, 0x99, 0x00, 0x60, 0x01, 0xFB, 0x00, 0x60, 0x80
  .byte 0x00, 0x03, 0x66, 0x99, 0x00, 0x90, 0x88, 0x88, 0x00, 0x00, 0x89, 0x77, 0x88, 0x90, 0x48, 0x98
  .byte 0x69, 0x86, 0x07, 0x84, 0x09, 0x00, 0x86, 0x94, 0x31, 0xFB, 0x12, 0x03, 0x10, 0xDF, 0xE2, 0x00
  .byte 0xF2, 0x22, 0x07, 0x01, 0x06, 0x00, 0x60, 0x88, 0x00, 0x0C, 0x86, 0xFF, 0xF1, 0xFE, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xDD, 0xF0, 0x01, 0x02
  .byte 0xE6, 0x74, 0x30, 0xDF, 0xF1, 0xA2, 0x22, 0x1C, 0x97, 0x00, 0xC6, 0x50, 0x68, 0x30, 0x03, 0x96
  .byte 0x00, 0xD3, 0x60, 0x89, 0x68, 0x66, 0xA4, 0x00, 0x08, 0x78, 0x31, 0x17, 0x90, 0x66, 0x60, 0x1C
  .byte 0x76, 0x69, 0x1B, 0x00, 0x60, 0x78, 0x02, 0xFF, 0x01, 0xF0, 0x77, 0x00, 0xF6, 0x11, 0x17, 0x7F
  .byte 0x09, 0xF0, 0x4E, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xFF
  .byte 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0
  .byte 0x01, 0xFF, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01, 0xF0, 0x01
  .byte 0xF0, 0x01, 0xE0, 0xF0, 0x01, 0xF0, 0x01, 0xE0, 0x01, 0x00, 0x00

  .globl gMonBackPic_UnownB
gMonBackPic_UnownB:
  .incbin "build/graphics/pokemon/unown_b/back.4bpp.lz"

  .globl gMonIcon_UnownB
gMonIcon_UnownB: @ 0x08D44B9C [413]
  .incbin "build/graphics/pokemon/unown_b/icon.4bpp"
	.globl gMonStillFrontPic_UnownC @ ROM 0x08D44F9C-0x08D451AF
	@ exact GBA LZ77 from editable graphics/pokemon/unown_c/still_front.png
gMonStillFrontPic_UnownC:
	.incbin "build/graphics/pokemon/unown_c/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownC) != 0x214
	.error "gMonStillFrontPic_UnownC compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownC
gMonBackPic_UnownC:
  .incbin "build/graphics/pokemon/unown_c/back.4bpp.lz"

  .globl gMonIcon_UnownC
gMonIcon_UnownC: @ 0x08D4545C [414]
  .incbin "build/graphics/pokemon/unown_c/icon.4bpp"
	.globl gMonStillFrontPic_UnownD @ ROM 0x08D4585C-0x08D45A53
	@ exact GBA LZ77 from editable graphics/pokemon/unown_d/still_front.png
gMonStillFrontPic_UnownD:
	.incbin "build/graphics/pokemon/unown_d/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownD) != 0x1F8
	.error "gMonStillFrontPic_UnownD compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownD
gMonBackPic_UnownD:
  .incbin "build/graphics/pokemon/unown_d/back.4bpp.lz"

  .globl gMonIcon_UnownD
gMonIcon_UnownD: @ 0x08D45CAC [415]
  .incbin "build/graphics/pokemon/unown_d/icon.4bpp"
	.globl gMonStillFrontPic_UnownE @ ROM 0x08D460AC-0x08D46263
	@ exact GBA LZ77 from editable graphics/pokemon/unown_e/still_front.png
gMonStillFrontPic_UnownE:
	.incbin "build/graphics/pokemon/unown_e/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownE) != 0x1B8
	.error "gMonStillFrontPic_UnownE compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownE
gMonBackPic_UnownE:
  .incbin "build/graphics/pokemon/unown_e/back.4bpp.lz"

  .globl gMonIcon_UnownE
gMonIcon_UnownE: @ 0x08D46464 [416]
  .incbin "build/graphics/pokemon/unown_e/icon.4bpp"
	.globl gMonStillFrontPic_UnownF @ ROM 0x08D46864-0x08D46A57
	@ exact GBA LZ77 from editable graphics/pokemon/unown_f/still_front.png
gMonStillFrontPic_UnownF:
	.incbin "build/graphics/pokemon/unown_f/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownF) != 0x1F4
	.error "gMonStillFrontPic_UnownF compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownF
gMonBackPic_UnownF:
  .incbin "build/graphics/pokemon/unown_f/back.4bpp.lz"

  .globl gMonIcon_UnownF
gMonIcon_UnownF: @ 0x08D46C74 [417]
  .incbin "build/graphics/pokemon/unown_f/icon.4bpp"
	.globl gMonStillFrontPic_UnownG @ ROM 0x08D47074-0x08D4724F
	@ exact GBA LZ77 from editable graphics/pokemon/unown_g/still_front.png
gMonStillFrontPic_UnownG:
	.incbin "build/graphics/pokemon/unown_g/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownG) != 0x1DC
	.error "gMonStillFrontPic_UnownG compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownG
gMonBackPic_UnownG:
  .incbin "build/graphics/pokemon/unown_g/back.4bpp.lz"

  .globl gMonIcon_UnownG
gMonIcon_UnownG: @ 0x08D4749C [418]
  .incbin "build/graphics/pokemon/unown_g/icon.4bpp"
	.globl gMonStillFrontPic_UnownH @ ROM 0x08D4789C-0x08D47ADF
	@ exact GBA LZ77 from editable graphics/pokemon/unown_h/still_front.png
gMonStillFrontPic_UnownH:
	.incbin "build/graphics/pokemon/unown_h/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownH) != 0x244
	.error "gMonStillFrontPic_UnownH compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownH
gMonBackPic_UnownH:
  .incbin "build/graphics/pokemon/unown_h/back.4bpp.lz"

  .globl gMonIcon_UnownH
gMonIcon_UnownH: @ 0x08D47DA4 [419]
  .incbin "build/graphics/pokemon/unown_h/icon.4bpp"
	.globl gMonStillFrontPic_UnownI @ ROM 0x08D481A4-0x08D4833B
	@ exact GBA LZ77 from editable graphics/pokemon/unown_i/still_front.png
gMonStillFrontPic_UnownI:
	.incbin "build/graphics/pokemon/unown_i/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownI) != 0x198
	.error "gMonStillFrontPic_UnownI compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownI
gMonBackPic_UnownI:
  .incbin "build/graphics/pokemon/unown_i/back.4bpp.lz"

  .globl gMonIcon_UnownI
gMonIcon_UnownI: @ 0x08D484E4 [420]
  .incbin "build/graphics/pokemon/unown_i/icon.4bpp"
	.globl gMonStillFrontPic_UnownJ @ ROM 0x08D488E4-0x08D48AA7
	@ exact GBA LZ77 from editable graphics/pokemon/unown_j/still_front.png
gMonStillFrontPic_UnownJ:
	.incbin "build/graphics/pokemon/unown_j/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownJ) != 0x1C4
	.error "gMonStillFrontPic_UnownJ compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownJ
gMonBackPic_UnownJ:
  .incbin "build/graphics/pokemon/unown_j/back.4bpp.lz"

  .globl gMonIcon_UnownJ
gMonIcon_UnownJ: @ 0x08D48C90 [421]
  .incbin "build/graphics/pokemon/unown_j/icon.4bpp"
	.globl gMonStillFrontPic_UnownK @ ROM 0x08D49090-0x08D4925F
	@ exact GBA LZ77 from editable graphics/pokemon/unown_k/still_front.png
gMonStillFrontPic_UnownK:
	.incbin "build/graphics/pokemon/unown_k/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownK) != 0x1D0
	.error "gMonStillFrontPic_UnownK compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownK
gMonBackPic_UnownK:
  .incbin "build/graphics/pokemon/unown_k/back.4bpp.lz"

  .globl gMonIcon_UnownK
gMonIcon_UnownK: @ 0x08D49458 [422]
  .incbin "build/graphics/pokemon/unown_k/icon.4bpp"
	.globl gMonStillFrontPic_UnownL @ ROM 0x08D49858-0x08D49A07
	@ exact GBA LZ77 from editable graphics/pokemon/unown_l/still_front.png
gMonStillFrontPic_UnownL:
	.incbin "build/graphics/pokemon/unown_l/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownL) != 0x1B0
	.error "gMonStillFrontPic_UnownL compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownL
gMonBackPic_UnownL:
  .incbin "build/graphics/pokemon/unown_l/back.4bpp.lz"

  .globl gMonIcon_UnownL
gMonIcon_UnownL: @ 0x08D49BDC [423]
  .incbin "build/graphics/pokemon/unown_l/icon.4bpp"
	.globl gMonStillFrontPic_UnownM @ ROM 0x08D49FDC-0x08D4A1FF
	@ exact GBA LZ77 from editable graphics/pokemon/unown_m/still_front.png
gMonStillFrontPic_UnownM:
	.incbin "build/graphics/pokemon/unown_m/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownM) != 0x224
	.error "gMonStillFrontPic_UnownM compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownM
gMonBackPic_UnownM:
  .incbin "build/graphics/pokemon/unown_m/back.4bpp.lz"

  .globl gMonIcon_UnownM
gMonIcon_UnownM: @ 0x08D4A4A8 [424]
  .incbin "build/graphics/pokemon/unown_m/icon.4bpp"
	.globl gMonStillFrontPic_UnownN @ ROM 0x08D4A8A8-0x08D4AA9F
	@ exact GBA LZ77 from editable graphics/pokemon/unown_n/still_front.png
gMonStillFrontPic_UnownN:
	.incbin "build/graphics/pokemon/unown_n/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownN) != 0x1F8
	.error "gMonStillFrontPic_UnownN compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownN
gMonBackPic_UnownN:
  .incbin "build/graphics/pokemon/unown_n/back.4bpp.lz"

  .globl gMonIcon_UnownN
gMonIcon_UnownN: @ 0x08D4AD0C [425]
  .incbin "build/graphics/pokemon/unown_n/icon.4bpp"
	.globl gMonStillFrontPic_UnownO @ ROM 0x08D4B10C-0x08D4B343
	@ exact GBA LZ77 from editable graphics/pokemon/unown_o/still_front.png
gMonStillFrontPic_UnownO:
	.incbin "build/graphics/pokemon/unown_o/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownO) != 0x238
	.error "gMonStillFrontPic_UnownO compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownO
gMonBackPic_UnownO:
  .incbin "build/graphics/pokemon/unown_o/back.4bpp.lz"

  .globl gMonIcon_UnownO
gMonIcon_UnownO: @ 0x08D4B604 [426]
  .incbin "build/graphics/pokemon/unown_o/icon.4bpp"
	.globl gMonStillFrontPic_UnownP @ ROM 0x08D4BA04-0x08D4BBA3
	@ exact GBA LZ77 from editable graphics/pokemon/unown_p/still_front.png
gMonStillFrontPic_UnownP:
	.incbin "build/graphics/pokemon/unown_p/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownP) != 0x1A0
	.error "gMonStillFrontPic_UnownP compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownP
gMonBackPic_UnownP:
  .incbin "build/graphics/pokemon/unown_p/back.4bpp.lz"

  .globl gMonIcon_UnownP
gMonIcon_UnownP: @ 0x08D4BD68 [427]
  .incbin "build/graphics/pokemon/unown_p/icon.4bpp"
	.globl gMonStillFrontPic_UnownQ @ ROM 0x08D4C168-0x08D4C31B
	@ exact GBA LZ77 from editable graphics/pokemon/unown_q/still_front.png
gMonStillFrontPic_UnownQ:
	.incbin "build/graphics/pokemon/unown_q/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownQ) != 0x1B4
	.error "gMonStillFrontPic_UnownQ compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownQ
gMonBackPic_UnownQ:
  .incbin "build/graphics/pokemon/unown_q/back.4bpp.lz"

  .globl gMonIcon_UnownQ
gMonIcon_UnownQ: @ 0x08D4C4E8 [428]
  .incbin "build/graphics/pokemon/unown_q/icon.4bpp"
	.globl gMonStillFrontPic_UnownR @ ROM 0x08D4C8E8-0x08D4CA8B
	@ exact GBA LZ77 from editable graphics/pokemon/unown_r/still_front.png
gMonStillFrontPic_UnownR:
	.incbin "build/graphics/pokemon/unown_r/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownR) != 0x1A4
	.error "gMonStillFrontPic_UnownR compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownR
gMonBackPic_UnownR:
  .incbin "build/graphics/pokemon/unown_r/back.4bpp.lz"

  .globl gMonIcon_UnownR
gMonIcon_UnownR: @ 0x08D4CC54 [429]
  .incbin "build/graphics/pokemon/unown_r/icon.4bpp"
	.globl gMonStillFrontPic_UnownS @ ROM 0x08D4D054-0x08D4D23B
	@ exact GBA LZ77 from editable graphics/pokemon/unown_s/still_front.png
gMonStillFrontPic_UnownS:
	.incbin "build/graphics/pokemon/unown_s/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownS) != 0x1E8
	.error "gMonStillFrontPic_UnownS compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownS
gMonBackPic_UnownS:
  .incbin "build/graphics/pokemon/unown_s/back.4bpp.lz"

  .globl gMonIcon_UnownS
gMonIcon_UnownS: @ 0x08D4D490 [430]
  .incbin "build/graphics/pokemon/unown_s/icon.4bpp"
	.globl gMonStillFrontPic_UnownT @ ROM 0x08D4D890-0x08D4DA3F
	@ exact GBA LZ77 from editable graphics/pokemon/unown_t/still_front.png
gMonStillFrontPic_UnownT:
	.incbin "build/graphics/pokemon/unown_t/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownT) != 0x1B0
	.error "gMonStillFrontPic_UnownT compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownT
gMonBackPic_UnownT:
  .incbin "build/graphics/pokemon/unown_t/back.4bpp.lz"

  .globl gMonIcon_UnownT
gMonIcon_UnownT: @ 0x08D4DBF4 [431]
  .incbin "build/graphics/pokemon/unown_t/icon.4bpp"
	.globl gMonStillFrontPic_UnownU @ ROM 0x08D4DFF4-0x08D4E20B
	@ exact GBA LZ77 from editable graphics/pokemon/unown_u/still_front.png
gMonStillFrontPic_UnownU:
	.incbin "build/graphics/pokemon/unown_u/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownU) != 0x218
	.error "gMonStillFrontPic_UnownU compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownU
gMonBackPic_UnownU:
  .incbin "build/graphics/pokemon/unown_u/back.4bpp.lz"

  .globl gMonIcon_UnownU
gMonIcon_UnownU: @ 0x08D4E460 [432]
  .incbin "build/graphics/pokemon/unown_u/icon.4bpp"
	.globl gMonStillFrontPic_UnownV @ ROM 0x08D4E860-0x08D4EA43
	@ exact GBA LZ77 from editable graphics/pokemon/unown_v/still_front.png
gMonStillFrontPic_UnownV:
	.incbin "build/graphics/pokemon/unown_v/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownV) != 0x1E4
	.error "gMonStillFrontPic_UnownV compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownV
gMonBackPic_UnownV:
  .incbin "build/graphics/pokemon/unown_v/back.4bpp.lz"

  .globl gMonIcon_UnownV
gMonIcon_UnownV: @ 0x08D4EC74 [433]
  .incbin "build/graphics/pokemon/unown_v/icon.4bpp"
	.globl gMonStillFrontPic_UnownW @ ROM 0x08D4F074-0x08D4F247
	@ exact GBA LZ77 from editable graphics/pokemon/unown_w/still_front.png
gMonStillFrontPic_UnownW:
	.incbin "build/graphics/pokemon/unown_w/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownW) != 0x1D4
	.error "gMonStillFrontPic_UnownW compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownW
gMonBackPic_UnownW:
  .incbin "build/graphics/pokemon/unown_w/back.4bpp.lz"

  .globl gMonIcon_UnownW
gMonIcon_UnownW: @ 0x08D4F44C [434]
  .incbin "build/graphics/pokemon/unown_w/icon.4bpp"
	.globl gMonStillFrontPic_UnownX @ ROM 0x08D4F84C-0x08D4FA0F
	@ exact GBA LZ77 from editable graphics/pokemon/unown_x/still_front.png
gMonStillFrontPic_UnownX:
	.incbin "build/graphics/pokemon/unown_x/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownX) != 0x1C4
	.error "gMonStillFrontPic_UnownX compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownX
gMonBackPic_UnownX:
  .incbin "build/graphics/pokemon/unown_x/back.4bpp.lz"

  .globl gMonIcon_UnownX
gMonIcon_UnownX: @ 0x08D4FC00 [435]
  .incbin "build/graphics/pokemon/unown_x/icon.4bpp"
	.globl gMonStillFrontPic_UnownY @ ROM 0x08D50000-0x08D501D7
	@ exact GBA LZ77 from editable graphics/pokemon/unown_y/still_front.png
gMonStillFrontPic_UnownY:
	.incbin "build/graphics/pokemon/unown_y/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownY) != 0x1D8
	.error "gMonStillFrontPic_UnownY compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownY
gMonBackPic_UnownY:
  .incbin "build/graphics/pokemon/unown_y/back.4bpp.lz"

  .globl gMonIcon_UnownY
gMonIcon_UnownY: @ 0x08D503CC [436]
  .incbin "build/graphics/pokemon/unown_y/icon.4bpp"
	.globl gMonStillFrontPic_UnownZ @ ROM 0x08D507CC-0x08D5097B
	@ exact GBA LZ77 from editable graphics/pokemon/unown_z/still_front.png
gMonStillFrontPic_UnownZ:
	.incbin "build/graphics/pokemon/unown_z/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownZ) != 0x1B0
	.error "gMonStillFrontPic_UnownZ compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownZ
gMonBackPic_UnownZ:
  .incbin "build/graphics/pokemon/unown_z/back.4bpp.lz"

  .globl gMonIcon_UnownZ
gMonIcon_UnownZ: @ 0x08D50B58 [437]
  .incbin "build/graphics/pokemon/unown_z/icon.4bpp"
	.globl gMonStillFrontPic_UnownExclamationMark @ ROM 0x08D50F58-0x08D510E7
	@ exact GBA LZ77 from editable graphics/pokemon/unown_emark/still_front.png
gMonStillFrontPic_UnownExclamationMark:
	.incbin "build/graphics/pokemon/unown_emark/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownExclamationMark) != 0x190
	.error "gMonStillFrontPic_UnownExclamationMark compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownEmark
gMonBackPic_UnownEmark:
  .incbin "build/graphics/pokemon/unown_emark/back.4bpp.lz"

  .globl gMonIcon_UnownEmark
gMonIcon_UnownEmark: @ 0x08D512B0 [438]
  .incbin "build/graphics/pokemon/unown_emark/icon.4bpp"
	.globl gMonStillFrontPic_UnownQuestionMark @ ROM 0x08D516B0-0x08D5186B
	@ exact GBA LZ77 from editable graphics/pokemon/unown_qmark/still_front.png
gMonStillFrontPic_UnownQuestionMark:
	.incbin "build/graphics/pokemon/unown_qmark/still_front.4bpp.lz"
	.if (. - gMonStillFrontPic_UnownQuestionMark) != 0x1BC
	.error "gMonStillFrontPic_UnownQuestionMark compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownQmark
gMonBackPic_UnownQmark:
  .incbin "build/graphics/pokemon/unown_qmark/back.4bpp.lz"
.endif
