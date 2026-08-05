	@ data/text/secret_base_trainers.inc:70 SecretBase_Text_Trainer6PreChampion
	.globl gText_Rom_245499
gText_Rom_245499: @ 0x08245499
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ$"
	.if (. - gText_Rom_245499) > 0x3d
	.error "gText_Rom_245499 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245499) < 0x3d
	.space 0x3d - (. - gText_Rom_245499)
	.endif
