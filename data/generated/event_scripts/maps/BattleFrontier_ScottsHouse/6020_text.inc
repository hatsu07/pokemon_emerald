	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:254 BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier
	.globl gText_Rom_238CA3
gText_Rom_238CA3: @ 0x08238CA3
	.string "エニシダ『きみは たしか\nしょうぶ だけでは なくて\lポケモンずかんも つくって いたね!\pもしかしたら バトルフロンティア にも\nポケモンと であえる ばしょが\lあるかも しれないよ? うふふ……"
	.byte EOS
	.if (. - gText_Rom_238CA3) > 0x64
	.error "gText_Rom_238CA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238CA3) < 0x64
	.space 0x64 - (. - gText_Rom_238CA3)
	.endif
