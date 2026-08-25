
	.globl gMonIcon_UnownQmark
gMonIcon_UnownQmark: @ 0x08D51A6C [439]
	.incbin "build/graphics/pokemon/unown_qmark/icon.4bpp"

	@ Trainer front sprites: one indexed PNG supplies both 4bpp pixels and palette.
	@ The PNG embeds the original LZ77 token plans; generated output is pic slot + palette slot.

	.globl gTrainerFrontPic_Hiker
gTrainerFrontPic_Hiker: @ 0x08D51E6C
	.incbin "build/graphics/trainers/front_pics/hiker.4bpp.lz", 0x0, 0x480 @ gTrainerFrontPic_Hiker generated trainer asset
	.globl gTrainerPalette_Hiker
gTrainerPalette_Hiker: @ 0x08D522EC
	.incbin "build/graphics/trainers/front_pics/hiker.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Hiker generated trainer asset

	.globl gTrainerFrontPic_AquaGruntM
gTrainerFrontPic_AquaGruntM: @ 0x08D52314
	.incbin "build/graphics/trainers/front_pics/aqua_grunt_m.4bpp.lz", 0x0, 0x360 @ gTrainerFrontPic_AquaGruntM generated trainer asset
	.globl gTrainerPalette_AquaGruntM
gTrainerPalette_AquaGruntM: @ 0x08D52674
	.incbin "build/graphics/trainers/front_pics/aqua_grunt_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_AquaGruntM generated trainer asset

	.globl gTrainerFrontPic_PokemonBreederF
gTrainerFrontPic_PokemonBreederF: @ 0x08D5269C
	.incbin "build/graphics/trainers/front_pics/pokemon_breeder_f.4bpp.lz", 0x0, 0x334 @ gTrainerFrontPic_PokemonBreederF generated trainer asset
	.globl gTrainerPalette_PokemonBreederF
gTrainerPalette_PokemonBreederF: @ 0x08D529D0
	.incbin "build/graphics/trainers/front_pics/pokemon_breeder_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PokemonBreederF generated trainer asset

	.globl gTrainerFrontPic_CoolTrainerM
gTrainerFrontPic_CoolTrainerM: @ 0x08D529F8
	.incbin "build/graphics/trainers/front_pics/cooltrainer_m.4bpp.lz", 0x0, 0x2E8 @ gTrainerFrontPic_CoolTrainerM generated trainer asset
	.globl gTrainerPalette_CoolTrainerM
gTrainerPalette_CoolTrainerM: @ 0x08D52CE0
	.incbin "build/graphics/trainers/front_pics/cooltrainer_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_CoolTrainerM generated trainer asset

	.globl gTrainerFrontPic_BirdKeeper
gTrainerFrontPic_BirdKeeper: @ 0x08D52D08
	.incbin "build/graphics/trainers/front_pics/bird_keeper.4bpp.lz", 0x0, 0x338 @ gTrainerFrontPic_BirdKeeper generated trainer asset
	.globl gTrainerPalette_BirdKeeper
gTrainerPalette_BirdKeeper: @ 0x08D53040
	.incbin "build/graphics/trainers/front_pics/bird_keeper.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_BirdKeeper generated trainer asset

	.globl gTrainerFrontPic_Collector
gTrainerFrontPic_Collector: @ 0x08D53068
	.incbin "build/graphics/trainers/front_pics/collector.4bpp.lz", 0x0, 0x404 @ gTrainerFrontPic_Collector generated trainer asset
	.globl gTrainerPalette_Collector
gTrainerPalette_Collector: @ 0x08D5346C
	.incbin "build/graphics/trainers/front_pics/collector.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Collector generated trainer asset

	.globl gTrainerFrontPic_AquaGruntF
gTrainerFrontPic_AquaGruntF: @ 0x08D53494
	.incbin "build/graphics/trainers/front_pics/aqua_grunt_f.4bpp.lz", 0x0, 0x33C @ gTrainerFrontPic_AquaGruntF generated trainer asset
	.globl gTrainerPalette_AquaGruntF
gTrainerPalette_AquaGruntF: @ 0x08D537D0
	.incbin "build/graphics/trainers/front_pics/aqua_grunt_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_AquaGruntF generated trainer asset

	.globl gTrainerFrontPic_SwimmerM
gTrainerFrontPic_SwimmerM: @ 0x08D537F8
	.incbin "build/graphics/trainers/front_pics/swimmer_m.4bpp.lz", 0x0, 0x2C0 @ gTrainerFrontPic_SwimmerM generated trainer asset
	.globl gTrainerPalette_SwimmerM
gTrainerPalette_SwimmerM: @ 0x08D53AB8
	.incbin "build/graphics/trainers/front_pics/swimmer_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_SwimmerM generated trainer asset

	.globl gTrainerFrontPic_MagmaGruntM
gTrainerFrontPic_MagmaGruntM: @ 0x08D53AE0
	.incbin "build/graphics/trainers/front_pics/magma_grunt_m.4bpp.lz", 0x0, 0x380 @ gTrainerFrontPic_MagmaGruntM generated trainer asset
	.globl gTrainerPalette_MagmaGruntM
gTrainerPalette_MagmaGruntM: @ 0x08D53E60
	.incbin "build/graphics/trainers/front_pics/magma_grunt_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_MagmaGruntM generated trainer asset

	.globl gTrainerFrontPic_ExpertM
gTrainerFrontPic_ExpertM: @ 0x08D53E88
	.incbin "build/graphics/trainers/front_pics/expert_m.4bpp.lz", 0x0, 0x340 @ gTrainerFrontPic_ExpertM generated trainer asset
	.globl gTrainerPalette_ExpertM
gTrainerPalette_ExpertM: @ 0x08D541C8
	.incbin "build/graphics/trainers/front_pics/expert_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_ExpertM generated trainer asset

	.globl gTrainerFrontPic_AquaAdminM
gTrainerFrontPic_AquaAdminM: @ 0x08D541F0
	.incbin "build/graphics/trainers/front_pics/aqua_admin_m.4bpp.lz", 0x0, 0x3B4 @ gTrainerFrontPic_AquaAdminM generated trainer asset
	.globl gTrainerPalette_AquaAdminM
gTrainerPalette_AquaAdminM: @ 0x08D545A4
	.incbin "build/graphics/trainers/front_pics/aqua_admin_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_AquaAdminM generated trainer asset

	.globl gTrainerFrontPic_BlackBelt
gTrainerFrontPic_BlackBelt: @ 0x08D545CC
	.incbin "build/graphics/trainers/front_pics/black_belt.4bpp.lz", 0x0, 0x364 @ gTrainerFrontPic_BlackBelt generated trainer asset
	.globl gTrainerPalette_BlackBelt
gTrainerPalette_BlackBelt: @ 0x08D54930
	.incbin "build/graphics/trainers/front_pics/black_belt.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_BlackBelt generated trainer asset

	.globl gTrainerFrontPic_AquaAdminF
