@ decoration_entry id, nameWord0, nameWord1, nameWord2, permission, shape, category, price, description, tiles

	.globl gDecorations
gDecorations: @ 0x08580CD0

	@ ちいさいつくえ
	decoration_entry DECOR_NONE, 0x020B0211, 0xFF040812, 0x00FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x1, DECORCAT_DESK, 0, gDecorationDescription_SmallDesk, gDecorationTiles_SmallDesk

	@ ちいさいつくえ
	decoration_entry DECOR_SMALL_DESK, 0x020B0211, 0xFF040812, 0x00FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x1, DECORCAT_DESK, 3000, gDecorationDescription_SmallDesk, gDecorationTiles_SmallDesk

	@ ポケモンつくえ
	decoration_entry DECOR_POKEMON_DESK, 0x7E73599F, 0xFF040812, 0x00FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x1, DECORCAT_DESK, 3000, gDecorationDescription_PokemonDesk, gDecorationTiles_PokemonDesk

	@ ずっしりつくえ
	decoration_entry DECOR_HEAVY_DESK, 0x280C503E, 0xFF040812, 0x00FFFFFF, 0x09, DECORSHAPE_1x1, DECORCAT_DESK, 6000, gDecorationDescription_HeavyDesk, gDecorationTiles_HeavyDesk

	@ ゴツゴツつくえ
	decoration_entry DECOR_RAGGED_DESK, 0x628B628B, 0xFF040812, 0x00FFFFFF, 0x09, DECORSHAPE_1x1, DECORCAT_DESK, 6000, gDecorationDescription_RaggedDesk, gDecorationTiles_RaggedDesk

	@ ふわふわつくえ
	decoration_entry DECOR_COMFORT_DESK, 0x2C1C2C1C, 0xFF040812, 0x00FFFFFF, 0x09, DECORSHAPE_1x1, DECORCAT_DESK, 6000, gDecorationDescription_ComfortDesk, gDecorationTiles_ComfortDesk

	@ きれいなつくえ
	decoration_entry DECOR_PRETTY_DESK, 0x15022A07, 0xFF040812, 0x00FFFFFF, 0x08, DECORSHAPE_1x1, DECORCAT_DESK, 9000, gDecorationDescription_PrettyDesk, gDecorationTiles_PrettyDesk

	@ レンガのつくえ
	decoration_entry DECOR_BRICK_DESK, 0x19877E7A, 0xFF040812, 0x00FFFFFF, 0x08, DECORSHAPE_1x1, DECORCAT_DESK, 9000, gDecorationDescription_BrickDesk, gDecorationTiles_BrickDesk

	@ キャンプつくえ
	decoration_entry DECOR_CAMP_DESK, 0x9D7E8457, 0xFF040812, 0x00FFFFFF, 0x08, DECORSHAPE_1x1, DECORCAT_DESK, 9000, gDecorationDescription_CampDesk, gDecorationTiles_CampDesk

	@ かたいつくえ
	decoration_entry DECOR_HARD_DESK, 0x12021006, 0xFFFF0408, 0x00FFFFFF, 0x08, DECORSHAPE_1x1, DECORCAT_DESK, 9000, gDecorationDescription_HardDesk, gDecorationTiles_HardDesk

	@ ちいさいイス
	decoration_entry DECOR_SMALL_CHAIR, 0x020B0211, 0xFFFF5D52, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x1, DECORCAT_DESK, 2000, gDecorationDescription_SmallChair, gDecorationTiles_SmallChair

	@ ポケモンイス
	decoration_entry DECOR_POKEMON_CHAIR, 0x7E73599F, 0xFFFF5D52, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x1, DECORCAT_DESK, 2000, gDecorationDescription_PokemonChair, gDecorationTiles_PokemonChair

	@ ずっしりイス
	decoration_entry DECOR_HEAVY_CHAIR, 0x280C503E, 0xFFFF5D52, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x1, DECORCAT_DESK, 2000, gDecorationDescription_HeavyChair, gDecorationTiles_HeavyChair

	@ きれいなイス
	decoration_entry DECOR_PRETTY_CHAIR, 0x15022A07, 0xFFFF5D52, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x1, DECORCAT_DESK, 2000, gDecorationDescription_PrettyChair, gDecorationTiles_PrettyChair

	@ ふわふわのイス
	decoration_entry DECOR_COMFORT_CHAIR, 0x2C1C2C1C, 0xFF5D5219, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x1, DECORCAT_DESK, 2000, gDecorationDescription_ComfortChair, gDecorationTiles_ComfortChair

	@ ゴツゴツのイス
	decoration_entry DECOR_RAGGED_CHAIR, 0x628B628B, 0xFF5D5219, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x1, DECORCAT_DESK, 2000, gDecorationDescription_RaggedChair, gDecorationTiles_RaggedChair

	@ レンガのイス
	decoration_entry DECOR_BRICK_CHAIR, 0x19877E7A, 0xFFFF5D52, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x1, DECORCAT_DESK, 2000, gDecorationDescription_BrickChair, gDecorationTiles_BrickChair

	@ キャンプイス
	decoration_entry DECOR_CAMP_CHAIR, 0x9D7E8457, 0xFFFF5D52, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x1, DECORCAT_DESK, 2000, gDecorationDescription_CampChair, gDecorationTiles_CampChair

	@ かたいイス
	decoration_entry DECOR_HARD_CHAIR, 0x52021006, 0xFFFFFF5D, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x1, DECORCAT_DESK, 2000, gDecorationDescription_HardChair, gDecorationTiles_HardChair

	@ まっかなうえき
	decoration_entry DECOR_RED_PLANT, 0x1506501F, 0xFF070403, 0x02FFFFFF, 0x05, DECORSHAPE_3x1, DECORCAT_DESK, 3000, gDecorationDescription_RedPlant, gDecorationTiles_RedPlant

	@ なんごくのうえき
	decoration_entry DECOR_TROPICAL_PLANT, 0x083B2E15, 0x07040319, 0x02FFFFFF, 0x05, DECORSHAPE_3x1, DECORCAT_DESK, 3000, gDecorationDescription_TropicalPlant, gDecorationTiles_TropicalPlant

	@ かわいいはな
	decoration_entry DECOR_PRETTY_FLOWERS, 0x02022C06, 0xFFFF151A, 0x02FFFFFF, 0x05, DECORSHAPE_3x1, DECORCAT_DESK, 3000, gDecorationDescription_PrettyFlowers, gDecorationTiles_PrettyFlowers

	@ カラフルなうえき
	decoration_entry DECOR_COLORFUL_PLANT, 0x796C7756, 0x07040315, 0x02FFFFFF, DECORPERM_SPRITE, DECORSHAPE_3x1, DECORCAT_DESK, 5000, gDecorationDescription_ColorfulPlant, gDecorationTiles_ColorfulPlant

	@ おっきなうえき
	decoration_entry DECOR_BIG_PLANT, 0x15075005, 0xFF070403, 0x02FFFFFF, DECORPERM_SPRITE, DECORSHAPE_3x1, DECORCAT_DESK, 5000, gDecorationDescription_BigPlant, gDecorationTiles_BigPlant

	@ りっぱなうえき
	decoration_entry DECOR_GORGEOUS_PLANT, 0x154B5028, 0xFF070403, 0x02FFFFFF, DECORPERM_SPRITE, DECORSHAPE_3x1, DECORCAT_DESK, 5000, gDecorationDescription_GorgeousPlant, gDecorationTiles_GorgeousPlant

	@ あかいレンガ
	decoration_entry DECOR_RED_BRICK, 0x7A020601, 0xFFFF877E, 0x00FFFFFF, 0x05, DECORSHAPE_4x2, DECORCAT_DESK, 500, gDecorationDescription_RedBrick, gDecorationTiles_RedBrick

	@ きいろいレンガ
	decoration_entry DECOR_YELLOW_BRICK, 0x022B0207, 0xFF877E7A, 0x00FFFFFF, 0x05, DECORSHAPE_4x2, DECORCAT_DESK, 500, gDecorationDescription_YellowBrick, gDecorationTiles_YellowBrick

	@ あおいレンガ
	decoration_entry DECOR_BLUE_BRICK, 0x7A020501, 0xFFFF877E, 0x00FFFFFF, 0x05, DECORSHAPE_4x2, DECORCAT_DESK, 500, gDecorationDescription_BlueBrick, gDecorationTiles_BlueBrick

	@ あかいふうせん
	decoration_entry DECOR_RED_BALLOON, 0x1C020601, 0xFF2E0E03, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_4x2, DECORCAT_DESK, 500, gDecorationDescription_RedBalloon, gDecorationTiles_RedBalloon

	@ あおいふうせん
	decoration_entry DECOR_BLUE_BALLOON, 0x1C020501, 0xFF2E0E03, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_4x2, DECORCAT_DESK, 500, gDecorationDescription_BlueBalloon, gDecorationTiles_BlueBalloon

	@ きいろいふうせん
	decoration_entry DECOR_YELLOW_BALLOON, 0x022B0207, 0x2E0E031C, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_4x2, DECORCAT_DESK, 500, gDecorationDescription_YellowBalloon, gDecorationTiles_YellowBalloon

	@ あかいテント
	decoration_entry DECOR_RED_TENT, 0x63020601, 0xFFFF647E, 0x01FFFFFF, 0x08, DECORSHAPE_4x2, DECORCAT_DESK, 10000, gDecorationDescription_RedTent, gDecorationTiles_RedTent

	@ あおいテント
	decoration_entry DECOR_BLUE_TENT, 0x63020501, 0xFFFF647E, 0x01FFFFFF, 0x08, DECORSHAPE_4x2, DECORCAT_DESK, 10000, gDecorationDescription_BlueTent, gDecorationTiles_BlueTent

	@ じょうぶないた
	decoration_entry DECOR_SOLID_BOARD, 0x4803363D, 0xFF100215, 0x01FFFFFF, 0x05, DECORSHAPE_4x2, DECORCAT_DESK, 3000, gDecorationDescription_SolidBoard, gDecorationTiles_SolidBoard

	@ すべりだい
	decoration_entry DECOR_SLIDE, 0x4128490D, 0xFFFFFF02, 0x01FFFFFF, 0x07, DECORSHAPE_4x2, DECORCAT_DESK, 8000, gDecorationDescription_Slide, gDecorationTiles_Slide

	@ タテのさく
	decoration_entry DECOR_FENCE_LENGTH, 0x0B196360, 0xFFFFFF08, 0x00FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_4x2, DECORCAT_DESK, 500, gDecorationDescription_FenceLength, gDecorationTiles_FenceLength

	@ ヨコのさく
	decoration_entry DECOR_FENCE_WIDTH, 0x0B195A76, 0xFFFFFF08, 0x00FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_4x2, DECORCAT_DESK, 500, gDecorationDescription_FenceWidth, gDecorationTiles_FenceWidth

	@ タイヤ
	decoration_entry DECOR_TIRE, 0xFF745260, 0xFFFFFFFF, 0x00FFFFFF, DECORPERM_SPRITE, DECORSHAPE_4x2, DECORCAT_DESK, 800, gDecorationDescription_Tire, gDecorationTiles_Tire

	@ おおきなだい
	decoration_entry DECOR_STAND, 0x15070505, 0xFFFF0241, 0x01FFFFFF, DECORPERM_NA_WALL, DECORSHAPE_4x2, DECORCAT_DESK, 7000, gDecorationDescription_Stand, gDecorationTiles_Stand

	@ どろだんご
	decoration_entry DECOR_MUD_BALL, 0x2E412B45, 0xFFFFFF3B, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_4x2, DECORCAT_DESK, 200, gDecorationDescription_MudBall, gDecorationTiles_MudBall

	@ やぶれるドア
	decoration_entry DECOR_BREAKABLE_DOOR, 0x292A4824, 0xFFFF5195, 0x01FFFFFF, 0x05, DECORSHAPE_4x2, DECORCAT_DESK, 3000, gDecorationDescription_BreakableDoor, gDecorationTiles_BreakableDoor

	@ すなのおきもの
	decoration_entry DECOR_SAND_ORNAMENT, 0x0519150D, 0xFF192307, 0x02FFFFFF, 0x05, DECORSHAPE_4x2, DECORCAT_DESK, 3000, gDecorationDescription_SandOrnament, gDecorationTiles_SandOrnament

	@ ぎんのたて
	decoration_entry DECOR_SILVER_SHIELD, 0x10192E38, 0xFFFFFF13, 0x02FFFFFF, 0x05, DECORSHAPE_4x2, DECORCAT_DESK, 0, gDecorationDescription_SilverShield, gDecorationTiles_SilverShield

	@ きんのたて
	decoration_entry DECOR_GOLD_SHIELD, 0x10192E07, 0xFFFFFF13, 0x02FFFFFF, 0x05, DECORSHAPE_4x2, DECORCAT_DESK, 0, gDecorationDescription_GoldShield, gDecorationTiles_GoldShield

	@ ガラスのオブジェ
	decoration_entry DECOR_GLASS_ORNAMENT, 0x195D7787, 0x828D9855, 0x02FFFFFF, 0x05, DECORSHAPE_4x2, DECORCAT_DESK, 0, gDecorationDescription_GlassOrnament, gDecorationTiles_GlassOrnament

	@ テレビ
	decoration_entry DECOR_TV, 0xFF977A63, 0xFFFFFFFF, 0x00FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_4x2, DECORCAT_DESK, 3000, gDecorationDescription_TV, gDecorationTiles_TV

	@ まるいテレビ
	decoration_entry DECOR_ROUND_TV, 0x6302291F, 0xFFFF977A, 0x00FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_4x2, DECORCAT_DESK, 4000, gDecorationDescription_RoundTV, gDecorationTiles_RoundTV

	@ かわいいテレビ
	decoration_entry DECOR_CUTE_TV, 0x02022C06, 0xFF977A63, 0x00FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_4x2, DECORCAT_DESK, 4000, gDecorationDescription_CuteTV, gDecorationTiles_CuteTV

	@ きらきらマット
	decoration_entry DECOR_GLITTER_MAT, 0x27072707, 0xFF64A06F, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 2000, gDecorationDescription_GlitterMat, gDecorationTiles_GlitterMat

	@ ジャンプマット
	decoration_entry DECOR_JUMP_MAT, 0x9D7E848D, 0xFF64A06F, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 2000, gDecorationDescription_JumpMat, gDecorationTiles_JumpMat

	@ くるっとマット
	decoration_entry DECOR_SPIN_MAT, 0x14502908, 0xFF64A06F, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 2000, gDecorationDescription_SpinMat, gDecorationTiles_SpinMat

	@ おんぷマットCL
	decoration_entry DECOR_C_LOW_NOTE_MAT, 0x6F4D2E05, 0xC6BD64A0, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 500, gDecorationDescription_CLowNoteMat, gDecorationTiles_CLowNoteMat

	@ おんぷマットD
	decoration_entry DECOR_D_NOTE_MAT, 0x6F4D2E05, 0xFFBE64A0, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 500, gDecorationDescription_DNoteMat, gDecorationTiles_DNoteMat

	@ おんぷマットE
	decoration_entry DECOR_E_NOTE_MAT, 0x6F4D2E05, 0xFFBF64A0, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 500, gDecorationDescription_ENoteMat, gDecorationTiles_ENoteMat

	@ おんぷマットF
	decoration_entry DECOR_F_NOTE_MAT, 0x6F4D2E05, 0xFFC064A0, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 500, gDecorationDescription_FNoteMat, gDecorationTiles_FNoteMat

	@ おんぷマットG
	decoration_entry DECOR_G_NOTE_MAT, 0x6F4D2E05, 0xFFC164A0, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 500, gDecorationDescription_GNoteMat, gDecorationTiles_GNoteMat

	@ おんぷマットA
	decoration_entry DECOR_A_NOTE_MAT, 0x6F4D2E05, 0xFFBB64A0, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 500, gDecorationDescription_ANoteMat, gDecorationTiles_ANoteMat

	@ おんぷマットB
	decoration_entry DECOR_B_NOTE_MAT, 0x6F4D2E05, 0xFFBC64A0, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 500, gDecorationDescription_BNoteMat, gDecorationTiles_BNoteMat

	@ おんぷマットCH
	decoration_entry DECOR_C_HIGH_NOTE_MAT, 0x6F4D2E05, 0xC2BD64A0, 0x01FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x2, DECORCAT_DESK, 500, gDecorationDescription_CHighNoteMat, gDecorationTiles_CHighNoteMat

	@ なみのりマット
	decoration_entry DECOR_SURF_MAT, 0x28192015, 0xFF64A06F, 0x01FFFFFF, 0x08, DECORSHAPE_2x2, DECORCAT_DESK, 4000, gDecorationDescription_SurfMat, gDecorationTiles_SurfMat

	@ かみなりマット
	decoration_entry DECOR_THUNDER_MAT, 0x28152006, 0xFF64A06F, 0x01FFFFFF, 0x08, DECORSHAPE_2x2, DECORCAT_DESK, 4000, gDecorationDescription_ThunderMat, gDecorationTiles_ThunderMat

	@ だいもんじマット
	decoration_entry DECOR_FIRE_BLAST_MAT, 0x2E230241, 0x64A06F3D, 0x01FFFFFF, 0x08, DECORSHAPE_2x2, DECORCAT_DESK, 4000, gDecorationDescription_FireBlastMat, gDecorationTiles_FireBlastMat

	@ こなゆきマット
	decoration_entry DECOR_POWDER_SNOW_MAT, 0x0725150A, 0xFF64A06F, 0x01FFFFFF, 0x08, DECORSHAPE_2x2, DECORCAT_DESK, 4000, gDecorationDescription_PowderSnowMat, gDecorationTiles_PowderSnowMat

	@ メロメロマット
	decoration_entry DECOR_ATTRACT_MAT, 0x7B727B72, 0xFF64A06F, 0x01FFFFFF, 0x08, DECORSHAPE_2x2, DECORCAT_DESK, 4000, gDecorationDescription_AttractMat, gDecorationTiles_AttractMat

	@ じわれマット
	decoration_entry DECOR_FISSURE_MAT, 0x6F2A2C3D, 0xFFFF64A0, 0x01FFFFFF, 0x08, DECORSHAPE_2x2, DECORCAT_DESK, 4000, gDecorationDescription_FissureMat, gDecorationTiles_FissureMat

	@ まきびしマット
	decoration_entry DECOR_SPIKES_MAT, 0x0C47071F, 0xFF64A06F, 0x01FFFFFF, 0x08, DECORSHAPE_2x2, DECORCAT_DESK, 4000, gDecorationDescription_SpikesMat, gDecorationTiles_SpikesMat

	@ ボールポスター
	decoration_entry DECOR_BALL_POSTER, 0x9F79AE9A, 0xFFAE605D, 0x03FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1000, gDecorationDescription_BallPoster, gDecorationTiles_BallPoster

	@ みどりのポスター
	decoration_entry DECOR_GREEN_POSTER, 0x19284520, 0xAE605D9F, 0x03FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1000, gDecorationDescription_GreenPoster, gDecorationTiles_GreenPoster

	@ あかいポスター
	decoration_entry DECOR_RED_POSTER, 0x9F020601, 0xFFAE605D, 0x03FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1000, gDecorationDescription_RedPoster, gDecorationTiles_RedPoster

	@ みずいろポスター
	decoration_entry DECOR_BLUE_POSTER, 0x2B023E20, 0xAE605D9F, 0x03FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1000, gDecorationDescription_BluePoster, gDecorationTiles_BluePoster

	@ かわいいポスター
	decoration_entry DECOR_CUTE_POSTER, 0x02022C06, 0xAE605D9F, 0x03FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1000, gDecorationDescription_CutePoster, gDecorationTiles_CutePoster

	@ ピカピカポスター
	decoration_entry DECOR_PIKA_POSTER, 0x569C569C, 0xAE605D9F, 0x03FFFFFF, DECORPERM_PASS_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1500, gDecorationDescription_PikaPoster, gDecorationTiles_PikaPoster

	@ ながいポスター
	decoration_entry DECOR_LONG_POSTER, 0x9F023715, 0xFFAE605D, 0x03FFFFFF, DECORPERM_PASS_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1500, gDecorationDescription_LongPoster, gDecorationTiles_LongPoster

	@ うみのポスター
	decoration_entry DECOR_SEA_POSTER, 0x9F192003, 0xFFAE605D, 0x03FFFFFF, DECORPERM_PASS_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1500, gDecorationDescription_SeaPoster, gDecorationTiles_SeaPoster

	@ そらのポスター
	decoration_entry DECOR_SKY_POSTER, 0x9F19270F, 0xFFAE605D, 0x03FFFFFF, DECORPERM_PASS_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1500, gDecorationDescription_SkyPoster, gDecorationTiles_SkyPoster

	@ キッスポスター
	decoration_entry DECOR_KISS_POSTER, 0x9F5DA057, 0xFFAE605D, 0x03FFFFFF, DECORPERM_PASS_FLOOR, DECORSHAPE_1x2, DECORCAT_DESK, 1500, gDecorationDescription_KissPoster, gDecorationTiles_KissPoster

	@ ピチュードール
	decoration_entry DECOR_PICHU_DOLL, 0xAE85619C, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_PichuDoll, gDecorationTiles_PichuDoll

	@ ピカチュウドール
	decoration_entry DECOR_PIKACHU_DOLL, 0x8561569C, 0x79AE9553, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_PikachuDoll, gDecorationTiles_PikachuDoll

	@ マリルドール
	decoration_entry DECOR_MARILL_DOLL, 0x9579786F, 0xFFFF79AE, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_MarillDoll, gDecorationTiles_MarillDoll

	@ トゲピードール
	decoration_entry DECOR_TOGEPI_DOLL, 0xAE9C8A64, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_TogepiDoll, gDecorationTiles_TogepiDoll

	@ ヒノアラシドール
	decoration_entry DECOR_CYNDAQUIL_DOLL, 0x7751696B, 0x79AE955C, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_CyndaquilDoll, gDecorationTiles_CyndaquilDoll

	@ チコリータドール
	decoration_entry DECOR_CHIKORITA_DOLL, 0xAE785A61, 0x79AE9560, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_ChikoritaDoll, gDecorationTiles_ChikoritaDoll

	@ ワニノコドール
	decoration_entry DECOR_TOTODILE_DOLL, 0x5A69667C, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_TotodileDoll, gDecorationTiles_TotodileDoll

	@ プリンドール
	decoration_entry DECOR_JIGGLYPUFF_DOLL, 0x957E789D, 0xFFFF79AE, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_JigglypuffDoll, gDecorationTiles_JigglypuffDoll

	@ ニャースドール
	decoration_entry DECOR_MEOWTH_DOLL, 0x5DAE8466, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_MeowthDoll, gDecorationTiles_MeowthDoll

	@ ピッピドール
	decoration_entry DECOR_CLEFAIRY_DOLL, 0x959CA09C, 0xFFFF79AE, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_ClefairyDoll, gDecorationTiles_ClefairyDoll

	@ メタモンドール
	decoration_entry DECOR_DITTO_DOLL, 0x7E736072, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_DittoDoll, gDecorationTiles_DittoDoll

	@ ムチュールドール
	decoration_entry DECOR_SMOOCHUM_DOLL, 0xAE856171, 0x79AE9579, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_SmoochumDoll, gDecorationTiles_SmoochumDoll

	@ キモリドール
	decoration_entry DECOR_TREECKO_DOLL, 0x95787357, 0xFFFF79AE, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_TreeckoDoll, gDecorationTiles_TreeckoDoll

	@ アチャモドール
	decoration_entry DECOR_TORCHIC_DOLL, 0x73846151, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_TorchicDoll, gDecorationTiles_TorchicDoll

	@ ミズゴロウドール
	decoration_entry DECOR_MUDKIP_DOLL, 0x7B8B8E70, 0x79AE9553, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_MudkipDoll, gDecorationTiles_MudkipDoll

	@ ヨマワルドール
	decoration_entry DECOR_DUSKULL_DOLL, 0x797C6F76, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_DuskullDoll, gDecorationTiles_DuskullDoll

	@ ソーナノドール
	decoration_entry DECOR_WYNAUT_DOLL, 0x6965AE5F, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_WynautDoll, gDecorationTiles_WynautDoll

	@ ヤジロンドール
	decoration_entry DECOR_BALTOY_DOLL, 0x7E7B8D74, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_BaltoyDoll, gDecorationTiles_BaltoyDoll

	@ カクレオンドール
	decoration_entry DECOR_KECLEON_DOLL, 0x557A5856, 0x79AE957E, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_KecleonDoll, gDecorationTiles_KecleonDoll

	@ ルリリドール
	decoration_entry DECOR_AZURILL_DOLL, 0x95787879, 0xFFFF79AE, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_AzurillDoll, gDecorationTiles_AzurillDoll

	@ エネコドール
	decoration_entry DECOR_SKITTY_DOLL, 0x955A6854, 0xFFFF79AE, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_SkittyDoll, gDecorationTiles_SkittyDoll

	@ チルットドール
	decoration_entry DECOR_SWABLU_DOLL, 0x64A07961, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_SwabluDoll, gDecorationTiles_SwabluDoll

	@ ゴクリンドール
	decoration_entry DECOR_GULPIN_DOLL, 0x7E78588B, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_GulpinDoll, gDecorationTiles_GulpinDoll

	@ ハスボードール
	decoration_entry DECOR_LOTAD_DOLL, 0xAE9A5D6A, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_LotadDoll, gDecorationTiles_LotadDoll

	@ タネボードール
	decoration_entry DECOR_SEEDOT_DOLL, 0xAE9A6860, 0xFF79AE95, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_1x3, DECORCAT_DESK, 3000, gDecorationDescription_SeedotDoll, gDecorationTiles_SeedotDoll

	@ ピカクッション
	decoration_entry DECOR_PIKA_CUSHION, 0xA058569C, 0xFF7E865C, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_PikaCushion, gDecorationTiles_PikaCushion

	@ まるいクッション
	decoration_entry DECOR_ROUND_CUSHION, 0x5802291F, 0x7E865CA0, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_RoundCushion, gDecorationTiles_RoundCushion

	@ キッスクッション
	decoration_entry DECOR_KISS_CUSHION, 0x585DA057, 0x7E865CA0, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_KissCushion, gDecorationTiles_KissCushion

	@ ジグザクッション
	decoration_entry DECOR_ZIGZAG_CUSHION, 0x588C898D, 0x7E865CA0, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_ZigzagCushion, gDecorationTiles_ZigzagCushion

	@ グルルクッション
	decoration_entry DECOR_SPIN_CUSHION, 0x58797989, 0x7E865CA0, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_SpinCushion, gDecorationTiles_SpinCushion

	@ ダイヤクッション
	decoration_entry DECOR_DIAMOND_CUSHION, 0x58745291, 0x7E865CA0, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_DiamondCushion, gDecorationTiles_DiamondCushion

	@ ボールクッション
	decoration_entry DECOR_BALL_CUSHION, 0x5879AE9A, 0x7E865CA0, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_BallCushion, gDecorationTiles_BallCushion

	@ くさクッション
	decoration_entry DECOR_GRASS_CUSHION, 0xA0580B08, 0xFF7E865C, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_GrassCushion, gDecorationTiles_GrassCushion

	@ ほのおクッション
	decoration_entry DECOR_FIRE_CUSHION, 0x5805191E, 0x7E865CA0, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_FireCushion, gDecorationTiles_FireCushion

	@ みずクッション
	decoration_entry DECOR_WATER_CUSHION, 0xA0583E20, 0xFF7E865C, 0x04FFFFFF, DECORPERM_SOLID_FLOOR, DECORSHAPE_2x4, DECORCAT_DESK, 2000, gDecorationDescription_WaterCushion, gDecorationTiles_WaterCushion

	@ カビゴンドール
	decoration_entry DECOR_SNORLAX_DOLL, 0x7E8B9756, 0xFF79AE95, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_SnorlaxDoll, gDecorationTiles_SnorlaxDoll

	@ サイドンドール
	decoration_entry DECOR_RHYDON_DOLL, 0x7E95525B, 0xFF79AE95, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_RhydonDoll, gDecorationTiles_RhydonDoll

	@ ラプラスドール
	decoration_entry DECOR_LAPRAS_DOLL, 0x5D779D77, 0xFF79AE95, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_LaprasDoll, gDecorationTiles_LaprasDoll

	@ フシギバナドール
	decoration_entry DECOR_VENUSAUR_DOLL, 0x96885C6C, 0x79AE9565, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_VenusaurDoll, gDecorationTiles_VenusaurDoll

	@ リザードンドール
	decoration_entry DECOR_CHARIZARD_DOLL, 0x95AE8C78, 0x79AE957E, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_CharizardDoll, gDecorationTiles_CharizardDoll

	@ カメックスドール
	decoration_entry DECOR_BLASTOISE_DOLL, 0x58A07256, 0x79AE955D, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_BlastoiseDoll, gDecorationTiles_BlastoiseDoll

	@ ホエルコドール
	decoration_entry DECOR_WAILMER_DOLL, 0x5A79546E, 0xFF79AE95, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_WailmerDoll, gDecorationTiles_WailmerDoll

	@ レジロックドール
	decoration_entry DECOR_REGIROCK_DOLL, 0xA07B8D7A, 0x79AE9558, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_RegirockDoll, gDecorationTiles_RegirockDoll

	@ レジアイスドール
	decoration_entry DECOR_REGICE_DOLL, 0x52518D7A, 0x79AE955D, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_RegiceDoll, gDecorationTiles_RegiceDoll

	@ レジスチルドール
	decoration_entry DECOR_REGISTEEL_DOLL, 0x615D8D7A, 0x79AE9579, 0x04FFFFFF, 0x05, DECORSHAPE_1x3, DECORCAT_DESK, 10000, gDecorationDescription_RegisteelDoll, gDecorationTiles_RegisteelDoll
