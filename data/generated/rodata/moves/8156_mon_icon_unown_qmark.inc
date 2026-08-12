
	.globl gMonIcon_UnownQmark
gMonIcon_UnownQmark: @ 0x08D51A6C [439]
	.incbin "build/graphics/pokemon/unown_qmark/icon.4bpp"

	@ Trainer front sprites: one indexed PNG supplies both 4bpp pixels and palette.
	@ The PNG embeds the original LZ77 token plans; generated output is pic slot + palette slot.

	.globl gTrainerFrontPic_Hiker
gTrainerFrontPic_Hiker: @ 0x08D51E6C
	.incbin "build/graphics/analyzed/trainers/front/hiker.4bpp.lz", 0x0, 0x480
	.globl gTrainerPalette_Hiker
gTrainerPalette_Hiker: @ 0x08D522EC
	.incbin "build/graphics/analyzed/trainers/front/hiker.4bpp.lz", 0x480, 0x28

	.globl gTrainerFrontPic_AquaGruntM
gTrainerFrontPic_AquaGruntM: @ 0x08D52314
	.incbin "build/graphics/analyzed/trainers/front/aqua_grunt_m.4bpp.lz", 0x0, 0x360
	.globl gTrainerPalette_AquaGruntM
gTrainerPalette_AquaGruntM: @ 0x08D52674
	.incbin "build/graphics/analyzed/trainers/front/aqua_grunt_m.4bpp.lz", 0x360, 0x28

	.globl gTrainerFrontPic_PokemonBreederF
gTrainerFrontPic_PokemonBreederF: @ 0x08D5269C
	.incbin "build/graphics/analyzed/trainers/front/pokemon_breeder_f.4bpp.lz", 0x0, 0x334
	.globl gTrainerPalette_PokemonBreederF
gTrainerPalette_PokemonBreederF: @ 0x08D529D0
	.incbin "build/graphics/analyzed/trainers/front/pokemon_breeder_f.4bpp.lz", 0x334, 0x28

	.globl gTrainerFrontPic_CoolTrainerM
gTrainerFrontPic_CoolTrainerM: @ 0x08D529F8
	.incbin "build/graphics/analyzed/trainers/front/cool_trainer_m.4bpp.lz", 0x0, 0x2E8
	.globl gTrainerPalette_CoolTrainerM
gTrainerPalette_CoolTrainerM: @ 0x08D52CE0
	.incbin "build/graphics/analyzed/trainers/front/cool_trainer_m.4bpp.lz", 0x2E8, 0x28

	.globl gTrainerFrontPic_BirdKeeper
gTrainerFrontPic_BirdKeeper: @ 0x08D52D08
	.incbin "build/graphics/analyzed/trainers/front/bird_keeper.4bpp.lz", 0x0, 0x338
	.globl gTrainerPalette_BirdKeeper
gTrainerPalette_BirdKeeper: @ 0x08D53040
	.incbin "build/graphics/analyzed/trainers/front/bird_keeper.4bpp.lz", 0x338, 0x28

	.globl gTrainerFrontPic_Collector
gTrainerFrontPic_Collector: @ 0x08D53068
	.incbin "build/graphics/analyzed/trainers/front/collector.4bpp.lz", 0x0, 0x404
	.globl gTrainerPalette_Collector
gTrainerPalette_Collector: @ 0x08D5346C
	.incbin "build/graphics/analyzed/trainers/front/collector.4bpp.lz", 0x404, 0x28

	.globl gTrainerFrontPic_AquaGruntF
gTrainerFrontPic_AquaGruntF: @ 0x08D53494
	.incbin "build/graphics/analyzed/trainers/front/aqua_grunt_f.4bpp.lz", 0x0, 0x33C
	.globl gTrainerPalette_AquaGruntF
gTrainerPalette_AquaGruntF: @ 0x08D537D0
	.incbin "build/graphics/analyzed/trainers/front/aqua_grunt_f.4bpp.lz", 0x33C, 0x28

	.globl gTrainerFrontPic_SwimmerM
gTrainerFrontPic_SwimmerM: @ 0x08D537F8
	.incbin "build/graphics/analyzed/trainers/front/swimmer_m.4bpp.lz", 0x0, 0x2C0
	.globl gTrainerPalette_SwimmerM
gTrainerPalette_SwimmerM: @ 0x08D53AB8
	.incbin "build/graphics/analyzed/trainers/front/swimmer_m.4bpp.lz", 0x2C0, 0x28

	.globl gTrainerFrontPic_MagmaGruntM
gTrainerFrontPic_MagmaGruntM: @ 0x08D53AE0
	.incbin "build/graphics/analyzed/trainers/front/magma_grunt_m.4bpp.lz", 0x0, 0x380
	.globl gTrainerPalette_MagmaGruntM
gTrainerPalette_MagmaGruntM: @ 0x08D53E60
	.incbin "build/graphics/analyzed/trainers/front/magma_grunt_m.4bpp.lz", 0x380, 0x28

	.globl gTrainerFrontPic_ExpertM
gTrainerFrontPic_ExpertM: @ 0x08D53E88
	.incbin "build/graphics/analyzed/trainers/front/expert_m.4bpp.lz", 0x0, 0x340
	.globl gTrainerPalette_ExpertM
gTrainerPalette_ExpertM: @ 0x08D541C8
	.incbin "build/graphics/analyzed/trainers/front/expert_m.4bpp.lz", 0x340, 0x28

	.globl gTrainerFrontPic_AquaAdminM
gTrainerFrontPic_AquaAdminM: @ 0x08D541F0
	.incbin "build/graphics/analyzed/trainers/front/aqua_admin_m.4bpp.lz", 0x0, 0x3B4
	.globl gTrainerPalette_AquaAdminM
gTrainerPalette_AquaAdminM: @ 0x08D545A4
	.incbin "build/graphics/analyzed/trainers/front/aqua_admin_m.4bpp.lz", 0x3B4, 0x28

	.globl gTrainerFrontPic_BlackBelt
gTrainerFrontPic_BlackBelt: @ 0x08D545CC
	.incbin "build/graphics/analyzed/trainers/front/black_belt.4bpp.lz", 0x0, 0x364
	.globl gTrainerPalette_BlackBelt
