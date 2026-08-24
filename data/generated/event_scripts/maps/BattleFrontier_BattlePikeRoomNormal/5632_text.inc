	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:789 BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn
	.globl gText_Rom_235050
gText_Rom_235050: @ 0x08235050
	.string "おらっ!! かかっといでっ!!"
	.byte EOS
	.if (. - gText_Rom_235050) > 0x10
	.error "gText_Rom_235050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235050) < 0x10
	.space 0x10 - (. - gText_Rom_235050)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:793 BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass
	.globl gText_Rom_235060
gText_Rom_235060: @ 0x08235060
	.string "アザミ『…… …… …… ……\p…… …… フロンティアパス……"
	.byte EOS
	.if (. - gText_Rom_235060) > 0x21
	.error "gText_Rom_235060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235060) < 0x21
	.space 0x21 - (. - gText_Rom_235060)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:797 BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine
	.globl gText_Rom_235081
gText_Rom_235081: @ 0x08235081
	.string "ラックシンボルが\nきんいろに かがやいた!"
	.byte EOS
	.if (. - gText_Rom_235081) > 0x16
	.error "gText_Rom_235081 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235081) < 0x16
	.space 0x16 - (. - gText_Rom_235081)
	.endif
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:801 BattleFrontier_BattlePikeRoomNormal_Text_IWontForget
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_235097
gText_Rom_235097: @ 0x08235097
	.string "…… …… あんた……\nいっしょう わすれない からね………"
	.byte EOS
	.if (. - gText_Rom_235097) != 0x1f
	.error "gText_Rom_235097 must retain its original byte length"
	.endif
	.globl gText_Rom_2350B2
	.set gText_Rom_2350B2, gText_Rom_235097 + 0x1b
	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:805 BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal
	.globl gText_Rom_2350B6
gText_Rom_2350B6: @ 0x082350B6
	.string "ようこそ いらっしゃい ました……\pうふふ……\nなんて うんの ない おかた……\pさいごに えらんだのが\nこのへやで なければ ポケモンたちを\lかいふくして さしあげたのに……"
	.byte EOS
	.if (. - gText_Rom_2350B6) > 0x59
	.error "gText_Rom_2350B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2350B6) < 0x59
	.space 0x59 - (. - gText_Rom_2350B6)
	.endif
