	@ src/data/region_map/region_map_entries.h:455 region_map_entries_line_455
	.globl gText_Rom_5988D6
gText_Rom_5988D6: @ 0x085988D6
	.string "りゅうせいのたき$"
	.if (. - gText_Rom_5988D6) > 0x9
	.error "gText_Rom_5988D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5988D6) < 0x9
	.space 0x9 - (. - gText_Rom_5988D6)
	.endif
	.incbin "baserom.gba", 0x5988df, 0xb

	@ src/data/region_map/region_map_entries.h:434 region_map_entries_line_434
	.globl gText_Rom_5988EA
gText_Rom_5988EA: @ 0x085988EA
	.string "カナシダトンネル$"
	.if (. - gText_Rom_5988EA) > 0x9
	.error "gText_Rom_5988EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5988EA) < 0x9
	.space 0x9 - (. - gText_Rom_5988EA)
	.endif
	.incbin "baserom.gba", 0x5988f3, 0x15

	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_598908
gText_Rom_598908: @ 0x08598908
	.string "おくりびやま$"
	.if (. - gText_Rom_598908) > 0x7
	.error "gText_Rom_598908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598908) < 0x7
	.space 0x7 - (. - gText_Rom_598908)
	.endif

	@ src/data/region_map/region_map_entries.h:483 region_map_entries_line_483
	.globl gText_Rom_59890F
gText_Rom_59890F: @ 0x0859890F
	.string "あさせのほらあな$"
	.if (. - gText_Rom_59890F) > 0x9
	.error "gText_Rom_59890F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59890F) < 0x9
	.space 0x9 - (. - gText_Rom_59890F)
	.endif

	@ src/data/region_map/region_map_entries.h:490 region_map_entries_line_490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_598918
gText_Rom_598918: @ 0x08598918
	.string "かいていどうくつ$"
	.if (. - gText_Rom_598918) != 0x9
	.error "gText_Rom_598918 must retain its original byte length"
	.endif
	.globl gText_Rom_59891C
	.set gText_Rom_59891C, gText_Rom_598918 + 0x4

	@ src/data/region_map/region_map_entries.h:399 region_map_entries_line_399
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_598921
gText_Rom_598921: @ 0x08598921
	.string "いしのどうくつ$"
	.if (. - gText_Rom_598921) != 0x8
	.error "gText_Rom_598921 must retain its original byte length"
	.endif
	.globl gText_Rom_598924
	.set gText_Rom_598924, gText_Rom_598921 + 0x3
	.incbin "baserom.gba", 0x598929, 0xd

	@ src/data/region_map/region_map_entries.h:532 region_map_entries_line_532
	.globl gText_Rom_598936
gText_Rom_598936: @ 0x08598936
	.string "ほのおのぬけみち$"
	.if (. - gText_Rom_598936) > 0x9
	.error "gText_Rom_598936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598936) < 0x9
	.space 0x9 - (. - gText_Rom_598936)
	.endif

	@ src/data/region_map/region_map_entries.h:546 region_map_entries_line_546
	.globl gText_Rom_59893F
gText_Rom_59893F: @ 0x0859893F
	.string "デコボコさんどう$"
	.if (. - gText_Rom_59893F) > 0x9
	.error "gText_Rom_59893F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59893F) < 0x9
	.space 0x9 - (. - gText_Rom_59893F)
	.endif

	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_598948
gText_Rom_598948: @ 0x08598948
	.string "そらのはしら$"
	.if (. - gText_Rom_598948) > 0x7
	.error "gText_Rom_598948 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598948) < 0x7
	.space 0x7 - (. - gText_Rom_598948)
	.endif
	.incbin "baserom.gba", 0x59894f, 0xc

	@ src/data/region_map/region_map_entries.h:581 region_map_entries_line_581
	.globl gText_Rom_59895B
