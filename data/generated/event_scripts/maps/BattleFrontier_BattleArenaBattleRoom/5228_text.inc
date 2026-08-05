	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:571 BattleFrontier_BattleArenaBattleRoom_Text_YouLookWeakTakeThingsEasy
	.globl gText_Rom_230B9B
gText_Rom_230B9B: @ 0x08230B9B
	.string "なんて いうかー しょうじき いって\nかなり よわっちい かんじ なんだけどー\lアタシと たたかっても\lだいじょうぶ なのかなー?\pぅうーん……\pまあ いいかっ!\nまずは かるーく おてなみ はいけんねっ!"
	.byte EOS
	.if (. - gText_Rom_230B9B) > 0x68
	.error "gText_Rom_230B9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230B9B) < 0x68
	.space 0x68 - (. - gText_Rom_230B9B)
	.endif
