	@ data/text/trainers.inc:1658 Route116_Text_DawsonPostBattle
	.globl gText_Rom_25DA5C
gText_Rom_25DA5C: @ 0x0825DA5C
	.string "ああっ\nポケモンの けなみと\lぼくの ヘアーが みだれた!\lびよういん よやく しなきゃ{EOS}"
	.if (. - gText_Rom_25DA5C) > 0x2d
	.error "gText_Rom_25DA5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DA5C) < 0x2d
	.space 0x2d - (. - gText_Rom_25DA5C)
	.endif