gTrainerPalette_BlackBelt: @ 0x08D54930
	.incbin "build/graphics/analyzed/trainers/front/black_belt.4bpp.lz", 0x364, 0x28

	.globl gTrainerFrontPic_AquaAdminF
gTrainerFrontPic_AquaAdminF: @ 0x08D54958
	.incbin "build/graphics/analyzed/trainers/front/aqua_admin_f.4bpp.lz", 0x0, 0x3C4
	.globl gTrainerPalette_AquaAdminF
gTrainerPalette_AquaAdminF: @ 0x08D54D1C
	.incbin "build/graphics/analyzed/trainers/front/aqua_admin_f.4bpp.lz", 0x3C4, 0x28

	.globl gTrainerFrontPic_AquaLeaderArchie
gTrainerFrontPic_AquaLeaderArchie: @ 0x08D54D44
	.incbin "build/graphics/analyzed/trainers/front/aqua_leader_archie.4bpp.lz", 0x0, 0x33C
	.globl gTrainerPalette_AquaLeaderArchie
gTrainerPalette_AquaLeaderArchie: @ 0x08D55080
	.incbin "build/graphics/analyzed/trainers/front/aqua_leader_archie.4bpp.lz", 0x33C, 0x28

	.globl gTrainerFrontPic_HexManiac
gTrainerFrontPic_HexManiac: @ 0x08D550A8
	.incbin "build/graphics/analyzed/trainers/front/hex_maniac.4bpp.lz", 0x0, 0x36C
	.globl gTrainerPalette_HexManiac
gTrainerPalette_HexManiac: @ 0x08D55414
	.incbin "build/graphics/analyzed/trainers/front/hex_maniac.4bpp.lz", 0x36C, 0x28

	.globl gTrainerFrontPic_AromaLady
gTrainerFrontPic_AromaLady: @ 0x08D5543C
	.incbin "build/graphics/analyzed/trainers/front/aroma_lady.4bpp.lz", 0x0, 0x2C4
	.globl gTrainerPalette_AromaLady
gTrainerPalette_AromaLady: @ 0x08D55700
	.incbin "build/graphics/analyzed/trainers/front/aroma_lady.4bpp.lz", 0x2C4, 0x28

	.globl gTrainerFrontPic_RuinManiac
gTrainerFrontPic_RuinManiac: @ 0x08D55728
	.incbin "build/graphics/analyzed/trainers/front/ruin_maniac.4bpp.lz", 0x0, 0x39C
	.globl gTrainerPalette_RuinManiac
gTrainerPalette_RuinManiac: @ 0x08D55AC4
	.incbin "build/graphics/analyzed/trainers/front/ruin_maniac.4bpp.lz", 0x39C, 0x28

	.globl gTrainerFrontPic_Interviewer
gTrainerFrontPic_Interviewer: @ 0x08D55AEC
	.incbin "build/graphics/analyzed/trainers/front/interviewer.4bpp.lz", 0x0, 0x4A4
	.globl gTrainerPalette_Interviewer
gTrainerPalette_Interviewer: @ 0x08D55F90
	.incbin "build/graphics/analyzed/trainers/front/interviewer.4bpp.lz", 0x4A4, 0x28

	.globl gTrainerFrontPic_TuberF
gTrainerFrontPic_TuberF: @ 0x08D55FB8
	.incbin "build/graphics/analyzed/trainers/front/tuber_f.4bpp.lz", 0x0, 0x2A4
	.globl gTrainerPalette_TuberF
gTrainerPalette_TuberF: @ 0x08D5625C
	.incbin "build/graphics/analyzed/trainers/front/tuber_f.4bpp.lz", 0x2A4, 0x28

	.globl gTrainerFrontPic_TuberM
gTrainerFrontPic_TuberM: @ 0x08D56284
	.incbin "build/graphics/analyzed/trainers/front/tuber_m.4bpp.lz", 0x0, 0x28C
	.globl gTrainerPalette_TuberM
gTrainerPalette_TuberM: @ 0x08D56510
	.incbin "build/graphics/analyzed/trainers/front/tuber_m.4bpp.lz", 0x28C, 0x28

	.globl gTrainerFrontPic_CoolTrainerF
gTrainerFrontPic_CoolTrainerF: @ 0x08D56538
	.incbin "build/graphics/analyzed/trainers/front/cool_trainer_f.4bpp.lz", 0x0, 0x314
	.globl gTrainerPalette_CoolTrainerF
gTrainerPalette_CoolTrainerF: @ 0x08D5684C
	.incbin "build/graphics/analyzed/trainers/front/cool_trainer_f.4bpp.lz", 0x314, 0x28

	.globl gTrainerFrontPic_Lady
gTrainerFrontPic_Lady: @ 0x08D56874
	.incbin "build/graphics/analyzed/trainers/front/lady.4bpp.lz", 0x0, 0x3B4
	.globl gTrainerPalette_Lady
gTrainerPalette_Lady: @ 0x08D56C28
	.incbin "build/graphics/analyzed/trainers/front/lady.4bpp.lz", 0x3B4, 0x28

	.globl gTrainerFrontPic_Beauty
gTrainerFrontPic_Beauty: @ 0x08D56C50
	.incbin "build/graphics/analyzed/trainers/front/beauty.4bpp.lz", 0x0, 0x2E8
	.globl gTrainerPalette_Beauty
gTrainerPalette_Beauty: @ 0x08D56F38
	.incbin "build/graphics/analyzed/trainers/front/beauty.4bpp.lz", 0x2E8, 0x28

	.globl gTrainerFrontPic_RichBoy
gTrainerFrontPic_RichBoy: @ 0x08D56F60
	.incbin "build/graphics/analyzed/trainers/front/rich_boy.4bpp.lz", 0x0, 0x2B4
	.globl gTrainerPalette_RichBoy
gTrainerPalette_RichBoy: @ 0x08D57214
	.incbin "build/graphics/analyzed/trainers/front/rich_boy.4bpp.lz", 0x2B4, 0x28

	.globl gTrainerFrontPic_ExpertF
gTrainerFrontPic_ExpertF: @ 0x08D5723C
	.incbin "build/graphics/analyzed/trainers/front/expert_f.4bpp.lz", 0x0, 0x31C
	.globl gTrainerPalette_ExpertF