gText_Rom_59895B: @ 0x0859895B
	.string "こじまのよこあな$"
	.if (. - gText_Rom_59895B) > 0x9
	.error "gText_Rom_59895B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59895B) < 0x9
	.space 0x9 - (. - gText_Rom_59895B)
	.endif

	@ src/data/region_map/region_map_entries.h:588 region_map_entries_line_588
	.globl gText_Rom_598964
gText_Rom_598964: @ 0x08598964
	.string "さばくいせき$"
	.if (. - gText_Rom_598964) > 0x7
	.error "gText_Rom_598964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598964) < 0x7
	.space 0x7 - (. - gText_Rom_598964)
	.endif

	@ src/data/region_map/region_map_entries.h:574 region_map_entries_line_574
	.globl gText_Rom_59896B
gText_Rom_59896B: @ 0x0859896B
	.string "ひでりのいわと$"
	.if (. - gText_Rom_59896B) > 0x8
	.error "gText_Rom_59896B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59896B) < 0x8
	.space 0x8 - (. - gText_Rom_59896B)
	.endif

	@ src/data/region_map/region_map_entries.h:595 region_map_entries_line_595
	.globl gText_Rom_598973
gText_Rom_598973: @ 0x08598973
	.string "こだいづか$"
	.if (. - gText_Rom_598973) > 0x6
	.error "gText_Rom_598973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598973) < 0x6
	.space 0x6 - (. - gText_Rom_598973)
	.endif
	.incbin "baserom.gba", 0x598979, 0x20

	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_598999
gText_Rom_598999: @ 0x08598999
	.string "アジト$"
	.if (. - gText_Rom_598999) > 0x4
	.error "gText_Rom_598999 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598999) < 0x4
	.space 0x4 - (. - gText_Rom_598999)
	.endif

	@ src/data/region_map/region_map_entries.h:1379 region_map_entries_line_1379
	.globl gText_Rom_59899D
gText_Rom_59899D: @ 0x0859899D
	.string "げんえいのとう$"
	.if (. - gText_Rom_59899D) > 0x8
	.error "gText_Rom_59899D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59899D) < 0x8
	.space 0x8 - (. - gText_Rom_59899D)
	.endif

	@ src/data/region_map/region_map_entries.h:1456 region_map_entries_line_1456
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5989A5
gText_Rom_5989A5: @ 0x085989A5
	.string "へんげのどうくつ$"
	.if (. - gText_Rom_5989A5) != 0x9
	.error "gText_Rom_5989A5 must retain its original byte length"
	.endif
	.globl gText_Rom_5989A9
	.set gText_Rom_5989A9, gText_Rom_5989A5 + 0x4

	@ src/data/region_map/region_map_entries.h:1449 region_map_entries_line_1449
	.globl gText_Rom_5989AE
gText_Rom_5989AE: @ 0x085989AE
	.string "さばくのちかどう$"
	.if (. - gText_Rom_5989AE) > 0x9
	.error "gText_Rom_5989AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5989AE) < 0x9
	.space 0x9 - (. - gText_Rom_5989AE)
	.endif

	@ src/data/region_map/region_map_entries.h:1470 region_map_entries_line_1470
	.globl gText_Rom_5989B7
gText_Rom_5989B7: @ 0x085989B7
	.string "トレーナーヒル$"
	.if (. - gText_Rom_5989B7) > 0x8
	.error "gText_Rom_5989B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5989B7) < 0x8
	.space 0x8 - (. - gText_Rom_5989B7)
	.endif
	.incbin "baserom.gba", 0x5989bf, 0x2a9
	.globl gUnknown_8598C68
gUnknown_8598C68: @ 0x08598C68
	.incbin "baserom.gba", 0x598c68, 0x178
	.globl gUnknown_8598DE0
gUnknown_8598DE0: @ 0x08598DE0
	.incbin "baserom.gba", 0x598de0, 0x580
	.globl gUnknown_8599360
