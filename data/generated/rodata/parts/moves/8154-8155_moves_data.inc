
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
 
  @ Replaced baserom.gba range: offset=0xD447BD, size=0x1DB
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
	@ analyzed canonical ROM range 0x08D44F9C-0x08D451AF
sAnalyzedGfx_08D44F9C: @ 0x08D44F9C
	.incbin "build/graphics/analyzed/gmonicon_unownb_08d44f9c.4bpp.lz"
	.if (. - sAnalyzedGfx_08D44F9C) != 0x214
	.error "gMonIcon_UnownB compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownC
gMonBackPic_UnownC:
  .incbin "build/graphics/pokemon/unown_c/back.4bpp.lz"

  .globl gMonIcon_UnownC
gMonIcon_UnownC: @ 0x08D4545C [414]
  .incbin "build/graphics/pokemon/unown_c/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4585C-0x08D45A53
sAnalyzedGfx_08D4585C: @ 0x08D4585C
	.incbin "build/graphics/analyzed/gmonicon_unownc_08d4585c.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4585C) != 0x1F8
	.error "gMonIcon_UnownC compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownD
gMonBackPic_UnownD:
  .incbin "build/graphics/pokemon/unown_d/back.4bpp.lz"

  .globl gMonIcon_UnownD
gMonIcon_UnownD: @ 0x08D45CAC [415]
  .incbin "build/graphics/pokemon/unown_d/icon.4bpp"
	@ analyzed canonical ROM range 0x08D460AC-0x08D46263
sAnalyzedGfx_08D460AC: @ 0x08D460AC
	.incbin "build/graphics/analyzed/gmonicon_unownd_08d460ac.4bpp.lz"
	.if (. - sAnalyzedGfx_08D460AC) != 0x1B8
	.error "gMonIcon_UnownD compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownE
gMonBackPic_UnownE:
  .incbin "build/graphics/pokemon/unown_e/back.4bpp.lz"

  .globl gMonIcon_UnownE
gMonIcon_UnownE: @ 0x08D46464 [416]
  .incbin "build/graphics/pokemon/unown_e/icon.4bpp"
	@ analyzed canonical ROM range 0x08D46864-0x08D46A57
sAnalyzedGfx_08D46864: @ 0x08D46864
	.incbin "build/graphics/analyzed/gmonicon_unowne_08d46864.4bpp.lz"
	.if (. - sAnalyzedGfx_08D46864) != 0x1F4
	.error "gMonIcon_UnownE compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownF
gMonBackPic_UnownF:
  .incbin "build/graphics/pokemon/unown_f/back.4bpp.lz"

  .globl gMonIcon_UnownF
gMonIcon_UnownF: @ 0x08D46C74 [417]
  .incbin "build/graphics/pokemon/unown_f/icon.4bpp"
	@ analyzed canonical ROM range 0x08D47074-0x08D4724F
sAnalyzedGfx_08D47074: @ 0x08D47074
	.incbin "build/graphics/analyzed/gmonicon_unownf_08d47074.4bpp.lz"
	.if (. - sAnalyzedGfx_08D47074) != 0x1DC
	.error "gMonIcon_UnownF compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownG
gMonBackPic_UnownG:
  .incbin "build/graphics/pokemon/unown_g/back.4bpp.lz"

  .globl gMonIcon_UnownG
gMonIcon_UnownG: @ 0x08D4749C [418]
  .incbin "build/graphics/pokemon/unown_g/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4789C-0x08D47ADF
sAnalyzedGfx_08D4789C: @ 0x08D4789C
	.incbin "build/graphics/analyzed/gmonicon_unowng_08d4789c.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4789C) != 0x244
	.error "gMonIcon_UnownG compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownH
gMonBackPic_UnownH:
  .incbin "build/graphics/pokemon/unown_h/back.4bpp.lz"

  .globl gMonIcon_UnownH
gMonIcon_UnownH: @ 0x08D47DA4 [419]
  .incbin "build/graphics/pokemon/unown_h/icon.4bpp"
	@ analyzed canonical ROM range 0x08D481A4-0x08D4833B
