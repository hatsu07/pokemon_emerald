	@ src/data/moves_info.h:6710 moves_info_line_6710
	.globl gText_Rom_2EB52C
gText_Rom_2EB52C: @ 0x082EB52C
	.string "ちょうはつ$"
	.if (. - gText_Rom_2EB52C) > 0x6
	.error "gText_Rom_2EB52C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB52C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB52C)
	.endif
	.incbin "baserom.gba", 0x2eb532, 0x2

	@ src/data/moves_info.h:6734 moves_info_line_6734
	.globl gText_Rom_2EB534
gText_Rom_2EB534: @ 0x082EB534
	.string "てだすけ$"
	.if (. - gText_Rom_2EB534) > 0x5
	.error "gText_Rom_2EB534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB534) < 0x5
	.space 0x5 - (. - gText_Rom_2EB534)
	.endif
	.incbin "baserom.gba", 0x2eb539, 0x3

	@ src/data/moves_info.h:6761 moves_info_line_6761
	.globl gText_Rom_2EB53C
gText_Rom_2EB53C: @ 0x082EB53C
	.string "トリック$"
	.if (. - gText_Rom_2EB53C) > 0x5
	.error "gText_Rom_2EB53C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB53C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB53C)
	.endif
	.incbin "baserom.gba", 0x2eb541, 0x3

	@ src/data/moves_info.h:6785 moves_info_line_6785
	.globl gText_Rom_2EB544
gText_Rom_2EB544: @ 0x082EB544
	.string "なりきり$"
	.if (. - gText_Rom_2EB544) > 0x5
	.error "gText_Rom_2EB544 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB544) < 0x5
	.space 0x5 - (. - gText_Rom_2EB544)
	.endif
	.incbin "baserom.gba", 0x2eb549, 0x3

	@ src/data/moves_info.h:6809 moves_info_line_6809
	.globl gText_Rom_2EB54C
gText_Rom_2EB54C: @ 0x082EB54C
	.string "ねがいごと$"
	.if (. - gText_Rom_2EB54C) > 0x6
	.error "gText_Rom_2EB54C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB54C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB54C)
	.endif
	.incbin "baserom.gba", 0x2eb552, 0x2

	@ src/data/moves_info.h:6834 moves_info_line_6834
	.globl gText_Rom_2EB554
gText_Rom_2EB554: @ 0x082EB554
	.string "ねこのて$"
	.if (. - gText_Rom_2EB554) > 0x5
	.error "gText_Rom_2EB554 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB554) < 0x5
	.space 0x5 - (. - gText_Rom_2EB554)
	.endif
	.incbin "baserom.gba", 0x2eb559, 0x3

