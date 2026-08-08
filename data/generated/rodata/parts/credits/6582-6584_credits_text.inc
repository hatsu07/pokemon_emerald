	.globl gQuizLadyQuestion4
	.globl gUnknown_85D3B2C
gQuizLadyQuestion4:
gUnknown_85D3B2C: @ 0x085D3B2C
	quiz_lady_question 4, 0x1644, 0x0E0C, 0x162D, 0x0E0A, 0x1413, 0x1428, 0x0E1D, 0x1E22, 0x0C03
	.globl gQuizLadyQuestion5
gQuizLadyQuestion5: @ 0x085D3B3E
	quiz_lady_question 5, 0x2461, 0x1410, 0x0A35, 0x1034, 0x180D, 0x0E1D, 0x1E21, 0x180D, 0x0C03
	.globl gQuizLadyQuestion6
gQuizLadyQuestion6: @ 0x085D3B50
	quiz_lady_question 6, 0x140D, 0x1C1D, 0x140F, 0x140F, 0x1C1D, 0x140D, 0x0E1D, 0x1E24, 0x0C03
	.globl gQuizLadyQuestion7
gQuizLadyQuestion7: @ 0x085D3B62
	quiz_lady_question 7, 0x042F, 0x1034, 0x0A0E, 0x1034, 0x1643, 0x140F, 0x181B, 0x0E1D, 0x0C03
	.globl gQuizLadyQuestion8
gQuizLadyQuestion8: @ 0x085D3B74
	quiz_lady_question 8, 0x160A, 0x161B, 0x1E1C, 0x0E1F, 0x0A25, 0x0609, 0x102B, 0x0E1D, 0x0C03
	.globl gQuizLadyQuestion9
gQuizLadyQuestion9: @ 0x085D3B86
	quiz_lady_question 9, 0x2204, 0x2206, 0x0E1D, 0x1E21, 0x0A35, 0x0C03, 0x0A11, 0x0A0E, 0x0A09
	.globl gQuizLadyQuestion10
gQuizLadyQuestion10: @ 0x085D3B98
	quiz_lady_question 10, 0x0602, 0x1425, 0x020E, 0x0E1D, 0x1E1F, 0x0C03, 0x0118, 0x0115, 0x011B
	.globl gQuizLadyQuestion11
gQuizLadyQuestion11: @ 0x085D3BAA
	quiz_lady_question 11, 0x0211, 0x020C, 0x0E16, 0x1630, 0x020E, 0x1E1C, 0x0C03, 0x017C, 0x017B
	.globl gQuizLadyQuestion12
gQuizLadyQuestion12: @ 0x085D3BBC
	quiz_lady_question 12, 0x0203, 0x020C, 0x100B, 0x162F, 0x020E, 0x1E1C, 0x0C03, 0x0127, 0x012A
	.globl gQuizLadyQuestion13
gQuizLadyQuestion13: @ 0x085D3BCE
	quiz_lady_question 13, 0x0A3B, 0x0446, 0x0600, 0x1405, 0x1034, 0x1E1C, 0x0C03, 0x0420, 0x0426
	.globl gQuizLadyQuestion14
gQuizLadyQuestion14: @ 0x085D3BE0
	quiz_lady_question 14, 0x0A49, 0x0400, 0x0600, 0x1444, 0x1034, 0x1E1C, 0x0C03, 0x040E, 0x0410
	.globl gQuizLadyQuestion15
gQuizLadyQuestion15: @ 0x085D3BF2
	quiz_lady_question 15, 0x272C, 0x162E, 0x020E, 0x1E1F, 0x1011, 0x0C03, 0x0146, 0x014C, 0x2A1B
	.globl gQuizLadyQuestionPointers
	.globl gUnknown_85D3C04
gQuizLadyQuestionPointers:
gUnknown_85D3C04: @ 0x085D3C04
	quiz_lady_question_pointer 0, gQuizLadyQuestion0
	quiz_lady_question_pointer 1, gQuizLadyQuestion1
	quiz_lady_question_pointer 2, gQuizLadyQuestion2
	quiz_lady_question_pointer 3, gQuizLadyQuestion3
	quiz_lady_question_pointer 4, gQuizLadyQuestion4
	quiz_lady_question_pointer 5, gQuizLadyQuestion5
	quiz_lady_question_pointer 6, gQuizLadyQuestion6
	quiz_lady_question_pointer 7, gQuizLadyQuestion7
	quiz_lady_question_pointer 8, gQuizLadyQuestion8
	quiz_lady_question_pointer 9, gQuizLadyQuestion9
	quiz_lady_question_pointer 10, gQuizLadyQuestion10
	quiz_lady_question_pointer 11, gQuizLadyQuestion11
	quiz_lady_question_pointer 12, gQuizLadyQuestion12
	quiz_lady_question_pointer 13, gQuizLadyQuestion13
	quiz_lady_question_pointer 14, gQuizLadyQuestion14
	quiz_lady_question_pointer 15, gQuizLadyQuestion15
	.globl gQuizLadyAnswers
	.globl gUnknown_85D3C44
