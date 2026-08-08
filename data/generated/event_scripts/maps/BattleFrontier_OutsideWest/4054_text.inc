	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:408 BattleFrontier_OutsideWest_Text_DomeAceIsMine
	.globl gText_Rom_21F550
gText_Rom_21F550: @ 0x0821F550
	.string "ああ うるさいっ! うるさいわっ!\pおみゃーら みたいな おこさまは\nどこぞの ジムリーダーでも\lおうえん しとけっ!!\pドームスーパースターは わしだけっ!\nわしだけの アイドルなのっ!!"
	.byte EOS
	.if (. - gText_Rom_21F550) > 0x60
	.error "gText_Rom_21F550 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F550) < 0x60
	.space 0x60 - (. - gText_Rom_21F550)
	.endif