gTrainerPalette_ExpertF: @ 0x08D57558
	.incbin "build/graphics/analyzed/trainers/front/expert_f.4bpp.lz", 0x31C, 0x28

	.globl gTrainerFrontPic_Pokemaniac
gTrainerFrontPic_Pokemaniac: @ 0x08D57580
	.incbin "build/graphics/analyzed/trainers/front/pokemaniac.4bpp.lz", 0x0, 0x370
	.globl gTrainerPalette_Pokemaniac
gTrainerPalette_Pokemaniac: @ 0x08D578F0
	.incbin "build/graphics/analyzed/trainers/front/pokemaniac.4bpp.lz", 0x370, 0x28

	.globl gTrainerFrontPic_MagmaGruntF
gTrainerFrontPic_MagmaGruntF: @ 0x08D57918
	.incbin "build/graphics/analyzed/trainers/front/magma_grunt_f.4bpp.lz", 0x0, 0x38C
	.globl gTrainerPalette_MagmaGruntF
gTrainerPalette_MagmaGruntF: @ 0x08D57CA4
	.incbin "build/graphics/analyzed/trainers/front/magma_grunt_f.4bpp.lz", 0x38C, 0x28

	.globl gTrainerFrontPic_Guitarist
gTrainerFrontPic_Guitarist: @ 0x08D57CCC
	.incbin "build/graphics/analyzed/trainers/front/guitarist.4bpp.lz", 0x0, 0x384
	.globl gTrainerPalette_Guitarist
gTrainerPalette_Guitarist: @ 0x08D58050
	.incbin "build/graphics/analyzed/trainers/front/guitarist.4bpp.lz", 0x384, 0x28

	.globl gTrainerFrontPic_Kindler
gTrainerFrontPic_Kindler: @ 0x08D58078
	.incbin "build/graphics/analyzed/trainers/front/kindler.4bpp.lz", 0x0, 0x36C
	.globl gTrainerPalette_Kindler
gTrainerPalette_Kindler: @ 0x08D583E4
	.incbin "build/graphics/analyzed/trainers/front/kindler.4bpp.lz", 0x36C, 0x28

	.globl gTrainerFrontPic_Camper
gTrainerFrontPic_Camper: @ 0x08D5840C
	.incbin "build/graphics/analyzed/trainers/front/camper.4bpp.lz", 0x0, 0x2E8
	.globl gTrainerPalette_Camper
gTrainerPalette_Camper: @ 0x08D586F4
	.incbin "build/graphics/analyzed/trainers/front/camper.4bpp.lz", 0x2E8, 0x28

	.globl gTrainerFrontPic_Picnicker
gTrainerFrontPic_Picnicker: @ 0x08D5871C
	.incbin "build/graphics/analyzed/trainers/front/picnicker.4bpp.lz", 0x0, 0x2E0
	.globl gTrainerPalette_Picnicker
gTrainerPalette_Picnicker: @ 0x08D589FC
	.incbin "build/graphics/analyzed/trainers/front/picnicker.4bpp.lz", 0x2E0, 0x28

	.globl gTrainerFrontPic_BugManiac
gTrainerFrontPic_BugManiac: @ 0x08D58A24
	.incbin "build/graphics/analyzed/trainers/front/bug_maniac.4bpp.lz", 0x0, 0x450
	.globl gTrainerPalette_BugManiac
gTrainerPalette_BugManiac: @ 0x08D58E74
	.incbin "build/graphics/analyzed/trainers/front/bug_maniac.4bpp.lz", 0x450, 0x28

	.globl gTrainerFrontPic_PokemonBreederM
gTrainerFrontPic_PokemonBreederM: @ 0x08D58E9C
	.incbin "build/graphics/analyzed/trainers/front/pokemon_breeder_m.4bpp.lz", 0x0, 0x330
	.globl gTrainerPalette_PokemonBreederM
gTrainerPalette_PokemonBreederM: @ 0x08D591CC
	.incbin "build/graphics/analyzed/trainers/front/pokemon_breeder_m.4bpp.lz", 0x330, 0x28

	.globl gTrainerFrontPic_PsychicM
gTrainerFrontPic_PsychicM: @ 0x08D591F4
	.incbin "build/graphics/analyzed/trainers/front/psychic_m.4bpp.lz", 0x0, 0x32C
	.globl gTrainerPalette_PsychicM
gTrainerPalette_PsychicM: @ 0x08D59520
	.incbin "build/graphics/analyzed/trainers/front/psychic_m.4bpp.lz", 0x32C, 0x28

	.globl gTrainerFrontPic_PsychicF
gTrainerFrontPic_PsychicF: @ 0x08D59548
	.incbin "build/graphics/analyzed/trainers/front/psychic_f.4bpp.lz", 0x0, 0x328
	.globl gTrainerPalette_PsychicF
gTrainerPalette_PsychicF: @ 0x08D59870
	.incbin "build/graphics/analyzed/trainers/front/psychic_f.4bpp.lz", 0x328, 0x28

	.globl gTrainerFrontPic_Gentleman
gTrainerFrontPic_Gentleman: @ 0x08D59898
	.incbin "build/graphics/analyzed/trainers/front/gentleman.4bpp.lz", 0x0, 0x300
	.globl gTrainerPalette_Gentleman
gTrainerPalette_Gentleman: @ 0x08D59B98
	.incbin "build/graphics/analyzed/trainers/front/gentleman.4bpp.lz", 0x300, 0x28

	.globl gTrainerFrontPic_EliteFourSidney
gTrainerFrontPic_EliteFourSidney: @ 0x08D59BC0
	.incbin "build/graphics/analyzed/trainers/front/elite_four_sidney.4bpp.lz", 0x0, 0x334
	.globl gTrainerPalette_EliteFourSidney
gTrainerPalette_EliteFourSidney: @ 0x08D59EF4
	.incbin "build/graphics/analyzed/trainers/front/elite_four_sidney.4bpp.lz", 0x334, 0x28

	.globl gTrainerFrontPic_EliteFourPhoebe
gTrainerFrontPic_EliteFourPhoebe: @ 0x08D59F1C
	.incbin "build/graphics/analyzed/trainers/front/elite_four_phoebe.4bpp.lz", 0x0, 0x300
	.globl gTrainerPalette_EliteFourPhoebe
