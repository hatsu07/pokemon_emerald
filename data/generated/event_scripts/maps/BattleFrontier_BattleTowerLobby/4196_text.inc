	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1126 BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode
	.globl gText_Rom_2217DA
gText_Rom_2217DA: @ 0x082217DA
	.string "ともだちの ポケモンと\nちがう しゅるいの ポケモンを\l2ひき えらび\lさんかする レベルを あわせて\lとうろくを やりなおして ください!"
	.byte EOS
	.if (. - gText_Rom_2217DA) > 0x47
	.error "gText_Rom_2217DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2217DA) < 0x47
	.space 0x47 - (. - gText_Rom_2217DA)
	.endif