gUnknown_8599360: @ 0x08599360
	.incbin "baserom.gba", 0x599360, 0x240
	.globl gUnknown_85995A0
gUnknown_85995A0: @ 0x085995A0
	.incbin "baserom.gba", 0x5995a0, 0xe9

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_599689
gText_Rom_599689: @ 0x08599689
	.string "ラララ$"
	.if (. - gText_Rom_599689) > 0x4
	.error "gText_Rom_599689 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_599689) < 0x4
	.space 0x4 - (. - gText_Rom_599689)
	.endif
	.incbin "baserom.gba", 0x59968d, 0x10f3
	.globl gUnknown_859A780
gUnknown_859A780: @ 0x0859A780
	.incbin "baserom.gba", 0x59a780, 0x1e0
	.globl gUnknown_859A960
gUnknown_859A960: @ 0x0859A960
	.incbin "baserom.gba", 0x59a960, 0x20
	.globl gUnknown_859A980
gUnknown_859A980: @ 0x0859A980
	.incbin "baserom.gba", 0x59a980, 0x378
	.globl gUnknown_859ACF8
gUnknown_859ACF8: @ 0x0859ACF8
	.incbin "baserom.gba", 0x59acf8, 0x25c
	.globl gUnknown_859AF54
gUnknown_859AF54: @ 0x0859AF54
	.incbin "baserom.gba", 0x59af54, 0x48c
	.globl gUnknown_859B3E0
gUnknown_859B3E0: @ 0x0859B3E0
	.incbin "baserom.gba", 0x59b3e0, 0x2e4
	.globl gUnknown_859B6C4
gUnknown_859B6C4: @ 0x0859B6C4
	.incbin "baserom.gba", 0x59b6c4, 0x6a0
	.globl gUnknown_859BD64
gUnknown_859BD64: @ 0x0859BD64
	.incbin "baserom.gba", 0x59bd64, 0x20
	.globl gUnknown_859BD84
gUnknown_859BD84: @ 0x0859BD84
	.incbin "baserom.gba", 0x59bd84, 0x20
	.globl gUnknown_859BDA4
gUnknown_859BDA4: @ 0x0859BDA4
	.incbin "baserom.gba", 0x59bda4, 0x20
	.globl gUnknown_859BDC4
gUnknown_859BDC4: @ 0x0859BDC4
	.incbin "baserom.gba", 0x59bdc4, 0x800
	.globl gUnknown_859C5C4
gUnknown_859C5C4: @ 0x0859C5C4
	.incbin "baserom.gba", 0x59c5c4, 0x800
	.globl gUnknown_859CDC4
gUnknown_859CDC4: @ 0x0859CDC4
	.incbin "baserom.gba", 0x59cdc4, 0x820
	.globl gUnknown_859D5E4
gUnknown_859D5E4: @ 0x0859D5E4
	.incbin "baserom.gba", 0x59d5e4, 0x307

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_59D8EB
gText_Rom_59D8EB: @ 0x0859D8EB
	.string "ラララ$"
	.if (. - gText_Rom_59D8EB) > 0x4
	.error "gText_Rom_59D8EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59D8EB) < 0x4
	.space 0x4 - (. - gText_Rom_59D8EB)
	.endif
	.incbin "baserom.gba", 0x59d8ef, 0x3a9
	.globl gUnknown_859DC98
gUnknown_859DC98: @ 0x0859DC98
	.incbin "baserom.gba", 0x59dc98, 0x334
	.globl gUnknown_859DFCC
gUnknown_859DFCC: @ 0x0859DFCC
	.incbin "baserom.gba", 0x59dfcc, 0x56c
	.globl gUnknown_859E538
gUnknown_859E538: @ 0x0859E538
	.incbin "baserom.gba", 0x59e538, 0x318
	.globl gUnknown_859E850
gUnknown_859E850: @ 0x0859E850
	.incbin "baserom.gba", 0x59e850, 0x140
	.globl gUnknown_859E990
