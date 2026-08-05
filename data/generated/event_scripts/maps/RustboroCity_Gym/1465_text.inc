	@ data/maps/RustboroCity_Gym/scripts.inc:211 RustboroCity_Gym_Text_ExplainRockTomb
	.globl gText_Rom_2028BA
gText_Rom_2028BA: @ 0x082028BA
	.string "その わざマシン39の なかには\nがんせきふうじが はいっているわ\pいわを あいてに むかって おとして\nダメージを あたえる だけでなくて\lすばやさも さげる わざ なの\pちなみに\nわざマシンを つかえば ポケモンに\lいっしゅんで わざを おしえられるの\pただし つかいすて だから\nつかうときは よく かんがえてね$"
	.if (. - gText_Rom_2028BA) > 0xa0
	.error "gText_Rom_2028BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2028BA) < 0xa0
	.space 0xa0 - (. - gText_Rom_2028BA)
	.endif
