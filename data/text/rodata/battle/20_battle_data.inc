	@ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
	.globl gText_Rom_2E8AE0
gText_Rom_2E8AE0: @ 0x082E8AE0
	.string "ユウキ$"
	.if (. - gText_Rom_2E8AE0) > 0x4
	.error "gText_Rom_2E8AE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8AE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E8AE0)
	.endif
	.incbin "baserom.gba", 0x2e8ae4, 0x1c

	@ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
	.globl gText_Rom_2E8B00
gText_Rom_2E8B00: @ 0x082E8B00
	.string "ユウキ$"
	.if (. - gText_Rom_2E8B00) > 0x4
	.error "gText_Rom_2E8B00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8B00) < 0x4
	.space 0x4 - (. - gText_Rom_2E8B00)
	.endif
	.incbin "baserom.gba", 0x2e8b04, 0x1c

	@ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
	.globl gText_Rom_2E8B20
gText_Rom_2E8B20: @ 0x082E8B20
	.string "ユウキ$"
	.if (. - gText_Rom_2E8B20) > 0x4
	.error "gText_Rom_2E8B20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8B20) < 0x4
	.space 0x4 - (. - gText_Rom_2E8B20)
	.endif
	.incbin "baserom.gba", 0x2e8b24, 0x1c

	@ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
	.globl gText_Rom_2E8B40
gText_Rom_2E8B40: @ 0x082E8B40
	.string "ハルカ$"
	.if (. - gText_Rom_2E8B40) > 0x4
	.error "gText_Rom_2E8B40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8B40) < 0x4
	.space 0x4 - (. - gText_Rom_2E8B40)
	.endif
	.incbin "baserom.gba", 0x2e8b44, 0x1c

	@ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
	.globl gText_Rom_2E8B60
gText_Rom_2E8B60: @ 0x082E8B60
	.string "ハルカ$"
	.if (. - gText_Rom_2E8B60) > 0x4
	.error "gText_Rom_2E8B60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8B60) < 0x4
	.space 0x4 - (. - gText_Rom_2E8B60)
	.endif
	.incbin "baserom.gba", 0x2e8b64, 0x1c

	@ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
	.globl gText_Rom_2E8B80
gText_Rom_2E8B80: @ 0x082E8B80
	.string "ハルカ$"
	.if (. - gText_Rom_2E8B80) > 0x4
	.error "gText_Rom_2E8B80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8B80) < 0x4
	.space 0x4 - (. - gText_Rom_2E8B80)
	.endif
	.incbin "baserom.gba", 0x2e8b84, 0x1c

	@ src/data/trainers.h:33929 trainers_line_33929
	.globl gText_Rom_2E8BA0
gText_Rom_2E8BA0: @ 0x082E8BA0
	.string "ヨシノリ$"
	.if (. - gText_Rom_2E8BA0) > 0x5
	.error "gText_Rom_2E8BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8BA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E8BA0)
	.endif
	.incbin "baserom.gba", 0x2e8ba5, 0x1b

	@ src/data/trainers.h:33989 trainers_line_33989
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E8BC0
gText_Rom_2E8BC0: @ 0x082E8BC0
	.string "ケンタロウ$"
	.if (. - gText_Rom_2E8BC0) != 0x6
	.error "gText_Rom_2E8BC0 must retain its original byte length"
	.endif
	.globl gText_Rom_2E8BC2
	.set gText_Rom_2E8BC2, gText_Rom_2E8BC0 + 0x2
	.incbin "baserom.gba", 0x2e8bc6, 0x1a

	@ src/data/trainers.h:34037 trainers_line_34037
	.globl gText_Rom_2E8BE0
gText_Rom_2E8BE0: @ 0x082E8BE0
	.string "トモヒコ$"
	.if (. - gText_Rom_2E8BE0) > 0x5
	.error "gText_Rom_2E8BE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8BE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E8BE0)
	.endif
	.incbin "baserom.gba", 0x2e8be5, 0x1b

	@ src/data/trainers.h:34097 trainers_line_34097
	.globl gText_Rom_2E8C00
gText_Rom_2E8C00: @ 0x082E8C00
	.string "サヤカ$"
	.if (. - gText_Rom_2E8C00) > 0x4
	.error "gText_Rom_2E8C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8C00) < 0x4
	.space 0x4 - (. - gText_Rom_2E8C00)
	.endif
	.incbin "baserom.gba", 0x2e8c04, 0x1c

	@ src/data/trainers.h:34147 trainers_line_34147
	.globl gText_Rom_2E8C20
gText_Rom_2E8C20: @ 0x082E8C20
	.string "ジュン$"
	.if (. - gText_Rom_2E8C20) > 0x4
	.error "gText_Rom_2E8C20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8C20) < 0x4
	.space 0x4 - (. - gText_Rom_2E8C20)
	.endif
	.incbin "baserom.gba", 0x2e8c24, 0x1c

	@ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
	.globl gText_Rom_2E8C40
gText_Rom_2E8C40: @ 0x082E8C40
	.string "テツロウ$"
	.if (. - gText_Rom_2E8C40) > 0x5
	.error "gText_Rom_2E8C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8C40) < 0x5
	.space 0x5 - (. - gText_Rom_2E8C40)
	.endif
	.incbin "baserom.gba", 0x2e8c45, 0x1b

	@ src/data/trainers.h:34233 trainers_line_34233
	.globl gText_Rom_2E8C60
gText_Rom_2E8C60: @ 0x082E8C60
	.string "コウサク$"
	.if (. - gText_Rom_2E8C60) > 0x5
	.error "gText_Rom_2E8C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8C60) < 0x5
	.space 0x5 - (. - gText_Rom_2E8C60)
	.endif
	.incbin "baserom.gba", 0x2e8c65, 0x1b

	@ src/data/trainers.h:34293 trainers_line_34293
	.globl gText_Rom_2E8C80
gText_Rom_2E8C80: @ 0x082E8C80
	.string "イクオ$"
	.if (. - gText_Rom_2E8C80) > 0x4
	.error "gText_Rom_2E8C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8C80) < 0x4
	.space 0x4 - (. - gText_Rom_2E8C80)
	.endif
	.incbin "baserom.gba", 0x2e8c84, 0x1c

	@ src/data/trainers.h:34341 trainers_line_34341
	.globl gText_Rom_2E8CA0
gText_Rom_2E8CA0: @ 0x082E8CA0
	.string "アキオ$"
	.if (. - gText_Rom_2E8CA0) > 0x4
	.error "gText_Rom_2E8CA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8CA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E8CA0)
	.endif
	.incbin "baserom.gba", 0x2e8ca4, 0x1c

	@ src/data/trainers.h:34389 trainers_line_34389
	.globl gText_Rom_2E8CC0
gText_Rom_2E8CC0: @ 0x082E8CC0
	.string "ユカリ$"
	.if (. - gText_Rom_2E8CC0) > 0x4
	.error "gText_Rom_2E8CC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8CC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E8CC0)
	.endif
	.incbin "baserom.gba", 0x2e8cc4, 0x1c

	@ src/data/trainers.h:34425 trainers_line_34425
	.globl gText_Rom_2E8CE0
gText_Rom_2E8CE0: @ 0x082E8CE0
	.string "ナナとネネ$"
	.if (. - gText_Rom_2E8CE0) > 0x6
	.error "gText_Rom_2E8CE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8CE0) < 0x6
	.space 0x6 - (. - gText_Rom_2E8CE0)
	.endif
	.incbin "baserom.gba", 0x2e8ce6, 0x1a

	@ src/data/trainers.h:34473 trainers_line_34473
	.globl gText_Rom_2E8D00
gText_Rom_2E8D00: @ 0x082E8D00
	.string "マホとナホ$"
	.if (. - gText_Rom_2E8D00) > 0x6
	.error "gText_Rom_2E8D00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8D00) < 0x6
	.space 0x6 - (. - gText_Rom_2E8D00)
	.endif
	.incbin "baserom.gba", 0x2e8d06, 0x1a

	@ src/data/trainers.h:34535 trainers_line_34535
	.globl gText_Rom_2E8D20
gText_Rom_2E8D20: @ 0x082E8D20
	.string "カヨとイヨ$"
	.if (. - gText_Rom_2E8D20) > 0x6
	.error "gText_Rom_2E8D20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8D20) < 0x6
	.space 0x6 - (. - gText_Rom_2E8D20)
	.endif
	.incbin "baserom.gba", 0x2e8d26, 0x1a

	@ src/data/trainers.h:34597 trainers_line_34597
	.globl gText_Rom_2E8D40
gText_Rom_2E8D40: @ 0x082E8D40
	.string "シキとリキ$"
	.if (. - gText_Rom_2E8D40) > 0x6
	.error "gText_Rom_2E8D40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8D40) < 0x6
	.space 0x6 - (. - gText_Rom_2E8D40)
	.endif
	.incbin "baserom.gba", 0x2e8d46, 0x1a

	@ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
	.globl gText_Rom_2E8D60
gText_Rom_2E8D60: @ 0x082E8D60
	.string "ゲンとハツ$"
	.if (. - gText_Rom_2E8D60) > 0x6
	.error "gText_Rom_2E8D60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8D60) < 0x6
	.space 0x6 - (. - gText_Rom_2E8D60)
	.endif
	.incbin "baserom.gba", 0x2e8d66, 0x1a

	@ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
	.globl gText_Rom_2E8D80
gText_Rom_2E8D80: @ 0x082E8D80
	.string "ゲンとハツ$"
	.if (. - gText_Rom_2E8D80) > 0x6
	.error "gText_Rom_2E8D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8D80) < 0x6
	.space 0x6 - (. - gText_Rom_2E8D80)
	.endif
	.incbin "baserom.gba", 0x2e8d86, 0x1a

	@ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
	.globl gText_Rom_2E8DA0