gTrainerFrontPic_AquaAdminF: @ 0x08D54958
	.incbin "build/graphics/trainers/front_pics/aqua_admin_f.4bpp.lz", 0x0, 0x3C4 @ gTrainerFrontPic_AquaAdminF generated trainer asset
	.globl gTrainerPalette_AquaAdminF
gTrainerPalette_AquaAdminF: @ 0x08D54D1C
	.incbin "build/graphics/trainers/front_pics/aqua_admin_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_AquaAdminF generated trainer asset

	.globl gTrainerFrontPic_AquaLeaderArchie
gTrainerFrontPic_AquaLeaderArchie: @ 0x08D54D44
	.incbin "build/graphics/trainers/front_pics/aqua_leader_archie.4bpp.lz", 0x0, 0x33C @ gTrainerFrontPic_AquaLeaderArchie generated trainer asset
	.globl gTrainerPalette_AquaLeaderArchie
gTrainerPalette_AquaLeaderArchie: @ 0x08D55080
	.incbin "build/graphics/trainers/front_pics/aqua_leader_archie.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_AquaLeaderArchie generated trainer asset

	.globl gTrainerFrontPic_HexManiac
gTrainerFrontPic_HexManiac: @ 0x08D550A8
	.incbin "build/graphics/trainers/front_pics/hex_maniac.4bpp.lz", 0x0, 0x36C @ gTrainerFrontPic_HexManiac generated trainer asset
	.globl gTrainerPalette_HexManiac
gTrainerPalette_HexManiac: @ 0x08D55414
	.incbin "build/graphics/trainers/front_pics/hex_maniac.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_HexManiac generated trainer asset

	.globl gTrainerFrontPic_AromaLady
gTrainerFrontPic_AromaLady: @ 0x08D5543C
	.incbin "build/graphics/trainers/front_pics/aroma_lady.4bpp.lz", 0x0, 0x2C4 @ gTrainerFrontPic_AromaLady generated trainer asset
	.globl gTrainerPalette_AromaLady
gTrainerPalette_AromaLady: @ 0x08D55700
	.incbin "build/graphics/trainers/front_pics/aroma_lady.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_AromaLady generated trainer asset

	.globl gTrainerFrontPic_RuinManiac
gTrainerFrontPic_RuinManiac: @ 0x08D55728
	.incbin "build/graphics/trainers/front_pics/ruin_maniac.4bpp.lz", 0x0, 0x39C @ gTrainerFrontPic_RuinManiac generated trainer asset
	.globl gTrainerPalette_RuinManiac
gTrainerPalette_RuinManiac: @ 0x08D55AC4
	.incbin "build/graphics/trainers/front_pics/ruin_maniac.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_RuinManiac generated trainer asset

	.globl gTrainerFrontPic_Interviewer
gTrainerFrontPic_Interviewer: @ 0x08D55AEC
	.incbin "build/graphics/trainers/front_pics/interviewer.4bpp.lz", 0x0, 0x4A4 @ gTrainerFrontPic_Interviewer generated trainer asset
	.globl gTrainerPalette_Interviewer
gTrainerPalette_Interviewer: @ 0x08D55F90
	.incbin "build/graphics/trainers/front_pics/interviewer.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Interviewer generated trainer asset

	.globl gTrainerFrontPic_TuberF
gTrainerFrontPic_TuberF: @ 0x08D55FB8
	.incbin "build/graphics/trainers/front_pics/tuber_f.4bpp.lz", 0x0, 0x2A4 @ gTrainerFrontPic_TuberF generated trainer asset
	.globl gTrainerPalette_TuberF
gTrainerPalette_TuberF: @ 0x08D5625C
	.incbin "build/graphics/trainers/front_pics/tuber_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_TuberF generated trainer asset

	.globl gTrainerFrontPic_TuberM
gTrainerFrontPic_TuberM: @ 0x08D56284
	.incbin "build/graphics/trainers/front_pics/tuber_m.4bpp.lz", 0x0, 0x28C @ gTrainerFrontPic_TuberM generated trainer asset
	.globl gTrainerPalette_TuberM
gTrainerPalette_TuberM: @ 0x08D56510
	.incbin "build/graphics/trainers/front_pics/tuber_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_TuberM generated trainer asset

	.globl gTrainerFrontPic_CoolTrainerF
gTrainerFrontPic_CoolTrainerF: @ 0x08D56538
	.incbin "build/graphics/trainers/front_pics/cooltrainer_f.4bpp.lz", 0x0, 0x314 @ gTrainerFrontPic_CoolTrainerF generated trainer asset
	.globl gTrainerPalette_CoolTrainerF
gTrainerPalette_CoolTrainerF: @ 0x08D5684C
	.incbin "build/graphics/trainers/front_pics/cooltrainer_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_CoolTrainerF generated trainer asset

	.globl gTrainerFrontPic_Lady
gTrainerFrontPic_Lady: @ 0x08D56874
	.incbin "build/graphics/trainers/front_pics/lady.4bpp.lz", 0x0, 0x3B4 @ gTrainerFrontPic_Lady generated trainer asset
	.globl gTrainerPalette_Lady
gTrainerPalette_Lady: @ 0x08D56C28
	.incbin "build/graphics/trainers/front_pics/lady.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Lady generated trainer asset

	.globl gTrainerFrontPic_Beauty
gTrainerFrontPic_Beauty: @ 0x08D56C50
	.incbin "build/graphics/trainers/front_pics/beauty.4bpp.lz", 0x0, 0x2E8 @ gTrainerFrontPic_Beauty generated trainer asset
	.globl gTrainerPalette_Beauty
gTrainerPalette_Beauty: @ 0x08D56F38
	.incbin "build/graphics/trainers/front_pics/beauty.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Beauty generated trainer asset

	.globl gTrainerFrontPic_RichBoy
gTrainerFrontPic_RichBoy: @ 0x08D56F60
	.incbin "build/graphics/trainers/front_pics/rich_boy.4bpp.lz", 0x0, 0x2B4 @ gTrainerFrontPic_RichBoy generated trainer asset
	.globl gTrainerPalette_RichBoy
gTrainerPalette_RichBoy: @ 0x08D57214
	.incbin "build/graphics/trainers/front_pics/rich_boy.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_RichBoy generated trainer asset

	.globl gTrainerFrontPic_ExpertF
gTrainerFrontPic_ExpertF: @ 0x08D5723C
	.incbin "build/graphics/trainers/front_pics/expert_f.4bpp.lz", 0x0, 0x31C @ gTrainerFrontPic_ExpertF generated trainer asset
	.globl gTrainerPalette_ExpertF
gTrainerPalette_ExpertF: @ 0x08D57558
	.incbin "build/graphics/trainers/front_pics/expert_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_ExpertF generated trainer asset

	.globl gTrainerFrontPic_Pokemaniac
