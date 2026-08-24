	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1015 BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion (+1 aliases)
	.globl gText_Rom_5ABD8C
gText_Rom_5ABD8C: @ 0x085ABD8C
	.string "むてきの チャンピオン!\p{EOS}"
	.if (. - gText_Rom_5ABD8C) > 0xe
	.error "gText_Rom_5ABD8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD8C) < 0xe
	.space 0xe - (. - gText_Rom_5ABD8C)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ABD9A: battle_arena.s: BattleArena_ShowJudgmentWindow
	.globl gBattleArenaData_085ABD9A
gBattleArenaData_085ABD9A: @ 0x085ABD9A
	@ analyzed canonical ROM range 0x085ABD9A-0x085ABD9C
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0xFD, 0x05, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABD9D: battle_arena.s: BattleArena_ShowJudgmentWindow
	.globl gBattleArenaData_085ABD9D
gBattleArenaData_085ABD9D: @ 0x085ABD9D
	@ analyzed canonical ROM range 0x085ABD9D-0x085ABD9F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0xEA, 0xE7, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABDA0: battle_arena.s: BattleArena_ShowJudgmentWindow
	.globl gBattleArenaData_085ABDA0
gBattleArenaData_085ABDA0: @ 0x085ABDA0
	@ analyzed canonical ROM range 0x085ABDA0-0x085ABDA2
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0xFD, 0x06, 0xFF
	.globl gText_Rom_5ABDA3