gText_Rom_2E8DA0: @ 0x082E8DA0
	.string "ゲンとハツ$"
	.if (. - gText_Rom_2E8DA0) > 0x6
	.error "gText_Rom_2E8DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8DA0) < 0x6
	.space 0x6 - (. - gText_Rom_2E8DA0)
	.endif
	.incbin "baserom.gba", 0x2e8da6, 0x1a

	@ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
	.globl gText_Rom_2E8DC0
gText_Rom_2E8DC0: @ 0x082E8DC0
	.string "ゲンとハツ$"
	.if (. - gText_Rom_2E8DC0) > 0x6
	.error "gText_Rom_2E8DC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8DC0) < 0x6
	.space 0x6 - (. - gText_Rom_2E8DC0)
	.endif
	.incbin "baserom.gba", 0x2e8dc6, 0x1a

	@ src/data/trainers.h:34659 trainers_line_34659 (+4 aliases)
	.globl gText_Rom_2E8DE0
gText_Rom_2E8DE0: @ 0x082E8DE0
	.string "ゲンとハツ$"
	.if (. - gText_Rom_2E8DE0) > 0x6
	.error "gText_Rom_2E8DE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8DE0) < 0x6
	.space 0x6 - (. - gText_Rom_2E8DE0)
	.endif
	.incbin "baserom.gba", 0x2e8de6, 0x1a

	@ src/data/trainers.h:34969 trainers_line_34969
	.globl gText_Rom_2E8E00
gText_Rom_2E8E00: @ 0x082E8E00
	.string "カツとアミ$"
	.if (. - gText_Rom_2E8E00) > 0x6
	.error "gText_Rom_2E8E00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8E00) < 0x6
	.space 0x6 - (. - gText_Rom_2E8E00)
	.endif
	.incbin "baserom.gba", 0x2e8e06, 0x1a

	@ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
	.globl gText_Rom_2E8E20
gText_Rom_2E8E20: @ 0x082E8E20
	.string "コウとカコ$"
	.if (. - gText_Rom_2E8E20) > 0x6
	.error "gText_Rom_2E8E20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8E20) < 0x6
	.space 0x6 - (. - gText_Rom_2E8E20)
	.endif
	.incbin "baserom.gba", 0x2e8e26, 0x1a

	@ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
	.globl gText_Rom_2E8E40
gText_Rom_2E8E40: @ 0x082E8E40
	.string "コウとカコ$"
	.if (. - gText_Rom_2E8E40) > 0x6
	.error "gText_Rom_2E8E40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8E40) < 0x6
	.space 0x6 - (. - gText_Rom_2E8E40)
	.endif
	.incbin "baserom.gba", 0x2e8e46, 0x1a

	@ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
	.globl gText_Rom_2E8E60
gText_Rom_2E8E60: @ 0x082E8E60
	.string "コウとカコ$"
	.if (. - gText_Rom_2E8E60) > 0x6
	.error "gText_Rom_2E8E60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8E60) < 0x6
	.space 0x6 - (. - gText_Rom_2E8E60)
	.endif
	.incbin "baserom.gba", 0x2e8e66, 0x1a

	@ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
	.globl gText_Rom_2E8E80
gText_Rom_2E8E80: @ 0x082E8E80
	.string "コウとカコ$"
	.if (. - gText_Rom_2E8E80) > 0x6
	.error "gText_Rom_2E8E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8E80) < 0x6
	.space 0x6 - (. - gText_Rom_2E8E80)
	.endif
	.incbin "baserom.gba", 0x2e8e86, 0x1a

	@ src/data/trainers.h:35017 trainers_line_35017 (+4 aliases)
	.globl gText_Rom_2E8EA0
gText_Rom_2E8EA0: @ 0x082E8EA0
	.string "コウとカコ$"
	.if (. - gText_Rom_2E8EA0) > 0x6
	.error "gText_Rom_2E8EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8EA0) < 0x6
	.space 0x6 - (. - gText_Rom_2E8EA0)
	.endif
	.incbin "baserom.gba", 0x2e8ea6, 0x1a

	@ src/data/trainers.h:35257 trainers_line_35257
	.globl gText_Rom_2E8EC0
gText_Rom_2E8EC0: @ 0x082E8EC0
	.string "シンとユミ$"
	.if (. - gText_Rom_2E8EC0) > 0x6
	.error "gText_Rom_2E8EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8EC0) < 0x6
	.space 0x6 - (. - gText_Rom_2E8EC0)
	.endif
	.incbin "baserom.gba", 0x2e8ec6, 0x1a

	@ src/data/trainers.h:35305 trainers_line_35305
	.globl gText_Rom_2E8EE0
gText_Rom_2E8EE0: @ 0x082E8EE0
	.string "マサシ$"
	.if (. - gText_Rom_2E8EE0) > 0x4
	.error "gText_Rom_2E8EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8EE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E8EE0)
	.endif
	.incbin "baserom.gba", 0x2e8ee4, 0x1c

	@ src/data/trainers.h:35377 trainers_line_35377
	.globl gText_Rom_2E8F00
gText_Rom_2E8F00: @ 0x082E8F00
	.string "ノゾム$"
	.if (. - gText_Rom_2E8F00) > 0x4
	.error "gText_Rom_2E8F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8F00) < 0x4
	.space 0x4 - (. - gText_Rom_2E8F00)
	.endif
	.incbin "baserom.gba", 0x2e8f04, 0x1c

	@ src/data/trainers.h:35427 trainers_line_35427
	.globl gText_Rom_2E8F20
gText_Rom_2E8F20: @ 0x082E8F20
	.string "サクラコ$"
	.if (. - gText_Rom_2E8F20) > 0x5
	.error "gText_Rom_2E8F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8F20) < 0x5
	.space 0x5 - (. - gText_Rom_2E8F20)
	.endif
	.incbin "baserom.gba", 0x2e8f25, 0x1b

	@ src/data/trainers.h:35479 trainers_line_35479
	.globl gText_Rom_2E8F40
gText_Rom_2E8F40: @ 0x082E8F40
	.string "ケンキチ$"
	.if (. - gText_Rom_2E8F40) > 0x5
	.error "gText_Rom_2E8F40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8F40) < 0x5
	.space 0x5 - (. - gText_Rom_2E8F40)
	.endif
	.incbin "baserom.gba", 0x2e8f45, 0x3b

	@ src/data/trainers.h:35551 trainers_line_35551
	.globl gText_Rom_2E8F80
gText_Rom_2E8F80: @ 0x082E8F80
	.string "タイスケ$"
	.if (. - gText_Rom_2E8F80) > 0x5
	.error "gText_Rom_2E8F80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8F80) < 0x5
	.space 0x5 - (. - gText_Rom_2E8F80)
	.endif
	.incbin "baserom.gba", 0x2e8f85, 0x1b

	@ src/data/trainers.h:35599 trainers_line_35599
	.globl gText_Rom_2E8FA0
gText_Rom_2E8FA0: @ 0x082E8FA0
	.string "マサタカ$"
	.if (. - gText_Rom_2E8FA0) > 0x5
	.error "gText_Rom_2E8FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8FA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E8FA0)
	.endif
	.incbin "baserom.gba", 0x2e8fa5, 0x1b

	@ src/data/trainers.h:35651 trainers_line_35651
	.globl gText_Rom_2E8FC0
gText_Rom_2E8FC0: @ 0x082E8FC0
	.string "ポール$"
	.if (. - gText_Rom_2E8FC0) > 0x4
	.error "gText_Rom_2E8FC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8FC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E8FC0)
	.endif
	.incbin "baserom.gba", 0x2e8fc4, 0x1c

	@ src/data/trainers.h:35699 trainers_line_35699
	.globl gText_Rom_2E8FE0
gText_Rom_2E8FE0: @ 0x082E8FE0
	.string "サエミ$"
	.if (. - gText_Rom_2E8FE0) > 0x4
	.error "gText_Rom_2E8FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8FE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E8FE0)
	.endif
	.incbin "baserom.gba", 0x2e8fe4, 0x1c

	@ src/data/trainers.h:35735 trainers_line_35735
	.globl gText_Rom_2E9000
gText_Rom_2E9000: @ 0x082E9000
	.string "エリック$"
	.if (. - gText_Rom_2E9000) > 0x5
	.error "gText_Rom_2E9000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9000) < 0x5
	.space 0x5 - (. - gText_Rom_2E9000)
	.endif
	.incbin "baserom.gba", 0x2e9005, 0x1b

	@ src/data/trainers.h:35771 trainers_line_35771
	.globl gText_Rom_2E9020
gText_Rom_2E9020: @ 0x082E9020
	.string "シゲモリ$"
	.if (. - gText_Rom_2E9020) > 0x5
	.error "gText_Rom_2E9020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9020) < 0x5
	.space 0x5 - (. - gText_Rom_2E9020)
	.endif
	.incbin "baserom.gba", 0x2e9025, 0x1b

	@ src/data/trainers.h:35807 trainers_line_35807
	.globl gText_Rom_2E9040
gText_Rom_2E9040: @ 0x082E9040
	.string "トシフミ$"
	.if (. - gText_Rom_2E9040) > 0x5
	.error "gText_Rom_2E9040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9040) < 0x5
	.space 0x5 - (. - gText_Rom_2E9040)
	.endif
	.incbin "baserom.gba", 0x2e9045, 0x1b

	@ src/data/trainers.h:35843 trainers_line_35843
	.globl gText_Rom_2E9060
gText_Rom_2E9060: @ 0x082E9060
	.string "ワカコ$"
	.if (. - gText_Rom_2E9060) > 0x4
	.error "gText_Rom_2E9060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9060) < 0x4
	.space 0x4 - (. - gText_Rom_2E9060)
	.endif
	.incbin "baserom.gba", 0x2e9064, 0x1c

	@ src/data/trainers.h:35879 trainers_line_35879
	.globl gText_Rom_2E9080