gTrainerPalette_EliteFourPhoebe: @ 0x08D5A21C
	.incbin "build/graphics/analyzed/trainers/front/elite_four_phoebe.4bpp.lz", 0x300, 0x28

	.globl gTrainerFrontPic_EliteFourGlacia
gTrainerFrontPic_EliteFourGlacia: @ 0x08D5A244
	.incbin "build/graphics/analyzed/trainers/front/elite_four_glacia.4bpp.lz", 0x0, 0x384
	.globl gTrainerPalette_EliteFourGlacia
gTrainerPalette_EliteFourGlacia: @ 0x08D5A5C8
	.incbin "build/graphics/analyzed/trainers/front/elite_four_glacia.4bpp.lz", 0x384, 0x28

	.globl gTrainerFrontPic_EliteFourDrake
gTrainerFrontPic_EliteFourDrake: @ 0x08D5A5F0
	.incbin "build/graphics/analyzed/trainers/front/elite_four_drake.4bpp.lz", 0x0, 0x3A8
	.globl gTrainerPalette_EliteFourDrake
gTrainerPalette_EliteFourDrake: @ 0x08D5A998
	.incbin "build/graphics/analyzed/trainers/front/elite_four_drake.4bpp.lz", 0x3A8, 0x28

	.globl gTrainerFrontPic_LeaderRoxanne
gTrainerFrontPic_LeaderRoxanne: @ 0x08D5A9C0
	.incbin "build/graphics/analyzed/trainers/front/leader_roxanne.4bpp.lz", 0x0, 0x2EC
	.globl gTrainerPalette_LeaderRoxanne
gTrainerPalette_LeaderRoxanne: @ 0x08D5ACAC
	.incbin "build/graphics/analyzed/trainers/front/leader_roxanne.4bpp.lz", 0x2EC, 0x28

	.globl gTrainerFrontPic_LeaderBrawly
gTrainerFrontPic_LeaderBrawly: @ 0x08D5ACD4
	.incbin "build/graphics/analyzed/trainers/front/leader_brawly.4bpp.lz", 0x0, 0x394
	.globl gTrainerPalette_LeaderBrawly
gTrainerPalette_LeaderBrawly: @ 0x08D5B068
	.incbin "build/graphics/analyzed/trainers/front/leader_brawly.4bpp.lz", 0x394, 0x28

	.globl gTrainerFrontPic_LeaderWattson
gTrainerFrontPic_LeaderWattson: @ 0x08D5B090
	.incbin "build/graphics/analyzed/trainers/front/leader_wattson.4bpp.lz", 0x0, 0x348
	.globl gTrainerPalette_LeaderWattson
gTrainerPalette_LeaderWattson: @ 0x08D5B3D8
	.incbin "build/graphics/analyzed/trainers/front/leader_wattson.4bpp.lz", 0x348, 0x28

	.globl gTrainerFrontPic_LeaderFlannery
gTrainerFrontPic_LeaderFlannery: @ 0x08D5B400
	.incbin "build/graphics/analyzed/trainers/front/leader_flannery.4bpp.lz", 0x0, 0x380
	.globl gTrainerPalette_LeaderFlannery
gTrainerPalette_LeaderFlannery: @ 0x08D5B780
	.incbin "build/graphics/analyzed/trainers/front/leader_flannery.4bpp.lz", 0x380, 0x28

	.globl gTrainerFrontPic_LeaderNorman
gTrainerFrontPic_LeaderNorman: @ 0x08D5B7A8
	.incbin "build/graphics/analyzed/trainers/front/leader_norman.4bpp.lz", 0x0, 0x33C
	.globl gTrainerPalette_LeaderNorman
gTrainerPalette_LeaderNorman: @ 0x08D5BAE4
	.incbin "build/graphics/analyzed/trainers/front/leader_norman.4bpp.lz", 0x33C, 0x28

	.globl gTrainerFrontPic_LeaderWinona
gTrainerFrontPic_LeaderWinona: @ 0x08D5BB0C
	.incbin "build/graphics/analyzed/trainers/front/leader_winona.4bpp.lz", 0x0, 0x380
	.globl gTrainerPalette_LeaderWinona
gTrainerPalette_LeaderWinona: @ 0x08D5BE8C
	.incbin "build/graphics/analyzed/trainers/front/leader_winona.4bpp.lz", 0x380, 0x28

	.globl gTrainerFrontPic_LeaderTateAndLiza
gTrainerFrontPic_LeaderTateAndLiza: @ 0x08D5BEB4
	.incbin "build/graphics/analyzed/trainers/front/leader_tate_and_liza.4bpp.lz", 0x0, 0x444
	.globl gTrainerPalette_LeaderTateAndLiza
gTrainerPalette_LeaderTateAndLiza: @ 0x08D5C2F8
	.incbin "build/graphics/analyzed/trainers/front/leader_tate_and_liza.4bpp.lz", 0x444, 0x28

	.globl gTrainerFrontPic_LeaderJuan
gTrainerFrontPic_LeaderJuan: @ 0x08D5C320
	.incbin "build/graphics/analyzed/trainers/front/leader_juan.4bpp.lz", 0x0, 0x3A8
	.globl gTrainerPalette_LeaderJuan
gTrainerPalette_LeaderJuan: @ 0x08D5C6C8
	.incbin "build/graphics/analyzed/trainers/front/leader_juan.4bpp.lz", 0x3A8, 0x28

	.globl gTrainerFrontPic_SchoolKidM
gTrainerFrontPic_SchoolKidM: @ 0x08D5C6F0
	.incbin "build/graphics/analyzed/trainers/front/school_kid_m.4bpp.lz", 0x0, 0x2C0
	.globl gTrainerPalette_SchoolKidM
gTrainerPalette_SchoolKidM: @ 0x08D5C9B0
	.incbin "build/graphics/analyzed/trainers/front/school_kid_m.4bpp.lz", 0x2C0, 0x28

	.globl gTrainerFrontPic_SchoolKidF
gTrainerFrontPic_SchoolKidF: @ 0x08D5C9D8
	.incbin "build/graphics/analyzed/trainers/front/school_kid_f.4bpp.lz", 0x0, 0x29C
	.globl gTrainerPalette_SchoolKidF
