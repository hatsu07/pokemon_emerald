	@ data/maps/FortreeCity_Gym/scripts.inc:160 FortreeCity_Gym_Text_JaredPostBattle
	.globl gText_Rom_204646
gText_Rom_204646: @ 0x08204646
	.string "トレーナーは あたまの かいてんも\nはやく なければ つとまらないぜ!\pきみは リーダーの ところまで\nちゃんと たどりつく ことが できるかい?{EOS}"
	.if (. - gText_Rom_204646) > 0x4a
	.error "gText_Rom_204646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204646) < 0x4a
	.space 0x4a - (. - gText_Rom_204646)
	.endif