gText_Rom_2E9080: @ 0x082E9080
	.string "イオリ$"
	.if (. - gText_Rom_2E9080) > 0x4
	.error "gText_Rom_2E9080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9080) < 0x4
	.space 0x4 - (. - gText_Rom_2E9080)
	.endif
	.incbin "baserom.gba", 0x2e9084, 0x1c

	@ src/data/trainers.h:35915 trainers_line_35915
	.globl gText_Rom_2E90A0
gText_Rom_2E90A0: @ 0x082E90A0
	.string "クニアキ$"
	.if (. - gText_Rom_2E90A0) > 0x5
	.error "gText_Rom_2E90A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E90A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E90A0)
	.endif
	.incbin "baserom.gba", 0x2e90a5, 0x1b

	@ src/data/trainers.h:35951 trainers_line_35951
	.globl gText_Rom_2E90C0
gText_Rom_2E90C0: @ 0x082E90C0
	.string "ノドカ$"
	.if (. - gText_Rom_2E90C0) > 0x4
	.error "gText_Rom_2E90C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E90C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E90C0)
	.endif
	.incbin "baserom.gba", 0x2e90c4, 0x1c

	@ src/data/trainers.h:35999 trainers_line_35999
	.globl gText_Rom_2E90E0
gText_Rom_2E90E0: @ 0x082E90E0
	.string "カズタカ$"
	.if (. - gText_Rom_2E90E0) > 0x5
	.error "gText_Rom_2E90E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E90E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E90E0)
	.endif
	.incbin "baserom.gba", 0x2e90e5, 0x1b

	@ src/data/trainers.h:36047 trainers_line_36047
	.globl gText_Rom_2E9100
gText_Rom_2E9100: @ 0x082E9100
	.string "ユウゴ$"
	.if (. - gText_Rom_2E9100) > 0x4
	.error "gText_Rom_2E9100 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9100) < 0x4
	.space 0x4 - (. - gText_Rom_2E9100)
	.endif
	.incbin "baserom.gba", 0x2e9104, 0x1c

	@ src/data/trainers.h:36095 trainers_line_36095
	.globl gText_Rom_2E9120
gText_Rom_2E9120: @ 0x082E9120
	.string "ミチオ$"
	.if (. - gText_Rom_2E9120) > 0x4
	.error "gText_Rom_2E9120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9120) < 0x4
	.space 0x4 - (. - gText_Rom_2E9120)
	.endif
	.incbin "baserom.gba", 0x2e9124, 0x1c

	@ src/data/trainers.h:36143 trainers_line_36143
	.globl gText_Rom_2E9140
gText_Rom_2E9140: @ 0x082E9140
	.string "マツリ$"
	.if (. - gText_Rom_2E9140) > 0x4
	.error "gText_Rom_2E9140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9140) < 0x4
	.space 0x4 - (. - gText_Rom_2E9140)
	.endif
	.incbin "baserom.gba", 0x2e9144, 0x1c

	@ src/data/trainers.h:36191 trainers_line_36191
	.globl gText_Rom_2E9160
gText_Rom_2E9160: @ 0x082E9160
	.string "ヒロミツ$"
	.if (. - gText_Rom_2E9160) > 0x5
	.error "gText_Rom_2E9160 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9160) < 0x5
	.space 0x5 - (. - gText_Rom_2E9160)
	.endif
	.incbin "baserom.gba", 0x2e9165, 0x1b

	@ src/data/trainers.h:36227 trainers_line_36227
	.globl gText_Rom_2E9180
gText_Rom_2E9180: @ 0x082E9180
	.string "ミナミ$"
	.if (. - gText_Rom_2E9180) > 0x4
	.error "gText_Rom_2E9180 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9180) < 0x4
	.space 0x4 - (. - gText_Rom_2E9180)
	.endif
	.incbin "baserom.gba", 0x2e9184, 0x1c

	@ src/data/trainers.h:36263 trainers_line_36263
	.globl gText_Rom_2E91A0
gText_Rom_2E91A0: @ 0x082E91A0
	.string "マサヤ$"
	.if (. - gText_Rom_2E91A0) > 0x4
	.error "gText_Rom_2E91A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E91A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E91A0)
	.endif
	.incbin "baserom.gba", 0x2e91a4, 0x1c

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E91C0
gText_Rom_2E91C0: @ 0x082E91C0
	.string "したっぱ$"
	.if (. - gText_Rom_2E91C0) > 0x5
	.error "gText_Rom_2E91C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E91C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E91C0)
	.endif
	.incbin "baserom.gba", 0x2e91c5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E91E0
gText_Rom_2E91E0: @ 0x082E91E0
	.string "したっぱ$"
	.if (. - gText_Rom_2E91E0) > 0x5
	.error "gText_Rom_2E91E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E91E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E91E0)
	.endif
	.incbin "baserom.gba", 0x2e91e5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9200
gText_Rom_2E9200: @ 0x082E9200
	.string "したっぱ$"
	.if (. - gText_Rom_2E9200) > 0x5
	.error "gText_Rom_2E9200 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9200) < 0x5
	.space 0x5 - (. - gText_Rom_2E9200)
	.endif
	.incbin "baserom.gba", 0x2e9205, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9220
gText_Rom_2E9220: @ 0x082E9220
	.string "したっぱ$"
	.if (. - gText_Rom_2E9220) > 0x5
	.error "gText_Rom_2E9220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9220) < 0x5
	.space 0x5 - (. - gText_Rom_2E9220)
	.endif
	.incbin "baserom.gba", 0x2e9225, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9240
gText_Rom_2E9240: @ 0x082E9240
	.string "したっぱ$"
	.if (. - gText_Rom_2E9240) > 0x5
	.error "gText_Rom_2E9240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9240) < 0x5
	.space 0x5 - (. - gText_Rom_2E9240)
	.endif
	.incbin "baserom.gba", 0x2e9245, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9260
gText_Rom_2E9260: @ 0x082E9260
	.string "したっぱ$"
	.if (. - gText_Rom_2E9260) > 0x5
	.error "gText_Rom_2E9260 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9260) < 0x5
	.space 0x5 - (. - gText_Rom_2E9260)
	.endif
	.incbin "baserom.gba", 0x2e9265, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9280
gText_Rom_2E9280: @ 0x082E9280
	.string "したっぱ$"
	.if (. - gText_Rom_2E9280) > 0x5
	.error "gText_Rom_2E9280 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9280) < 0x5
	.space 0x5 - (. - gText_Rom_2E9280)
	.endif
	.incbin "baserom.gba", 0x2e9285, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E92A0
gText_Rom_2E92A0: @ 0x082E92A0
	.string "したっぱ$"
	.if (. - gText_Rom_2E92A0) > 0x5
	.error "gText_Rom_2E92A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E92A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E92A0)
	.endif
	.incbin "baserom.gba", 0x2e92a5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E92C0
gText_Rom_2E92C0: @ 0x082E92C0
	.string "したっぱ$"
	.if (. - gText_Rom_2E92C0) > 0x5
	.error "gText_Rom_2E92C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E92C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E92C0)
	.endif
	.incbin "baserom.gba", 0x2e92c5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E92E0
gText_Rom_2E92E0: @ 0x082E92E0
	.string "したっぱ$"
	.if (. - gText_Rom_2E92E0) > 0x5
	.error "gText_Rom_2E92E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E92E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E92E0)
	.endif
	.incbin "baserom.gba", 0x2e92e5, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9300
gText_Rom_2E9300: @ 0x082E9300
	.string "したっぱ$"
	.if (. - gText_Rom_2E9300) > 0x5
	.error "gText_Rom_2E9300 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9300) < 0x5
	.space 0x5 - (. - gText_Rom_2E9300)
	.endif
	.incbin "baserom.gba", 0x2e9305, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9320
gText_Rom_2E9320: @ 0x082E9320
	.string "したっぱ$"
	.if (. - gText_Rom_2E9320) > 0x5
	.error "gText_Rom_2E9320 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9320) < 0x5
	.space 0x5 - (. - gText_Rom_2E9320)
	.endif
	.incbin "baserom.gba", 0x2e9325, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9340
gText_Rom_2E9340: @ 0x082E9340
	.string "したっぱ$"
	.if (. - gText_Rom_2E9340) > 0x5
	.error "gText_Rom_2E9340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9340) < 0x5
	.space 0x5 - (. - gText_Rom_2E9340)
	.endif
	.incbin "baserom.gba", 0x2e9345, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9360
gText_Rom_2E9360: @ 0x082E9360
	.string "したっぱ$"
	.if (. - gText_Rom_2E9360) > 0x5
	.error "gText_Rom_2E9360 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9360) < 0x5
	.space 0x5 - (. - gText_Rom_2E9360)
	.endif
	.incbin "baserom.gba", 0x2e9365, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E9380
gText_Rom_2E9380: @ 0x082E9380
	.string "したっぱ$"
	.if (. - gText_Rom_2E9380) > 0x5
	.error "gText_Rom_2E9380 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9380) < 0x5
	.space 0x5 - (. - gText_Rom_2E9380)
	.endif
	.incbin "baserom.gba", 0x2e9385, 0x1b

	@ src/data/trainers.h:69 trainers_line_69 (+52 aliases)
	.globl gText_Rom_2E93A0
gText_Rom_2E93A0: @ 0x082E93A0
	.string "したっぱ$"
	.if (. - gText_Rom_2E93A0) > 0x5
	.error "gText_Rom_2E93A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E93A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E93A0)
	.endif
	.incbin "baserom.gba", 0x2e93a5, 0x1b

	@ src/data/trainers.h:25506 trainers_line_25506 (+2 aliases)
	.globl gText_Rom_2E93C0
gText_Rom_2E93C0: @ 0x082E93C0
	.string "ホムラ$"
	.if (. - gText_Rom_2E93C0) > 0x4
	.error "gText_Rom_2E93C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E93C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E93C0)
	.endif
	.incbin "baserom.gba", 0x2e93c4, 0x1c

	@ src/data/trainers.h:36995 trainers_line_36995
	.globl gText_Rom_2E93E0
