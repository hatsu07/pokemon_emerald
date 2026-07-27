	.include "data/starter_pokemon.inc"

	.globl gUnknown_8590C10
gUnknown_8590C10: @ 0x08590C10
	.incbin "baserom.gba", 0x590c10, 0xc
	.globl gUnknown_8590C1C
gUnknown_8590C1C: @ 0x08590C1C
	.incbin "baserom.gba", 0x590c1c, 0x1c
	.globl gUnknown_8590C38
gUnknown_8590C38: @ 0x08590C38
	.incbin "baserom.gba", 0x590c38, 0xa8
	.globl gUnknown_8590CE0
gUnknown_8590CE0: @ 0x08590CE0
	.incbin "baserom.gba", 0x590ce0, 0x8
	.globl gUnknown_8590CE8
gUnknown_8590CE8: @ 0x08590CE8
	.incbin "baserom.gba", 0x590ce8, 0x10
	.globl gUnknown_8590CF8
gUnknown_8590CF8: @ 0x08590CF8
	.incbin "baserom.gba", 0x590cf8, 0x10
	.globl gUnknown_8590D08
gUnknown_8590D08: @ 0x08590D08
	.incbin "baserom.gba", 0x590d08, 0x18
	.globl gUnknown_8590D20
gUnknown_8590D20: @ 0x08590D20
	.incbin "baserom.gba", 0x590d20, 0x18
	.globl gUnknown_8590D38
gUnknown_8590D38: @ 0x08590D38
	.incbin "baserom.gba", 0x590d38, 0x18
	.globl gUnknown_8590D50
gUnknown_8590D50: @ 0x08590D50
	.incbin "baserom.gba", 0x590d50, 0x18
	.globl gUnknown_8590D68
gUnknown_8590D68: @ 0x08590D68
	.incbin "baserom.gba", 0x590d68, 0x20
	.globl gUnknown_8590D88
gUnknown_8590D88: @ 0x08590D88
	.incbin "baserom.gba", 0x590d88, 0x20
	.globl gUnknown_8590DA8
gUnknown_8590DA8: @ 0x08590DA8
	.incbin "baserom.gba", 0x590da8, 0x2cc
	.globl gUnknown_8591074
gUnknown_8591074: @ 0x08591074
	.incbin "baserom.gba", 0x591074, 0x298
	.globl gUnknown_859130C
gUnknown_859130C: @ 0x0859130C
	.incbin "baserom.gba", 0x59130c, 0x8f8
	.globl gUnknown_8591C04
gUnknown_8591C04: @ 0x08591C04

	@ asm/wallclock.s:727 Task_SetClock3
	.globl gText_Rom_591C04
gText_Rom_591C04: @ 0x08591C04
	.string "この　じかんで　よろしいですか？$"
	.if (. - gText_Rom_591C04) > 0x11
	.error "gText_Rom_591C04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C04) < 0x11
	.space 0x11 - (. - gText_Rom_591C04)
	.endif
	.globl gUnknown_8591C15
gUnknown_8591C15: @ 0x08591C15

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_591C15
gText_Rom_591C15: @ 0x08591C15
	.string "けってい$"
	.if (. - gText_Rom_591C15) > 0x5
	.error "gText_Rom_591C15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C15) < 0x5
	.space 0x5 - (. - gText_Rom_591C15)
	.endif
	.globl gUnknown_8591C1A
gUnknown_8591C1A: @ 0x08591C1A

	@ asm/wallclock.s:530 CB2_ViewWallClock
	.globl gText_Rom_591C1A
gText_Rom_591C1A: @ 0x08591C1A
	.string "もどる　$"
	.if (. - gText_Rom_591C1A) > 0x5
	.error "gText_Rom_591C1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C1A) < 0x5
	.space 0x5 - (. - gText_Rom_591C1A)
	.endif
	.incbin "baserom.gba", 0x591c1f, 0x1
	.globl gUnknown_8591C20
