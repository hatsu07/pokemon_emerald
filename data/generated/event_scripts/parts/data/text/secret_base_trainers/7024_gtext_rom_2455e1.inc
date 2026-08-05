	@ data/text/secret_base_trainers.inc:91 SecretBase_Text_Trainer7Intro
	.globl gText_Rom_2455E1
gText_Rom_2455E1: @ 0x082455E1
	.string "わたし グッズの おかいものが\nだいすき です!\pそれと おなじくらい ポケモンを そだてるの\nだいすき です!\pもし よかったら わたしの ポケモンちゃんと\nしょうぶして くれますか?$"
	.if (. - gText_Rom_2455E1) > 0x5e
	.error "gText_Rom_2455E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2455E1) < 0x5e
	.space 0x5e - (. - gText_Rom_2455E1)
	.endif
