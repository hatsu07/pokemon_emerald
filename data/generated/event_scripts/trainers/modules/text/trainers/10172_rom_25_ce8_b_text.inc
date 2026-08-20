	@ data/text/trainers.inc:1373 Route114_Text_NolanIntro (+1 aliases)
	.globl gText_Rom_25CE8B
gText_Rom_25CE8B: @ 0x0825CE8B
	.string "つりも すき だが\nしょうぶも すき!\pしょうぶを いどまれたら\nつりの さいちゅうでも ことわらないよ!{EOS}"
	.if (. - gText_Rom_25CE8B) > 0x36
	.error "gText_Rom_25CE8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CE8B) < 0x36
	.space 0x36 - (. - gText_Rom_25CE8B)
	.endif