gUnknown_8591C20: @ 0x08591C20
	.incbin "baserom.gba", 0x591c20, 0x8
	.globl gUnknown_8591C28
gUnknown_8591C28: @ 0x08591C28
	.incbin "baserom.gba", 0x591c28, 0x18
	.globl gUnknown_8591C40
gUnknown_8591C40: @ 0x08591C40
	.incbin "baserom.gba", 0x591c40, 0x8
	.globl gUnknown_8591C48
gUnknown_8591C48: @ 0x08591C48
	.incbin "baserom.gba", 0x591c48, 0xc
	.globl gUnknown_8591C54
gUnknown_8591C54: @ 0x08591C54
	.incbin "baserom.gba", 0x591c54, 0x10
	.globl gUnknown_8591C64
gUnknown_8591C64: @ 0x08591C64
	.incbin "baserom.gba", 0x591c64, 0x38
	.globl gUnknown_8591C9C
gUnknown_8591C9C: @ 0x08591C9C
	.incbin "baserom.gba", 0x591c9c, 0x18
	.globl gUnknown_8591CB4
gUnknown_8591CB4: @ 0x08591CB4
	.incbin "baserom.gba", 0x591cb4, 0x38
	.globl gUnknown_8591CEC
gUnknown_8591CEC: @ 0x08591CEC
	.incbin "baserom.gba", 0x591cec, 0x18
	.globl gUnknown_8591D04
gUnknown_8591D04: @ 0x08591D04
	.incbin "baserom.gba", 0x591d04, 0x18
	.globl gUnknown_8591D1C
gUnknown_8591D1C: @ 0x08591D1C
	.incbin "baserom.gba", 0x591d1c, 0x2d0
	.globl gUnknown_8591FEC
gUnknown_8591FEC: @ 0x08591FEC
	.incbin "baserom.gba", 0x591fec, 0x80
	.globl gUnknown_859206C
gUnknown_859206C: @ 0x0859206C
	.incbin "baserom.gba", 0x59206c, 0xc
	.globl gUnknown_8592078
gUnknown_8592078: @ 0x08592078
	.incbin "baserom.gba", 0x592078, 0x3c
	.globl gUnknown_85920B4
gUnknown_85920B4: @ 0x085920B4
	.incbin "baserom.gba", 0x5920b4, 0x30
	.globl gUnknown_85920E4
gUnknown_85920E4: @ 0x085920E4
	.incbin "baserom.gba", 0x5920e4, 0x3
	.globl gUnknown_85920E7
gUnknown_85920E7: @ 0x085920E7
	.incbin "baserom.gba", 0x5920e7, 0x2
	.globl gUnknown_85920E9
gUnknown_85920E9: @ 0x085920E9
	.incbin "baserom.gba", 0x5920e9, 0x2
	.globl gUnknown_85920EB
gUnknown_85920EB: @ 0x085920EB
	.incbin "baserom.gba", 0x5920eb, 0x5
	.globl gUnknown_85920F0
gUnknown_85920F0: @ 0x085920F0
	.incbin "baserom.gba", 0x5920f0, 0x4c
	.globl gUnknown_859213C
gUnknown_859213C: @ 0x0859213C
	.incbin "baserom.gba", 0x59213c, 0x4
	.globl gUnknown_8592140
gUnknown_8592140: @ 0x08592140
	.incbin "baserom.gba", 0x592140, 0x8
	.globl gUnknown_8592148
gUnknown_8592148: @ 0x08592148
	.incbin "baserom.gba", 0x592148, 0x8
	.globl gUnknown_8592150
gUnknown_8592150: @ 0x08592150
	.incbin "baserom.gba", 0x592150, 0x18
	.globl gUnknown_8592168
gUnknown_8592168: @ 0x08592168
	.incbin "baserom.gba", 0x592168, 0x4
	.globl gUnknown_859216C
gUnknown_859216C: @ 0x0859216C
	.incbin "baserom.gba", 0x59216c, 0x28
	.globl gUnknown_8592194