gTrainerPalette_SchoolKidF: @ 0x08D5CC74
	.incbin "build/graphics/analyzed/trainers/front/school_kid_f.4bpp.lz", 0x29C, 0x28

	.globl gTrainerFrontPic_SrAndJr
gTrainerFrontPic_SrAndJr: @ 0x08D5CC9C
	.incbin "build/graphics/analyzed/trainers/front/sr_and_jr.4bpp.lz", 0x0, 0x470
	.globl gTrainerPalette_SrAndJr
gTrainerPalette_SrAndJr: @ 0x08D5D10C
	.incbin "build/graphics/analyzed/trainers/front/sr_and_jr.4bpp.lz", 0x470, 0x28

	.globl gTrainerFrontPic_PokefanM
gTrainerFrontPic_PokefanM: @ 0x08D5D134
	.incbin "build/graphics/analyzed/trainers/front/pokefan_m.4bpp.lz", 0x0, 0x3BC
	.globl gTrainerPalette_PokefanM
gTrainerPalette_PokefanM: @ 0x08D5D4F0
	.incbin "build/graphics/analyzed/trainers/front/pokefan_m.4bpp.lz", 0x3BC, 0x28

	.globl gTrainerFrontPic_PokefanF
gTrainerFrontPic_PokefanF: @ 0x08D5D518
	.incbin "build/graphics/analyzed/trainers/front/pokefan_f.4bpp.lz", 0x0, 0x3CC
	.globl gTrainerPalette_PokefanF
gTrainerPalette_PokefanF: @ 0x08D5D8E4
	.incbin "build/graphics/analyzed/trainers/front/pokefan_f.4bpp.lz", 0x3CC, 0x28

	.globl gTrainerFrontPic_Youngster
gTrainerFrontPic_Youngster: @ 0x08D5D90C
	.incbin "build/graphics/analyzed/trainers/front/youngster.4bpp.lz", 0x0, 0x2A8
	.globl gTrainerPalette_Youngster
gTrainerPalette_Youngster: @ 0x08D5DBB4
	.incbin "build/graphics/analyzed/trainers/front/youngster.4bpp.lz", 0x2A8, 0x28

	.globl gTrainerFrontPic_ChampionWallace
gTrainerFrontPic_ChampionWallace: @ 0x08D5DBDC
	.incbin "build/graphics/analyzed/trainers/front/champion_wallace.4bpp.lz", 0x0, 0x454
	.globl gTrainerPalette_ChampionWallace
gTrainerPalette_ChampionWallace: @ 0x08D5E030
	.incbin "build/graphics/analyzed/trainers/front/champion_wallace.4bpp.lz", 0x454, 0x28

	.globl gTrainerFrontPic_Fisherman
gTrainerFrontPic_Fisherman: @ 0x08D5E058
	.incbin "build/graphics/analyzed/trainers/front/fisherman.4bpp.lz", 0x0, 0x3E4
	.globl gTrainerPalette_Fisherman
gTrainerPalette_Fisherman: @ 0x08D5E43C
	.incbin "build/graphics/analyzed/trainers/front/fisherman.4bpp.lz", 0x3E4, 0x28

	.globl gTrainerFrontPic_CyclingTriathleteM
gTrainerFrontPic_CyclingTriathleteM: @ 0x08D5E464
	.incbin "build/graphics/analyzed/trainers/front/cycling_triathlete_m.4bpp.lz", 0x0, 0x410
	.globl gTrainerPalette_CyclingTriathleteM
gTrainerPalette_CyclingTriathleteM: @ 0x08D5E874
	.incbin "build/graphics/analyzed/trainers/front/cycling_triathlete_m.4bpp.lz", 0x410, 0x28

	.globl gTrainerFrontPic_CyclingTriathleteF
gTrainerFrontPic_CyclingTriathleteF: @ 0x08D5E89C
	.incbin "build/graphics/analyzed/trainers/front/cycling_triathlete_f.4bpp.lz", 0x0, 0x40C
	.globl gTrainerPalette_CyclingTriathleteF
gTrainerPalette_CyclingTriathleteF: @ 0x08D5ECA8
	.incbin "build/graphics/analyzed/trainers/front/cycling_triathlete_f.4bpp.lz", 0x40C, 0x28

	.globl gTrainerFrontPic_RunningTriathleteM
gTrainerFrontPic_RunningTriathleteM: @ 0x08D5ECD0
	.incbin "build/graphics/analyzed/trainers/front/running_triathlete_m.4bpp.lz", 0x0, 0x2B8
	.globl gTrainerPalette_RunningTriathleteM
gTrainerPalette_RunningTriathleteM: @ 0x08D5EF88
	.incbin "build/graphics/analyzed/trainers/front/running_triathlete_m.4bpp.lz", 0x2B8, 0x28

	.globl gTrainerFrontPic_RunningTriathleteF
gTrainerFrontPic_RunningTriathleteF: @ 0x08D5EFB0
	.incbin "build/graphics/analyzed/trainers/front/running_triathlete_f.4bpp.lz", 0x0, 0x2A4
	.globl gTrainerPalette_RunningTriathleteF
gTrainerPalette_RunningTriathleteF: @ 0x08D5F254
	.incbin "build/graphics/analyzed/trainers/front/running_triathlete_f.4bpp.lz", 0x2A4, 0x28

	.globl gTrainerFrontPic_SwimmingTriathleteM
gTrainerFrontPic_SwimmingTriathleteM: @ 0x08D5F27C
	.incbin "build/graphics/analyzed/trainers/front/swimming_triathlete_m.4bpp.lz", 0x0, 0x32C
	.globl gTrainerPalette_SwimmingTriathleteM
gTrainerPalette_SwimmingTriathleteM: @ 0x08D5F5A8
	.incbin "build/graphics/analyzed/trainers/front/swimming_triathlete_m.4bpp.lz", 0x32C, 0x28

	.globl gTrainerFrontPic_SwimmingTriathleteF
gTrainerFrontPic_SwimmingTriathleteF: @ 0x08D5F5D0
	.incbin "build/graphics/analyzed/trainers/front/swimming_triathlete_f.4bpp.lz", 0x0, 0x2DC
	.globl gTrainerPalette_SwimmingTriathleteF
gTrainerPalette_SwimmingTriathleteF: @ 0x08D5F8AC
	.incbin "build/graphics/analyzed/trainers/front/swimming_triathlete_f.4bpp.lz", 0x2DC, 0x28

	.globl gTrainerFrontPic_DragonTamer