gText_Rom_2E93E0: @ 0x082E93E0
	.string "ナルミ$"
	.if (. - gText_Rom_2E93E0) > 0x4
	.error "gText_Rom_2E93E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E93E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E93E0)
	.endif
	.incbin "baserom.gba", 0x2e93e4, 0x1c

	@ src/data/trainers.h:30102 trainers_line_30102 (+4 aliases)
	.globl gText_Rom_2E9400
gText_Rom_2E9400: @ 0x082E9400
	.string "マツブサ$"
	.if (. - gText_Rom_2E9400) > 0x5
	.error "gText_Rom_2E9400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9400) < 0x5
	.space 0x5 - (. - gText_Rom_2E9400)
	.endif
	.incbin "baserom.gba", 0x2e9405, 0x1b

	@ src/data/trainers.h:37105 trainers_line_37105
	.globl gText_Rom_2E9420
gText_Rom_2E9420: @ 0x082E9420
	.string "ヒデヒコ$"
	.if (. - gText_Rom_2E9420) > 0x5
	.error "gText_Rom_2E9420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9420) < 0x5
	.space 0x5 - (. - gText_Rom_2E9420)
	.endif
	.incbin "baserom.gba", 0x2e9425, 0x1b

	@ src/data/trainers.h:37141 trainers_line_37141
	.globl gText_Rom_2E9440
gText_Rom_2E9440: @ 0x082E9440
	.string "ユミコ$"
	.if (. - gText_Rom_2E9440) > 0x4
	.error "gText_Rom_2E9440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9440) < 0x4
	.space 0x4 - (. - gText_Rom_2E9440)
	.endif
	.incbin "baserom.gba", 0x2e9444, 0x1c

	@ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E9460
gText_Rom_2E9460: @ 0x082E9460
	.string "ダイジロウ$"
	.if (. - gText_Rom_2E9460) != 0x6
	.error "gText_Rom_2E9460 must retain its original byte length"
	.endif
	.globl gText_Rom_2E9462
	.set gText_Rom_2E9462, gText_Rom_2E9460 + 0x2
	.incbin "baserom.gba", 0x2e9466, 0x1a

	@ src/data/trainers.h:37225 trainers_line_37225
	.globl gText_Rom_2E9480
gText_Rom_2E9480: @ 0x082E9480
	.string "ヤスフミ$"
	.if (. - gText_Rom_2E9480) > 0x5
	.error "gText_Rom_2E9480 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9480) < 0x5
	.space 0x5 - (. - gText_Rom_2E9480)
	.endif
	.incbin "baserom.gba", 0x2e9485, 0x1b

	@ src/data/trainers.h:37273 trainers_line_37273
	.globl gText_Rom_2E94A0
gText_Rom_2E94A0: @ 0x082E94A0
	.string "クニオ$"
	.if (. - gText_Rom_2E94A0) > 0x4
	.error "gText_Rom_2E94A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E94A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E94A0)
	.endif
	.incbin "baserom.gba", 0x2e94a4, 0x1c

	@ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
	.globl gText_Rom_2E94C0
gText_Rom_2E94C0: @ 0x082E94C0
	.string "ノリタカ$"
	.if (. - gText_Rom_2E94C0) > 0x5
	.error "gText_Rom_2E94C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E94C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E94C0)
	.endif
	.incbin "baserom.gba", 0x2e94c5, 0x1b

	@ src/data/trainers.h:37369 trainers_line_37369
	.globl gText_Rom_2E94E0
gText_Rom_2E94E0: @ 0x082E94E0
	.string "セイカ$"
	.if (. - gText_Rom_2E94E0) > 0x4
	.error "gText_Rom_2E94E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E94E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E94E0)
	.endif
	.incbin "baserom.gba", 0x2e94e4, 0x1c

	@ src/data/trainers.h:37431 trainers_line_37431
	.globl gText_Rom_2E9500
gText_Rom_2E9500: @ 0x082E9500
	.string "トシタカ$"
	.if (. - gText_Rom_2E9500) > 0x5
	.error "gText_Rom_2E9500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9500) < 0x5
	.space 0x5 - (. - gText_Rom_2E9500)
	.endif
	.incbin "baserom.gba", 0x2e9505, 0x1b

	@ src/data/trainers.h:37479 trainers_line_37479
	.globl gText_Rom_2E9520
gText_Rom_2E9520: @ 0x082E9520
	.string "アキコ$"
	.if (. - gText_Rom_2E9520) > 0x4
	.error "gText_Rom_2E9520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9520) < 0x4
	.space 0x4 - (. - gText_Rom_2E9520)
	.endif
	.incbin "baserom.gba", 0x2e9524, 0x1c

	@ src/data/trainers.h:37527 trainers_line_37527
	.globl gText_Rom_2E9540
gText_Rom_2E9540: @ 0x082E9540
	.string "ヒロトシ$"
	.if (. - gText_Rom_2E9540) > 0x5
	.error "gText_Rom_2E9540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9540) < 0x5
	.space 0x5 - (. - gText_Rom_2E9540)
	.endif
	.incbin "baserom.gba", 0x2e9545, 0x1b

	@ src/data/trainers.h:37575 trainers_line_37575
	.globl gText_Rom_2E9560
gText_Rom_2E9560: @ 0x082E9560
	.string "ヤスノリ$"
	.if (. - gText_Rom_2E9560) > 0x5
	.error "gText_Rom_2E9560 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9560) < 0x5
	.space 0x5 - (. - gText_Rom_2E9560)
	.endif
	.incbin "baserom.gba", 0x2e9565, 0x1b

	@ src/data/trainers.h:37623 trainers_line_37623
	.globl gText_Rom_2E9580
gText_Rom_2E9580: @ 0x082E9580
	.string "アツオ$"
	.if (. - gText_Rom_2E9580) > 0x4
	.error "gText_Rom_2E9580 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9580) < 0x4
	.space 0x4 - (. - gText_Rom_2E9580)
	.endif
	.incbin "baserom.gba", 0x2e9584, 0x1c

	@ src/data/trainers.h:37671 trainers_line_37671
	.globl gText_Rom_2E95A0
gText_Rom_2E95A0: @ 0x082E95A0
	.string "タエコ$"
	.if (. - gText_Rom_2E95A0) > 0x4
	.error "gText_Rom_2E95A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E95A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E95A0)
	.endif
	.incbin "baserom.gba", 0x2e95a4, 0x1c

	@ src/data/trainers.h:37719 trainers_line_37719
	.globl gText_Rom_2E95C0
gText_Rom_2E95C0: @ 0x082E95C0
	.string "リンコ$"
	.if (. - gText_Rom_2E95C0) > 0x4
	.error "gText_Rom_2E95C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E95C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E95C0)
	.endif
	.incbin "baserom.gba", 0x2e95c4, 0x1c

	@ src/data/trainers.h:37767 trainers_line_37767
	.globl gText_Rom_2E95E0
gText_Rom_2E95E0: @ 0x082E95E0
	.string "ユウゾウ$"
	.if (. - gText_Rom_2E95E0) > 0x5
	.error "gText_Rom_2E95E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E95E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E95E0)
	.endif
	.incbin "baserom.gba", 0x2e95e5, 0x3b

	@ src/data/trainers.h:37863 trainers_line_37863
	.globl gText_Rom_2E9620
gText_Rom_2E9620: @ 0x082E9620
	.string "チトセ$"
	.if (. - gText_Rom_2E9620) > 0x4
	.error "gText_Rom_2E9620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9620) < 0x4
	.space 0x4 - (. - gText_Rom_2E9620)
	.endif
	.incbin "baserom.gba", 0x2e9624, 0x1c

	@ src/data/trainers.h:37911 trainers_line_37911
	.globl gText_Rom_2E9640
gText_Rom_2E9640: @ 0x082E9640
	.string "リネ$"
	.if (. - gText_Rom_2E9640) > 0x3
	.error "gText_Rom_2E9640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9640) < 0x3
	.space 0x3 - (. - gText_Rom_2E9640)
	.endif
	.incbin "baserom.gba", 0x2e9643, 0x1d

	@ src/data/trainers.h:37959 trainers_line_37959
	.globl gText_Rom_2E9660
gText_Rom_2E9660: @ 0x082E9660
	.string "ミチヤス$"
	.if (. - gText_Rom_2E9660) > 0x5
	.error "gText_Rom_2E9660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9660) < 0x5
	.space 0x5 - (. - gText_Rom_2E9660)
	.endif
	.incbin "baserom.gba", 0x2e9665, 0x1b

	@ src/data/trainers.h:38007 trainers_line_38007
	.globl gText_Rom_2E9680
gText_Rom_2E9680: @ 0x082E9680
	.string "ユウリ$"
	.if (. - gText_Rom_2E9680) > 0x4
	.error "gText_Rom_2E9680 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9680) < 0x4
	.space 0x4 - (. - gText_Rom_2E9680)
	.endif
	.incbin "baserom.gba", 0x2e9684, 0x1c

	@ src/data/trainers.h:38055 trainers_line_38055
	.globl gText_Rom_2E96A0
gText_Rom_2E96A0: @ 0x082E96A0
	.string "モトコ$"
	.if (. - gText_Rom_2E96A0) > 0x4
	.error "gText_Rom_2E96A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E96A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E96A0)
	.endif
	.incbin "baserom.gba", 0x2e96a4, 0x1c

	@ src/data/trainers.h:38091 trainers_line_38091
	.globl gText_Rom_2E96C0
gText_Rom_2E96C0: @ 0x082E96C0
	.string "ミナツ$"
	.if (. - gText_Rom_2E96C0) > 0x4
	.error "gText_Rom_2E96C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E96C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E96C0)
	.endif
	.incbin "baserom.gba", 0x2e96c4, 0x1c

	@ src/data/trainers.h:38127 trainers_line_38127
	.globl gText_Rom_2E96E0
