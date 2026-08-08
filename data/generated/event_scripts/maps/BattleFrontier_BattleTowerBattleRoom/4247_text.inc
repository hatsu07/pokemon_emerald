	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:491 BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay
	.globl gText_Rom_222495
gText_Rom_222495: @ 0x08222495
	.string "…… おきゃくさま\pじつは わたくしどもの しゅじんで ある\nタワータイクーンが\lあなたと たたかう ために まもなく\lバトルルームに いらっしゃる そうです$"
	.if (. - gText_Rom_222495) > 0x50
	.error "gText_Rom_222495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222495) < 0x50
	.space 0x50 - (. - gText_Rom_222495)
	.endif
