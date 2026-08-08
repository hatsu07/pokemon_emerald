	@ data/text/trainers.inc:230 Route104_Text_HaleyRegister1 (+1 aliases)
	.globl gText_Rom_259FA0
gText_Rom_259FA0: @ 0x08259FA0
	.string "あなた つよいけど\nポケナビに とうろく しようかな……\lやめとこうかな……\pえーい! とうろくしちゃえ!"
	.byte EOS
	.if (. - gText_Rom_259FA0) > 0x36
	.error "gText_Rom_259FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259FA0) < 0x36
	.space 0x36 - (. - gText_Rom_259FA0)
	.endif