gTrainerFrontPic_Pokemaniac: @ 0x08D57580
	.incbin "build/graphics/trainers/front_pics/pokemaniac.4bpp.lz", 0x0, 0x370 @ gTrainerFrontPic_Pokemaniac generated trainer asset
	.globl gTrainerPalette_Pokemaniac
gTrainerPalette_Pokemaniac: @ 0x08D578F0
	.incbin "build/graphics/trainers/front_pics/pokemaniac.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Pokemaniac generated trainer asset

	.globl gTrainerFrontPic_MagmaGruntF
gTrainerFrontPic_MagmaGruntF: @ 0x08D57918
	.incbin "build/graphics/trainers/front_pics/magma_grunt_f.4bpp.lz", 0x0, 0x38C @ gTrainerFrontPic_MagmaGruntF generated trainer asset
	.globl gTrainerPalette_MagmaGruntF
gTrainerPalette_MagmaGruntF: @ 0x08D57CA4
	.incbin "build/graphics/trainers/front_pics/magma_grunt_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_MagmaGruntF generated trainer asset

	.globl gTrainerFrontPic_Guitarist
gTrainerFrontPic_Guitarist: @ 0x08D57CCC
	.incbin "build/graphics/trainers/front_pics/guitarist.4bpp.lz", 0x0, 0x384 @ gTrainerFrontPic_Guitarist generated trainer asset
	.globl gTrainerPalette_Guitarist
gTrainerPalette_Guitarist: @ 0x08D58050
	.incbin "build/graphics/trainers/front_pics/guitarist.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Guitarist generated trainer asset

	.globl gTrainerFrontPic_Kindler
gTrainerFrontPic_Kindler: @ 0x08D58078
	.incbin "build/graphics/trainers/front_pics/kindler.4bpp.lz", 0x0, 0x36C @ gTrainerFrontPic_Kindler generated trainer asset
	.globl gTrainerPalette_Kindler
gTrainerPalette_Kindler: @ 0x08D583E4
	.incbin "build/graphics/trainers/front_pics/kindler.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Kindler generated trainer asset

	.globl gTrainerFrontPic_Camper
gTrainerFrontPic_Camper: @ 0x08D5840C
	.incbin "build/graphics/trainers/front_pics/camper.4bpp.lz", 0x0, 0x2E8 @ gTrainerFrontPic_Camper generated trainer asset
	.globl gTrainerPalette_Camper
gTrainerPalette_Camper: @ 0x08D586F4
	.incbin "build/graphics/trainers/front_pics/camper.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Camper generated trainer asset

	.globl gTrainerFrontPic_Picnicker
gTrainerFrontPic_Picnicker: @ 0x08D5871C
	.incbin "build/graphics/trainers/front_pics/picnicker.4bpp.lz", 0x0, 0x2E0 @ gTrainerFrontPic_Picnicker generated trainer asset
	.globl gTrainerPalette_Picnicker
gTrainerPalette_Picnicker: @ 0x08D589FC
	.incbin "build/graphics/trainers/front_pics/picnicker.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Picnicker generated trainer asset

	.globl gTrainerFrontPic_BugManiac
gTrainerFrontPic_BugManiac: @ 0x08D58A24
	.incbin "build/graphics/trainers/front_pics/bug_maniac.4bpp.lz", 0x0, 0x450 @ gTrainerFrontPic_BugManiac generated trainer asset
	.globl gTrainerPalette_BugManiac
gTrainerPalette_BugManiac: @ 0x08D58E74
	.incbin "build/graphics/trainers/front_pics/bug_maniac.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_BugManiac generated trainer asset

	.globl gTrainerFrontPic_PokemonBreederM
gTrainerFrontPic_PokemonBreederM: @ 0x08D58E9C
	.incbin "build/graphics/trainers/front_pics/pokemon_breeder_m.4bpp.lz", 0x0, 0x330 @ gTrainerFrontPic_PokemonBreederM generated trainer asset
	.globl gTrainerPalette_PokemonBreederM
gTrainerPalette_PokemonBreederM: @ 0x08D591CC
	.incbin "build/graphics/trainers/front_pics/pokemon_breeder_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PokemonBreederM generated trainer asset

	.globl gTrainerFrontPic_PsychicM
gTrainerFrontPic_PsychicM: @ 0x08D591F4
	.incbin "build/graphics/trainers/front_pics/psychic_m.4bpp.lz", 0x0, 0x32C @ gTrainerFrontPic_PsychicM generated trainer asset
	.globl gTrainerPalette_PsychicM
gTrainerPalette_PsychicM: @ 0x08D59520
	.incbin "build/graphics/trainers/front_pics/psychic_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PsychicM generated trainer asset

	.globl gTrainerFrontPic_PsychicF
gTrainerFrontPic_PsychicF: @ 0x08D59548
	.incbin "build/graphics/trainers/front_pics/psychic_f.4bpp.lz", 0x0, 0x328 @ gTrainerFrontPic_PsychicF generated trainer asset
	.globl gTrainerPalette_PsychicF
gTrainerPalette_PsychicF: @ 0x08D59870
	.incbin "build/graphics/trainers/front_pics/psychic_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PsychicF generated trainer asset

	.globl gTrainerFrontPic_Gentleman
gTrainerFrontPic_Gentleman: @ 0x08D59898
	.incbin "build/graphics/trainers/front_pics/gentleman.4bpp.lz", 0x0, 0x300 @ gTrainerFrontPic_Gentleman generated trainer asset
	.globl gTrainerPalette_Gentleman
gTrainerPalette_Gentleman: @ 0x08D59B98
	.incbin "build/graphics/trainers/front_pics/gentleman.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Gentleman generated trainer asset

	.globl gTrainerFrontPic_EliteFourSidney
gTrainerFrontPic_EliteFourSidney: @ 0x08D59BC0
	.incbin "build/graphics/trainers/front_pics/elite_four_sidney.4bpp.lz", 0x0, 0x334 @ gTrainerFrontPic_EliteFourSidney generated trainer asset
	.globl gTrainerPalette_EliteFourSidney
gTrainerPalette_EliteFourSidney: @ 0x08D59EF4
	.incbin "build/graphics/trainers/front_pics/elite_four_sidney.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_EliteFourSidney generated trainer asset

	.globl gTrainerFrontPic_EliteFourPhoebe
gTrainerFrontPic_EliteFourPhoebe: @ 0x08D59F1C
	.incbin "build/graphics/trainers/front_pics/elite_four_phoebe.4bpp.lz", 0x0, 0x300 @ gTrainerFrontPic_EliteFourPhoebe generated trainer asset
	.globl gTrainerPalette_EliteFourPhoebe
gTrainerPalette_EliteFourPhoebe: @ 0x08D5A21C
	.incbin "build/graphics/trainers/front_pics/elite_four_phoebe.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_EliteFourPhoebe generated trainer asset

	.globl gTrainerFrontPic_EliteFourGlacia
