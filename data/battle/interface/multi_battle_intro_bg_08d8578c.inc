	.globl gMultiBattleIntroBg_Opponent_Tilemap
gMultiBattleIntroBg_Opponent_Tilemap: @ 0x08D8578C
	@ Semantic exact-LZ battle background/interface asset.
	.incbin "build/graphics/battle_interface/multi_battle_intro_opponent.bin.lz"
	.if (. - gMultiBattleIntroBg_Opponent_Tilemap) != 0x274
	.error "gMultiBattleIntroBg_Opponent_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D85A00: battle_bg.s: DrawBattleEntryBackground
	.globl gMultiBattleIntroBg_Player_Tilemap
gMultiBattleIntroBg_Player_Tilemap: @ 0x08D85A00
	@ Semantic exact-LZ battle background/interface asset.
	.incbin "build/graphics/battle_interface/multi_battle_intro_player.bin.lz"
	.if (. - gMultiBattleIntroBg_Player_Tilemap) != 0x234
	.error "gMultiBattleIntroBg_Player_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x08D85C34: intro.s: sub_0816F91C
