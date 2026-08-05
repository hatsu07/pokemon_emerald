	@ data/text/trainers.inc:148 Route103_Text_PetePostBattle
	.globl gText_Rom_259BB6
gText_Rom_259BB6: @ 0x08259BB6
	.string "なーるほど\pそれ ほど たよれる ポケモンなら\nおもわず なみのり したくなる ってもんだ"
	.byte EOS
	.if (. - gText_Rom_259BB6) > 0x2e
	.error "gText_Rom_259BB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259BB6) < 0x2e
	.space 0x2e - (. - gText_Rom_259BB6)
	.endif
