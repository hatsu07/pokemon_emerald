	@ data/text/move_tutors.inc:87 MoveTutor_Text_MetronomeTeach
	.globl gText_Rom_276272
gText_Rom_276272: @ 0x08276272
	.string "あーん ほしいものが いっぱい!\nでも おこづかいは なくなっちゃったし……\pゆびを ふれば まほうで\nおこづかい でてくれば いーのにな!\lなんてね エヘヘ……\pしかたが ないから\nあなたの ポケモンに\lゆびをふる でも おしえて あげよっか?{EOS}"
	.if (. - gText_Rom_276272) > 0x7c
	.error "gText_Rom_276272 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276272) < 0x7c
	.space 0x7c - (. - gText_Rom_276272)
	.endif
