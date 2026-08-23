@ Japanese trainer class names.
@ ROM range: 0x082E3564-0x082E383B.
@ 66 entries; JP slot width is 11 bytes, with final alignment before gTrainers.
@ Existing gText_Rom_* labels are retained.

	.globl gTrainerClassNames
gTrainerClassNames: @ 0x082E3564
.Lbatch85_alias_start_gText_Rom_2E3564: @ 0x082E3564
sTrainerClassName_PKMN_TRAINER_1:
	.string "ポケモントレーナー{EOS}"
	.if (. - .Lbatch85_alias_start_gText_Rom_2E3564) != 0xa
	.error ".Lbatch85_alias_start_gText_Rom_2E3564 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3568
	.set gText_Rom_2E3568, .Lbatch85_alias_start_gText_Rom_2E3564 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E356F: @ 0x082E356F
sTrainerClassName_PKMN_TRAINER_2:
	.string "ポケモントレーナー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E356F) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E356F must retain its original byte length"
	.endif
	.globl gText_Rom_2E3573
	.set gText_Rom_2E3573, .Lbatch81_text_start_gText_Rom_2E356F + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:304 battle_main_line_304 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E357A: @ 0x082E357A
sTrainerClassName_HIKER:
	.string "やまおとこ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E357A) != 0x6
	.error ".Lbatch81_text_start_gText_Rom_2E357A must retain its original byte length"
	.endif
	.globl gText_Rom_2E357C
	.set gText_Rom_2E357C, .Lbatch81_text_start_gText_Rom_2E357A + 0x2
	.space 0x5, 0x00

	@ src/battle_main.c:305 battle_main_line_305 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E3585: @ 0x082E3585
sTrainerClassName_TEAM_AQUA:
	.string "アクアだん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3585) > 0x6
	.error ".Lbatch81_text_start_gText_Rom_2E3585 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3585) < 0x6
	.space 0x6 - (. - .Lbatch81_text_start_gText_Rom_2E3585)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:306 battle_main_line_306 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E3590: @ 0x082E3590
sTrainerClassName_PKMN_BREEDER:
	.string "ポケモンブリーダー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3590) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E3590 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3595
	.set gText_Rom_2E3595, .Lbatch81_text_start_gText_Rom_2E3590 + 0x5
	.space 0x1, 0x00

	@ src/battle_main.c:307 battle_main_line_307 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E359B: @ 0x082E359B
sTrainerClassName_COOLTRAINER:
	.string "エリートトレーナー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E359B) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E359B must retain its original byte length"
	.endif
	.globl gText_Rom_2E359F
	.set gText_Rom_2E359F, .Lbatch81_text_start_gText_Rom_2E359B + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:308 battle_main_line_308 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E35A6: @ 0x082E35A6
sTrainerClassName_BIRD_KEEPER:
	.string "とりつかい{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E35A6) > 0x6
	.error ".Lbatch81_text_start_gText_Rom_2E35A6 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E35A6) < 0x6
	.space 0x6 - (. - .Lbatch81_text_start_gText_Rom_2E35A6)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:309 battle_main_line_309
.Lbatch81_text_start_gText_Rom_2E35B1: @ 0x082E35B1
sTrainerClassName_COLLECTOR:
	.string "ポケモンコレクター{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E35B1) > 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E35B1 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E35B1) < 0xa
	.space 0xa - (. - .Lbatch81_text_start_gText_Rom_2E35B1)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:310 battle_main_line_310 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E35BC: @ 0x082E35BC
sTrainerClassName_SWIMMER_M:
	.string "かいパンやろう{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E35BC) > 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E35BC may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E35BC) < 0x8
	.space 0x8 - (. - .Lbatch81_text_start_gText_Rom_2E35BC)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:311 battle_main_line_311 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E35C7: @ 0x082E35C7