gQuizLadyAnswers:
gUnknown_85D3C44: @ 0x085D3C44
	.2byte 0x013A, 0x016F, 0x2A43, 0x1802
	.2byte 0x262D, 0x1814, 0x2202, 0x1A01
	.2byte 0x1C13, 0x0A09, 0x0115, 0x017C
	.2byte 0x012A, 0x0420, 0x0410, 0x0146
	.globl gQuizLadyPrizes
	.globl gUnknown_85D3C64
gQuizLadyPrizes:
gUnknown_85D3C64: @ 0x085D3C64
	.2byte ITEM_GLITTER_MAIL, ITEM_BEAD_MAIL, ITEM_TROPIC_MAIL
	.2byte ITEM_MAX_ETHER, ITEM_MAX_ETHER, ITEM_MAX_ETHER
	.2byte ITEM_WATMEL_BERRY, ITEM_BELUE_BERRY, ITEM_DURIN_BERRY
	.2byte ITEM_LUXURY_BALL, ITEM_TM15, ITEM_BIG_PEARL, ITEM_STAR_PIECE
	.2byte ITEM_RARE_CANDY, ITEM_RARE_CANDY, ITEM_PREMIER_BALL

	.globl gText_LilycoveLady_Smooth
	.globl gText_FavorLady_Smooth
gText_FavorLady_Smooth:
gText_LilycoveLady_Smooth: @ 0x085D3C84
	.string "すべすべ$"
	.globl gText_LilycoveLady_Round
	.globl gText_FavorLady_Round
gText_FavorLady_Round:
gText_LilycoveLady_Round: @ 0x085D3C89
	.string "まるまる$"

	.globl gText_FavorLady_Crackly
	.globl gText_Rom_5D3C8E
gText_FavorLady_Crackly:
gText_Rom_5D3C8E: @ 0x085D3C8E
	.string "バキバキ$"
	.globl gText_FavorLady_Shiny
gText_FavorLady_Shiny: @ 0x085D3C93
	.string "ピカピカ$"
	.globl gText_FavorLady_Sticky
gText_FavorLady_Sticky: @ 0x085D3C98
	.string "ねばねば$"
	.globl gText_FavorLady_Prickly
gText_FavorLady_Prickly: @ 0x085D3C9D
	.string "ちくちく$"
	.align 2, 0
	.globl gFavorLadyRequestTextPointers
	.globl gUnknown_85D3CA4
gFavorLadyRequestTextPointers:
gUnknown_85D3CA4: @ 0x085D3CA4
	.4byte gText_FavorLady_Smooth
	.4byte gText_FavorLady_Round
	.4byte gText_FavorLady_Crackly
	.4byte gText_FavorLady_Shiny
	.4byte gText_FavorLady_Sticky
	.4byte gText_FavorLady_Prickly

	.globl gFavorLadyAcceptedItems_Smooth
gFavorLadyAcceptedItems_Smooth: @ 0x085D3CBC
	.2byte ITEM_REPEL, ITEM_SUPER_REPEL, ITEM_MAX_REPEL
	.2byte ITEM_ANTIDOTE, ITEM_PARALYZE_HEAL, ITEM_BURN_HEAL
	.2byte ITEM_BELUE_BERRY, ITEM_AWAKENING, ITEM_ICE_HEAL
	.2byte ITEM_REVIVE, ITEM_MAX_REVIVE, ITEM_ENERGY_POWDER
	.2byte ITEM_NONE
	.globl gFavorLadyAcceptedItems_Round