gUnknown_8592194: @ 0x08592194
	.incbin "baserom.gba", 0x592194, 0x60
	.globl gUnknown_85921F4
gUnknown_85921F4: @ 0x085921F4
	.incbin "baserom.gba", 0x5921f4, 0x8
	.globl gUnknown_85921FC
gUnknown_85921FC: @ 0x085921FC
	.incbin "baserom.gba", 0x5921fc, 0x18
	.globl gUnknown_8592214
gUnknown_8592214: @ 0x08592214
	.incbin "baserom.gba", 0x592214, 0x88
	.globl gUnknown_859229C
gUnknown_859229C: @ 0x0859229C
	.incbin "baserom.gba", 0x59229c, 0x20
	.globl gUnknown_85922BC
gUnknown_85922BC: @ 0x085922BC
	.incbin "baserom.gba", 0x5922bc, 0x20
	.globl gUnknown_85922DC
gUnknown_85922DC: @ 0x085922DC
	.incbin "baserom.gba", 0x5922dc, 0x10
	.globl gUnknown_85922EC
gUnknown_85922EC: @ 0x085922EC
	.incbin "baserom.gba", 0x5922ec, 0x10
	.globl gUnknown_85922FC
gUnknown_85922FC: @ 0x085922FC
	.incbin "baserom.gba", 0x5922fc, 0x1e0
	.globl gUnknown_85924DC
gUnknown_85924DC: @ 0x085924DC
	.incbin "baserom.gba", 0x5924dc, 0xb4
	.globl gUnknown_8592590
gUnknown_8592590: @ 0x08592590
	.incbin "baserom.gba", 0x592590, 0x18
	.globl gUnknown_85925A8
gUnknown_85925A8: @ 0x085925A8
	.incbin "baserom.gba", 0x5925a8, 0x4
	.globl gUnknown_85925AC
gUnknown_85925AC: @ 0x085925AC
	.incbin "baserom.gba", 0x5925ac, 0x8
	.globl gUnknown_85925B4
gUnknown_85925B4: @ 0x085925B4
	.incbin "baserom.gba", 0x5925b4, 0x10
	.globl gUnknown_85925C4
gUnknown_85925C4: @ 0x085925C4
	.incbin "baserom.gba", 0x5925c4, 0x6
	.globl gUnknown_85925CA
gUnknown_85925CA: @ 0x085925CA
	.incbin "baserom.gba", 0x5925ca, 0xa
	.globl gUnknown_85925D4
gUnknown_85925D4: @ 0x085925D4
	.incbin "baserom.gba", 0x5925d4, 0xc
	.globl gUnknown_85925E0
gUnknown_85925E0: @ 0x085925E0
	.incbin "baserom.gba", 0x5925e0, 0xc
	.globl gUnknown_85925EC
gUnknown_85925EC: @ 0x085925EC
	.incbin "baserom.gba", 0x5925ec, 0xc
	.globl gUnknown_85925F8
gUnknown_85925F8: @ 0x085925F8
	.incbin "baserom.gba", 0x5925f8, 0xc
	.globl gUnknown_8592604
gUnknown_8592604: @ 0x08592604
	.incbin "baserom.gba", 0x592604, 0x4
	.globl gUnknown_8592608
gUnknown_8592608: @ 0x08592608
	.incbin "baserom.gba", 0x592608, 0x8
	.globl gUnknown_8592610
gUnknown_8592610: @ 0x08592610
	.incbin "baserom.gba", 0x592610, 0x40
	.globl gUnknown_8592650
gUnknown_8592650: @ 0x08592650
	.incbin "baserom.gba", 0x592650, 0x12
	.globl gUnknown_8592662
gUnknown_8592662: @ 0x08592662
	.incbin "baserom.gba", 0x592662, 0x12
	.globl gUnknown_8592674