gUnknown_859E990: @ 0x0859E990
	.incbin "baserom.gba", 0x59e990, 0x1c0
	.globl gUnknown_859EB50
gUnknown_859EB50: @ 0x0859EB50
	.incbin "baserom.gba", 0x59eb50, 0x200
	.globl gUnknown_859ED50
gUnknown_859ED50: @ 0x0859ED50
	.incbin "baserom.gba", 0x59ed50, 0x200
	.globl gUnknown_859EF50
gUnknown_859EF50: @ 0x0859EF50
	.incbin "baserom.gba", 0x59ef50, 0xa0
	.globl gUnknown_859EFF0
gUnknown_859EFF0: @ 0x0859EFF0
	.incbin "baserom.gba", 0x59eff0, 0x160
	.globl gUnknown_859F150
gUnknown_859F150: @ 0x0859F150
	.incbin "baserom.gba", 0x59f150, 0x7540
	.globl gUnknown_85A6690
gUnknown_85A6690: @ 0x085A6690
	.incbin "baserom.gba", 0x5a6690, 0x1000
	.globl gUnknown_85A7690
gUnknown_85A7690: @ 0x085A7690
	.incbin "baserom.gba", 0x5a7690, 0x20
	.globl gUnknown_85A76B0
gUnknown_85A76B0: @ 0x085A76B0
	.incbin "baserom.gba", 0x5a76b0, 0x68c
	.globl gUnknown_85A7D3C
gUnknown_85A7D3C: @ 0x085A7D3C
	.incbin "baserom.gba", 0x5a7d3c, 0x2ec
	.globl gUnknown_85A8028
gUnknown_85A8028: @ 0x085A8028
	.incbin "baserom.gba", 0x5a8028, 0x20
	.globl gUnknown_85A8048
gUnknown_85A8048: @ 0x085A8048
	.incbin "baserom.gba", 0x5a8048, 0x15c
	.globl gUnknown_85A81A4
gUnknown_85A81A4: @ 0x085A81A4
	.incbin "baserom.gba", 0x5a81a4, 0x100
	.globl gUnknown_85A82A4
gUnknown_85A82A4: @ 0x085A82A4
	.incbin "baserom.gba", 0x5a82a4, 0xb0
	.globl gUnknown_85A8354
gUnknown_85A8354: @ 0x085A8354
	.incbin "baserom.gba", 0x5a8354, 0x84
	.globl gUnknown_85A83D8
gUnknown_85A83D8: @ 0x085A83D8
	.incbin "baserom.gba", 0x5a83d8, 0x20
	.globl gUnknown_85A83F8
gUnknown_85A83F8: @ 0x085A83F8
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.4byte Phase1Task_TransitionAll
	.globl gUnknown_85A84A0
gUnknown_85A84A0: @ 0x085A84A0
	.4byte Phase2Task_30
	.4byte Phase2Task_31
	.4byte Phase2Task_32
	.4byte Phase2Task_33
	.4byte Phase2Task_GridSquares
	.4byte Phase2Task_Groudon
	.4byte Phase2Task_Kyogre
	.4byte Phase2Task_MugShotTransition
	.4byte Phase2Task_Rayquaza
	.4byte Phase2Task_ShredSplit
	.4byte Phase2Task_Shuffle
	.4byte Phase2Task_Slice
	.4byte Phase2Task_Sidney
	.4byte Phase2Task_Phoebe
	.4byte Phase2Task_Glacia
	.4byte Phase2Task_Drake
	.4byte Phase2Task_Champion
	.4byte Phase2Task_Aqua
	.4byte Phase2Task_BigPokeball
	.4byte Phase2Task_Blackhole1
	.4byte Phase2Task_Blackhole2
	.4byte Phase2Task_Blur
	.4byte Phase2Task_Clockwise_BlackFade
	.4byte Phase2Task_Ripple
	.4byte Phase2Task_Shards
	.4byte Phase2Task_RectangularSpiral
	.4byte Phase2Task_Regice
	.4byte Phase2Task_Regirock
	.4byte Phase2Task_Registeel
	.4byte Phase2Task_Swirl
	.4byte Phase2Task_Wave
	.4byte Phase2Task_WhiteFade
	.4byte TransitionPhase1_Task_RunFuncs
	.4byte Task_BattleTransitionMain
	.4byte Phase2Task_34
	.4byte Phase2Task_35
	.4byte Phase2Task_36
	.4byte Phase2Task_37
	.4byte Phase2Task_38
	.4byte Phase2Task_39
	.4byte Phase2Task_40
	.4byte Phase2Task_41
	.globl gUnknown_85A8548