sTrainerClassName_TEAM_MAGMA:
	.string "マグマだん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E35C7) > 0x6
	.error ".Lbatch81_text_start_gText_Rom_2E35C7 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E35C7) < 0x6
	.space 0x6 - (. - .Lbatch81_text_start_gText_Rom_2E35C7)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:312 battle_main_line_312
.Lbatch81_text_start_gText_Rom_2E35D2: @ 0x082E35D2
sTrainerClassName_EXPERT:
	.string "たつじん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E35D2) > 0x5
	.error ".Lbatch81_text_start_gText_Rom_2E35D2 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E35D2) < 0x5
	.space 0x5 - (. - .Lbatch81_text_start_gText_Rom_2E35D2)
	.endif
	.space 0x6, 0x00

	@ src/battle_main.c:313 battle_main_line_313
.Lbatch81_text_start_gText_Rom_2E35DD: @ 0x082E35DD
sTrainerClassName_AQUA_ADMIN:
	.string "アクアだんかんぶ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E35DD) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E35DD may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E35DD) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_2E35DD)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:314 battle_main_line_314 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E35E8: @ 0x082E35E8
sTrainerClassName_BLACK_BELT:
	.string "カラテおう{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E35E8) > 0x6
	.error ".Lbatch81_text_start_gText_Rom_2E35E8 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E35E8) < 0x6
	.space 0x6 - (. - .Lbatch81_text_start_gText_Rom_2E35E8)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:315 battle_main_line_315
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E35F3: @ 0x082E35F3
sTrainerClassName_AQUA_LEADER:
	.string "アクアだんリーダー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E35F3) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E35F3 must retain its original byte length"
	.endif
	.globl gText_Rom_2E35F8
	.set gText_Rom_2E35F8, .Lbatch81_text_start_gText_Rom_2E35F3 + 0x5
	.space 0x1, 0x00

	@ src/battle_main.c:316 battle_main_line_316
.Lbatch81_text_start_gText_Rom_2E35FE: @ 0x082E35FE
sTrainerClassName_HEX_MANIAC:
	.string "オカルトマニア{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E35FE) > 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E35FE may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E35FE) < 0x8
	.space 0x8 - (. - .Lbatch81_text_start_gText_Rom_2E35FE)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:317 battle_main_line_317 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E3609: @ 0x082E3609
sTrainerClassName_AROMA_LADY:
	.string "アロマなおねえさん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3609) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E3609 must retain its original byte length"
	.endif
	.globl gText_Rom_2E360D
	.set gText_Rom_2E360D, .Lbatch81_text_start_gText_Rom_2E3609 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:318 battle_main_line_318 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E3614: @ 0x082E3614
sTrainerClassName_RUIN_MANIAC:
	.string "いせきマニア{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3614) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E3614 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3614) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_2E3614)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:319 battle_main_line_319
.Lbatch81_text_start_gText_Rom_2E361F: @ 0x082E361F
sTrainerClassName_INTERVIEWER:
	.string "インタビュアー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E361F) > 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E361F may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E361F) < 0x8
	.space 0x8 - (. - .Lbatch81_text_start_gText_Rom_2E361F)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:320 battle_main_line_320 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E362A: @ 0x082E362A
sTrainerClassName_TUBER_F:
	.string "うきわガール{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E362A) != 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E362A must retain its original byte length"
	.endif
	.globl gText_Rom_2E362D
	.set gText_Rom_2E362D, .Lbatch81_text_start_gText_Rom_2E362A + 0x3
	.space 0x4, 0x00

	@ src/battle_main.c:321 battle_main_line_321
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E3635: @ 0x082E3635
sTrainerClassName_TUBER_M:
	.string "うきわボーイ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3635) != 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E3635 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3638
	.set gText_Rom_2E3638, .Lbatch81_text_start_gText_Rom_2E3635 + 0x3
	.space 0x4, 0x00

	@ src/battle_main.c:322 battle_main_line_322 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E3640: @ 0x082E3640
