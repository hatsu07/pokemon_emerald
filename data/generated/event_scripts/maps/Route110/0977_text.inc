	@ data/maps/Route110/scripts.inc:803 Route110_Text_BrendanExplainItemfinder
	.globl gText_Rom_1E996A
gText_Rom_1E996A: @ 0x081E996A
	.string "ユウキ『そいつは ダウジングマシン\pつかうと めには みえなくても\nおちている どうぐが あると\lはんのう して おとで おしえてくれる\pじゃ オレ あたらしい\nポケモンを さがしに いくから$"
	.if (. - gText_Rom_1E996A) > 0x61
	.error "gText_Rom_1E996A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E996A) < 0x61
	.space 0x61 - (. - gText_Rom_1E996A)
	.endif