gUnknown_85A8548: @ 0x085A8548
	.4byte Transition_Phase1
	.4byte Transition_WaitForPhase1
	.4byte Transition_Phase2
	.4byte Transition_WaitForPhase2
	.globl gUnknown_85A8558
gUnknown_85A8558: @ 0x085A8558
	.4byte Phase2_Blur_Func1
	.4byte Phase2_Blur_Func2
	.4byte Phase2_Blur_Func3
	.globl gUnknown_85A8564
gUnknown_85A8564: @ 0x085A8564
	.4byte Phase2_Swirl_Func1
	.4byte Phase2_Swirl_Func2
	.globl gUnknown_85A856C
gUnknown_85A856C: @ 0x085A856C
	.4byte Phase2_Shuffle_Func1
	.4byte Phase2_Shuffle_Func2
	.globl gUnknown_85A8574
gUnknown_85A8574: @ 0x085A8574
	.4byte Phase2_Aqua_Func1
	.4byte Phase2_Aqua_Func2
	.4byte Phase2_BigPokeball_Func3
	.4byte Phase2_BigPokeball_Func4
	.4byte Phase2_BigPokeball_Func5
	.4byte Phase2_FramesCountdown
	.4byte Phase2_BigPokeball_Func6
	.globl gUnknown_85A8590
gUnknown_85A8590: @ 0x085A8590
	.4byte Phase2_Magma_Func1
	.4byte Phase2_Magma_Func2
	.4byte Phase2_BigPokeball_Func3
	.4byte Phase2_BigPokeball_Func4
	.4byte Phase2_BigPokeball_Func5
	.4byte Phase2_FramesCountdown
	.4byte Phase2_BigPokeball_Func6
	.globl gUnknown_85A85AC
gUnknown_85A85AC: @ 0x085A85AC
	.4byte Phase2_BigPokeball_Func1
	.4byte Phase2_BigPokeball_Func2
	.4byte Phase2_BigPokeball_Func3
	.4byte Phase2_BigPokeball_Func4
	.4byte Phase2_BigPokeball_Func5
	.4byte Phase2_BigPokeball_Func6
	.globl gUnknown_85A85C4
gUnknown_85A85C4: @ 0x085A85C4
	.4byte Phase2_Regi_Func1
	.4byte Phase2_Regice_Func2
	.4byte Phase2_BigPokeball_Func3
	.4byte Phase2_BigPokeball_Func4
	.4byte Phase2_BigPokeball_Func5
	.4byte Phase2_BigPokeball_Func6
	.globl gUnknown_85A85DC
gUnknown_85A85DC: @ 0x085A85DC
	.4byte Phase2_Regi_Func1
	.4byte Phase2_Registeel_Func2
	.4byte Phase2_BigPokeball_Func3
	.4byte Phase2_BigPokeball_Func4
	.4byte Phase2_BigPokeball_Func5
	.4byte Phase2_BigPokeball_Func6
	.globl gUnknown_85A85F4