gTrainerFrontPic_EliteFourGlacia: @ 0x08D5A244
	.incbin "build/graphics/trainers/front_pics/elite_four_glacia.4bpp.lz", 0x0, 0x384 @ gTrainerFrontPic_EliteFourGlacia generated trainer asset
	.globl gTrainerPalette_EliteFourGlacia
gTrainerPalette_EliteFourGlacia: @ 0x08D5A5C8
	.incbin "build/graphics/trainers/front_pics/elite_four_glacia.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_EliteFourGlacia generated trainer asset

	.globl gTrainerFrontPic_EliteFourDrake
gTrainerFrontPic_EliteFourDrake: @ 0x08D5A5F0
	.incbin "build/graphics/trainers/front_pics/elite_four_drake.4bpp.lz", 0x0, 0x3A8 @ gTrainerFrontPic_EliteFourDrake generated trainer asset
	.globl gTrainerPalette_EliteFourDrake
gTrainerPalette_EliteFourDrake: @ 0x08D5A998
	.incbin "build/graphics/trainers/front_pics/elite_four_drake.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_EliteFourDrake generated trainer asset

	.globl gTrainerFrontPic_LeaderRoxanne
gTrainerFrontPic_LeaderRoxanne: @ 0x08D5A9C0
	.incbin "build/graphics/trainers/front_pics/leader_roxanne.4bpp.lz", 0x0, 0x2EC @ gTrainerFrontPic_LeaderRoxanne generated trainer asset
	.globl gTrainerPalette_LeaderRoxanne
gTrainerPalette_LeaderRoxanne: @ 0x08D5ACAC
	.incbin "build/graphics/trainers/front_pics/leader_roxanne.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_LeaderRoxanne generated trainer asset

	.globl gTrainerFrontPic_LeaderBrawly
gTrainerFrontPic_LeaderBrawly: @ 0x08D5ACD4
	.incbin "build/graphics/trainers/front_pics/leader_brawly.4bpp.lz", 0x0, 0x394 @ gTrainerFrontPic_LeaderBrawly generated trainer asset
	.globl gTrainerPalette_LeaderBrawly
gTrainerPalette_LeaderBrawly: @ 0x08D5B068
	.incbin "build/graphics/trainers/front_pics/leader_brawly.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_LeaderBrawly generated trainer asset

	.globl gTrainerFrontPic_LeaderWattson
gTrainerFrontPic_LeaderWattson: @ 0x08D5B090
	.incbin "build/graphics/trainers/front_pics/leader_wattson.4bpp.lz", 0x0, 0x348 @ gTrainerFrontPic_LeaderWattson generated trainer asset
	.globl gTrainerPalette_LeaderWattson
gTrainerPalette_LeaderWattson: @ 0x08D5B3D8
	.incbin "build/graphics/trainers/front_pics/leader_wattson.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_LeaderWattson generated trainer asset

	.globl gTrainerFrontPic_LeaderFlannery
gTrainerFrontPic_LeaderFlannery: @ 0x08D5B400
	.incbin "build/graphics/trainers/front_pics/leader_flannery.4bpp.lz", 0x0, 0x380 @ gTrainerFrontPic_LeaderFlannery generated trainer asset
	.globl gTrainerPalette_LeaderFlannery
gTrainerPalette_LeaderFlannery: @ 0x08D5B780
	.incbin "build/graphics/trainers/front_pics/leader_flannery.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_LeaderFlannery generated trainer asset

	.globl gTrainerFrontPic_LeaderNorman
gTrainerFrontPic_LeaderNorman: @ 0x08D5B7A8
	.incbin "build/graphics/trainers/front_pics/leader_norman.4bpp.lz", 0x0, 0x33C @ gTrainerFrontPic_LeaderNorman generated trainer asset
	.globl gTrainerPalette_LeaderNorman
gTrainerPalette_LeaderNorman: @ 0x08D5BAE4
	.incbin "build/graphics/trainers/front_pics/leader_norman.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_LeaderNorman generated trainer asset

	.globl gTrainerFrontPic_LeaderWinona
gTrainerFrontPic_LeaderWinona: @ 0x08D5BB0C
	.incbin "build/graphics/trainers/front_pics/leader_winona.4bpp.lz", 0x0, 0x380 @ gTrainerFrontPic_LeaderWinona generated trainer asset
	.globl gTrainerPalette_LeaderWinona
gTrainerPalette_LeaderWinona: @ 0x08D5BE8C
	.incbin "build/graphics/trainers/front_pics/leader_winona.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_LeaderWinona generated trainer asset

	.globl gTrainerFrontPic_LeaderTateAndLiza
gTrainerFrontPic_LeaderTateAndLiza: @ 0x08D5BEB4
	.incbin "build/graphics/trainers/front_pics/leader_tate_and_liza.4bpp.lz", 0x0, 0x444 @ gTrainerFrontPic_LeaderTateAndLiza generated trainer asset
	.globl gTrainerPalette_LeaderTateAndLiza
gTrainerPalette_LeaderTateAndLiza: @ 0x08D5C2F8
	.incbin "build/graphics/trainers/front_pics/leader_tate_and_liza.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_LeaderTateAndLiza generated trainer asset

	.globl gTrainerFrontPic_LeaderJuan
gTrainerFrontPic_LeaderJuan: @ 0x08D5C320
	.incbin "build/graphics/trainers/front_pics/leader_juan.4bpp.lz", 0x0, 0x3A8 @ gTrainerFrontPic_LeaderJuan generated trainer asset
	.globl gTrainerPalette_LeaderJuan
gTrainerPalette_LeaderJuan: @ 0x08D5C6C8
	.incbin "build/graphics/trainers/front_pics/leader_juan.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_LeaderJuan generated trainer asset

	.globl gTrainerFrontPic_SchoolKidM
gTrainerFrontPic_SchoolKidM: @ 0x08D5C6F0
	.incbin "build/graphics/trainers/front_pics/school_kid_m.4bpp.lz", 0x0, 0x2C0 @ gTrainerFrontPic_SchoolKidM generated trainer asset
	.globl gTrainerPalette_SchoolKidM
gTrainerPalette_SchoolKidM: @ 0x08D5C9B0
	.incbin "build/graphics/trainers/front_pics/school_kid_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_SchoolKidM generated trainer asset

	.globl gTrainerFrontPic_SchoolKidF
gTrainerFrontPic_SchoolKidF: @ 0x08D5C9D8
	.incbin "build/graphics/trainers/front_pics/school_kid_f.4bpp.lz", 0x0, 0x29C @ gTrainerFrontPic_SchoolKidF generated trainer asset
	.globl gTrainerPalette_SchoolKidF
