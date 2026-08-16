
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