gUnknown_85A85F4: @ 0x085A85F4
	.4byte Phase2_Regi_Func1
	.4byte Phase2_Regirock_Func2
	.4byte Phase2_BigPokeball_Func3
	.4byte Phase2_BigPokeball_Func4
	.4byte Phase2_BigPokeball_Func5
	.4byte Phase2_BigPokeball_Func6
	.globl gUnknown_85A860C
gUnknown_85A860C: @ 0x085A860C
	.4byte Phase2_WeatherTrio_Func1
	.4byte Phase2_WaitPaletteFade
	.4byte Phase2_Kyogre_Func3
	.4byte Phase2_Kyogre_Func4
	.4byte Phase2_Kyogre_Func5
	.4byte Phase2_FramesCountdown
	.4byte Phase2_WeatherDuo_Func6
	.4byte Phase2_WeatherDuo_Func7
	.globl gUnknown_85A862C
gUnknown_85A862C: @ 0x085A862C
	.4byte Phase2_PokeballsTrail_Func1
	.4byte Phase2_PokeballsTrail_Func2
	.4byte Phase2_PokeballsTrail_Func3
	.globl gUnknown_85A8638
gUnknown_85A8638: @ 0x085A8638
	.incbin "baserom.gba", 0x5a8638, 0x4
	.globl gUnknown_85A863C
gUnknown_85A863C: @ 0x085A863C
	.incbin "baserom.gba", 0x5a863c, 0xa
	.globl gUnknown_85A8646
gUnknown_85A8646: @ 0x085A8646
	.incbin "baserom.gba", 0x5a8646, 0x6
	.globl gUnknown_85A864C
gUnknown_85A864C: @ 0x085A864C
	.4byte Phase2_Clockwise_BlackFade_Func1
	.4byte Phase2_Clockwise_BlackFade_Func2
	.4byte Phase2_Clockwise_BlackFade_Func3
	.4byte Phase2_Clockwise_BlackFade_Func4
	.4byte Phase2_Clockwise_BlackFade_Func5
	.4byte Phase2_Clockwise_BlackFade_Func6
	.4byte Phase2_Clockwise_BlackFade_Func7
	.globl gUnknown_85A8668
gUnknown_85A8668: @ 0x085A8668
	.4byte Phase2_Ripple_Func1
	.4byte Phase2_Ripple_Func2
	.globl gUnknown_85A8670
gUnknown_85A8670: @ 0x085A8670
	.4byte Phase2_Wave_Func1
	.4byte Phase2_Wave_Func2
	.4byte Phase2_Wave_Func3
	.globl gUnknown_85A867C
gUnknown_85A867C: @ 0x085A867C
	.4byte Phase2_Mugshot_Func1
	.4byte Phase2_Mugshot_Func2
	.4byte Phase2_Mugshot_Func3
	.4byte Phase2_Mugshot_Func4
	.4byte Phase2_Mugshot_Func5
	.4byte Phase2_Mugshot_Func6
	.4byte Phase2_Mugshot_Func7
	.4byte Phase2_Mugshot_Func8
	.4byte Phase2_Mugshot_Func9
	.4byte Phase2_Mugshot_Func10
	.globl gUnknown_85A86A4
gUnknown_85A86A4: @ 0x085A86A4
	.incbin "baserom.gba", 0x5a86a4, 0x6
	.globl gUnknown_85A86AA
gUnknown_85A86AA: @ 0x085A86AA
	.incbin "baserom.gba", 0x5a86aa, 0x14
	.globl gUnknown_85A86BE
gUnknown_85A86BE: @ 0x085A86BE
	.incbin "baserom.gba", 0x5a86be, 0x16
	.globl gUnknown_85A86D4
gUnknown_85A86D4: @ 0x085A86D4
	.4byte sub_08148468
	.4byte sub_0814846C
	.4byte sub_081484B8
	.4byte sub_081484EC
	.4byte sub_08148468
	.4byte sub_08148518
	.4byte sub_08148468
	.globl gUnknown_85A86F0