gUnknown_8592674: @ 0x08592674
	.incbin "baserom.gba", 0x592674, 0x9
	.globl gUnknown_859267D
gUnknown_859267D: @ 0x0859267D
	.incbin "baserom.gba", 0x59267d, 0x9
	.globl gUnknown_8592686
gUnknown_8592686: @ 0x08592686
	.incbin "baserom.gba", 0x592686, 0x26
	.globl gUnknown_85926AC
gUnknown_85926AC: @ 0x085926AC
	.incbin "baserom.gba", 0x5926ac, 0x78
	.globl gUnknown_8592724
gUnknown_8592724: @ 0x08592724
	.incbin "baserom.gba", 0x592724, 0x14
	.globl gUnknown_8592738
gUnknown_8592738: @ 0x08592738
	.incbin "baserom.gba", 0x592738, 0x14
	.globl gUnknown_859274C
gUnknown_859274C: @ 0x0859274C
	.incbin "baserom.gba", 0x59274c, 0x340
	.globl gUnknown_8592A8C
gUnknown_8592A8C: @ 0x08592A8C
	.incbin "baserom.gba", 0x592a8c, 0x10
	.globl gUnknown_8592A9C
gUnknown_8592A9C: @ 0x08592A9C
	.incbin "baserom.gba", 0x592a9c, 0x64
	.globl gUnknown_8592B00
gUnknown_8592B00: @ 0x08592B00
	.incbin "baserom.gba", 0x592b00, 0x30
	.globl gUnknown_8592B30
gUnknown_8592B30: @ 0x08592B30
	.incbin "baserom.gba", 0x592b30, 0x30
	.globl gUnknown_8592B60
gUnknown_8592B60: @ 0x08592B60
	.incbin "baserom.gba", 0x592b60, 0x18
	.globl gUnknown_8592B78
gUnknown_8592B78: @ 0x08592B78
	.incbin "baserom.gba", 0x592b78, 0x8
	.globl gUnknown_8592B80
gUnknown_8592B80: @ 0x08592B80
	.incbin "baserom.gba", 0x592b80, 0x8
	.globl gUnknown_8592B88
gUnknown_8592B88: @ 0x08592B88
	.incbin "baserom.gba", 0x592b88, 0x16
	.globl gUnknown_8592B9E
gUnknown_8592B9E: @ 0x08592B9E
	.incbin "baserom.gba", 0x592b9e, 0xc
	.globl gUnknown_8592BAA
gUnknown_8592BAA: @ 0x08592BAA
	.incbin "baserom.gba", 0x592baa, 0xe
	.globl gUnknown_8592BB8
gUnknown_8592BB8: @ 0x08592BB8
	.incbin "baserom.gba", 0x592bb8, 0x14
	.globl gUnknown_8592BCC
gUnknown_8592BCC: @ 0x08592BCC
	.incbin "baserom.gba", 0x592bcc, 0x2c
	.globl gUnknown_8592BF8
gUnknown_8592BF8: @ 0x08592BF8
	.incbin "baserom.gba", 0x592bf8, 0x18
	.globl gUnknown_8592C10
gUnknown_8592C10: @ 0x08592C10
	.incbin "baserom.gba", 0x592c10, 0x1c
	.globl gUnknown_8592C2C
gUnknown_8592C2C: @ 0x08592C2C
	.incbin "baserom.gba", 0x592c2c, 0x28
	.globl gUnknown_8592C54
gUnknown_8592C54: @ 0x08592C54
	.incbin "baserom.gba", 0x592c54, 0x14
	.globl gUnknown_8592C68
gUnknown_8592C68: @ 0x08592C68
	.incbin "baserom.gba", 0x592c68, 0x14
	.globl gUnknown_8592C7C
gUnknown_8592C7C: @ 0x08592C7C
	.incbin "baserom.gba", 0x592c7c, 0x8
	.globl gUnknown_8592C84
gUnknown_8592C84: @ 0x08592C84
	.incbin "baserom.gba", 0x592c84, 0x2c
	.globl gUnknown_8592CB0
