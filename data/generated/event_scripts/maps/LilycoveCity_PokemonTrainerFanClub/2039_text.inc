	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:638 LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll
	.globl gText_Rom_20917D
gText_Rom_20917D: @ 0x0820917D
	.string "{PLAYER}！\nやっぱり すごいよ きみは！\pぼくは きみを はじめて みたときから\nすごい やつだって おもってたよ！\lやはり ぼくのめは たしかな ようだね！{EOS}"
	.if (. - gText_Rom_20917D) > 0x4e
	.error "gText_Rom_20917D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20917D) < 0x4e
	.space 0x4e - (. - gText_Rom_20917D)
	.endif