sAnalyzedGfx_08D481A4: @ 0x08D481A4
	.incbin "build/graphics/analyzed/gmonicon_unownh_08d481a4.4bpp.lz"
	.if (. - sAnalyzedGfx_08D481A4) != 0x198
	.error "gMonIcon_UnownH compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownI
gMonBackPic_UnownI:
  .incbin "build/graphics/pokemon/unown_i/back.4bpp.lz"

  .globl gMonIcon_UnownI
gMonIcon_UnownI: @ 0x08D484E4 [420]
  .incbin "build/graphics/pokemon/unown_i/icon.4bpp"
	@ analyzed canonical ROM range 0x08D488E4-0x08D48AA7
sAnalyzedGfx_08D488E4: @ 0x08D488E4
	.incbin "build/graphics/analyzed/gmonicon_unowni_08d488e4.4bpp.lz"
	.if (. - sAnalyzedGfx_08D488E4) != 0x1C4
	.error "gMonIcon_UnownI compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownJ
gMonBackPic_UnownJ:
  .incbin "build/graphics/pokemon/unown_j/back.4bpp.lz"

  .globl gMonIcon_UnownJ
gMonIcon_UnownJ: @ 0x08D48C90 [421]
  .incbin "build/graphics/pokemon/unown_j/icon.4bpp"
	@ analyzed canonical ROM range 0x08D49090-0x08D4925F
sAnalyzedGfx_08D49090: @ 0x08D49090
	.incbin "build/graphics/analyzed/gmonicon_unownj_08d49090.4bpp.lz"
	.if (. - sAnalyzedGfx_08D49090) != 0x1D0
	.error "gMonIcon_UnownJ compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownK
gMonBackPic_UnownK:
  .incbin "build/graphics/pokemon/unown_k/back.4bpp.lz"

  .globl gMonIcon_UnownK
gMonIcon_UnownK: @ 0x08D49458 [422]
  .incbin "build/graphics/pokemon/unown_k/icon.4bpp"
	@ analyzed canonical ROM range 0x08D49858-0x08D49A07
sAnalyzedGfx_08D49858: @ 0x08D49858
	.incbin "build/graphics/analyzed/gmonicon_unownk_08d49858.4bpp.lz"
	.if (. - sAnalyzedGfx_08D49858) != 0x1B0
	.error "gMonIcon_UnownK compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownL
gMonBackPic_UnownL:
  .incbin "build/graphics/pokemon/unown_l/back.4bpp.lz"

  .globl gMonIcon_UnownL
gMonIcon_UnownL: @ 0x08D49BDC [423]
  .incbin "build/graphics/pokemon/unown_l/icon.4bpp"
	@ analyzed canonical ROM range 0x08D49FDC-0x08D4A1FF
sAnalyzedGfx_08D49FDC: @ 0x08D49FDC
	.incbin "build/graphics/analyzed/gmonicon_unownl_08d49fdc.4bpp.lz"
	.if (. - sAnalyzedGfx_08D49FDC) != 0x224
	.error "gMonIcon_UnownL compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownM
gMonBackPic_UnownM:
  .incbin "build/graphics/pokemon/unown_m/back.4bpp.lz"

  .globl gMonIcon_UnownM
gMonIcon_UnownM: @ 0x08D4A4A8 [424]
  .incbin "build/graphics/pokemon/unown_m/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4A8A8-0x08D4AA9F
sAnalyzedGfx_08D4A8A8: @ 0x08D4A8A8
	.incbin "build/graphics/analyzed/gmonicon_unownm_08d4a8a8.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4A8A8) != 0x1F8
	.error "gMonIcon_UnownM compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownN
gMonBackPic_UnownN:
  .incbin "build/graphics/pokemon/unown_n/back.4bpp.lz"

  .globl gMonIcon_UnownN
gMonIcon_UnownN: @ 0x08D4AD0C [425]
  .incbin "build/graphics/pokemon/unown_n/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4B10C-0x08D4B343
sAnalyzedGfx_08D4B10C: @ 0x08D4B10C
	.incbin "build/graphics/analyzed/gmonicon_unownn_08d4b10c.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4B10C) != 0x238
	.error "gMonIcon_UnownN compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownO
