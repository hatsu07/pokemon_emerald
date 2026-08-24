	@ src/strings.c:792 gText_CheckFrontierMap
.Lbatch81_text_start_gText_Rom_5CCAB5: @ 0x085CCAB5
	.string "バトルフロンティアの マップを みます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAB5) > 0x14
	.error ".Lbatch81_text_start_gText_Rom_5CCAB5 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAB5) < 0x14
	.space 0x14 - (. - .Lbatch81_text_start_gText_Rom_5CCAB5)
	.endif

	@ src/strings.c:793 gText_CheckTrainerCard
.Lbatch81_text_start_gText_Rom_5CCAC9: @ 0x085CCAC9
	.string "トレーナーカードを みます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAC9) > 0xe
	.error ".Lbatch81_text_start_gText_Rom_5CCAC9 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAC9) < 0xe
	.space 0xe - (. - .Lbatch81_text_start_gText_Rom_5CCAC9)
	.endif

	@ src/strings.c:794 gText_ViewRecordedBattle
.Lbatch81_text_start_gText_Rom_5CCAD7: @ 0x085CCAD7
	.string "きろくした たいせんを みます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAD7) > 0x10
	.error ".Lbatch81_text_start_gText_Rom_5CCAD7 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAD7) < 0x10
	.space 0x10 - (. - .Lbatch81_text_start_gText_Rom_5CCAD7)
	.endif

	@ src/strings.c:795 gText_PutAwayFrontierPass
.Lbatch81_text_start_gText_Rom_5CCAE7: @ 0x085CCAE7
	.string "フロンティアパスを とじます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAE7) > 0xf
	.error ".Lbatch81_text_start_gText_Rom_5CCAE7 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAE7) < 0xf
	.space 0xf - (. - .Lbatch81_text_start_gText_Rom_5CCAE7)
	.endif

	@ src/strings.c:796 gText_CurrentBattlePoints
.Lbatch81_text_start_gText_Rom_5CCAF6: @ 0x085CCAF6
	.string "いま たまっている バトルポイントです{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAF6) > 0x14
	.error ".Lbatch81_text_start_gText_Rom_5CCAF6 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCAF6) < 0x14
	.space 0x14 - (. - .Lbatch81_text_start_gText_Rom_5CCAF6)
	.endif

	@ src/strings.c:797 gText_CollectedSymbols
.Lbatch81_text_start_gText_Rom_5CCB0A: @ 0x085CCB0A
	.string "ここに シンボルを あつめます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB0A) > 0x10
	.error ".Lbatch81_text_start_gText_Rom_5CCB0A may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB0A) < 0x10
	.space 0x10 - (. - .Lbatch81_text_start_gText_Rom_5CCB0A)
	.endif

	@ src/strings.c:798 gText_BattleTowerAbilitySymbol
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCB1A: @ 0x085CCB1A
	.string "バトルタワー アビリティシンボル{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB1A) != 0x11
	.error ".Lbatch81_text_start_gText_Rom_5CCB1A must retain its original byte length"
	.endif

	@ src/strings.c:799 gText_BattleDomeTacticsSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCB2B: @ 0x085CCB2B
	.string "バトルドーム タクティクスシンボル{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB2B) != 0x12
	.error ".Lbatch81_text_start_gText_Rom_5CCB2B must retain its original byte length"
	.endif

	@ src/strings.c:800 gText_BattlePalaceSpiritsSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCB3D: @ 0x085CCB3D
	.string "バトルパレス スピリットシンボル{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB3D) != 0x11
	.error ".Lbatch81_text_start_gText_Rom_5CCB3D must retain its original byte length"
	.endif

	@ src/strings.c:801 gText_BattleArenaGutsSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCB4E: @ 0x085CCB4E
	.string "バトルアリーナ ガッツシンボル{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB4E) != 0x10
	.error ".Lbatch81_text_start_gText_Rom_5CCB4E must retain its original byte length"
	.endif

	@ src/strings.c:802 gText_BattleFactoryKnowledgeSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCB5E: @ 0x085CCB5E
	.string "バトルファクトリー ノウレッジシンボル{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB5E) != 0x14
	.error ".Lbatch81_text_start_gText_Rom_5CCB5E must retain its original byte length"
	.endif

	@ src/strings.c:803 gText_BattlePikeLuckSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCB72: @ 0x085CCB72
	.string "バトルチューブ ラックシンボル{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB72) != 0x10
	.error ".Lbatch81_text_start_gText_Rom_5CCB72 must retain its original byte length"
	.endif

	@ src/strings.c:804 gText_BattlePyramidBraveSymbol
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_5CCB82: @ 0x085CCB82
	.string "バトルピラミッド ブレイブシンボル{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CCB82) != 0x12
	.error ".Lbatch81_text_start_gText_Rom_5CCB82 must retain its original byte length"
	.endif