gUnknown_85A86F0: @ 0x085A86F0
	.incbin "baserom.gba", 0x5a86f0, 0x4
	.globl gUnknown_85A86F4
gUnknown_85A86F4: @ 0x085A86F4
	.incbin "baserom.gba", 0x5a86f4, 0x4
	.globl gUnknown_85A86F8
gUnknown_85A86F8: @ 0x085A86F8
	.4byte Phase2_Slice_Func1
	.4byte Phase2_Slice_Func2
	.4byte Phase2_Slice_Func3
	.globl gUnknown_85A8704
gUnknown_85A8704: @ 0x085A8704
	.4byte Phase2_ShredSplit_Func1
	.4byte Phase2_ShredSplit_Func2
	.4byte Phase2_ShredSplit_Func3
	.4byte Phase2_ShredSplit_Func4
	.globl gUnknown_85A8714
gUnknown_85A8714: @ 0x085A8714
	.incbin "baserom.gba", 0x5a8714, 0x2
	.globl gUnknown_85A8716
gUnknown_85A8716: @ 0x085A8716
	.incbin "baserom.gba", 0x5a8716, 0x6
	.globl gUnknown_85A871C
gUnknown_85A871C: @ 0x085A871C
	.4byte Phase2_Blackhole_Func1
	.4byte Phase2_Blackhole1_Func2
	.4byte Phase2_Blackhole1_Func3
	.globl gUnknown_85A8728
gUnknown_85A8728: @ 0x085A8728
	.4byte Phase2_Blackhole_Func1
	.4byte Phase2_Blackhole2_Func2
	.globl gUnknown_85A8730
gUnknown_85A8730: @ 0x085A8730
	.incbin "baserom.gba", 0x5a8730, 0x4
	.globl gUnknown_85A8734
gUnknown_85A8734: @ 0x085A8734
	.incbin "baserom.gba", 0x5a8734, 0xb4
	.globl gUnknown_85A87E8
gUnknown_85A87E8: @ 0x085A87E8
	.incbin "baserom.gba", 0x5a87e8, 0x8
	.globl gUnknown_85A87F0
gUnknown_85A87F0: @ 0x085A87F0
	.4byte Phase2_WeatherTrio_Func1
	.4byte Phase2_WaitPaletteFade
	.4byte Phase2_Groudon_Func3
	.4byte Phase2_Groudon_Func4
	.4byte Phase2_Groudon_Func5
	.4byte Phase2_FramesCountdown
	.4byte Phase2_WeatherDuo_Func6
	.4byte Phase2_WeatherDuo_Func7
	.globl gUnknown_85A8810
gUnknown_85A8810: @ 0x085A8810
	.4byte Phase2_WeatherTrio_Func1
	.4byte Phase2_WaitPaletteFade
	.4byte Phase2_Rayquaza_Func3
	.4byte Phase2_Rayquaza_Func4
	.4byte Phase2_Rayquaza_Func5
	.4byte Phase2_Rayquaza_Func6
	.4byte Phase2_Rayquaza_Func7
	.4byte Phase2_Rayquaza_Func8
	.4byte Phase2_Rayquaza_Func9
	.4byte Phase2_Blackhole1_Func2
	.4byte Phase2_Blackhole1_Func3
	.globl gUnknown_85A883C
gUnknown_85A883C: @ 0x085A883C
	.4byte Phase2_WhiteFade_Func1
	.4byte Phase2_WhiteFade_Func2
	.4byte Phase2_WhiteFade_Func3
	.4byte Phase2_WhiteFade_Func4
	.4byte Phase2_WhiteFade_Func5
	.globl gUnknown_85A8850
gUnknown_85A8850: @ 0x085A8850
	.incbin "baserom.gba", 0x5a8850, 0x10
	.globl gUnknown_85A8860
gUnknown_85A8860: @ 0x085A8860
	.4byte Phase2_GridSquares_Func1
	.4byte Phase2_GridSquares_Func2
	.4byte Phase2_GridSquares_Func3
	.globl gUnknown_85A886C