gTrainerFrontPic_DragonTamer: @ 0x08D5F8D4
	.incbin "build/graphics/analyzed/trainers/front/dragon_tamer.4bpp.lz", 0x0, 0x354
	.globl gTrainerPalette_DragonTamer
gTrainerPalette_DragonTamer: @ 0x08D5FC28
	.incbin "build/graphics/analyzed/trainers/front/dragon_tamer.4bpp.lz", 0x354, 0x28

	.globl gTrainerFrontPic_NinjaBoy
gTrainerFrontPic_NinjaBoy: @ 0x08D5FC50
	.incbin "build/graphics/analyzed/trainers/front/ninja_boy.4bpp.lz", 0x0, 0x2DC
	.globl gTrainerPalette_NinjaBoy
gTrainerPalette_NinjaBoy: @ 0x08D5FF2C
	.incbin "build/graphics/analyzed/trainers/front/ninja_boy.4bpp.lz", 0x2DC, 0x28

	.globl gTrainerFrontPic_BattleGirl
gTrainerFrontPic_BattleGirl: @ 0x08D5FF54
	.incbin "build/graphics/analyzed/trainers/front/battle_girl.4bpp.lz", 0x0, 0x320
	.globl gTrainerPalette_BattleGirl
gTrainerPalette_BattleGirl: @ 0x08D60274
	.incbin "build/graphics/analyzed/trainers/front/battle_girl.4bpp.lz", 0x320, 0x28

	.globl gTrainerFrontPic_ParasolLady
gTrainerFrontPic_ParasolLady: @ 0x08D6029C
	.incbin "build/graphics/analyzed/trainers/front/parasol_lady.4bpp.lz", 0x0, 0x338
	.globl gTrainerPalette_ParasolLady
gTrainerPalette_ParasolLady: @ 0x08D605D4
	.incbin "build/graphics/analyzed/trainers/front/parasol_lady.4bpp.lz", 0x338, 0x28

	.globl gTrainerFrontPic_SwimmerF
gTrainerFrontPic_SwimmerF: @ 0x08D605FC
	.incbin "build/graphics/analyzed/trainers/front/swimmer_f.4bpp.lz", 0x0, 0x2D0
	.globl gTrainerPalette_SwimmerF
gTrainerPalette_SwimmerF: @ 0x08D608CC
	.incbin "build/graphics/analyzed/trainers/front/swimmer_f.4bpp.lz", 0x2D0, 0x28

	.globl gTrainerFrontPic_Twins
gTrainerFrontPic_Twins: @ 0x08D608F4
	.incbin "build/graphics/analyzed/trainers/front/twins.4bpp.lz", 0x0, 0x3C4
	.globl gTrainerPalette_Twins
gTrainerPalette_Twins: @ 0x08D60CB8
	.incbin "build/graphics/analyzed/trainers/front/twins.4bpp.lz", 0x3C4, 0x28

	.globl gTrainerFrontPic_Sailor
gTrainerFrontPic_Sailor: @ 0x08D60CE0
	.incbin "build/graphics/analyzed/trainers/front/sailor.4bpp.lz", 0x0, 0x3B0
	.globl gTrainerPalette_Sailor
gTrainerPalette_Sailor: @ 0x08D61090
	.incbin "build/graphics/analyzed/trainers/front/sailor.4bpp.lz", 0x3B0, 0x28

	.globl gTrainerFrontPic_MagmaAdmin
gTrainerFrontPic_MagmaAdmin: @ 0x08D610B8
	.incbin "build/graphics/analyzed/trainers/front/magma_admin.4bpp.lz", 0x0, 0x3D8
	.globl gTrainerPalette_MagmaAdmin
gTrainerPalette_MagmaAdmin: @ 0x08D61490
	.incbin "build/graphics/analyzed/trainers/front/magma_admin.4bpp.lz", 0x3D8, 0x28

	.globl gTrainerFrontPic_Wally
gTrainerFrontPic_Wally: @ 0x08D614B8
	.incbin "build/graphics/analyzed/trainers/front/wally.4bpp.lz", 0x0, 0x2D0
	.globl gTrainerPalette_Wally
gTrainerPalette_Wally: @ 0x08D61788
	.incbin "build/graphics/analyzed/trainers/front/wally.4bpp.lz", 0x2D0, 0x28

	.globl gTrainerFrontPic_Brendan
gTrainerFrontPic_Brendan: @ 0x08D617B0
	.incbin "build/graphics/analyzed/trainers/front/brendan.4bpp.lz", 0x0, 0x324
	.globl gTrainerPalette_Brendan
gTrainerPalette_Brendan: @ 0x08D61AD4
	.incbin "build/graphics/analyzed/trainers/front/brendan.4bpp.lz", 0x324, 0x28

	.globl gTrainerFrontPic_May
gTrainerFrontPic_May: @ 0x08D61AFC
	.incbin "build/graphics/analyzed/trainers/front/may.4bpp.lz", 0x0, 0x300
	.globl gTrainerPalette_May
gTrainerPalette_May: @ 0x08D61DFC
	.incbin "build/graphics/analyzed/trainers/front/may.4bpp.lz", 0x300, 0x28

	.globl gTrainerFrontPic_BugCatcher
gTrainerFrontPic_BugCatcher: @ 0x08D61E24
	.incbin "build/graphics/analyzed/trainers/front/bug_catcher.4bpp.lz", 0x0, 0x32C
	.globl gTrainerPalette_BugCatcher
gTrainerPalette_BugCatcher: @ 0x08D62150
	.incbin "build/graphics/analyzed/trainers/front/bug_catcher.4bpp.lz", 0x32C, 0x28

	.globl gTrainerFrontPic_PokemonRangerM
gTrainerFrontPic_PokemonRangerM: @ 0x08D62178
	.incbin "build/graphics/analyzed/trainers/front/pokemon_ranger_m.4bpp.lz", 0x0, 0x348
	.globl gTrainerPalette_PokemonRangerM
gTrainerPalette_PokemonRangerM: @ 0x08D624C0
	.incbin "build/graphics/analyzed/trainers/front/pokemon_ranger_m.4bpp.lz", 0x348, 0x28

	.globl gTrainerFrontPic_PokemonRangerF