sTrainerClassName_LADY:
	.string "おじょうさま{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3640) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E3640 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3640) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_2E3640)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:323 battle_main_line_323 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E364B: @ 0x082E364B
sTrainerClassName_BEAUTY:
	.string "おとなのおねえさん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E364B) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E364B must retain its original byte length"
	.endif
	.globl gText_Rom_2E364F
	.set gText_Rom_2E364F, .Lbatch81_text_start_gText_Rom_2E364B + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:324 battle_main_line_324
.Lbatch81_text_start_gText_Rom_2E3656: @ 0x082E3656
sTrainerClassName_RICH_BOY:
	.string "おぼっちゃま{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3656) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E3656 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3656) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_2E3656)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:325 battle_main_line_325 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E3661: @ 0x082E3661
sTrainerClassName_POKEMANIAC:
	.string "かいじゅうマニア{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3661) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E3661 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3661) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_2E3661)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:326 battle_main_line_326
.Lbatch81_text_start_gText_Rom_2E366C: @ 0x082E366C
sTrainerClassName_GUITARIST:
	.string "ギタリスト{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E366C) > 0x6
	.error ".Lbatch81_text_start_gText_Rom_2E366C may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E366C) < 0x6
	.space 0x6 - (. - .Lbatch81_text_start_gText_Rom_2E366C)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:327 battle_main_line_327
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E3677: @ 0x082E3677
sTrainerClassName_KINDLER:
	.string "キャンプファイヤー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3677) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E3677 must retain its original byte length"
	.endif
	.globl gText_Rom_2E367B
	.set gText_Rom_2E367B, .Lbatch81_text_start_gText_Rom_2E3677 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:328 battle_main_line_328 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E3682: @ 0x082E3682
sTrainerClassName_CAMPER:
	.string "キャンプボーイ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3682) != 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E3682 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3686
	.set gText_Rom_2E3686, .Lbatch81_text_start_gText_Rom_2E3682 + 0x4
	.space 0x3, 0x00

	@ src/battle_main.c:329 battle_main_line_329 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E368D: @ 0x082E368D
sTrainerClassName_PICNICKER:
	.string "ピクニックガール{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E368D) != 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E368D must retain its original byte length"
	.endif
	.globl gText_Rom_2E3692
	.set gText_Rom_2E3692, .Lbatch81_text_start_gText_Rom_2E368D + 0x5
	.space 0x2, 0x00

	@ src/battle_main.c:330 battle_main_line_330
.Lbatch81_text_start_gText_Rom_2E3698: @ 0x082E3698
sTrainerClassName_BUG_MANIAC:
	.string "こんちゅうマニア{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3698) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E3698 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3698) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_2E3698)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:331 battle_main_line_331 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E36A3: @ 0x082E36A3
sTrainerClassName_PSYCHIC:
	.string "サイキッカー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E36A3) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E36A3 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E36A3) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_2E36A3)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:332 battle_main_line_332 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E36AE: @ 0x082E36AE
sTrainerClassName_GENTLEMAN:
	.string "ジェントルマン{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E36AE) > 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E36AE may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E36AE) < 0x8
	.space 0x8 - (. - .Lbatch81_text_start_gText_Rom_2E36AE)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:333 battle_main_line_333 (+2 aliases)
.Lbatch81_text_start_gText_Rom_2E36B9: @ 0x082E36B9
sTrainerClassName_ELITE_FOUR:
	.string "してんのう{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E36B9) > 0x6
	.error ".Lbatch81_text_start_gText_Rom_2E36B9 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E36B9) < 0x6
	.space 0x6 - (. - .Lbatch81_text_start_gText_Rom_2E36B9)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:334 battle_main_line_334 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E36C4: @ 0x082E36C4
sTrainerClassName_LEADER:
	.string "ジムリーダー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E36C4) != 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E36C4 must retain its original byte length"
	.endif
	.globl gText_Rom_2E36C6
	.set gText_Rom_2E36C6, .Lbatch81_text_start_gText_Rom_2E36C4 + 0x2
	.space 0x4, 0x00

	@ src/battle_main.c:335 battle_main_line_335
