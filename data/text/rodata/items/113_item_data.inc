	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl gText_Rom_595430
gText_Rom_595430: @ 0x08595430
	.string "つうしんたいきちゅうです$"
	.if (. - gText_Rom_595430) > 0xd
	.error "gText_Rom_595430 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_595430) < 0xd
	.space 0xd - (. - gText_Rom_595430)
	.endif
	.incbin "baserom.gba", 0x59543d, 0x9

	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_595446
gText_Rom_595446: @ 0x08595446
	.string "はい\nいいえ$"
	.if (. - gText_Rom_595446) != 0x7
	.error "gText_Rom_595446 must retain its original byte length"
	.endif
	.globl gText_Rom_595449
	.set gText_Rom_595449, gText_Rom_595446 + 0x3
	.incbin "baserom.gba", 0x59544d, 0x28
	.globl gUnknown_8595475
gUnknown_8595475: @ 0x08595475
	.incbin "baserom.gba", 0x595475, 0x10
	.globl gUnknown_8595485
gUnknown_8595485: @ 0x08595485
	.incbin "baserom.gba", 0x595485, 0x323
	.globl gUnknown_85957A8
gUnknown_85957A8: @ 0x085957A8
	.incbin "baserom.gba", 0x5957a8, 0x200
	.globl gUnknown_85959A8
gUnknown_85959A8: @ 0x085959A8
	.incbin "baserom.gba", 0x5959a8, 0x1a4
	.globl gUnknown_8595B4C
gUnknown_8595B4C: @ 0x08595B4C
	.incbin "baserom.gba", 0x595b4c, 0x1a0
	.globl gUnknown_8595CEC
gUnknown_8595CEC: @ 0x08595CEC
	.incbin "baserom.gba", 0x595cec, 0xc
	.globl gUnknown_8595CF8
gUnknown_8595CF8: @ 0x08595CF8
	.incbin "baserom.gba", 0x595cf8, 0x8
	.globl gUnknown_8595D00
gUnknown_8595D00: @ 0x08595D00
	.incbin "baserom.gba", 0x595d00, 0xc
	.globl gUnknown_8595D0C
gUnknown_8595D0C: @ 0x08595D0C
	.incbin "baserom.gba", 0x595d0c, 0x184
	.globl gUnknown_8595E90
gUnknown_8595E90: @ 0x08595E90
	.incbin "baserom.gba", 0x595e90, 0x4
	.globl gUnknown_8595E94
gUnknown_8595E94: @ 0x08595E94
	.incbin "baserom.gba", 0x595e94, 0x5c
	.globl gUnknown_8595EF0
gUnknown_8595EF0: @ 0x08595EF0
	.incbin "baserom.gba", 0x595ef0, 0x4
	.globl gUnknown_8595EF4
gUnknown_8595EF4: @ 0x08595EF4
	.incbin "baserom.gba", 0x595ef4, 0x40
	.globl gUnknown_8595F34
gUnknown_8595F34: @ 0x08595F34
	.incbin "baserom.gba", 0x595f34, 0x68
	.globl gUnknown_8595F9C
gUnknown_8595F9C: @ 0x08595F9C
	.incbin "baserom.gba", 0x595f9c, 0x18

	@ src/strings.c:157 gText_Coins
	.globl gText_Rom_595FB4
gText_Rom_595FB4: @ 0x08595FB4
	.string "{STR_VAR_1}まい$"
	.if (. - gText_Rom_595FB4) > 0x5
	.error "gText_Rom_595FB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_595FB4) < 0x5
	.space 0x5 - (. - gText_Rom_595FB4)
	.endif
	.space 0x3, 0x00
	.globl gUnknown_8595FBC
gUnknown_8595FBC: @ 0x08595FBC
	.4byte sub_081429E0
	.4byte sub_08142A44
	.globl gUnknown_8595FC4
gUnknown_8595FC4: @ 0x08595FC4
	.4byte sub_08140A30
	.4byte sub_08140A5C
	.globl gUnknown_8595FCC
gUnknown_8595FCC: @ 0x08595FCC
	.incbin "baserom.gba", 0x595fcc, 0x6
	.globl gUnknown_8595FD2
gUnknown_8595FD2: @ 0x08595FD2
	.incbin "baserom.gba", 0x595fd2, 0x4
	.globl gUnknown_8595FD6
gUnknown_8595FD6: @ 0x08595FD6
	.incbin "baserom.gba", 0x595fd6, 0xa
	.globl gUnknown_8595FE0
gUnknown_8595FE0: @ 0x08595FE0
	.incbin "baserom.gba", 0x595fe0, 0x10
	.globl gUnknown_8595FF0
gUnknown_8595FF0: @ 0x08595FF0
	.incbin "baserom.gba", 0x595ff0, 0xc
	.globl gUnknown_8595FFC
gUnknown_8595FFC: @ 0x08595FFC
	.incbin "baserom.gba", 0x595ffc, 0xf3c
	.globl gUnknown_8596F38
gUnknown_8596F38: @ 0x08596F38
	.incbin "baserom.gba", 0x596f38, 0x98
	.globl gUnknown_8596FD0
gUnknown_8596FD0: @ 0x08596FD0
	.incbin "baserom.gba", 0x596fd0, 0x6c
	.globl gUnknown_859703C
gUnknown_859703C: @ 0x0859703C
	.incbin "baserom.gba", 0x59703c, 0x8
	.globl gUnknown_8597044
gUnknown_8597044: @ 0x08597044
	.incbin "baserom.gba", 0x597044, 0x78
	.globl gUnknown_85970BC
gUnknown_85970BC: @ 0x085970BC
	.incbin "baserom.gba", 0x5970bc, 0x60
	.globl gUnknown_859711C
