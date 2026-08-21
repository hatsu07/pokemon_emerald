	@ src/data/trade.h:49 sJPText_PressBButtonToQuit
	.globl gText_Rom_300AEE
gText_Rom_300AEE: @ 0x08300AEE
	.string "Bボタン で もどります{EOS}"
	.if (. - gText_Rom_300AEE) > 0xd
	.error "gText_Rom_300AEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300AEE) < 0xd
	.space 0xd - (. - gText_Rom_300AEE)
	.endif
	.space 0x1, 0x00
	@ pret/pokeemerald-jp direct xref for 0x08300AFC: trade.s: sub_08076DD8, sub_08077558, sub_080787A0, sub_08078900, sub_080799C0
	.globl gTradeData_08300AFC
gTradeData_08300AFC: @ 0x08300AFC
	@ confirmed contiguous ROM pointer table: 6 entries from this address
sPointerTable_08300AFC:
	@ analyzed canonical ROM range 0x08300AFC-0x08300B27
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0ABD, 0x0830, 0x0AC1, 0x0830, 0x0AD1, 0x0830, 0x0AD8, 0x0830
	.2byte 0x0AE0, 0x0830, 0x0AEE, 0x0830, 0x635D, 0x60AE, 0x2D5D, 0x2920
	.2byte 0x0AFF, 0x0603, 0x162E, 0x0D41, 0x00FF, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08300B28: trade.s: sub_080787A0
	.globl gTradeData_08300B28
gTradeData_08300B28: @ 0x08300B28
	@ confirmed contiguous ROM pointer table: 4 entries from this address
sPointerTable_08300B28:
	@ analyzed canonical ROM range 0x08300B28-0x08300B37
	@ pointer/nullable table
	.4byte 0x08300B14 @ +0x0
	.4byte sub_08079A38 @ +0x4
	.4byte 0x08300B1D @ +0x8
	.4byte sub_08079A5C @ +0xC
	.globl gText_Rom_300B38
gText_Rom_300B38: @ 0x08300B38
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}つうしんたいきちゅう！\nしばらくおまちください{EOS}"
	.if (. - gText_Rom_300B38) > 0x21
	.error "gText_Rom_300B38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B38) < 0x21
	.space 0x21 - (. - gText_Rom_300B38)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B59
gText_Rom_300B59: @ 0x08300B59
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}こうかんは\nキャンセル　されました！{EOS}"
	.if (. - gText_Rom_300B59) > 0x1c
	.error "gText_Rom_300B59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B59) < 0x1c
	.space 0x1c - (. - gText_Rom_300B59)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_300B75
gText_Rom_300B75: @ 0x08300B75
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}そのポケモンを　こうかんすると\nせんとうできなくなっちゃうよ！{EOS}"
	.if (. - gText_Rom_300B75) != 0x29
	.error "gText_Rom_300B75 must retain its original byte length"
	.endif
	.globl gText_Rom_300B7E
	.set gText_Rom_300B7E, gText_Rom_300B75 + 0x9

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300B9E
gText_Rom_300B9E: @ 0x08300B9E
	.string "{COLOR}{0x02}{HIGHLIGHT}{0x01}{SHADOW}{0x03}ともだちの　しゅうりょうを\nまっています……{EOS}"
	.if (. - gText_Rom_300B9E) > 0x20
	.error "gText_Rom_300B9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300B9E) < 0x20
	.space 0x20 - (. - gText_Rom_300B9E)
	.endif

	@ asm/trade.s:5988 sub_08079BD4
	.globl gText_Rom_300BBE
gText_Rom_300BBE: @ 0x08300BBE
	.string "ともだちは　ポケモンの\nこうかんを　したいようです！{EOS}"
	.if (. - gText_Rom_300BBE) > 0x1b
	.error "gText_Rom_300BBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_300BBE) < 0x1b
	.space 0x1b - (. - gText_Rom_300BBE)
	.endif
	.space 0x3, 0x00