gText_Rom_2E96E0: @ 0x082E96E0
	.string "シマ$"
	.if (. - gText_Rom_2E96E0) > 0x3
	.error "gText_Rom_2E96E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E96E0) < 0x3
	.space 0x3 - (. - gText_Rom_2E96E0)
	.endif
	.incbin "baserom.gba", 0x2e96e3, 0x3d

	@ src/data/trainers.h:38213 trainers_line_38213
	.globl gText_Rom_2E9720
gText_Rom_2E9720: @ 0x082E9720
	.string "ジミー$"
	.if (. - gText_Rom_2E9720) > 0x4
	.error "gText_Rom_2E9720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9720) < 0x4
	.space 0x4 - (. - gText_Rom_2E9720)
	.endif
	.incbin "baserom.gba", 0x2e9724, 0x1c

	@ src/data/trainers.h:38249 trainers_line_38249
	.globl gText_Rom_2E9740
gText_Rom_2E9740: @ 0x082E9740
	.string "アツヒロ$"
	.if (. - gText_Rom_2E9740) > 0x5
	.error "gText_Rom_2E9740 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9740) < 0x5
	.space 0x5 - (. - gText_Rom_2E9740)
	.endif
	.incbin "baserom.gba", 0x2e9745, 0x1b

	@ src/data/trainers.h:38297 trainers_line_38297
	.globl gText_Rom_2E9760
gText_Rom_2E9760: @ 0x082E9760
	.string "ミヅキ$"
	.if (. - gText_Rom_2E9760) > 0x4
	.error "gText_Rom_2E9760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9760) < 0x4
	.space 0x4 - (. - gText_Rom_2E9760)
	.endif
	.incbin "baserom.gba", 0x2e9764, 0x1c

	@ src/data/trainers.h:38333 trainers_line_38333
	.globl gText_Rom_2E9780
gText_Rom_2E9780: @ 0x082E9780
	.string "カズヒロ$"
	.if (. - gText_Rom_2E9780) > 0x5
	.error "gText_Rom_2E9780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9780) < 0x5
	.space 0x5 - (. - gText_Rom_2E9780)
	.endif
	.incbin "baserom.gba", 0x2e9785, 0x1b

	@ src/data/trainers.h:38377 trainers_line_38377
	.globl gText_Rom_2E97A0
gText_Rom_2E97A0: @ 0x082E97A0
	.string "フウコ$"
	.if (. - gText_Rom_2E97A0) > 0x4
	.error "gText_Rom_2E97A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E97A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E97A0)
	.endif
	.incbin "baserom.gba", 0x2e97a4, 0x1c

	@ src/data/trainers.h:38425 trainers_line_38425
	.globl gText_Rom_2E97C0
gText_Rom_2E97C0: @ 0x082E97C0
	.string "ケンスケ$"
	.if (. - gText_Rom_2E97C0) > 0x5
	.error "gText_Rom_2E97C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E97C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E97C0)
	.endif
	.incbin "baserom.gba", 0x2e97c5, 0x1b

	@ src/data/trainers.h:38473 trainers_line_38473
	.globl gText_Rom_2E97E0
gText_Rom_2E97E0: @ 0x082E97E0
	.string "ヤスオ$"
	.if (. - gText_Rom_2E97E0) > 0x4
	.error "gText_Rom_2E97E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E97E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E97E0)
	.endif
	.incbin "baserom.gba", 0x2e97e4, 0x1c

	@ src/data/trainers.h:38569 trainers_line_38569
	.globl gText_Rom_2E9800
gText_Rom_2E9800: @ 0x082E9800
	.string "ハルイ$"
	.if (. - gText_Rom_2E9800) > 0x4
	.error "gText_Rom_2E9800 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9800) < 0x4
	.space 0x4 - (. - gText_Rom_2E9800)
	.endif
	.incbin "baserom.gba", 0x2e9804, 0x1c

	@ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
	.globl gText_Rom_2E9820
gText_Rom_2E9820: @ 0x082E9820
	.string "トキコ$"
	.if (. - gText_Rom_2E9820) > 0x4
	.error "gText_Rom_2E9820 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9820) < 0x4
	.space 0x4 - (. - gText_Rom_2E9820)
	.endif
	.incbin "baserom.gba", 0x2e9824, 0x1c

	@ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
	.globl gText_Rom_2E9840
gText_Rom_2E9840: @ 0x082E9840
	.string "ハルカ$"
	.if (. - gText_Rom_2E9840) > 0x4
	.error "gText_Rom_2E9840 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9840) < 0x4
	.space 0x4 - (. - gText_Rom_2E9840)
	.endif
	.incbin "baserom.gba", 0x2e9844, 0x1c

	@ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
	.globl gText_Rom_2E9860
gText_Rom_2E9860: @ 0x082E9860
	.string "ハルカ$"
	.if (. - gText_Rom_2E9860) > 0x4
	.error "gText_Rom_2E9860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9860) < 0x4
	.space 0x4 - (. - gText_Rom_2E9860)
	.endif
	.incbin "baserom.gba", 0x2e9864, 0x1c

	@ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
	.globl gText_Rom_2E9880
gText_Rom_2E9880: @ 0x082E9880
	.string "ツツジ$"
	.if (. - gText_Rom_2E9880) > 0x4
	.error "gText_Rom_2E9880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9880) < 0x4
	.space 0x4 - (. - gText_Rom_2E9880)
	.endif
	.incbin "baserom.gba", 0x2e9884, 0x1c

	@ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
	.globl gText_Rom_2E98A0
gText_Rom_2E98A0: @ 0x082E98A0
	.string "ツツジ$"
	.if (. - gText_Rom_2E98A0) > 0x4
	.error "gText_Rom_2E98A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E98A0) < 0x4
	.space 0x4 - (. - gText_Rom_2E98A0)
	.endif
	.incbin "baserom.gba", 0x2e98a4, 0x1c

	@ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
	.globl gText_Rom_2E98C0
gText_Rom_2E98C0: @ 0x082E98C0
	.string "ツツジ$"
	.if (. - gText_Rom_2E98C0) > 0x4
	.error "gText_Rom_2E98C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E98C0) < 0x4
	.space 0x4 - (. - gText_Rom_2E98C0)
	.endif
	.incbin "baserom.gba", 0x2e98c4, 0x1c

	@ src/data/trainers.h:12964 trainers_line_12964 (+5 aliases)
	.globl gText_Rom_2E98E0
gText_Rom_2E98E0: @ 0x082E98E0
	.string "ツツジ$"
	.if (. - gText_Rom_2E98E0) > 0x4
	.error "gText_Rom_2E98E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E98E0) < 0x4
	.space 0x4 - (. - gText_Rom_2E98E0)
	.endif
	.incbin "baserom.gba", 0x2e98e4, 0x1c

	@ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
	.globl gText_Rom_2E9900
gText_Rom_2E9900: @ 0x082E9900
	.string "トウキ$"
	.if (. - gText_Rom_2E9900) > 0x4
	.error "gText_Rom_2E9900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9900) < 0x4
	.space 0x4 - (. - gText_Rom_2E9900)
	.endif
	.incbin "baserom.gba", 0x2e9904, 0x1c

	@ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
	.globl gText_Rom_2E9920
gText_Rom_2E9920: @ 0x082E9920
	.string "トウキ$"
	.if (. - gText_Rom_2E9920) > 0x4
	.error "gText_Rom_2E9920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9920) < 0x4
	.space 0x4 - (. - gText_Rom_2E9920)
	.endif
	.incbin "baserom.gba", 0x2e9924, 0x1c

	@ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
	.globl gText_Rom_2E9940
gText_Rom_2E9940: @ 0x082E9940
	.string "トウキ$"
	.if (. - gText_Rom_2E9940) > 0x4
	.error "gText_Rom_2E9940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9940) < 0x4
	.space 0x4 - (. - gText_Rom_2E9940)
	.endif
	.incbin "baserom.gba", 0x2e9944, 0x1c

	@ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
	.globl gText_Rom_2E9960
gText_Rom_2E9960: @ 0x082E9960
	.string "トウキ$"
	.if (. - gText_Rom_2E9960) > 0x4
	.error "gText_Rom_2E9960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9960) < 0x4
	.space 0x4 - (. - gText_Rom_2E9960)
	.endif
	.incbin "baserom.gba", 0x2e9964, 0x1c

	@ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
	.globl gText_Rom_2E9980
gText_Rom_2E9980: @ 0x082E9980
	.string "テッセン$"
	.if (. - gText_Rom_2E9980) > 0x5
	.error "gText_Rom_2E9980 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9980) < 0x5
	.space 0x5 - (. - gText_Rom_2E9980)
	.endif
	.incbin "baserom.gba", 0x2e9985, 0x1b

	@ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
	.globl gText_Rom_2E99A0
gText_Rom_2E99A0: @ 0x082E99A0
	.string "テッセン$"
	.if (. - gText_Rom_2E99A0) > 0x5
	.error "gText_Rom_2E99A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E99A0) < 0x5
	.space 0x5 - (. - gText_Rom_2E99A0)
	.endif
	.incbin "baserom.gba", 0x2e99a5, 0x1b

	@ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
	.globl gText_Rom_2E99C0
gText_Rom_2E99C0: @ 0x082E99C0
	.string "テッセン$"
	.if (. - gText_Rom_2E99C0) > 0x5
	.error "gText_Rom_2E99C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E99C0) < 0x5
	.space 0x5 - (. - gText_Rom_2E99C0)
	.endif
	.incbin "baserom.gba", 0x2e99c5, 0x1b

	@ src/data/trainers.h:13134 trainers_line_13134 (+5 aliases)
	.globl gText_Rom_2E99E0
gText_Rom_2E99E0: @ 0x082E99E0
	.string "テッセン$"
	.if (. - gText_Rom_2E99E0) > 0x5
	.error "gText_Rom_2E99E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E99E0) < 0x5
	.space 0x5 - (. - gText_Rom_2E99E0)
	.endif
	.incbin "baserom.gba", 0x2e99e5, 0x1b

	@ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
	.globl gText_Rom_2E9A00