.Lbatch81_text_start_gText_Rom_2E36CF: @ 0x082E36CF
sTrainerClassName_SCHOOL_KID:
	.string "じゅくがえり{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E36CF) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E36CF may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E36CF) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_2E36CF)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:336 battle_main_line_336
.Lbatch81_text_start_gText_Rom_2E36DA: @ 0x082E36DA
sTrainerClassName_SR_AND_JR:
	.string "センパイとコウハイ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E36DA) > 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E36DA may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E36DA) < 0xa
	.space 0xa - (. - .Lbatch81_text_start_gText_Rom_2E36DA)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:337 battle_main_line_337
.Lbatch81_text_start_gText_Rom_2E36E5: @ 0x082E36E5
sTrainerClassName_WINSTRATE:
	.string "カチヌキさんち{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E36E5) > 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E36E5 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E36E5) < 0x8
	.space 0x8 - (. - .Lbatch81_text_start_gText_Rom_2E36E5)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:338 battle_main_line_338
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E36F0: @ 0x082E36F0
sTrainerClassName_POKEFAN:
	.string "だいすきクラブ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E36F0) != 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E36F0 must retain its original byte length"
	.endif
	.globl gText_Rom_2E36F4
	.set gText_Rom_2E36F4, .Lbatch81_text_start_gText_Rom_2E36F0 + 0x4
	.space 0x3, 0x00

	@ src/battle_main.c:339 battle_main_line_339 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E36FB: @ 0x082E36FB
sTrainerClassName_YOUNGSTER:
	.string "たんぱんこぞう{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E36FB) > 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E36FB may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E36FB) < 0x8
	.space 0x8 - (. - .Lbatch81_text_start_gText_Rom_2E36FB)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:340 battle_main_line_340 (+2 aliases)
.Lbatch81_text_start_gText_Rom_2E3706: @ 0x082E3706
sTrainerClassName_CHAMPION:
	.string "チャンピオン{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3706) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E3706 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3706) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_2E3706)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:341 battle_main_line_341 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E3711: @ 0x082E3711
sTrainerClassName_FISHERMAN:
	.string "つりびと{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3711) > 0x5
	.error ".Lbatch81_text_start_gText_Rom_2E3711 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3711) < 0x5
	.space 0x5 - (. - .Lbatch81_text_start_gText_Rom_2E3711)
	.endif
	.space 0x6, 0x00

	@ src/battle_main.c:342 battle_main_line_342
.Lbatch81_text_start_gText_Rom_2E371C: @ 0x082E371C
sTrainerClassName_TRIATHLETE:
	.string "トライアスリート{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E371C) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E371C may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E371C) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_2E371C)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:343 battle_main_line_343
.Lbatch81_text_start_gText_Rom_2E3727: @ 0x082E3727
sTrainerClassName_DRAGON_TAMER:
	.string "ドラゴンつかい{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3727) > 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E3727 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3727) < 0x8
	.space 0x8 - (. - .Lbatch81_text_start_gText_Rom_2E3727)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:344 battle_main_line_344
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E3732: @ 0x082E3732
sTrainerClassName_NINJA_BOY:
	.string "ニンジャごっこ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3732) != 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E3732 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3736
	.set gText_Rom_2E3736, .Lbatch81_text_start_gText_Rom_2E3732 + 0x4
	.space 0x3, 0x00

	@ src/battle_main.c:345 battle_main_line_345
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E373D: @ 0x082E373D
sTrainerClassName_BATTLE_GIRL:
	.string "バトルガール{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E373D) != 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E373D must retain its original byte length"
	.endif
	.globl gText_Rom_2E3740
	.set gText_Rom_2E3740, .Lbatch81_text_start_gText_Rom_2E373D + 0x3
	.space 0x4, 0x00

	@ src/battle_main.c:346 battle_main_line_346
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E3748: @ 0x082E3748
sTrainerClassName_PARASOL_LADY:
	.string "パラソルおねえさん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3748) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E3748 must retain its original byte length"
	.endif
	.globl gText_Rom_2E374C
	.set gText_Rom_2E374C, .Lbatch81_text_start_gText_Rom_2E3748 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:347 battle_main_line_347 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E3753: @ 0x082E3753