gTrainerPalette_SchoolKidF: @ 0x08D5CC74
	.incbin "build/graphics/trainers/front_pics/school_kid_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_SchoolKidF generated trainer asset

	.globl gTrainerFrontPic_SrAndJr
gTrainerFrontPic_SrAndJr: @ 0x08D5CC9C
	.incbin "build/graphics/trainers/front_pics/sr_and_jr.4bpp.lz", 0x0, 0x470 @ gTrainerFrontPic_SrAndJr generated trainer asset
	.globl gTrainerPalette_SrAndJr
gTrainerPalette_SrAndJr: @ 0x08D5D10C
	.incbin "build/graphics/trainers/front_pics/sr_and_jr.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_SrAndJr generated trainer asset

	.globl gTrainerFrontPic_PokefanM
gTrainerFrontPic_PokefanM: @ 0x08D5D134
	.incbin "build/graphics/trainers/front_pics/pokefan_m.4bpp.lz", 0x0, 0x3BC @ gTrainerFrontPic_PokefanM generated trainer asset
	.globl gTrainerPalette_PokefanM
gTrainerPalette_PokefanM: @ 0x08D5D4F0
	.incbin "build/graphics/trainers/front_pics/pokefan_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PokefanM generated trainer asset

	.globl gTrainerFrontPic_PokefanF
gTrainerFrontPic_PokefanF: @ 0x08D5D518
	.incbin "build/graphics/trainers/front_pics/pokefan_f.4bpp.lz", 0x0, 0x3CC @ gTrainerFrontPic_PokefanF generated trainer asset
	.globl gTrainerPalette_PokefanF
gTrainerPalette_PokefanF: @ 0x08D5D8E4
	.incbin "build/graphics/trainers/front_pics/pokefan_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PokefanF generated trainer asset

	.globl gTrainerFrontPic_Youngster
gTrainerFrontPic_Youngster: @ 0x08D5D90C
	.incbin "build/graphics/trainers/front_pics/youngster.4bpp.lz", 0x0, 0x2A8 @ gTrainerFrontPic_Youngster generated trainer asset
	.globl gTrainerPalette_Youngster
gTrainerPalette_Youngster: @ 0x08D5DBB4
	.incbin "build/graphics/trainers/front_pics/youngster.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Youngster generated trainer asset

	.globl gTrainerFrontPic_ChampionWallace
gTrainerFrontPic_ChampionWallace: @ 0x08D5DBDC
	.incbin "build/graphics/trainers/front_pics/champion_wallace.4bpp.lz", 0x0, 0x454 @ gTrainerFrontPic_ChampionWallace generated trainer asset
	.globl gTrainerPalette_ChampionWallace
gTrainerPalette_ChampionWallace: @ 0x08D5E030
	.incbin "build/graphics/trainers/front_pics/champion_wallace.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_ChampionWallace generated trainer asset

	.globl gTrainerFrontPic_Fisherman
gTrainerFrontPic_Fisherman: @ 0x08D5E058
	.incbin "build/graphics/trainers/front_pics/fisherman.4bpp.lz", 0x0, 0x3E4 @ gTrainerFrontPic_Fisherman generated trainer asset
	.globl gTrainerPalette_Fisherman
gTrainerPalette_Fisherman: @ 0x08D5E43C
	.incbin "build/graphics/trainers/front_pics/fisherman.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Fisherman generated trainer asset

	.globl gTrainerFrontPic_CyclingTriathleteM
gTrainerFrontPic_CyclingTriathleteM: @ 0x08D5E464
	.incbin "build/graphics/trainers/front_pics/cycling_triathlete_m.4bpp.lz", 0x0, 0x410 @ gTrainerFrontPic_CyclingTriathleteM generated trainer asset
	.globl gTrainerPalette_CyclingTriathleteM
gTrainerPalette_CyclingTriathleteM: @ 0x08D5E874
	.incbin "build/graphics/trainers/front_pics/cycling_triathlete_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_CyclingTriathleteM generated trainer asset

	.globl gTrainerFrontPic_CyclingTriathleteF
gTrainerFrontPic_CyclingTriathleteF: @ 0x08D5E89C
	.incbin "build/graphics/trainers/front_pics/cycling_triathlete_f.4bpp.lz", 0x0, 0x40C @ gTrainerFrontPic_CyclingTriathleteF generated trainer asset
	.globl gTrainerPalette_CyclingTriathleteF
gTrainerPalette_CyclingTriathleteF: @ 0x08D5ECA8
	.incbin "build/graphics/trainers/front_pics/cycling_triathlete_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_CyclingTriathleteF generated trainer asset

	.globl gTrainerFrontPic_RunningTriathleteM
gTrainerFrontPic_RunningTriathleteM: @ 0x08D5ECD0
	.incbin "build/graphics/trainers/front_pics/running_triathlete_m.4bpp.lz", 0x0, 0x2B8 @ gTrainerFrontPic_RunningTriathleteM generated trainer asset
	.globl gTrainerPalette_RunningTriathleteM
gTrainerPalette_RunningTriathleteM: @ 0x08D5EF88
	.incbin "build/graphics/trainers/front_pics/running_triathlete_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_RunningTriathleteM generated trainer asset

	.globl gTrainerFrontPic_RunningTriathleteF
gTrainerFrontPic_RunningTriathleteF: @ 0x08D5EFB0
	.incbin "build/graphics/trainers/front_pics/running_triathlete_f.4bpp.lz", 0x0, 0x2A4 @ gTrainerFrontPic_RunningTriathleteF generated trainer asset
	.globl gTrainerPalette_RunningTriathleteF
gTrainerPalette_RunningTriathleteF: @ 0x08D5F254
	.incbin "build/graphics/trainers/front_pics/running_triathlete_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_RunningTriathleteF generated trainer asset

	.globl gTrainerFrontPic_SwimmingTriathleteM
gTrainerFrontPic_SwimmingTriathleteM: @ 0x08D5F27C
	.incbin "build/graphics/trainers/front_pics/swimming_triathlete_m.4bpp.lz", 0x0, 0x32C @ gTrainerFrontPic_SwimmingTriathleteM generated trainer asset
	.globl gTrainerPalette_SwimmingTriathleteM
gTrainerPalette_SwimmingTriathleteM: @ 0x08D5F5A8
	.incbin "build/graphics/trainers/front_pics/swimming_triathlete_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_SwimmingTriathleteM generated trainer asset

	.globl gTrainerFrontPic_SwimmingTriathleteF
gTrainerFrontPic_SwimmingTriathleteF: @ 0x08D5F5D0
	.incbin "build/graphics/trainers/front_pics/swimming_triathlete_f.4bpp.lz", 0x0, 0x2DC @ gTrainerFrontPic_SwimmingTriathleteF generated trainer asset
	.globl gTrainerPalette_SwimmingTriathleteF
gTrainerPalette_SwimmingTriathleteF: @ 0x08D5F8AC
	.incbin "build/graphics/trainers/front_pics/swimming_triathlete_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_SwimmingTriathleteF generated trainer asset

	.globl gTrainerFrontPic_DragonTamer