gMonBackPic_UnownO:
  .incbin "build/graphics/pokemon/unown_o/back.4bpp.lz"

  .globl gMonIcon_UnownO
gMonIcon_UnownO: @ 0x08D4B604 [426]
  .incbin "build/graphics/pokemon/unown_o/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4BA04-0x08D4BBA3
sAnalyzedGfx_08D4BA04: @ 0x08D4BA04
	.incbin "build/graphics/analyzed/gmonicon_unowno_08d4ba04.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4BA04) != 0x1A0
	.error "gMonIcon_UnownO compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownP
gMonBackPic_UnownP:
  .incbin "build/graphics/pokemon/unown_p/back.4bpp.lz"

  .globl gMonIcon_UnownP
gMonIcon_UnownP: @ 0x08D4BD68 [427]
  .incbin "build/graphics/pokemon/unown_p/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4C168-0x08D4C31B
sAnalyzedGfx_08D4C168: @ 0x08D4C168
	.incbin "build/graphics/analyzed/gmonicon_unownp_08d4c168.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4C168) != 0x1B4
	.error "gMonIcon_UnownP compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownQ
gMonBackPic_UnownQ:
  .incbin "build/graphics/pokemon/unown_q/back.4bpp.lz"

  .globl gMonIcon_UnownQ
gMonIcon_UnownQ: @ 0x08D4C4E8 [428]
  .incbin "build/graphics/pokemon/unown_q/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4C8E8-0x08D4CA8B
sAnalyzedGfx_08D4C8E8: @ 0x08D4C8E8
	.incbin "build/graphics/analyzed/gmonicon_unownq_08d4c8e8.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4C8E8) != 0x1A4
	.error "gMonIcon_UnownQ compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownR
gMonBackPic_UnownR:
  .incbin "build/graphics/pokemon/unown_r/back.4bpp.lz"

  .globl gMonIcon_UnownR
gMonIcon_UnownR: @ 0x08D4CC54 [429]
  .incbin "build/graphics/pokemon/unown_r/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4D054-0x08D4D23B
sAnalyzedGfx_08D4D054: @ 0x08D4D054
	.incbin "build/graphics/analyzed/gmonicon_unownr_08d4d054.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4D054) != 0x1E8
	.error "gMonIcon_UnownR compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownS
gMonBackPic_UnownS:
  .incbin "build/graphics/pokemon/unown_s/back.4bpp.lz"

  .globl gMonIcon_UnownS
gMonIcon_UnownS: @ 0x08D4D490 [430]
  .incbin "build/graphics/pokemon/unown_s/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4D890-0x08D4DA3F
sAnalyzedGfx_08D4D890: @ 0x08D4D890
	.incbin "build/graphics/analyzed/gmonicon_unowns_08d4d890.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4D890) != 0x1B0
	.error "gMonIcon_UnownS compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownT
gMonBackPic_UnownT:
  .incbin "build/graphics/pokemon/unown_t/back.4bpp.lz"

  .globl gMonIcon_UnownT
gMonIcon_UnownT: @ 0x08D4DBF4 [431]
  .incbin "build/graphics/pokemon/unown_t/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4DFF4-0x08D4E20B
sAnalyzedGfx_08D4DFF4: @ 0x08D4DFF4
	.incbin "build/graphics/analyzed/gmonicon_unownt_08d4dff4.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4DFF4) != 0x218
	.error "gMonIcon_UnownT compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownU
gMonBackPic_UnownU:
  .incbin "build/graphics/pokemon/unown_u/back.4bpp.lz"

  .globl gMonIcon_UnownU
gMonIcon_UnownU: @ 0x08D4E460 [432]
  .incbin "build/graphics/pokemon/unown_u/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4E860-0x08D4EA43
sAnalyzedGfx_08D4E860: @ 0x08D4E860
	.incbin "build/graphics/analyzed/gmonicon_unownu_08d4e860.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4E860) != 0x1E4
	.error "gMonIcon_UnownU compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownV
gMonBackPic_UnownV:
  .incbin "build/graphics/pokemon/unown_v/back.4bpp.lz"

  .globl gMonIcon_UnownV
