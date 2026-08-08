	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:507 BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant
	.globl gText_Rom_22FD06
gText_Rom_22FD06: @ 0x0822FD06
	.string "バトルアリーナでは ポケモンの じゅんばんが\nとっても だいじ なのよ!\pたとえば 1ばんめの ポケモンの\nじゃくてん となる タイプに たいして\pこうかばつぐんの わざを もっている\nポケモンを 2ばんめに いれておけば\lいいチームに なると おもうわ!"
	.byte EOS
	.if (. - gText_Rom_22FD06) > 0x81
	.error "gText_Rom_22FD06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FD06) < 0x81
	.space 0x81 - (. - gText_Rom_22FD06)
	.endif