gTrainerFrontPic_DragonTamer: @ 0x08D5F8D4
	.incbin "build/graphics/trainers/front_pics/dragon_tamer.4bpp.lz", 0x0, 0x354 @ gTrainerFrontPic_DragonTamer generated trainer asset
	.globl gTrainerPalette_DragonTamer
gTrainerPalette_DragonTamer: @ 0x08D5FC28
	.incbin "build/graphics/trainers/front_pics/dragon_tamer.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_DragonTamer generated trainer asset

	.globl gTrainerFrontPic_NinjaBoy
gTrainerFrontPic_NinjaBoy: @ 0x08D5FC50
	.incbin "build/graphics/trainers/front_pics/ninja_boy.4bpp.lz", 0x0, 0x2DC @ gTrainerFrontPic_NinjaBoy generated trainer asset
	.globl gTrainerPalette_NinjaBoy
gTrainerPalette_NinjaBoy: @ 0x08D5FF2C
	.incbin "build/graphics/trainers/front_pics/ninja_boy.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_NinjaBoy generated trainer asset

	.globl gTrainerFrontPic_BattleGirl
gTrainerFrontPic_BattleGirl: @ 0x08D5FF54
	.incbin "build/graphics/trainers/front_pics/battle_girl.4bpp.lz", 0x0, 0x320 @ gTrainerFrontPic_BattleGirl generated trainer asset
	.globl gTrainerPalette_BattleGirl
gTrainerPalette_BattleGirl: @ 0x08D60274
	.incbin "build/graphics/trainers/front_pics/battle_girl.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_BattleGirl generated trainer asset

	.globl gTrainerFrontPic_ParasolLady
gTrainerFrontPic_ParasolLady: @ 0x08D6029C
	.incbin "build/graphics/trainers/front_pics/parasol_lady.4bpp.lz", 0x0, 0x338 @ gTrainerFrontPic_ParasolLady generated trainer asset
	.globl gTrainerPalette_ParasolLady
gTrainerPalette_ParasolLady: @ 0x08D605D4
	.incbin "build/graphics/trainers/front_pics/parasol_lady.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_ParasolLady generated trainer asset

	.globl gTrainerFrontPic_SwimmerF
gTrainerFrontPic_SwimmerF: @ 0x08D605FC
	.incbin "build/graphics/trainers/front_pics/swimmer_f.4bpp.lz", 0x0, 0x2D0 @ gTrainerFrontPic_SwimmerF generated trainer asset
	.globl gTrainerPalette_SwimmerF
gTrainerPalette_SwimmerF: @ 0x08D608CC
	.incbin "build/graphics/trainers/front_pics/swimmer_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_SwimmerF generated trainer asset

	.globl gTrainerFrontPic_Twins
gTrainerFrontPic_Twins: @ 0x08D608F4
	.incbin "build/graphics/trainers/front_pics/twins.4bpp.lz", 0x0, 0x3C4 @ gTrainerFrontPic_Twins generated trainer asset
	.globl gTrainerPalette_Twins
gTrainerPalette_Twins: @ 0x08D60CB8
	.incbin "build/graphics/trainers/front_pics/twins.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Twins generated trainer asset

	.globl gTrainerFrontPic_Sailor
gTrainerFrontPic_Sailor: @ 0x08D60CE0
	.incbin "build/graphics/trainers/front_pics/sailor.4bpp.lz", 0x0, 0x3B0 @ gTrainerFrontPic_Sailor generated trainer asset
	.globl gTrainerPalette_Sailor
gTrainerPalette_Sailor: @ 0x08D61090
	.incbin "build/graphics/trainers/front_pics/sailor.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Sailor generated trainer asset

	.globl gTrainerFrontPic_MagmaAdmin
gTrainerFrontPic_MagmaAdmin: @ 0x08D610B8
	.incbin "build/graphics/trainers/front_pics/magma_admin.4bpp.lz", 0x0, 0x3D8 @ gTrainerFrontPic_MagmaAdmin generated trainer asset
	.globl gTrainerPalette_MagmaAdmin
gTrainerPalette_MagmaAdmin: @ 0x08D61490
	.incbin "build/graphics/trainers/front_pics/magma_admin.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_MagmaAdmin generated trainer asset

	.globl gTrainerFrontPic_Wally
gTrainerFrontPic_Wally: @ 0x08D614B8
	.incbin "build/graphics/trainers/front_pics/wally.4bpp.lz", 0x0, 0x2D0 @ gTrainerFrontPic_Wally generated trainer asset
	.globl gTrainerPalette_Wally
gTrainerPalette_Wally: @ 0x08D61788
	.incbin "build/graphics/trainers/front_pics/wally.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Wally generated trainer asset

	.globl gTrainerFrontPic_Brendan
gTrainerFrontPic_Brendan: @ 0x08D617B0
	.incbin "build/graphics/trainers/front_pics/brendan.4bpp.lz", 0x0, 0x324 @ gTrainerFrontPic_Brendan generated trainer asset
	.globl gTrainerPalette_Brendan
gTrainerPalette_Brendan: @ 0x08D61AD4
	.incbin "build/graphics/trainers/front_pics/brendan.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Brendan generated trainer asset

	.globl gTrainerFrontPic_May
gTrainerFrontPic_May: @ 0x08D61AFC
	.incbin "build/graphics/trainers/front_pics/may.4bpp.lz", 0x0, 0x300 @ gTrainerFrontPic_May generated trainer asset
	.globl gTrainerPalette_May
gTrainerPalette_May: @ 0x08D61DFC
	.incbin "build/graphics/trainers/front_pics/may.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_May generated trainer asset

	.globl gTrainerFrontPic_BugCatcher
gTrainerFrontPic_BugCatcher: @ 0x08D61E24
	.incbin "build/graphics/trainers/front_pics/bug_catcher.4bpp.lz", 0x0, 0x32C @ gTrainerFrontPic_BugCatcher generated trainer asset
	.globl gTrainerPalette_BugCatcher
gTrainerPalette_BugCatcher: @ 0x08D62150
	.incbin "build/graphics/trainers/front_pics/bug_catcher.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_BugCatcher generated trainer asset

	.globl gTrainerFrontPic_PokemonRangerM
gTrainerFrontPic_PokemonRangerM: @ 0x08D62178
	.incbin "build/graphics/trainers/front_pics/pokemon_ranger_m.4bpp.lz", 0x0, 0x348 @ gTrainerFrontPic_PokemonRangerM generated trainer asset
	.globl gTrainerPalette_PokemonRangerM
gTrainerPalette_PokemonRangerM: @ 0x08D624C0
	.incbin "build/graphics/trainers/front_pics/pokemon_ranger_m.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PokemonRangerM generated trainer asset

	.globl gTrainerFrontPic_PokemonRangerF