gUnknown_859711C: @ 0x0859711C
	.incbin "baserom.gba", 0x59711c, 0x48
	.globl gUnknown_8597164
gUnknown_8597164: @ 0x08597164
	.incbin "baserom.gba", 0x597164, 0x60
	.globl gUnknown_85971C4
gUnknown_85971C4: @ 0x085971C4
	.incbin "baserom.gba", 0x5971c4, 0x140
	.globl gUnknown_8597304
gUnknown_8597304: @ 0x08597304
	.incbin "baserom.gba", 0x597304, 0x94
	.globl gUnknown_8597398
gUnknown_8597398: @ 0x08597398
	.incbin "baserom.gba", 0x597398, 0x18
	.globl gUnknown_85973B0
gUnknown_85973B0: @ 0x085973B0
	.incbin "baserom.gba", 0x5973b0, 0x18
	.globl gUnknown_85973C8
gUnknown_85973C8: @ 0x085973C8
	.incbin "baserom.gba", 0x5973c8, 0x18
	.globl gUnknown_85973E0
gUnknown_85973E0: @ 0x085973E0
	.incbin "baserom.gba", 0x5973e0, 0x18
	.globl gUnknown_85973F8
gUnknown_85973F8: @ 0x085973F8
	.incbin "baserom.gba", 0x5973f8, 0x20
	.globl gUnknown_8597418
gUnknown_8597418: @ 0x08597418
	.incbin "baserom.gba", 0x597418, 0xc4
	.globl gUnknown_85974DC
gUnknown_85974DC: @ 0x085974DC
	.incbin "baserom.gba", 0x5974dc, 0x20
	.globl gUnknown_85974FC
gUnknown_85974FC: @ 0x085974FC
	.incbin "baserom.gba", 0x5974fc, 0x8
	.globl gUnknown_8597504
gUnknown_8597504: @ 0x08597504
	.incbin "baserom.gba", 0x597504, 0x28
	.globl gUnknown_859752C
gUnknown_859752C: @ 0x0859752C
	.incbin "baserom.gba", 0x59752c, 0x80
	.globl gUnknown_85975AC
gUnknown_85975AC: @ 0x085975AC
	.incbin "baserom.gba", 0x5975ac, 0x18
	.globl gUnknown_85975C4
gUnknown_85975C4: @ 0x085975C4
	.incbin "baserom.gba", 0x5975c4, 0x30
	.globl gUnknown_85975F4
gUnknown_85975F4: @ 0x085975F4
	.incbin "baserom.gba", 0x5975f4, 0x7c
	.globl gUnknown_8597670
gUnknown_8597670: @ 0x08597670
	.incbin "baserom.gba", 0x597670, 0x30
	.globl gUnknown_85976A0
gUnknown_85976A0: @ 0x085976A0
	.incbin "baserom.gba", 0x5976a0, 0x18
	.globl gUnknown_85976B8
gUnknown_85976B8: @ 0x085976B8
	.incbin "baserom.gba", 0x5976b8, 0x6
	.globl gUnknown_85976BE
gUnknown_85976BE: @ 0x085976BE
	.incbin "baserom.gba", 0x5976be, 0x8
	.globl gUnknown_85976C6
gUnknown_85976C6: @ 0x085976C6
	.incbin "baserom.gba", 0x5976c6, 0x8
	.globl gUnknown_85976CE
gUnknown_85976CE: @ 0x085976CE
	.incbin "baserom.gba", 0x5976ce, 0x14
	.globl gUnknown_85976E2
gUnknown_85976E2: @ 0x085976E2
	.incbin "baserom.gba", 0x5976e2, 0x18
	.globl gUnknown_85976FA
gUnknown_85976FA: @ 0x085976FA
	.incbin "baserom.gba", 0x5976fa, 0x2
	.globl gUnknown_85976FC
gUnknown_85976FC: @ 0x085976FC
	.incbin "baserom.gba", 0x5976fc, 0x8d0
	.globl gUnknown_8597FCC
gUnknown_8597FCC: @ 0x08597FCC
	.incbin "baserom.gba", 0x597fcc, 0x20
	.globl gUnknown_8597FEC
gUnknown_8597FEC: @ 0x08597FEC
	.incbin "baserom.gba", 0x597fec, 0x338
	.globl gUnknown_8598324
gUnknown_8598324: @ 0x08598324
	.incbin "baserom.gba", 0x598324, 0x480
	.globl gUnknown_85987A4
gUnknown_85987A4: @ 0x085987A4
	.incbin "baserom.gba", 0x5987a4, 0x20
	.globl gUnknown_85987C4
gUnknown_85987C4: @ 0x085987C4
	.incbin "baserom.gba", 0x5987c4, 0x20
	.globl gUnknown_85987E4
gUnknown_85987E4: @ 0x085987E4
	.incbin "baserom.gba", 0x5987e4, 0x2
	.globl gUnknown_85987E6
gUnknown_85987E6: @ 0x085987E6
	.incbin "baserom.gba", 0x5987e6, 0x36
	.globl gUnknown_859881C
gUnknown_859881C: @ 0x0859881C
	.incbin "baserom.gba", 0x59881c, 0x18
	.globl gUnknown_8598834
gUnknown_8598834: @ 0x08598834
	.incbin "baserom.gba", 0x598834, 0x10
	.globl gUnknown_8598844
gUnknown_8598844: @ 0x08598844
	.incbin "baserom.gba", 0x598844, 0x14

	@ src/strings.c:175 gText_TheShop
	.globl gText_Rom_598858
gText_Rom_598858: @ 0x08598858
	.string "ショップ$"
	.if (. - gText_Rom_598858) > 0x5
	.error "gText_Rom_598858 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598858) < 0x5
	.space 0x5 - (. - gText_Rom_598858)
	.endif

