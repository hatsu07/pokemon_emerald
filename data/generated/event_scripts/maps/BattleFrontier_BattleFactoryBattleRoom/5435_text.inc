	@ data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.inc:282 BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime
	.globl gText_Rom_232FA0
gText_Rom_232FA0: @ 0x08232FA0
	.string "ダツラ『オース! どうよー? ちょうしはー?\nしっかり べんきょう してるか?\p…… お?\pおめえ まえに あった ときより\nちょっと イイ ツラしてるじゃ ねえか!\pこりゃ たのしみ だねー!\nワクワクして きたぜ! おい!"
	.byte EOS
	.if (. - gText_Rom_232FA0) > 0x72
	.error "gText_Rom_232FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_232FA0) < 0x72
	.space 0x72 - (. - gText_Rom_232FA0)
	.endif