gTrainerFrontPic_PokemonRangerF: @ 0x08D624E8
	.incbin "build/graphics/analyzed/trainers/front/pokemon_ranger_f.4bpp.lz", 0x0, 0x334
	.globl gTrainerPalette_PokemonRangerF
gTrainerPalette_PokemonRangerF: @ 0x08D6281C
	.incbin "build/graphics/analyzed/trainers/front/pokemon_ranger_f.4bpp.lz", 0x334, 0x28

	.globl gTrainerFrontPic_MagmaLeaderMaxie
gTrainerFrontPic_MagmaLeaderMaxie: @ 0x08D62844
	.incbin "build/graphics/analyzed/trainers/front/magma_leader_maxie.4bpp.lz", 0x0, 0x2F4
	.globl gTrainerPalette_MagmaLeaderMaxie
gTrainerPalette_MagmaLeaderMaxie: @ 0x08D62B38
	.incbin "build/graphics/analyzed/trainers/front/magma_leader_maxie.4bpp.lz", 0x2F4, 0x28

	.globl gTrainerFrontPic_Lass
gTrainerFrontPic_Lass: @ 0x08D62B60
	.incbin "build/graphics/analyzed/trainers/front/lass.4bpp.lz", 0x0, 0x2D8
	.globl gTrainerPalette_Lass
gTrainerPalette_Lass: @ 0x08D62E38
	.incbin "build/graphics/analyzed/trainers/front/lass.4bpp.lz", 0x2D8, 0x28

	.globl gTrainerFrontPic_YoungCouple
gTrainerFrontPic_YoungCouple: @ 0x08D62E60
	.incbin "build/graphics/analyzed/trainers/front/young_couple.4bpp.lz", 0x0, 0x3C0
	.globl gTrainerPalette_YoungCouple
gTrainerPalette_YoungCouple: @ 0x08D63220
	.incbin "build/graphics/analyzed/trainers/front/young_couple.4bpp.lz", 0x3C0, 0x28

	.globl gTrainerFrontPic_OldCouple
gTrainerFrontPic_OldCouple: @ 0x08D63248
	.incbin "build/graphics/analyzed/trainers/front/old_couple.4bpp.lz", 0x0, 0x510
	.globl gTrainerPalette_OldCouple
gTrainerPalette_OldCouple: @ 0x08D63758
	.incbin "build/graphics/analyzed/trainers/front/old_couple.4bpp.lz", 0x510, 0x28

	.globl gTrainerFrontPic_SisAndBro
gTrainerFrontPic_SisAndBro: @ 0x08D63780
	.incbin "build/graphics/analyzed/trainers/front/sis_and_bro.4bpp.lz", 0x0, 0x44C
	.globl gTrainerPalette_SisAndBro
gTrainerPalette_SisAndBro: @ 0x08D63BCC
	.incbin "build/graphics/analyzed/trainers/front/sis_and_bro.4bpp.lz", 0x44C, 0x28

	.globl gTrainerFrontPic_Steven
gTrainerFrontPic_Steven: @ 0x08D63BF4
	.incbin "build/graphics/analyzed/trainers/front/steven.4bpp.lz", 0x0, 0x338
	.globl gTrainerPalette_Steven
gTrainerPalette_Steven: @ 0x08D63F2C
	.incbin "build/graphics/analyzed/trainers/front/steven.4bpp.lz", 0x338, 0x28

	.globl gTrainerFrontPic_SalonMaidenAnabel
gTrainerFrontPic_SalonMaidenAnabel: @ 0x08D63F54
	.incbin "build/graphics/analyzed/trainers/front/salon_maiden_anabel.4bpp.lz", 0x0, 0x308
	.globl gTrainerPalette_SalonMaidenAnabel
gTrainerPalette_SalonMaidenAnabel: @ 0x08D6425C
	.incbin "build/graphics/analyzed/trainers/front/salon_maiden_anabel.4bpp.lz", 0x308, 0x28

	.globl gTrainerFrontPic_DomeAceTucker
gTrainerFrontPic_DomeAceTucker: @ 0x08D64284
	.incbin "build/graphics/analyzed/trainers/front/dome_ace_tucker.4bpp.lz", 0x0, 0x404
	.globl gTrainerPalette_DomeAceTucker
gTrainerPalette_DomeAceTucker: @ 0x08D64688
	.incbin "build/graphics/analyzed/trainers/front/dome_ace_tucker.4bpp.lz", 0x404, 0x28

	.globl gTrainerFrontPic_PalaceMavenSpenser
gTrainerFrontPic_PalaceMavenSpenser: @ 0x08D646B0
	.incbin "build/graphics/analyzed/trainers/front/palace_maven_spenser.4bpp.lz", 0x0, 0x3A4
	.globl gTrainerPalette_PalaceMavenSpenser
gTrainerPalette_PalaceMavenSpenser: @ 0x08D64A54
	.incbin "build/graphics/analyzed/trainers/front/palace_maven_spenser.4bpp.lz", 0x3A4, 0x28

	.globl gTrainerFrontPic_ArenaTycoonGreta
gTrainerFrontPic_ArenaTycoonGreta: @ 0x08D64A7C
	.incbin "build/graphics/analyzed/trainers/front/arena_tycoon_greta.4bpp.lz", 0x0, 0x330
	.globl gTrainerPalette_ArenaTycoonGreta
gTrainerPalette_ArenaTycoonGreta: @ 0x08D64DAC
	.incbin "build/graphics/analyzed/trainers/front/arena_tycoon_greta.4bpp.lz", 0x330, 0x28

	.globl gTrainerFrontPic_FactoryHeadNoland
gTrainerFrontPic_FactoryHeadNoland: @ 0x08D64DD4
	.incbin "build/graphics/analyzed/trainers/front/factory_head_noland.4bpp.lz", 0x0, 0x37C
	.globl gTrainerPalette_FactoryHeadNoland
gTrainerPalette_FactoryHeadNoland: @ 0x08D65150
	.incbin "build/graphics/analyzed/trainers/front/factory_head_noland.4bpp.lz", 0x37C, 0x28

	.globl gTrainerFrontPic_PikeQueenLucy