gText_Rom_2E9A00: @ 0x082E9A00
	.string "アスナ$"
	.if (. - gText_Rom_2E9A00) > 0x4
	.error "gText_Rom_2E9A00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9A00) < 0x4
	.space 0x4 - (. - gText_Rom_2E9A00)
	.endif
	.incbin "baserom.gba", 0x2e9a04, 0x1c

	@ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
	.globl gText_Rom_2E9A20
gText_Rom_2E9A20: @ 0x082E9A20
	.string "アスナ$"
	.if (. - gText_Rom_2E9A20) > 0x4
	.error "gText_Rom_2E9A20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9A20) < 0x4
	.space 0x4 - (. - gText_Rom_2E9A20)
	.endif
	.incbin "baserom.gba", 0x2e9a24, 0x1c

	@ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
	.globl gText_Rom_2E9A40
gText_Rom_2E9A40: @ 0x082E9A40
	.string "アスナ$"
	.if (. - gText_Rom_2E9A40) > 0x4
	.error "gText_Rom_2E9A40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9A40) < 0x4
	.space 0x4 - (. - gText_Rom_2E9A40)
	.endif
	.incbin "baserom.gba", 0x2e9a44, 0x1c

	@ src/data/trainers.h:13238 trainers_line_13238 (+5 aliases)
	.globl gText_Rom_2E9A60
gText_Rom_2E9A60: @ 0x082E9A60
	.string "アスナ$"
	.if (. - gText_Rom_2E9A60) > 0x4
	.error "gText_Rom_2E9A60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9A60) < 0x4
	.space 0x4 - (. - gText_Rom_2E9A60)
	.endif
	.incbin "baserom.gba", 0x2e9a64, 0x1c

	@ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
	.globl gText_Rom_2E9A80
gText_Rom_2E9A80: @ 0x082E9A80
	.string "センリ$"
	.if (. - gText_Rom_2E9A80) > 0x4
	.error "gText_Rom_2E9A80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9A80) < 0x4
	.space 0x4 - (. - gText_Rom_2E9A80)
	.endif
	.incbin "baserom.gba", 0x2e9a84, 0x1c

	@ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
	.globl gText_Rom_2E9AA0
gText_Rom_2E9AA0: @ 0x082E9AA0
	.string "センリ$"
	.if (. - gText_Rom_2E9AA0) > 0x4
	.error "gText_Rom_2E9AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9AA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E9AA0)
	.endif
	.incbin "baserom.gba", 0x2e9aa4, 0x1c

	@ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
	.globl gText_Rom_2E9AC0
gText_Rom_2E9AC0: @ 0x082E9AC0
	.string "センリ$"
	.if (. - gText_Rom_2E9AC0) > 0x4
	.error "gText_Rom_2E9AC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9AC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E9AC0)
	.endif
	.incbin "baserom.gba", 0x2e9ac4, 0x1c

	@ src/data/trainers.h:13342 trainers_line_13342 (+5 aliases)
	.globl gText_Rom_2E9AE0
gText_Rom_2E9AE0: @ 0x082E9AE0
	.string "センリ$"
	.if (. - gText_Rom_2E9AE0) > 0x4
	.error "gText_Rom_2E9AE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9AE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E9AE0)
	.endif
	.incbin "baserom.gba", 0x2e9ae4, 0x9c

	@ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
	.globl gText_Rom_2E9B80
gText_Rom_2E9B80: @ 0x082E9B80
	.string "フウとラン$"
	.if (. - gText_Rom_2E9B80) > 0x6
	.error "gText_Rom_2E9B80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9B80) < 0x6
	.space 0x6 - (. - gText_Rom_2E9B80)
	.endif
	.incbin "baserom.gba", 0x2e9b86, 0x1a

	@ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
	.globl gText_Rom_2E9BA0
gText_Rom_2E9BA0: @ 0x082E9BA0
	.string "フウとラン$"
	.if (. - gText_Rom_2E9BA0) > 0x6
	.error "gText_Rom_2E9BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9BA0) < 0x6
	.space 0x6 - (. - gText_Rom_2E9BA0)
	.endif
	.incbin "baserom.gba", 0x2e9ba6, 0x1a

	@ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
	.globl gText_Rom_2E9BC0
gText_Rom_2E9BC0: @ 0x082E9BC0
	.string "フウとラン$"
	.if (. - gText_Rom_2E9BC0) > 0x6
	.error "gText_Rom_2E9BC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9BC0) < 0x6
	.space 0x6 - (. - gText_Rom_2E9BC0)
	.endif
	.incbin "baserom.gba", 0x2e9bc6, 0x1a

	@ src/data/trainers.h:13569 trainers_line_13569 (+5 aliases)
	.globl gText_Rom_2E9BE0
gText_Rom_2E9BE0: @ 0x082E9BE0
	.string "フウとラン$"
	.if (. - gText_Rom_2E9BE0) > 0x6
	.error "gText_Rom_2E9BE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9BE0) < 0x6
	.space 0x6 - (. - gText_Rom_2E9BE0)
	.endif
	.incbin "baserom.gba", 0x2e9be6, 0x1a

	@ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
	.globl gText_Rom_2E9C00
gText_Rom_2E9C00: @ 0x082E9C00
	.string "アダン$"
	.if (. - gText_Rom_2E9C00) > 0x4
	.error "gText_Rom_2E9C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9C00) < 0x4
	.space 0x4 - (. - gText_Rom_2E9C00)
	.endif
	.incbin "baserom.gba", 0x2e9c04, 0x1c

	@ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
	.globl gText_Rom_2E9C20
gText_Rom_2E9C20: @ 0x082E9C20
	.string "アダン$"
	.if (. - gText_Rom_2E9C20) > 0x4
	.error "gText_Rom_2E9C20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9C20) < 0x4
	.space 0x4 - (. - gText_Rom_2E9C20)
	.endif
	.incbin "baserom.gba", 0x2e9c24, 0x1c

	@ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
	.globl gText_Rom_2E9C40
gText_Rom_2E9C40: @ 0x082E9C40
	.string "アダン$"
	.if (. - gText_Rom_2E9C40) > 0x4
	.error "gText_Rom_2E9C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9C40) < 0x4
	.space 0x4 - (. - gText_Rom_2E9C40)
	.endif
	.incbin "baserom.gba", 0x2e9c44, 0x1c

	@ src/data/trainers.h:13675 trainers_line_13675 (+5 aliases)
	.globl gText_Rom_2E9C60
gText_Rom_2E9C60: @ 0x082E9C60
	.string "アダン$"
	.if (. - gText_Rom_2E9C60) > 0x4
	.error "gText_Rom_2E9C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9C60) < 0x4
	.space 0x4 - (. - gText_Rom_2E9C60)
	.endif
	.incbin "baserom.gba", 0x2e9c64, 0x1c

	@ src/data/trainers.h:42979 trainers_line_42979
	.globl gText_Rom_2E9C80
gText_Rom_2E9C80: @ 0x082E9C80
	.string "モトヒロ$"
	.if (. - gText_Rom_2E9C80) > 0x5
	.error "gText_Rom_2E9C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9C80) < 0x5
	.space 0x5 - (. - gText_Rom_2E9C80)
	.endif
	.incbin "baserom.gba", 0x2e9c85, 0x1b

	@ src/data/trainers.h:43039 trainers_line_43039
	.globl gText_Rom_2E9CA0
gText_Rom_2E9CA0: @ 0x082E9CA0
	.string "セイイチ$"
	.if (. - gText_Rom_2E9CA0) > 0x5
	.error "gText_Rom_2E9CA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9CA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E9CA0)
	.endif
	.incbin "baserom.gba", 0x2e9ca5, 0x1b
	.globl gUnknown_82E9CC0
gUnknown_82E9CC0: @ 0x082E9CC0

	@ src/data/trainers.h:43075 trainers_line_43075 (+4 aliases)
	.globl gText_Rom_2E9CC0
gText_Rom_2E9CC0: @ 0x082E9CC0
	.string "ダイゴ$"
	.if (. - gText_Rom_2E9CC0) > 0x4
	.error "gText_Rom_2E9CC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9CC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E9CC0)
	.endif
	.incbin "baserom.gba", 0x2e9cc4, 0x3c
	.globl gUnknown_82E9D00
gUnknown_82E9D00: @ 0x082E9D00

	@ src/data/trainers.h:43253 trainers_line_43253
	.globl gText_Rom_2E9D00
gText_Rom_2E9D00: @ 0x082E9D00
	.string "ヒース$"
	.if (. - gText_Rom_2E9D00) > 0x4
	.error "gText_Rom_2E9D00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9D00) < 0x4
	.space 0x4 - (. - gText_Rom_2E9D00)
	.endif
	.incbin "baserom.gba", 0x2e9d04, 0x1c

	@ src/data/trainers.h:43289 trainers_line_43289
	.globl gText_Rom_2E9D20
gText_Rom_2E9D20: @ 0x082E9D20
	.string "ウコン$"
	.if (. - gText_Rom_2E9D20) > 0x4
	.error "gText_Rom_2E9D20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9D20) < 0x4
	.space 0x4 - (. - gText_Rom_2E9D20)
	.endif
	.incbin "baserom.gba", 0x2e9d24, 0x1c

	@ src/data/trainers.h:43325 trainers_line_43325
	.globl gText_Rom_2E9D40
gText_Rom_2E9D40: @ 0x082E9D40
	.string "コゴミ$"
	.if (. - gText_Rom_2E9D40) > 0x4
	.error "gText_Rom_2E9D40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9D40) < 0x4
	.space 0x4 - (. - gText_Rom_2E9D40)
	.endif
	.incbin "baserom.gba", 0x2e9d44, 0x1c

	@ src/data/trainers.h:43361 trainers_line_43361
	.globl gText_Rom_2E9D60
gText_Rom_2E9D60: @ 0x082E9D60
	.string "ダツラ$"
	.if (. - gText_Rom_2E9D60) > 0x4
	.error "gText_Rom_2E9D60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9D60) < 0x4
	.space 0x4 - (. - gText_Rom_2E9D60)
	.endif
	.incbin "baserom.gba", 0x2e9d64, 0x1c

	@ src/data/trainers.h:43397 trainers_line_43397
	.globl gText_Rom_2E9D80
