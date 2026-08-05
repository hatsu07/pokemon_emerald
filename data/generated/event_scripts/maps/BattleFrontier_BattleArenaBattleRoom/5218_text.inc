	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:548 BattleFrontier_BattleArenaBattleRoom_Text_NowFaceTycoon
	.globl gText_Rom_230ABD
gText_Rom_230ABD: @ 0x08230ABD
	.string "おきゃくじん!\pあなたの じつりょくは\nじつに すさまじいで ございますな!\pそこで ここらで ひとつ\nわれらが たいしょう アリーナキャプテンと\lおてあわせ いただき ましょう!"
	.byte EOS
	.if (. - gText_Rom_230ABD) > 0x5b
	.error "gText_Rom_230ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230ABD) < 0x5b
	.space 0x5b - (. - gText_Rom_230ABD)
	.endif