sTrainerClassName_SWIMMER_F:
	.string "ビキニのおねえさん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3753) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E3753 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3757
	.set gText_Rom_2E3757, .Lbatch81_text_start_gText_Rom_2E3753 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:348 battle_main_line_348 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E375E: @ 0x082E375E
sTrainerClassName_TWINS:
	.string "ふたごちゃん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E375E) != 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E375E must retain its original byte length"
	.endif
	.globl gText_Rom_2E3761
	.set gText_Rom_2E3761, .Lbatch81_text_start_gText_Rom_2E375E + 0x3
	.space 0x4, 0x00

	@ src/battle_main.c:349 battle_main_line_349 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E3769: @ 0x082E3769
sTrainerClassName_SAILOR:
	.string "ふなのり{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3769) > 0x5
	.error ".Lbatch81_text_start_gText_Rom_2E3769 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3769) < 0x5
	.space 0x5 - (. - .Lbatch81_text_start_gText_Rom_2E3769)
	.endif
	.space 0x6, 0x00

	@ src/battle_main.c:350 battle_main_line_350
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E3774: @ 0x082E3774
sTrainerClassName_COOLTRAINER_2:
	.string "エリートレーナー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3774) != 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E3774 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3777
	.set gText_Rom_2E3777, .Lbatch81_text_start_gText_Rom_2E3774 + 0x3
	.space 0x2, 0x00

	@ src/battle_main.c:351 battle_main_line_351
.Lbatch81_text_start_gText_Rom_2E377F: @ 0x082E377F
sTrainerClassName_MAGMA_ADMIN:
	.string "マグマだんかんぶ{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E377F) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E377F may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E377F) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_2E377F)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E378A: @ 0x082E378A
sTrainerClassName_RIVAL:
	.string "ポケモントレーナー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E378A) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E378A must retain its original byte length"
	.endif
	.globl gText_Rom_2E378E
	.set gText_Rom_2E378E, .Lbatch81_text_start_gText_Rom_2E378A + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:353 battle_main_line_353 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E3795: @ 0x082E3795
sTrainerClassName_BUG_CATCHER:
	.string "むしとりしょうねん{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3795) > 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E3795 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3795) < 0xa
	.space 0xa - (. - .Lbatch81_text_start_gText_Rom_2E3795)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:354 battle_main_line_354 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E37A0: @ 0x082E37A0
sTrainerClassName_PKMN_RANGER:
	.string "ポケモンレンジャー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E37A0) > 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E37A0 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E37A0) < 0xa
	.space 0xa - (. - .Lbatch81_text_start_gText_Rom_2E37A0)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:355 battle_main_line_355
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E37AB: @ 0x082E37AB
sTrainerClassName_MAGMA_LEADER:
	.string "マグマだんリーダー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E37AB) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E37AB must retain its original byte length"
	.endif
	.globl gText_Rom_2E37B0
	.set gText_Rom_2E37B0, .Lbatch81_text_start_gText_Rom_2E37AB + 0x5
	.space 0x1, 0x00

	@ src/battle_main.c:356 battle_main_line_356 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E37B6: @ 0x082E37B6
sTrainerClassName_LASS:
	.string "ミニスカート{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E37B6) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E37B6 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E37B6) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_2E37B6)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:357 battle_main_line_357 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2E37C1: @ 0x082E37C1
sTrainerClassName_YOUNG_COUPLE:
	.string "ラブラブカップル{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E37C1) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E37C1 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E37C1) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_2E37C1)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:358 battle_main_line_358