gUnknown_85A886C: @ 0x085A886C
	.4byte Phase2_Shards_Func1
	.4byte Phase2_Shards_Func2
	.4byte Phase2_Shards_Func3
	.4byte Phase2_Shards_Func4
	.4byte Phase2_Shards_Func5
	.globl gUnknown_85A8880
gUnknown_85A8880: @ 0x085A8880
	.incbin "baserom.gba", 0x5a8880, 0x46
	.globl gUnknown_85A88C6
gUnknown_85A88C6: @ 0x085A88C6
	.incbin "baserom.gba", 0x5a88c6, 0xe
	.globl gUnknown_85A88D4
gUnknown_85A88D4: @ 0x085A88D4
	.incbin "baserom.gba", 0x5a88d4, 0x44
	.globl gUnknown_85A8918
gUnknown_85A8918: @ 0x085A8918
	.incbin "baserom.gba", 0x5a8918, 0x6c
	.globl gUnknown_85A8984
gUnknown_85A8984: @ 0x085A8984
	.incbin "baserom.gba", 0x5a8984, 0x108
	.globl gUnknown_85A8A8C
gUnknown_85A8A8C: @ 0x085A8A8C
	.incbin "baserom.gba", 0x5a8a8c, 0x14
	.globl gUnknown_85A8AA0
gUnknown_85A8AA0: @ 0x085A8AA0
	.incbin "baserom.gba", 0x5a8aa0, 0x30
	.globl gUnknown_85A8AD0
gUnknown_85A8AD0: @ 0x085A8AD0
	.incbin "baserom.gba", 0x5a8ad0, 0x4b0
	.globl gUnknown_85A8F80
gUnknown_85A8F80: @ 0x085A8F80
	.incbin "baserom.gba", 0x5a8f80, 0x500
	.globl gUnknown_85A9480
gUnknown_85A9480: @ 0x085A9480
	.4byte Phase2_29_Func1
	.4byte Phase2_29_Func2
	.4byte Phase2_BigPokeball_Func3
	.4byte Phase2_BigPokeball_Func4
	.4byte Phase2_BigPokeball_Func5
	.4byte Phase2_BigPokeball_Func6
	.globl gUnknown_85A9498
gUnknown_85A9498: @ 0x085A9498
	.4byte Phase2_30_Func1
	.4byte Phase2_30_Func2
	.4byte Phase2_30_Func3
	.4byte Phase2_30_Func4
	.globl gUnknown_85A94A8
gUnknown_85A94A8: @ 0x085A94A8
	.4byte Phase2_31_Func1
	.4byte Phase2_31_Func2
	.4byte Phase2_31_Func3
	.4byte Phase2_31_33_Func5
	.globl gUnknown_85A94B8
gUnknown_85A94B8: @ 0x085A94B8
	.4byte Phase2_33_Func1
	.4byte Phase2_33_Func2
	.4byte Phase2_33_Func3
	.4byte Phase2_33_Func4
	.4byte Phase2_31_33_Func5
	.globl gUnknown_85A94CC
gUnknown_85A94CC: @ 0x085A94CC
	.4byte Phase2_32_Func1
	.4byte Phase2_32_Func2
	.4byte Phase2_32_Func3
	.4byte Phase2_32_Func4
	.4byte Phase2_32_Func5
	.globl gUnknown_85A94E0
gUnknown_85A94E0: @ 0x085A94E0
	.incbin "baserom.gba", 0x5a94e0, 0x23
	.globl gUnknown_85A9503
gUnknown_85A9503: @ 0x085A9503
	.incbin "baserom.gba", 0x5a9503, 0x41
	.globl gUnknown_85A9544
gUnknown_85A9544: @ 0x085A9544
	.incbin "baserom.gba", 0x5a9544, 0x12b

