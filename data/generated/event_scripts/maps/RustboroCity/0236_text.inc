	@ data/maps/RustboroCity/scripts.inc:1054 RustboroCity_Text_MrBrineyLovesPeeko
	.globl gText_Rom_1DF43C
gText_Rom_1DF43C: @ 0x081DF43C
	.string "はまべの こやに すんでいる\nふなのりの ハギろうじん\lピーコちゃんの ために カイナに いって\lかいもの するんだってさ\pほんとうに ピーコちゃんが すきなんだな!\nあの じいさん$"
	.if (. - gText_Rom_1DF43C) > 0x5c
	.error "gText_Rom_1DF43C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DF43C) < 0x5c
	.space 0x5c - (. - gText_Rom_1DF43C)
	.endif