.Lbatch81_text_start_gText_Rom_2E37CC: @ 0x082E37CC
sTrainerClassName_OLD_COUPLE:
	.string "きんこんしき{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E37CC) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_2E37CC may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E37CC) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_2E37CC)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:359 battle_main_line_359 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E37D7: @ 0x082E37D7
sTrainerClassName_SIS_AND_BRO:
	.string "うみきょうだい{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E37D7) != 0x8
	.error ".Lbatch81_text_start_gText_Rom_2E37D7 must retain its original byte length"
	.endif
	.globl gText_Rom_2E37D9
	.set gText_Rom_2E37D9, .Lbatch81_text_start_gText_Rom_2E37D7 + 0x2
	.space 0x3, 0x00

	@ src/battle_main.c:360 battle_main_line_360
.Lbatch81_text_start_gText_Rom_2E37E2: @ 0x082E37E2
sTrainerClassName_SALON_MAIDEN:
	.string "タワータイクーン{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E37E2) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E37E2 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E37E2) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_2E37E2)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:361 battle_main_line_361
.Lbatch81_text_start_gText_Rom_2E37ED: @ 0x082E37ED
sTrainerClassName_DOME_ACE:
	.string "ドームスーパースター{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E37ED) > 0xb
	.error ".Lbatch81_text_start_gText_Rom_2E37ED may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E37ED) < 0xb
	.space 0xb - (. - .Lbatch81_text_start_gText_Rom_2E37ED)
	.endif

	@ src/battle_main.c:362 battle_main_line_362
.Lbatch81_text_start_gText_Rom_2E37F8: @ 0x082E37F8
sTrainerClassName_PALACE_MAVEN:
	.string "パレスガーディアン{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E37F8) > 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E37F8 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E37F8) < 0xa
	.space 0xa - (. - .Lbatch81_text_start_gText_Rom_2E37F8)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:363 battle_main_line_363
.Lbatch81_text_start_gText_Rom_2E3803: @ 0x082E3803
sTrainerClassName_ARENA_TYCOON:
	.string "アリーナキャプテン{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3803) > 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E3803 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3803) < 0xa
	.space 0xa - (. - .Lbatch81_text_start_gText_Rom_2E3803)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:364 battle_main_line_364
.Lbatch81_text_start_gText_Rom_2E380E: @ 0x082E380E
sTrainerClassName_FACTORY_HEAD:
	.string "ファクトリーヘッド{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E380E) > 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E380E may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E380E) < 0xa
	.space 0xa - (. - .Lbatch81_text_start_gText_Rom_2E380E)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:365 battle_main_line_365
.Lbatch81_text_start_gText_Rom_2E3819: @ 0x082E3819
sTrainerClassName_PIKE_QUEEN:
	.string "チューブクイーン{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3819) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E3819 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3819) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_2E3819)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:366 battle_main_line_366
.Lbatch81_text_start_gText_Rom_2E3824: @ 0x082E3824
sTrainerClassName_PYRAMID_KING:
	.string "ピラミッドキング{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E3824) > 0x9
	.error ".Lbatch81_text_start_gText_Rom_2E3824 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2E3824) < 0x9
	.space 0x9 - (. - .Lbatch81_text_start_gText_Rom_2E3824)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2E382F: @ 0x082E382F
sTrainerClassName_RS_PROTAG:
	.string "ポケモントレーナー{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2E382F) != 0xa
	.error ".Lbatch81_text_start_gText_Rom_2E382F must retain its original byte length"
	.endif
	.globl gText_Rom_2E3833
	.set gText_Rom_2E3833, .Lbatch81_text_start_gText_Rom_2E382F + 0x4
	.space 0x3, 0x00

@ 66 logical 11-byte JP slots plus 2-byte final alignment before gTrainers.
.if (. - gTrainerClassNames) != TRAINER_CLASS_NAME_TABLE_SIZE
    .error "trainer class-name table size changed"
.endif