gText_Rom_2E9D80: @ 0x082E9D80
	.string "アザミ$"
	.if (. - gText_Rom_2E9D80) > 0x4
	.error "gText_Rom_2E9D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9D80) < 0x4
	.space 0x4 - (. - gText_Rom_2E9D80)
	.endif
	.incbin "baserom.gba", 0x2e9d84, 0x1c

	@ src/data/trainers.h:43433 trainers_line_43433
	.globl gText_Rom_2E9DA0
gText_Rom_2E9DA0: @ 0x082E9DA0
	.string "ジンダイ$"
	.if (. - gText_Rom_2E9DA0) > 0x5
	.error "gText_Rom_2E9DA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9DA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E9DA0)
	.endif
	.incbin "baserom.gba", 0x2e9da5, 0x1b

	@ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E9DC0
gText_Rom_2E9DC0: @ 0x082E9DC0
	.string "ダイジロウ$"
	.if (. - gText_Rom_2E9DC0) != 0x6
	.error "gText_Rom_2E9DC0 must retain its original byte length"
	.endif
	.globl gText_Rom_2E9DC2
	.set gText_Rom_2E9DC2, gText_Rom_2E9DC0 + 0x2
	.incbin "baserom.gba", 0x2e9dc6, 0x1a

	@ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E9DE0
gText_Rom_2E9DE0: @ 0x082E9DE0
	.string "ダイジロウ$"
	.if (. - gText_Rom_2E9DE0) != 0x6
	.error "gText_Rom_2E9DE0 must retain its original byte length"
	.endif
	.globl gText_Rom_2E9DE2
	.set gText_Rom_2E9DE2, gText_Rom_2E9DE0 + 0x2
	.incbin "baserom.gba", 0x2e9de6, 0x1a

	@ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E9E00
gText_Rom_2E9E00: @ 0x082E9E00
	.string "ダイジロウ$"
	.if (. - gText_Rom_2E9E00) != 0x6
	.error "gText_Rom_2E9E00 must retain its original byte length"
	.endif
	.globl gText_Rom_2E9E02
	.set gText_Rom_2E9E02, gText_Rom_2E9E00 + 0x2
	.incbin "baserom.gba", 0x2e9e06, 0x1a

	@ src/data/trainers.h:37177 trainers_line_37177 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E9E20
gText_Rom_2E9E20: @ 0x082E9E20
	.string "ダイジロウ$"
	.if (. - gText_Rom_2E9E20) != 0x6
	.error "gText_Rom_2E9E20 must retain its original byte length"
	.endif
	.globl gText_Rom_2E9E22
	.set gText_Rom_2E9E22, gText_Rom_2E9E20 + 0x2
	.incbin "baserom.gba", 0x2e9e26, 0x1a

	@ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
	.globl gText_Rom_2E9E40
gText_Rom_2E9E40: @ 0x082E9E40
	.string "ノリタカ$"
	.if (. - gText_Rom_2E9E40) > 0x5
	.error "gText_Rom_2E9E40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9E40) < 0x5
	.space 0x5 - (. - gText_Rom_2E9E40)
	.endif
	.incbin "baserom.gba", 0x2e9e45, 0x1b

	@ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
	.globl gText_Rom_2E9E60
gText_Rom_2E9E60: @ 0x082E9E60
	.string "ノリタカ$"
	.if (. - gText_Rom_2E9E60) > 0x5
	.error "gText_Rom_2E9E60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9E60) < 0x5
	.space 0x5 - (. - gText_Rom_2E9E60)
	.endif
	.incbin "baserom.gba", 0x2e9e65, 0x1b

	@ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
	.globl gText_Rom_2E9E80
gText_Rom_2E9E80: @ 0x082E9E80
	.string "ノリタカ$"
	.if (. - gText_Rom_2E9E80) > 0x5
	.error "gText_Rom_2E9E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9E80) < 0x5
	.space 0x5 - (. - gText_Rom_2E9E80)
	.endif
	.incbin "baserom.gba", 0x2e9e85, 0x1b

	@ src/data/trainers.h:37309 trainers_line_37309 (+4 aliases)
	.globl gText_Rom_2E9EA0
gText_Rom_2E9EA0: @ 0x082E9EA0
	.string "ノリタカ$"
	.if (. - gText_Rom_2E9EA0) > 0x5
	.error "gText_Rom_2E9EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9EA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E9EA0)
	.endif
	.incbin "baserom.gba", 0x2e9ea5, 0x1b

	@ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
	.globl gText_Rom_2E9EC0
gText_Rom_2E9EC0: @ 0x082E9EC0
	.string "ヤスヒロ$"
	.if (. - gText_Rom_2E9EC0) > 0x5
	.error "gText_Rom_2E9EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9EC0) < 0x5
	.space 0x5 - (. - gText_Rom_2E9EC0)
	.endif
	.incbin "baserom.gba", 0x2e9ec5, 0x1b

	@ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
	.globl gText_Rom_2E9EE0
gText_Rom_2E9EE0: @ 0x082E9EE0
	.string "ヤスヒロ$"
	.if (. - gText_Rom_2E9EE0) > 0x5
	.error "gText_Rom_2E9EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9EE0) < 0x5
	.space 0x5 - (. - gText_Rom_2E9EE0)
	.endif
	.incbin "baserom.gba", 0x2e9ee5, 0x1b

	@ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
	.globl gText_Rom_2E9F00
gText_Rom_2E9F00: @ 0x082E9F00
	.string "ヤスヒロ$"
	.if (. - gText_Rom_2E9F00) > 0x5
	.error "gText_Rom_2E9F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9F00) < 0x5
	.space 0x5 - (. - gText_Rom_2E9F00)
	.endif
	.incbin "baserom.gba", 0x2e9f05, 0x1b

	@ src/data/trainers.h:18932 trainers_line_18932 (+4 aliases)
	.globl gText_Rom_2E9F20
gText_Rom_2E9F20: @ 0x082E9F20
	.string "ヤスヒロ$"
	.if (. - gText_Rom_2E9F20) > 0x5
	.error "gText_Rom_2E9F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9F20) < 0x5
	.space 0x5 - (. - gText_Rom_2E9F20)
	.endif
	.incbin "baserom.gba", 0x2e9f25, 0x1b

	@ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
	.globl gText_Rom_2E9F40
gText_Rom_2E9F40: @ 0x082E9F40
	.string "テツロウ$"
	.if (. - gText_Rom_2E9F40) > 0x5
	.error "gText_Rom_2E9F40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9F40) < 0x5
	.space 0x5 - (. - gText_Rom_2E9F40)
	.endif
	.incbin "baserom.gba", 0x2e9f45, 0x1b

	@ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
	.globl gText_Rom_2E9F60
gText_Rom_2E9F60: @ 0x082E9F60
	.string "テツロウ$"
	.if (. - gText_Rom_2E9F60) > 0x5
	.error "gText_Rom_2E9F60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9F60) < 0x5
	.space 0x5 - (. - gText_Rom_2E9F60)
	.endif
	.incbin "baserom.gba", 0x2e9f65, 0x1b

	@ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
	.globl gText_Rom_2E9F80
gText_Rom_2E9F80: @ 0x082E9F80
	.string "テツロウ$"
	.if (. - gText_Rom_2E9F80) > 0x5
	.error "gText_Rom_2E9F80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9F80) < 0x5
	.space 0x5 - (. - gText_Rom_2E9F80)
	.endif
	.incbin "baserom.gba", 0x2e9f85, 0x1b

	@ src/data/trainers.h:34197 trainers_line_34197 (+4 aliases)
	.globl gText_Rom_2E9FA0
gText_Rom_2E9FA0: @ 0x082E9FA0
	.string "テツロウ$"
	.if (. - gText_Rom_2E9FA0) > 0x5
	.error "gText_Rom_2E9FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9FA0) < 0x5
	.space 0x5 - (. - gText_Rom_2E9FA0)
	.endif
	.incbin "baserom.gba", 0x2e9fa5, 0x1b

	@ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
	.globl gText_Rom_2E9FC0
gText_Rom_2E9FC0: @ 0x082E9FC0
	.string "トキコ$"
	.if (. - gText_Rom_2E9FC0) > 0x4
	.error "gText_Rom_2E9FC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9FC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E9FC0)
	.endif
	.incbin "baserom.gba", 0x2e9fc4, 0x1c

	@ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
	.globl gText_Rom_2E9FE0
gText_Rom_2E9FE0: @ 0x082E9FE0
	.string "トキコ$"
	.if (. - gText_Rom_2E9FE0) > 0x4
	.error "gText_Rom_2E9FE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E9FE0) < 0x4
	.space 0x4 - (. - gText_Rom_2E9FE0)
	.endif
	.incbin "baserom.gba", 0x2e9fe4, 0x1c

	@ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
	.globl gText_Rom_2EA000
gText_Rom_2EA000: @ 0x082EA000
	.string "トキコ$"
	.if (. - gText_Rom_2EA000) > 0x4
	.error "gText_Rom_2EA000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA000) < 0x4
	.space 0x4 - (. - gText_Rom_2EA000)
	.endif
	.incbin "baserom.gba", 0x2ea004, 0x1c

	@ src/data/trainers.h:38665 trainers_line_38665 (+4 aliases)
	.globl gText_Rom_2EA020
gText_Rom_2EA020: @ 0x082EA020
	.string "トキコ$"
	.if (. - gText_Rom_2EA020) > 0x4
	.error "gText_Rom_2EA020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA020) < 0x4
	.space 0x4 - (. - gText_Rom_2EA020)
	.endif
	.incbin "baserom.gba", 0x2ea024, 0x1c

	@ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
	.globl gText_Rom_2EA040
