	@ data/text/trainers.inc:2684 Route124_Text_RoyPostRematch
	.globl gText_Rom_26060A
gText_Rom_26060A: @ 0x0826060A
	.string "コウ『オレの ねえちゃん\nおこると むちゃくちゃ こわいんだ……\pあとで オレと ポケモン\nもうとっくん だよ……{EOS}"
	.if (. - gText_Rom_26060A) > 0x3a
	.error "gText_Rom_26060A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26060A) < 0x3a
	.space 0x3a - (. - gText_Rom_26060A)
	.endif