gUnknown_8592CB0: @ 0x08592CB0
	.incbin "baserom.gba", 0x592cb0, 0x2c
	.globl gUnknown_8592CDC
gUnknown_8592CDC: @ 0x08592CDC
	.incbin "baserom.gba", 0x592cdc, 0x160
	.globl gUnknown_8592E3C
gUnknown_8592E3C: @ 0x08592E3C
	.incbin "baserom.gba", 0x592e3c, 0x16
	.globl gUnknown_8592E52
gUnknown_8592E52: @ 0x08592E52
	.incbin "baserom.gba", 0x592e52, 0xa
	.globl gUnknown_8592E5C
gUnknown_8592E5C: @ 0x08592E5C
	.incbin "baserom.gba", 0x592e5c, 0x10
	.globl gUnknown_8592E6C
gUnknown_8592E6C: @ 0x08592E6C
	.incbin "baserom.gba", 0x592e6c, 0x10
	.globl gUnknown_8592E7C
gUnknown_8592E7C: @ 0x08592E7C
	.incbin "baserom.gba", 0x592e7c, 0x24
	.globl gUnknown_8592EA0
gUnknown_8592EA0: @ 0x08592EA0
	.incbin "baserom.gba", 0x592ea0, 0x2c
	.globl gUnknown_8592ECC
gUnknown_8592ECC: @ 0x08592ECC
	.incbin "baserom.gba", 0x592ecc, 0x4
	.globl gUnknown_8592ED0
gUnknown_8592ED0: @ 0x08592ED0
	.incbin "baserom.gba", 0x592ed0, 0x8
	.globl gUnknown_8592ED8
gUnknown_8592ED8: @ 0x08592ED8
	.incbin "baserom.gba", 0x592ed8, 0x8
	.globl gUnknown_8592EE0
gUnknown_8592EE0: @ 0x08592EE0
	.incbin "baserom.gba", 0x592ee0, 0xc0
	.globl gUnknown_8592FA0
gUnknown_8592FA0: @ 0x08592FA0
	.incbin "baserom.gba", 0x592fa0, 0x20
	.globl gUnknown_8592FC0
gUnknown_8592FC0: @ 0x08592FC0
	.incbin "baserom.gba", 0x592fc0, 0x800
	.globl gUnknown_85937C0
gUnknown_85937C0: @ 0x085937C0
	.incbin "baserom.gba", 0x5937c0, 0x8
	.globl gUnknown_85937C8
gUnknown_85937C8: @ 0x085937C8
	.incbin "baserom.gba", 0x5937c8, 0x10
	.globl gUnknown_85937D8
gUnknown_85937D8: @ 0x085937D8
	.incbin "baserom.gba", 0x5937d8, 0x8
	.globl gUnknown_85937E0
gUnknown_85937E0: @ 0x085937E0

	@ src/strings.c:1102 gText_PlayersBattleResults
	.globl gText_Rom_5937E0
gText_Rom_5937E0: @ 0x085937E0
	.string "{PLAYER} の たいせん せいせき$"
	.if (. - gText_Rom_5937E0) > 0xf
	.error "gText_Rom_5937E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5937E0) < 0xf
	.space 0xf - (. - gText_Rom_5937E0)
	.endif
	.globl gUnknown_85937EF
gUnknown_85937EF: @ 0x085937EF

	@ src/strings.c:1103 gText_TotalRecordWLD
	.globl gText_Rom_5937EF
gText_Rom_5937EF: @ 0x085937EF
	.string "{STR_VAR_1}しょう {STR_VAR_2}はい {STR_VAR_3}ひきわけ$"
	.if (. - gText_Rom_5937EF) > 0x12
	.error "gText_Rom_5937EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5937EF) < 0x12
	.space 0x12 - (. - gText_Rom_5937EF)
	.endif
	.globl gUnknown_8593801
gUnknown_8593801: @ 0x08593801

