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