gFavorLadyAcceptedItems_Round: @ 0x085D3CD6
	.2byte ITEM_FLUFFY_TAIL, ITEM_PEARL, ITEM_BIG_PEARL
	.2byte ITEM_HARD_STONE, ITEM_SMOKE_BALL, ITEM_SHOAL_SHELL
	.2byte ITEM_TINY_MUSHROOM, ITEM_BIG_MUSHROOM
	.2byte ITEM_PECHA_BERRY, ITEM_ASPEAR_BERRY, ITEM_ORAN_BERRY
	.2byte ITEM_GREPA_BERRY, ITEM_MAGOST_BERRY, ITEM_WATMEL_BERRY
	.2byte ITEM_POKE_BALL, ITEM_ULTRA_BALL, ITEM_NONE
	.globl gFavorLadyAcceptedItems_Crackly
gFavorLadyAcceptedItems_Crackly: @ 0x085D3CF8
	.2byte ITEM_REVIVAL_HERB, ITEM_POTION
	.2byte ITEM_FRESH_WATER, ITEM_SODA_POP, ITEM_LEMONADE
	.2byte ITEM_HARD_STONE, ITEM_LIGHT_BALL, ITEM_LAVA_COOKIE
	.2byte ITEM_CHESTO_BERRY, ITEM_NANAB_BERRY, ITEM_WEPEAR_BERRY
	.2byte ITEM_KELPSY_BERRY, ITEM_NOMEL_BERRY, ITEM_DURIN_BERRY
	.2byte ITEM_NONE
	.globl gFavorLadyAcceptedItems_Shiny
gFavorLadyAcceptedItems_Shiny: @ 0x085D3D16
	.2byte ITEM_HEAL_POWDER, ITEM_X_SPEED, ITEM_X_ATTACK, ITEM_X_DEFEND
	.2byte ITEM_BLUE_FLUTE, ITEM_YELLOW_FLUTE, ITEM_RED_FLUTE
	.2byte ITEM_BLACK_FLUTE, ITEM_WHITE_FLUTE, ITEM_NUGGET
	.2byte ITEM_SUN_STONE, ITEM_STARDUST, ITEM_STAR_PIECE
	.2byte ITEM_PEARL, ITEM_BIG_PEARL, ITEM_TWISTED_SPOON
	.2byte ITEM_SILVER_POWDER, ITEM_BRIGHT_POWDER
	.2byte ITEM_LUXURY_BALL, ITEM_PREMIER_BALL, ITEM_NONE
	.globl gFavorLadyAcceptedItems_Sticky
gFavorLadyAcceptedItems_Sticky: @ 0x085D3D40
	.2byte ITEM_ENERGY_ROOT, ITEM_FULL_RESTORE, ITEM_MAX_POTION
	.2byte ITEM_DIRE_HIT, ITEM_X_ACCURACY, ITEM_GUARD_SPEC
	.2byte ITEM_WATMEL_BERRY, ITEM_LEFTOVERS
	.2byte ITEM_TINY_MUSHROOM, ITEM_HEART_SCALE, ITEM_NONE
	.globl gFavorLadyAcceptedItems_Prickly
gFavorLadyAcceptedItems_Prickly: @ 0x085D3D56
	.2byte ITEM_QUICK_CLAW, ITEM_POISON_BARB, ITEM_SHARP_BEAK
	.2byte ITEM_DRAGON_FANG, ITEM_TAMATO_BERRY, ITEM_DURIN_BERRY
	.2byte ITEM_PETAYA_BERRY, ITEM_SALAC_BERRY
	.2byte ITEM_STARDUST, ITEM_STAR_PIECE, ITEM_NONE
	.globl gFavorLadyAcceptedItemListPointers
	.globl gUnknown_85D3D6C
gFavorLadyAcceptedItemListPointers:
gUnknown_85D3D6C: @ 0x085D3D6C
	.4byte gFavorLadyAcceptedItems_Smooth
	.4byte gFavorLadyAcceptedItems_Round
	.4byte gFavorLadyAcceptedItems_Crackly
	.4byte gFavorLadyAcceptedItems_Shiny
	.4byte gFavorLadyAcceptedItems_Sticky
	.4byte gFavorLadyAcceptedItems_Prickly
	.globl gFavorLadyPrizes
	.globl gUnknown_85D3D84
gFavorLadyPrizes:
gUnknown_85D3D84: @ 0x085D3D84
	.2byte ITEM_LUXURY_BALL, ITEM_NUGGET, ITEM_PROTEIN
	.2byte ITEM_HEART_SCALE, ITEM_RARE_CANDY, ITEM_PP_MAX
	.globl gUnknown_85D3D90
gUnknown_85D3D90: @ 0x085D3D90

