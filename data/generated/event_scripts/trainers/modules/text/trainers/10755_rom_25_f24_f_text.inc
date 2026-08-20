	@ data/text/trainers.inc:2216 Route120_Text_AngelicaPostBattle
	.globl gText_Rom_25F24F
gText_Rom_25F24F: @ 0x0825F24F
	.string "あなたに パラソルは にあわないわ!\pだって こんなの もっていたら\nすっごく ジャマに なりそう なんだもの{EOS}"
	.if (. - gText_Rom_25F24F) > 0x38
	.error "gText_Rom_25F24F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F24F) < 0x38
	.space 0x38 - (. - gText_Rom_25F24F)
	.endif