gTrainerFrontPic_PikeQueenLucy: @ 0x08D65178
	.incbin "build/graphics/analyzed/trainers/front/pike_queen_lucy.4bpp.lz", 0x0, 0x2F4
	.globl gTrainerPalette_PikeQueenLucy
gTrainerPalette_PikeQueenLucy: @ 0x08D6546C
	.incbin "build/graphics/analyzed/trainers/front/pike_queen_lucy.4bpp.lz", 0x2F4, 0x28

	.globl gTrainerFrontPic_PyramidKingBrandon
gTrainerFrontPic_PyramidKingBrandon: @ 0x08D65494
	.incbin "build/graphics/analyzed/trainers/front/pyramid_king_brandon.4bpp.lz", 0x0, 0x36C
	.globl gTrainerPalette_PyramidKingBrandon
gTrainerPalette_PyramidKingBrandon: @ 0x08D65800
	.incbin "build/graphics/analyzed/trainers/front/pyramid_king_brandon.4bpp.lz", 0x36C, 0x28

	.globl gTrainerFrontPic_Red
gTrainerFrontPic_Red: @ 0x08D65828
	.incbin "build/graphics/analyzed/trainers/front/red.4bpp.lz", 0x0, 0x30C
	.globl gTrainerPalette_Red
gTrainerPalette_Red: @ 0x08D65B34
	.incbin "build/graphics/analyzed/trainers/front/red.4bpp.lz", 0x30C, 0x28

	.globl gTrainerFrontPic_Leaf
gTrainerFrontPic_Leaf: @ 0x08D65B5C
	.incbin "build/graphics/analyzed/trainers/front/leaf.4bpp.lz", 0x0, 0x33C
	.globl gTrainerPalette_Leaf
gTrainerPalette_Leaf: @ 0x08D65E98
	.incbin "build/graphics/analyzed/trainers/front/leaf.4bpp.lz", 0x33C, 0x28

	.globl gTrainerFrontPic_RubySapphireBrendan
gTrainerFrontPic_RubySapphireBrendan: @ 0x08D65EC0
	.incbin "build/graphics/analyzed/trainers/front/ruby_sapphire_brendan.4bpp.lz", 0x0, 0x314
	.globl gTrainerPalette_RubySapphireBrendan
gTrainerPalette_RubySapphireBrendan: @ 0x08D661D4
	.incbin "build/graphics/analyzed/trainers/front/ruby_sapphire_brendan.4bpp.lz", 0x314, 0x28

	.globl gTrainerFrontPic_RubySapphireMay
gTrainerFrontPic_RubySapphireMay: @ 0x08D661FC
	.incbin "build/graphics/analyzed/trainers/front/ruby_sapphire_may.4bpp.lz", 0x0, 0x300
	.globl gTrainerPalette_RubySapphireMay
gTrainerPalette_RubySapphireMay: @ 0x08D664FC
	.incbin "build/graphics/analyzed/trainers/front/ruby_sapphire_may.4bpp.lz", 0x300, 0x28

	@ Trainer back sprites: uncompressed multi-frame 4bpp; PNG palette is visualization only.

	.globl gTrainerBackPic_Brendan
gTrainerBackPic_Brendan: @ 0x08D66524
	@ 4 x 64x64 frames
	.incbin "build/graphics/analyzed/trainers/back/brendan.4bpp"

	.globl gTrainerBackPic_May
gTrainerBackPic_May: @ 0x08D68524
	@ 4 x 64x64 frames
	.incbin "build/graphics/analyzed/trainers/back/may.4bpp"

	.globl gTrainerBackPic_Red
gTrainerBackPic_Red: @ 0x08D6A524
	@ 5 x 64x64 frames
	.incbin "build/graphics/analyzed/trainers/back/red.4bpp"

	.globl gTrainerBackPic_Leaf
gTrainerBackPic_Leaf: @ 0x08D6CD24
	@ 5 x 64x64 frames
	.incbin "build/graphics/analyzed/trainers/back/leaf.4bpp"

	.globl gTrainerBackPic_RubySapphireBrendan
gTrainerBackPic_RubySapphireBrendan: @ 0x08D6F524
	@ 4 x 64x64 frames
	.incbin "build/graphics/analyzed/trainers/back/ruby_sapphire_brendan.4bpp"

	.globl gTrainerBackPic_RubySapphireMay
gTrainerBackPic_RubySapphireMay: @ 0x08D71524
	@ 4 x 64x64 frames
	.incbin "build/graphics/analyzed/trainers/back/ruby_sapphire_may.4bpp"

	.globl gTrainerBackPic_Wally
gTrainerBackPic_Wally: @ 0x08D73524
	@ 4 x 64x64 frames
	.incbin "build/graphics/analyzed/trainers/back/wally.4bpp"

	.globl gTrainerBackPic_Steven
gTrainerBackPic_Steven: @ 0x08D75524
	@ 4 x 64x64 frames
	.incbin "build/graphics/analyzed/trainers/back/steven.4bpp"

	@ Back palettes are kept raw in this pass.

	.globl gTrainerBackPalette_Red
gTrainerBackPalette_Red: @ 0x08D77524
	.byte 0x10, 0x20, 0x00, 0x00, 0x00, 0xF0, 0x51, 0xF5, 0x21, 0x1F, 0x4B, 0x5B, 0x3A, 0x00, 0x0F, 0x21
	.byte 0x08, 0x69, 0xE7, 0x3C, 0x8E, 0x62, 0x00, 0xAD, 0x14, 0xBD, 0x7F, 0xD6, 0x6A, 0xBF, 0x25, 0x00
	.byte 0xF8, 0x1C, 0x7F, 0x2F, 0x77, 0x1E, 0x00, 0x00

	.globl gTrainerBackPalette_Leaf
gTrainerBackPalette_Leaf: @ 0x08D7754C
	.byte 0x10, 0x20, 0x00, 0x00, 0x00, 0x0E, 0x53, 0xF5, 0x21, 0x1F, 0x4B, 0x5B, 0x3A, 0x00, 0x0F, 0x21
	.byte 0x08, 0x69, 0xE7, 0x3C, 0x8E, 0x62, 0x00, 0xAD, 0x14, 0xBD, 0x7F, 0xD6, 0x6A, 0xBF, 0x25, 0x00
	.byte 0xF8, 0x1C, 0x7F, 0x2F, 0x77, 0x1E, 0x00, 0x00