gText_Rom_2EA040: @ 0x082EA040
	.string "ジョー$"
	.if (. - gText_Rom_2EA040) > 0x4
	.error "gText_Rom_2EA040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA040) < 0x4
	.space 0x4 - (. - gText_Rom_2EA040)
	.endif
	.incbin "baserom.gba", 0x2ea044, 0x1c

	@ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
	.globl gText_Rom_2EA060
gText_Rom_2EA060: @ 0x082EA060
	.string "ジョー$"
	.if (. - gText_Rom_2EA060) > 0x4
	.error "gText_Rom_2EA060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA060) < 0x4
	.space 0x4 - (. - gText_Rom_2EA060)
	.endif
	.incbin "baserom.gba", 0x2ea064, 0x1c

	@ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
	.globl gText_Rom_2EA080
gText_Rom_2EA080: @ 0x082EA080
	.string "ジョー$"
	.if (. - gText_Rom_2EA080) > 0x4
	.error "gText_Rom_2EA080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA080) < 0x4
	.space 0x4 - (. - gText_Rom_2EA080)
	.endif
	.incbin "baserom.gba", 0x2ea084, 0x1c

	@ src/data/trainers.h:9234 trainers_line_9234 (+4 aliases)
	.globl gText_Rom_2EA0A0
gText_Rom_2EA0A0: @ 0x082EA0A0
	.string "ジョー$"
	.if (. - gText_Rom_2EA0A0) > 0x4
	.error "gText_Rom_2EA0A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA0A0) < 0x4
	.space 0x4 - (. - gText_Rom_2EA0A0)
	.endif
	.incbin "baserom.gba", 0x2ea0a4, 0x1c

	@ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
	.globl gText_Rom_2EA0C0
gText_Rom_2EA0C0: @ 0x082EA0C0
	.string "マサヒコ$"
	.if (. - gText_Rom_2EA0C0) > 0x5
	.error "gText_Rom_2EA0C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA0C0) < 0x5
	.space 0x5 - (. - gText_Rom_2EA0C0)
	.endif
	.incbin "baserom.gba", 0x2ea0c5, 0x1b

	@ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
	.globl gText_Rom_2EA0E0
gText_Rom_2EA0E0: @ 0x082EA0E0
	.string "マサヒコ$"
	.if (. - gText_Rom_2EA0E0) > 0x5
	.error "gText_Rom_2EA0E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA0E0) < 0x5
	.space 0x5 - (. - gText_Rom_2EA0E0)
	.endif
	.incbin "baserom.gba", 0x2ea0e5, 0x1b

	@ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
	.globl gText_Rom_2EA100
gText_Rom_2EA100: @ 0x082EA100
	.string "マサヒコ$"
	.if (. - gText_Rom_2EA100) > 0x5
	.error "gText_Rom_2EA100 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA100) < 0x5
	.space 0x5 - (. - gText_Rom_2EA100)
	.endif
	.incbin "baserom.gba", 0x2ea105, 0x1b

	@ src/data/trainers.h:33 trainers_line_33 (+4 aliases)
	.globl gText_Rom_2EA120
gText_Rom_2EA120: @ 0x082EA120
	.string "マサヒコ$"
	.if (. - gText_Rom_2EA120) > 0x5
	.error "gText_Rom_2EA120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA120) < 0x5
	.space 0x5 - (. - gText_Rom_2EA120)
	.endif
	.incbin "baserom.gba", 0x2ea125, 0x1b

	@ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
	.globl gText_Rom_2EA140
gText_Rom_2EA140: @ 0x082EA140
	.string "フクミ$"
	.if (. - gText_Rom_2EA140) > 0x4
	.error "gText_Rom_2EA140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA140) < 0x4
	.space 0x4 - (. - gText_Rom_2EA140)
	.endif
	.incbin "baserom.gba", 0x2ea144, 0x1c

	@ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
	.globl gText_Rom_2EA160
gText_Rom_2EA160: @ 0x082EA160
	.string "フクミ$"
	.if (. - gText_Rom_2EA160) > 0x4
	.error "gText_Rom_2EA160 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA160) < 0x4
	.space 0x4 - (. - gText_Rom_2EA160)
	.endif
	.incbin "baserom.gba", 0x2ea164, 0x1c

	@ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
	.globl gText_Rom_2EA180
gText_Rom_2EA180: @ 0x082EA180
	.string "フクミ$"
	.if (. - gText_Rom_2EA180) > 0x4
	.error "gText_Rom_2EA180 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA180) < 0x4
	.space 0x4 - (. - gText_Rom_2EA180)
	.endif
	.incbin "baserom.gba", 0x2ea184, 0x1c

	@ src/data/trainers.h:333 trainers_line_333 (+4 aliases)
	.globl gText_Rom_2EA1A0
gText_Rom_2EA1A0: @ 0x082EA1A0
	.string "フクミ$"
	.if (. - gText_Rom_2EA1A0) > 0x4
	.error "gText_Rom_2EA1A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA1A0) < 0x4
	.space 0x4 - (. - gText_Rom_2EA1A0)
	.endif
	.incbin "baserom.gba", 0x2ea1a4, 0x1c

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_2EA1C0
gText_Rom_2EA1C0: @ 0x082EA1C0
	.string "ショウ$"
	.if (. - gText_Rom_2EA1C0) > 0x4
	.error "gText_Rom_2EA1C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA1C0) < 0x4
	.space 0x4 - (. - gText_Rom_2EA1C0)
	.endif
	.incbin "baserom.gba", 0x2ea1c4, 0x1c

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_2EA1E0
gText_Rom_2EA1E0: @ 0x082EA1E0
	.string "ショウ$"
	.if (. - gText_Rom_2EA1E0) > 0x4
	.error "gText_Rom_2EA1E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA1E0) < 0x4
	.space 0x4 - (. - gText_Rom_2EA1E0)
	.endif
	.incbin "baserom.gba", 0x2ea1e4, 0x1c

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_2EA200
gText_Rom_2EA200: @ 0x082EA200
	.string "ショウ$"
	.if (. - gText_Rom_2EA200) > 0x4
	.error "gText_Rom_2EA200 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA200) < 0x4
	.space 0x4 - (. - gText_Rom_2EA200)
	.endif
	.incbin "baserom.gba", 0x2ea204, 0x1c

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_2EA220
gText_Rom_2EA220: @ 0x082EA220
	.string "ショウ$"
	.if (. - gText_Rom_2EA220) > 0x4
	.error "gText_Rom_2EA220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA220) < 0x4
	.space 0x4 - (. - gText_Rom_2EA220)
	.endif
	.incbin "baserom.gba", 0x2ea224, 0x1c

	@ src/data/trainers.h:45709 trainers_line_45709
	.globl gText_Rom_2EA240
gText_Rom_2EA240: @ 0x082EA240
	.string "ミハネ$"
	.if (. - gText_Rom_2EA240) > 0x4
	.error "gText_Rom_2EA240 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA240) < 0x4
	.space 0x4 - (. - gText_Rom_2EA240)
	.endif
	.incbin "baserom.gba", 0x2ea244, 0x1c

	@ src/data/trainers.h:45743 trainers_line_45743
	.globl gText_Rom_2EA260
gText_Rom_2EA260: @ 0x082EA260
	.string "シンヤ$"
	.if (. - gText_Rom_2EA260) > 0x4
	.error "gText_Rom_2EA260 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA260) < 0x4
	.space 0x4 - (. - gText_Rom_2EA260)
	.endif
	.incbin "baserom.gba", 0x2ea264, 0x1c

	@ src/data/trainers.h:45789 trainers_line_45789
	.globl gText_Rom_2EA280
gText_Rom_2EA280: @ 0x082EA280
	.string "ダグ$"
	.if (. - gText_Rom_2EA280) > 0x3
	.error "gText_Rom_2EA280 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA280) < 0x3
	.space 0x3 - (. - gText_Rom_2EA280)
	.endif
	.incbin "baserom.gba", 0x2ea283, 0x1d

	@ src/data/easy_chat/easy_chat_group_trainer.h:154 easy_chat_group_trainer_line_154 (+4 aliases)
	.globl gText_Rom_2EA2A0
gText_Rom_2EA2A0: @ 0x082EA2A0
	.string "レッド$"
	.if (. - gText_Rom_2EA2A0) > 0x4
	.error "gText_Rom_2EA2A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA2A0) < 0x4
	.space 0x4 - (. - gText_Rom_2EA2A0)
	.endif
	.incbin "baserom.gba", 0x2ea2a4, 0x1c

	@ src/data/easy_chat/easy_chat_group_trainer.h:148 easy_chat_group_trainer_line_148 (+3 aliases)
	.globl gText_Rom_2EA2C0
gText_Rom_2EA2C0: @ 0x082EA2C0
	.string "リーフ$"
	.if (. - gText_Rom_2EA2C0) > 0x4
	.error "gText_Rom_2EA2C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA2C0) < 0x4
	.space 0x4 - (. - gText_Rom_2EA2C0)
	.endif
	.incbin "baserom.gba", 0x2ea2c4, 0x1c

	@ src/data/trainers.h:25879 trainers_line_25879 (+18 aliases)
	.globl gText_Rom_2EA2E0
gText_Rom_2EA2E0: @ 0x082EA2E0
	.string "ユウキ$"
	.if (. - gText_Rom_2EA2E0) > 0x4
	.error "gText_Rom_2EA2E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA2E0) < 0x4
	.space 0x4 - (. - gText_Rom_2EA2E0)
	.endif
	.incbin "baserom.gba", 0x2ea2e4, 0x1c

	@ src/data/trainers.h:26347 trainers_line_26347 (+18 aliases)
	.globl gText_Rom_2EA300
gText_Rom_2EA300: @ 0x082EA300
	.string "ハルカ$"
	.if (. - gText_Rom_2EA300) > 0x4
	.error "gText_Rom_2EA300 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EA300) < 0x4
	.space 0x4 - (. - gText_Rom_2EA300)
	.endif
	.incbin "baserom.gba", 0x2ea304, 0x18