gTrainerFrontPic_PokemonRangerF: @ 0x08D624E8
	.incbin "build/graphics/trainers/front_pics/pokemon_ranger_f.4bpp.lz", 0x0, 0x334 @ gTrainerFrontPic_PokemonRangerF generated trainer asset
	.globl gTrainerPalette_PokemonRangerF
gTrainerPalette_PokemonRangerF: @ 0x08D6281C
	.incbin "build/graphics/trainers/front_pics/pokemon_ranger_f.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PokemonRangerF generated trainer asset

	.globl gTrainerFrontPic_MagmaLeaderMaxie
gTrainerFrontPic_MagmaLeaderMaxie: @ 0x08D62844
	.incbin "build/graphics/trainers/front_pics/magma_leader_maxie.4bpp.lz", 0x0, 0x2F4 @ gTrainerFrontPic_MagmaLeaderMaxie generated trainer asset
	.globl gTrainerPalette_MagmaLeaderMaxie
gTrainerPalette_MagmaLeaderMaxie: @ 0x08D62B38
	.incbin "build/graphics/trainers/front_pics/magma_leader_maxie.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_MagmaLeaderMaxie generated trainer asset

	.globl gTrainerFrontPic_Lass
gTrainerFrontPic_Lass: @ 0x08D62B60
	.incbin "build/graphics/trainers/front_pics/lass.4bpp.lz", 0x0, 0x2D8 @ gTrainerFrontPic_Lass generated trainer asset
	.globl gTrainerPalette_Lass
gTrainerPalette_Lass: @ 0x08D62E38
	.incbin "build/graphics/trainers/front_pics/lass.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Lass generated trainer asset

	.globl gTrainerFrontPic_YoungCouple
gTrainerFrontPic_YoungCouple: @ 0x08D62E60
	.incbin "build/graphics/trainers/front_pics/young_couple.4bpp.lz", 0x0, 0x3C0 @ gTrainerFrontPic_YoungCouple generated trainer asset
	.globl gTrainerPalette_YoungCouple
gTrainerPalette_YoungCouple: @ 0x08D63220
	.incbin "build/graphics/trainers/front_pics/young_couple.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_YoungCouple generated trainer asset

	.globl gTrainerFrontPic_OldCouple
gTrainerFrontPic_OldCouple: @ 0x08D63248
	.incbin "build/graphics/trainers/front_pics/old_couple.4bpp.lz", 0x0, 0x510 @ gTrainerFrontPic_OldCouple generated trainer asset
	.globl gTrainerPalette_OldCouple
gTrainerPalette_OldCouple: @ 0x08D63758
	.incbin "build/graphics/trainers/front_pics/old_couple.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_OldCouple generated trainer asset

	.globl gTrainerFrontPic_SisAndBro
gTrainerFrontPic_SisAndBro: @ 0x08D63780
	.incbin "build/graphics/trainers/front_pics/sis_and_bro.4bpp.lz", 0x0, 0x44C @ gTrainerFrontPic_SisAndBro generated trainer asset
	.globl gTrainerPalette_SisAndBro
gTrainerPalette_SisAndBro: @ 0x08D63BCC
	.incbin "build/graphics/trainers/front_pics/sis_and_bro.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_SisAndBro generated trainer asset

	.globl gTrainerFrontPic_Steven
gTrainerFrontPic_Steven: @ 0x08D63BF4
	.incbin "build/graphics/trainers/front_pics/steven.4bpp.lz", 0x0, 0x338 @ gTrainerFrontPic_Steven generated trainer asset
	.globl gTrainerPalette_Steven
gTrainerPalette_Steven: @ 0x08D63F2C
	.incbin "build/graphics/trainers/front_pics/steven.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Steven generated trainer asset

	.globl gTrainerFrontPic_SalonMaidenAnabel
gTrainerFrontPic_SalonMaidenAnabel: @ 0x08D63F54
	.incbin "build/graphics/trainers/front_pics/salon_maiden_anabel.4bpp.lz", 0x0, 0x308 @ gTrainerFrontPic_SalonMaidenAnabel generated trainer asset
	.globl gTrainerPalette_SalonMaidenAnabel
gTrainerPalette_SalonMaidenAnabel: @ 0x08D6425C
	.incbin "build/graphics/trainers/front_pics/salon_maiden_anabel.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_SalonMaidenAnabel generated trainer asset

	.globl gTrainerFrontPic_DomeAceTucker
gTrainerFrontPic_DomeAceTucker: @ 0x08D64284
	.incbin "build/graphics/trainers/front_pics/dome_ace_tucker.4bpp.lz", 0x0, 0x404 @ gTrainerFrontPic_DomeAceTucker generated trainer asset
	.globl gTrainerPalette_DomeAceTucker
gTrainerPalette_DomeAceTucker: @ 0x08D64688
	.incbin "build/graphics/trainers/front_pics/dome_ace_tucker.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_DomeAceTucker generated trainer asset

	.globl gTrainerFrontPic_PalaceMavenSpenser
gTrainerFrontPic_PalaceMavenSpenser: @ 0x08D646B0
	.incbin "build/graphics/trainers/front_pics/palace_maven_spenser.4bpp.lz", 0x0, 0x3A4 @ gTrainerFrontPic_PalaceMavenSpenser generated trainer asset
	.globl gTrainerPalette_PalaceMavenSpenser
gTrainerPalette_PalaceMavenSpenser: @ 0x08D64A54
	.incbin "build/graphics/trainers/front_pics/palace_maven_spenser.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PalaceMavenSpenser generated trainer asset

	.globl gTrainerFrontPic_ArenaTycoonGreta
gTrainerFrontPic_ArenaTycoonGreta: @ 0x08D64A7C
	.incbin "build/graphics/trainers/front_pics/arena_tycoon_greta.4bpp.lz", 0x0, 0x330 @ gTrainerFrontPic_ArenaTycoonGreta generated trainer asset
	.globl gTrainerPalette_ArenaTycoonGreta
gTrainerPalette_ArenaTycoonGreta: @ 0x08D64DAC
	.incbin "build/graphics/trainers/front_pics/arena_tycoon_greta.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_ArenaTycoonGreta generated trainer asset

	.globl gTrainerFrontPic_FactoryHeadNoland
gTrainerFrontPic_FactoryHeadNoland: @ 0x08D64DD4
	.incbin "build/graphics/trainers/front_pics/factory_head_noland.4bpp.lz", 0x0, 0x37C @ gTrainerFrontPic_FactoryHeadNoland generated trainer asset
	.globl gTrainerPalette_FactoryHeadNoland
gTrainerPalette_FactoryHeadNoland: @ 0x08D65150
	.incbin "build/graphics/trainers/front_pics/factory_head_noland.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_FactoryHeadNoland generated trainer asset

	.globl gTrainerFrontPic_PikeQueenLucy
