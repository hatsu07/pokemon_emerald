	@ data/text/secret_base_trainers.inc:55 SecretBase_Text_Trainer6Intro
	.globl gText_Rom_2453EB
gText_Rom_2453EB: @ 0x082453EB
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ\pどう わたしの じつりょく みてみる?$"
	.if (. - gText_Rom_2453EB) > 0x51
	.error "gText_Rom_2453EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2453EB) < 0x51
	.space 0x51 - (. - gText_Rom_2453EB)
	.endif