gMonIcon_UnownV: @ 0x08D4EC74 [433]
  .incbin "build/graphics/pokemon/unown_v/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4F074-0x08D4F247
sAnalyzedGfx_08D4F074: @ 0x08D4F074
	.incbin "build/graphics/analyzed/gmonicon_unownv_08d4f074.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4F074) != 0x1D4
	.error "gMonIcon_UnownV compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownW
gMonBackPic_UnownW:
  .incbin "build/graphics/pokemon/unown_w/back.4bpp.lz"

  .globl gMonIcon_UnownW
gMonIcon_UnownW: @ 0x08D4F44C [434]
  .incbin "build/graphics/pokemon/unown_w/icon.4bpp"
	@ analyzed canonical ROM range 0x08D4F84C-0x08D4FA0F
sAnalyzedGfx_08D4F84C: @ 0x08D4F84C
	.incbin "build/graphics/analyzed/gmonicon_unownw_08d4f84c.4bpp.lz"
	.if (. - sAnalyzedGfx_08D4F84C) != 0x1C4
	.error "gMonIcon_UnownW compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownX
gMonBackPic_UnownX:
  .incbin "build/graphics/pokemon/unown_x/back.4bpp.lz"

  .globl gMonIcon_UnownX
gMonIcon_UnownX: @ 0x08D4FC00 [435]
  .incbin "build/graphics/pokemon/unown_x/icon.4bpp"
	@ analyzed canonical ROM range 0x08D50000-0x08D501D7
sAnalyzedGfx_08D50000: @ 0x08D50000
	.incbin "build/graphics/analyzed/gmonicon_unownx_08d50000.4bpp.lz"
	.if (. - sAnalyzedGfx_08D50000) != 0x1D8
	.error "gMonIcon_UnownX compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownY
gMonBackPic_UnownY:
  .incbin "build/graphics/pokemon/unown_y/back.4bpp.lz"

  .globl gMonIcon_UnownY
gMonIcon_UnownY: @ 0x08D503CC [436]
  .incbin "build/graphics/pokemon/unown_y/icon.4bpp"
	@ analyzed canonical ROM range 0x08D507CC-0x08D5097B
sAnalyzedGfx_08D507CC: @ 0x08D507CC
	.incbin "build/graphics/analyzed/gmonicon_unowny_08d507cc.4bpp.lz"
	.if (. - sAnalyzedGfx_08D507CC) != 0x1B0
	.error "gMonIcon_UnownY compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownZ
gMonBackPic_UnownZ:
  .incbin "build/graphics/pokemon/unown_z/back.4bpp.lz"

  .globl gMonIcon_UnownZ
gMonIcon_UnownZ: @ 0x08D50B58 [437]
  .incbin "build/graphics/pokemon/unown_z/icon.4bpp"
	@ analyzed canonical ROM range 0x08D50F58-0x08D510E7
sAnalyzedGfx_08D50F58: @ 0x08D50F58
	.incbin "build/graphics/analyzed/gmonicon_unownz_08d50f58.4bpp.lz"
	.if (. - sAnalyzedGfx_08D50F58) != 0x190
	.error "gMonIcon_UnownZ compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownEmark
gMonBackPic_UnownEmark:
  .incbin "build/graphics/pokemon/unown_emark/back.4bpp.lz"

  .globl gMonIcon_UnownEmark
gMonIcon_UnownEmark: @ 0x08D512B0 [438]
  .incbin "build/graphics/pokemon/unown_emark/icon.4bpp"
	@ analyzed canonical ROM range 0x08D516B0-0x08D5186B
sAnalyzedGfx_08D516B0: @ 0x08D516B0
	.incbin "build/graphics/analyzed/gmonicon_unownemark_08d516b0.4bpp.lz"
	.if (. - sAnalyzedGfx_08D516B0) != 0x1BC
	.error "gMonIcon_UnownEmark compressed size mismatch"
	.endif

  .globl gMonBackPic_UnownQmark
gMonBackPic_UnownQmark:
  .incbin "build/graphics/pokemon/unown_qmark/back.4bpp.lz"