gTrainerFrontPic_PikeQueenLucy: @ 0x08D65178
	.incbin "build/graphics/trainers/front_pics/pike_queen_lucy.4bpp.lz", 0x0, 0x2F4 @ gTrainerFrontPic_PikeQueenLucy generated trainer asset
	.globl gTrainerPalette_PikeQueenLucy
gTrainerPalette_PikeQueenLucy: @ 0x08D6546C
	.incbin "build/graphics/trainers/front_pics/pike_queen_lucy.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PikeQueenLucy generated trainer asset

	.globl gTrainerFrontPic_PyramidKingBrandon
gTrainerFrontPic_PyramidKingBrandon: @ 0x08D65494
	.incbin "build/graphics/trainers/front_pics/pyramid_king_brandon.4bpp.lz", 0x0, 0x36C @ gTrainerFrontPic_PyramidKingBrandon generated trainer asset
	.globl gTrainerPalette_PyramidKingBrandon
gTrainerPalette_PyramidKingBrandon: @ 0x08D65800
	.incbin "build/graphics/trainers/front_pics/pyramid_king_brandon.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_PyramidKingBrandon generated trainer asset

	.globl gTrainerFrontPic_Red
gTrainerFrontPic_Red: @ 0x08D65828
	.incbin "build/graphics/trainers/front_pics/red.4bpp.lz", 0x0, 0x30C @ gTrainerFrontPic_Red generated trainer asset
	.globl gTrainerPalette_Red
gTrainerPalette_Red: @ 0x08D65B34
	.incbin "build/graphics/trainers/front_pics/red.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Red generated trainer asset

	.globl gTrainerFrontPic_Leaf
gTrainerFrontPic_Leaf: @ 0x08D65B5C
	.incbin "build/graphics/trainers/front_pics/leaf.4bpp.lz", 0x0, 0x33C @ gTrainerFrontPic_Leaf generated trainer asset
	.globl gTrainerPalette_Leaf
gTrainerPalette_Leaf: @ 0x08D65E98
	.incbin "build/graphics/trainers/front_pics/leaf.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_Leaf generated trainer asset

	.globl gTrainerFrontPic_RubySapphireBrendan
gTrainerFrontPic_RubySapphireBrendan: @ 0x08D65EC0
	.incbin "build/graphics/trainers/front_pics/brendan_rs.4bpp.lz", 0x0, 0x314 @ gTrainerFrontPic_RubySapphireBrendan generated trainer asset
	.globl gTrainerPalette_RubySapphireBrendan
gTrainerPalette_RubySapphireBrendan: @ 0x08D661D4
	.incbin "build/graphics/trainers/front_pics/brendan_rs.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_RubySapphireBrendan generated trainer asset

	.globl gTrainerFrontPic_RubySapphireMay
gTrainerFrontPic_RubySapphireMay: @ 0x08D661FC
	.incbin "build/graphics/trainers/front_pics/may_rs.4bpp.lz", 0x0, 0x300 @ gTrainerFrontPic_RubySapphireMay generated trainer asset
	.globl gTrainerPalette_RubySapphireMay
gTrainerPalette_RubySapphireMay: @ 0x08D664FC
	.incbin "build/graphics/trainers/front_pics/may_rs.gbapal.lz", 0x0, 0x28 @ gTrainerPalette_RubySapphireMay generated trainer asset

	@ Trainer back sprites: uncompressed multi-frame 4bpp; PNG palette is visualization only.

	.globl gTrainerBackPic_Brendan
gTrainerBackPic_Brendan: @ 0x08D66524
	@ 4 x 64x64 frames
	.incbin "build/graphics/trainers/back_pics/brendan.4bpp", 0x0, 0x2000 @ gTrainerBackPic_Brendan generated trainer asset

	.globl gTrainerBackPic_May
gTrainerBackPic_May: @ 0x08D68524
	@ 4 x 64x64 frames
	.incbin "build/graphics/trainers/back_pics/may.4bpp", 0x0, 0x2000 @ gTrainerBackPic_May generated trainer asset

	.globl gTrainerBackPic_Red
gTrainerBackPic_Red: @ 0x08D6A524
	@ 5 x 64x64 frames
	.incbin "build/graphics/trainers/back_pics/red.4bpp", 0x0, 0x2800 @ gTrainerBackPic_Red generated trainer asset

	.globl gTrainerBackPic_Leaf
gTrainerBackPic_Leaf: @ 0x08D6CD24
	@ 5 x 64x64 frames
	.incbin "build/graphics/trainers/back_pics/leaf.4bpp", 0x0, 0x2800 @ gTrainerBackPic_Leaf generated trainer asset

	.globl gTrainerBackPic_RubySapphireBrendan
gTrainerBackPic_RubySapphireBrendan: @ 0x08D6F524
	@ 4 x 64x64 frames
	.incbin "build/graphics/trainers/back_pics/brendan_rs.4bpp", 0x0, 0x2000 @ gTrainerBackPic_RubySapphireBrendan generated trainer asset

	.globl gTrainerBackPic_RubySapphireMay
gTrainerBackPic_RubySapphireMay: @ 0x08D71524
	@ 4 x 64x64 frames
	.incbin "build/graphics/trainers/back_pics/may_rs.4bpp", 0x0, 0x2000 @ gTrainerBackPic_RubySapphireMay generated trainer asset

	.globl gTrainerBackPic_Wally
gTrainerBackPic_Wally: @ 0x08D73524
	@ 4 x 64x64 frames
	.incbin "build/graphics/trainers/back_pics/wally.4bpp", 0x0, 0x2000 @ gTrainerBackPic_Wally generated trainer asset

	.globl gTrainerBackPic_Steven
gTrainerBackPic_Steven: @ 0x08D75524
	@ 4 x 64x64 frames
	.incbin "build/graphics/trainers/back_pics/steven.4bpp", 0x0, 0x2000 @ gTrainerBackPic_Steven generated trainer asset

	@ Back palettes are kept raw in this pass.

	.globl gTrainerBackPalette_Red
gTrainerBackPalette_Red: @ 0x08D77524
	@ Editable 16-color PNG palette; exact original LZ77 token plan.
	.incbin "build/graphics/trainers/back_pics/red_palette_rom_exact.gbapal.lz"
	.if (. - gTrainerBackPalette_Red) != 0x28
	.error "gTrainerBackPalette_Red exact LZ77 size mismatch"
	.endif
	.globl gTrainerBackPalette_Leaf
gTrainerBackPalette_Leaf: @ 0x08D7754C
	@ Editable 16-color PNG palette; exact original LZ77 token plan.
	.incbin "build/graphics/trainers/back_pics/leaf_palette_rom_exact.gbapal.lz"
	.if (. - gTrainerBackPalette_Leaf) != 0x28
	.error "gTrainerBackPalette_Leaf exact LZ77 size mismatch"
	.endif
