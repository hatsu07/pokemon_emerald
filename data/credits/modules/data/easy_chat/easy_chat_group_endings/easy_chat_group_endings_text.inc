.if .L__inc_fragment_select_bbed4fda48c1 == 1
	@ src/data/easy_chat/easy_chat_group_endings.h:4 easy_chat_group_endings_line_4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5763A4
gText_Rom_5763A4: @ 0x085763A4
	.string "いたします{EOS}"
	.if (. - gText_Rom_5763A4) != 0x6
	.error "gText_Rom_5763A4 must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:10 easy_chat_group_endings_line_10
	.globl gText_Rom_5763AA
gText_Rom_5763AA: @ 0x085763AA
	.string "おります{EOS}"
	.if (. - gText_Rom_5763AA) > 0x5
	.error "gText_Rom_5763AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763AA) < 0x5
	.space 0x5 - (. - gText_Rom_5763AA)
	.endif
	@ analyzed canonical ROM range 0x085763AF-0x085763B3
	.globl gText_Rom_5763AF
gText_Rom_5763AF: @ 0x085763AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x06, 0xFF, 0x06, 0x02, 0xFF
	.globl gText_Rom_5763B4
gText_Rom_5763B4: @ 0x085763B4
	.string "かしら{EOS}"
	.if (. - gText_Rom_5763B4) > 0x4
	.error "gText_Rom_5763B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763B4) < 0x4
	.space 0x4 - (. - gText_Rom_5763B4)
	.endif
	@ Decoded text from ROM range: offset=0x5763B8, size=0xA
	.string "かな？{EOS}"
	.string "かも{EOS}"
	.string "くれ{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:52 easy_chat_group_endings_line_52
	.globl gText_Rom_5763C2
gText_Rom_5763C2: @ 0x085763C2
	.string "ございます{EOS}"
	.if (. - gText_Rom_5763C2) > 0x6
	.error "gText_Rom_5763C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763C2) < 0x6
	.space 0x6 - (. - gText_Rom_5763C2)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:58 easy_chat_group_endings_line_58
	.globl gText_Rom_5763C8
gText_Rom_5763C8: @ 0x085763C8
	.string "しがち{EOS}"
	.if (. - gText_Rom_5763C8) > 0x4
	.error "gText_Rom_5763C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763C8) < 0x4
	.space 0x4 - (. - gText_Rom_5763C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5763CC
gText_Rom_5763CC: @ 0x085763CC
	.string "します{EOS}"
	.if (. - gText_Rom_5763CC) > 0x4
	.error "gText_Rom_5763CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763CC) < 0x4
	.space 0x4 - (. - gText_Rom_5763CC)
	.endif
	@ Decoded text from ROM range: offset=0x5763D0, size=0x3
	.string "じゃ{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:76 easy_chat_group_endings_line_76
	.globl gText_Rom_5763D3
gText_Rom_5763D3: @ 0x085763D3
	.string "じゃん{EOS}"
	.if (. - gText_Rom_5763D3) > 0x4
	.error "gText_Rom_5763D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763D3) < 0x4
	.space 0x4 - (. - gText_Rom_5763D3)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:82 easy_chat_group_endings_line_82
	.globl gText_Rom_5763D7
gText_Rom_5763D7: @ 0x085763D7
	.string "しよう{EOS}"
	.if (. - gText_Rom_5763D7) > 0x4
	.error "gText_Rom_5763D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763D7) < 0x4
	.space 0x4 - (. - gText_Rom_5763D7)
	.endif
	@ analyzed canonical ROM range 0x085763DB-0x085763E4
	.globl gText_Rom_5763DB
gText_Rom_5763DB: @ 0x085763DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x3F, 0xAB, 0xFF, 0x40, 0xAB, 0xFF, 0x10, 0xFF, 0x41, 0xFF
	.globl gText_Rom_5763E5
gText_Rom_5763E5: @ 0x085763E5
	.string "だからね{EOS}"
	.if (. - gText_Rom_5763E5) > 0x5
	.error "gText_Rom_5763E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763E5) < 0x5
	.space 0x5 - (. - gText_Rom_5763E5)
	.endif
	@ Decoded text from ROM range: offset=0x5763EA, size=0x3
	.string "だぜ{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:124 easy_chat_group_endings_line_124
	.globl gText_Rom_5763ED
gText_Rom_5763ED: @ 0x085763ED
	.string "だった{EOS}"
	.if (. - gText_Rom_5763ED) > 0x4
	.error "gText_Rom_5763ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763ED) < 0x4
	.space 0x4 - (. - gText_Rom_5763ED)
	.endif
	@ Decoded text from ROM range: offset=0x5763F1, size=0x6
	.string "だね{EOS}"
	.string "だよ{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:142 easy_chat_group_endings_line_142
	.globl gText_Rom_5763F7
gText_Rom_5763F7: @ 0x085763F7
	.string "だよねー!{EOS}"
	.if (. - gText_Rom_5763F7) > 0x6
	.error "gText_Rom_5763F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763F7) < 0x6
	.space 0x6 - (. - gText_Rom_5763F7)
	.endif
	@ Decoded text from ROM range: offset=0x5763FD, size=0x6
	.string "だわ{EOS}"
	.string "ッス{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:160 easy_chat_group_endings_line_160
	.globl gText_Rom_576403
gText_Rom_576403: @ 0x08576403
	.string "ってかんじ{EOS}"
	.if (. - gText_Rom_576403) > 0x6
	.error "gText_Rom_576403 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576403) < 0x6
	.space 0x6 - (. - gText_Rom_576403)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:166 easy_chat_group_endings_line_166
	.globl gText_Rom_576409
gText_Rom_576409: @ 0x08576409
	.string "っぱなし{EOS}"
	.if (. - gText_Rom_576409) > 0x5
	.error "gText_Rom_576409 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576409) < 0x5
	.space 0x5 - (. - gText_Rom_576409)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:172 easy_chat_group_endings_line_172
	.globl gText_Rom_57640E
gText_Rom_57640E: @ 0x0857640E
	.string "つもり{EOS}"
	.if (. - gText_Rom_57640E) > 0x4
	.error "gText_Rom_57640E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57640E) < 0x4
	.space 0x4 - (. - gText_Rom_57640E)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:178 easy_chat_group_endings_line_178
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576412
gText_Rom_576412: @ 0x08576412
	.string "ていない{EOS}"
	.if (. - gText_Rom_576412) != 0x5
	.error "gText_Rom_576412 must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_bbed4fda48c1 == 2
	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_576417
gText_Rom_576417: @ 0x08576417
	.string "ている{EOS}"
	.if (. - gText_Rom_576417) > 0x4
	.error "gText_Rom_576417 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576417) < 0x4
	.space 0x4 - (. - gText_Rom_576417)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:190 easy_chat_group_endings_line_190
	.globl gText_Rom_57641B
gText_Rom_57641B: @ 0x0857641B
	.string "でーす!{EOS}"
	.if (. - gText_Rom_57641B) > 0x5
	.error "gText_Rom_57641B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57641B) < 0x5
	.space 0x5 - (. - gText_Rom_57641B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_576420
gText_Rom_576420: @ 0x08576420
	.string "でした{EOS}"
	.if (. - gText_Rom_576420) > 0x4
	.error "gText_Rom_576420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576420) < 0x4
	.space 0x4 - (. - gText_Rom_576420)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:202 easy_chat_group_endings_line_202
	.globl gText_Rom_576424
gText_Rom_576424: @ 0x08576424
	.string "でしょ?{EOS}"
	.if (. - gText_Rom_576424) > 0x5
	.error "gText_Rom_576424 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576424) < 0x5
	.space 0x5 - (. - gText_Rom_576424)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:208 easy_chat_group_endings_line_208
	.globl gText_Rom_576429
gText_Rom_576429: @ 0x08576429
	.string "でしょー!{EOS}"
	.if (. - gText_Rom_576429) > 0x6
	.error "gText_Rom_576429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576429) < 0x6
	.space 0x6 - (. - gText_Rom_576429)
	.endif
	@ Decoded text from ROM range: offset=0x57642F, size=0x8
	.string "です{EOS}"
	.string "ですか？{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:226 easy_chat_group_endings_line_226
	.globl gText_Rom_576437
gText_Rom_576437: @ 0x08576437
	.string "ですよ{EOS}"
	.if (. - gText_Rom_576437) > 0x4
	.error "gText_Rom_576437 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576437) < 0x4
	.space 0x4 - (. - gText_Rom_576437)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:232 easy_chat_group_endings_line_232
	.globl gText_Rom_57643B
gText_Rom_57643B: @ 0x0857643B
	.string "ですわ{EOS}"
	.if (. - gText_Rom_57643B) > 0x4
	.error "gText_Rom_57643B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643B) < 0x4
	.space 0x4 - (. - gText_Rom_57643B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:238 easy_chat_group_endings_line_238
	.globl gText_Rom_57643F
gText_Rom_57643F: @ 0x0857643F
	.string "どうなの?{EOS}"
	.if (. - gText_Rom_57643F) > 0x6
	.error "gText_Rom_57643F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643F) < 0x6
	.space 0x6 - (. - gText_Rom_57643F)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:244 easy_chat_group_endings_line_244
	.globl gText_Rom_576445
gText_Rom_576445: @ 0x08576445
	.string "どうよ?{EOS}"
	.if (. - gText_Rom_576445) > 0x5
	.error "gText_Rom_576445 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576445) < 0x5
	.space 0x5 - (. - gText_Rom_576445)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:250 easy_chat_group_endings_line_250
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57644A
gText_Rom_57644A: @ 0x0857644A
	.string "とかいって{EOS}"
	.if (. - gText_Rom_57644A) != 0x6
	.error "gText_Rom_57644A must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:256 easy_chat_group_endings_line_256
	.globl gText_Rom_576450
gText_Rom_576450: @ 0x08576450
	.string "なさい{EOS}"
	.if (. - gText_Rom_576450) > 0x4
	.error "gText_Rom_576450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576450) < 0x4
	.space 0x4 - (. - gText_Rom_576450)
	.endif
	@ Decoded text from ROM range: offset=0x576454, size=0x3
	.string "なの{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:268 easy_chat_group_endings_line_268
	.globl gText_Rom_576457
gText_Rom_576457: @ 0x08576457
	.string "なのか{EOS}"
	.if (. - gText_Rom_576457) > 0x4
	.error "gText_Rom_576457 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576457) < 0x4
	.space 0x4 - (. - gText_Rom_576457)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:274 easy_chat_group_endings_line_274
	.globl gText_Rom_57645B
gText_Rom_57645B: @ 0x0857645B
	.string "なのだ{EOS}"
	.if (. - gText_Rom_57645B) > 0x4
	.error "gText_Rom_57645B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645B) < 0x4
	.space 0x4 - (. - gText_Rom_57645B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:280 easy_chat_group_endings_line_280
	.globl gText_Rom_57645F
gText_Rom_57645F: @ 0x0857645F
	.string "なのよ{EOS}"
	.if (. - gText_Rom_57645F) > 0x4
	.error "gText_Rom_57645F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645F) < 0x4
	.space 0x4 - (. - gText_Rom_57645F)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:286 easy_chat_group_endings_line_286
	.globl gText_Rom_576463
gText_Rom_576463: @ 0x08576463
	.string "なんだね{EOS}"
	.if (. - gText_Rom_576463) > 0x5
	.error "gText_Rom_576463 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576463) < 0x5
	.space 0x5 - (. - gText_Rom_576463)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:292 easy_chat_group_endings_line_292
	.globl gText_Rom_576468
gText_Rom_576468: @ 0x08576468
	.string "なんです{EOS}"
	.if (. - gText_Rom_576468) > 0x5
	.error "gText_Rom_576468 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576468) < 0x5
	.space 0x5 - (. - gText_Rom_576468)
	.endif
.elseif .L__inc_fragment_select_bbed4fda48c1 == 3

	@ src/data/easy_chat/easy_chat_group_endings.h:298 easy_chat_group_endings_line_298
	.globl gText_Rom_57646D
gText_Rom_57646D: @ 0x0857646D
	.string "なんてね{EOS}"
	.if (. - gText_Rom_57646D) > 0x5
	.error "gText_Rom_57646D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57646D) < 0x5
	.space 0x5 - (. - gText_Rom_57646D)
	.endif

	@ Priority C: Easy Chat / Endings words 50-53.
.Lbatch81_text_start_gText_Rom_576472:
	.globl gEasyChatWord_Endings_Ne
gEasyChatWord_Endings_Ne: @ 0x08576472
	.string "ね{EOS}"

	.globl gEasyChatWord_Endings_Nee
gEasyChatWord_Endings_Nee: @ 0x08576474
	.string "ねー{EOS}"

	.globl gEasyChatWord_Endings_No
gEasyChatWord_Endings_No: @ 0x08576477
	.string "の{EOS}"

	.globl gEasyChatWord_Endings_NoQuestion
gEasyChatWord_Endings_NoQuestion: @ 0x08576479
	.string "の?{EOS}"

	.if (. - gEasyChatWord_Endings_Ne) != 0xA
	.error "Easy Chat Endings words 50-53 must retain their original 0xA-byte range"
	.endif
	.globl gText_Rom_57647C
gText_Rom_57647C: @ 0x0857647C
	.string "ばっかり{EOS}"
	.if (. - gText_Rom_57647C) > 0x5
	.error "gText_Rom_57647C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57647C) < 0x5
	.space 0x5 - (. - gText_Rom_57647C)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:334 easy_chat_group_endings_line_334
	.globl gText_Rom_576481
gText_Rom_576481: @ 0x08576481
	.string "まーす!{EOS}"
	.if (. - gText_Rom_576481) > 0x5
	.error "gText_Rom_576481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576481) < 0x5
	.space 0x5 - (. - gText_Rom_576481)
	.endif
	@ Decoded text from ROM range: offset=0x576486, size=0x3
	.string "ます{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:346 easy_chat_group_endings_line_346
	.globl gText_Rom_576489
gText_Rom_576489: @ 0x08576489
	.string "ますわ{EOS}"
	.if (. - gText_Rom_576489) > 0x4
	.error "gText_Rom_576489 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576489) < 0x4
	.space 0x4 - (. - gText_Rom_576489)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_57648D
gText_Rom_57648D: @ 0x0857648D
	.string "ません{EOS}"
	.if (. - gText_Rom_57648D) > 0x4
	.error "gText_Rom_57648D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57648D) < 0x4
	.space 0x4 - (. - gText_Rom_57648D)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:358 easy_chat_group_endings_line_358
	.globl gText_Rom_576491
gText_Rom_576491: @ 0x08576491
	.string "みたいな{EOS}"
	.if (. - gText_Rom_576491) > 0x5
	.error "gText_Rom_576491 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576491) < 0x5
	.space 0x5 - (. - gText_Rom_576491)
	.endif
	@ Decoded text from ROM range: offset=0x576496, size=0xC
	.string "もの{EOS}"
	.string "もん{EOS}"
	.string "よ！{EOS}"
	.string "よー{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:388 easy_chat_group_endings_line_388
	.globl gText_Rom_5764A2
gText_Rom_5764A2: @ 0x085764A2
	.string "よーん{EOS}"
	.if (. - gText_Rom_5764A2) > 0x4
	.error "gText_Rom_5764A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5764A2) < 0x4
	.space 0x4 - (. - gText_Rom_5764A2)
	.endif
	@ Decoded text from ROM range: offset=0x5764A6, size=0x9
	.string "よね{EOS}"
	.string "るよ{EOS}"
	.string "わけ{EOS}"

	@ src/data/easy_chat/easy_chat_group_endings.h:412 easy_chat_group_endings_line_412
	.globl gText_Rom_5764AF
gText_Rom_5764AF: @ 0x085764AF
	.string "わよ!{EOS}"
	.if (. - gText_Rom_5764AF) > 0x4
	.error "gText_Rom_5764AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5764AF) < 0x4
	.space 0x4 - (. - gText_Rom_5764AF)
	.endif
	@ analyzed canonical ROM range 0x085764B3-0x085767EF
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x1 bytes
	.byte 0x00
	.globl gEasyChatGroup_Endings
gEasyChatGroup_Endings: @ 0x085764B4
	easy_chat_word_info gText_Rom_5763A4, 0, 1 @ word 0
	easy_chat_word_info gText_Rom_5763AA, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_5763AF, 2, 1 @ word 2
	easy_chat_word_info 0x085763B1, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_5763B4, 4, 1 @ word 4
	easy_chat_word_info 0x085763B8, 5, 1 @ word 5
	easy_chat_word_info 0x085763BC, 6, 1 @ word 6
	easy_chat_word_info 0x085763BF, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_5763C2, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_5763C8, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_5763CC, 10, 1 @ word 10
	easy_chat_word_info 0x085763D0, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_5763D3, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_5763D7, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_5763DB, 14, 1 @ word 14
	easy_chat_word_info 0x085763DE, 15, 1 @ word 15
	easy_chat_word_info 0x085763E1, 16, 1 @ word 16
	easy_chat_word_info 0x085763E3, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_5763E5, 18, 1 @ word 18
	easy_chat_word_info 0x085763EA, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_5763ED, 20, 1 @ word 20
	easy_chat_word_info 0x085763F1, 21, 1 @ word 21
	easy_chat_word_info 0x085763F4, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_5763F7, 23, 1 @ word 23
	easy_chat_word_info 0x085763FD, 24, 1 @ word 24
	easy_chat_word_info 0x08576400, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_576403, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_576409, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_57640E, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_576412, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_576417, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_57641B, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_576420, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_576424, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_576429, 34, 1 @ word 34
	easy_chat_word_info 0x0857642F, 35, 1 @ word 35
	easy_chat_word_info 0x08576432, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_576437, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_57643B, 38, 1 @ word 38
	easy_chat_word_info gText_Rom_57643F, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_576445, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_57644A, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_576450, 42, 1 @ word 42
	easy_chat_word_info 0x08576454, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_576457, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_57645B, 45, 1 @ word 45
	easy_chat_word_info gText_Rom_57645F, 46, 1 @ word 46
	easy_chat_word_info gText_Rom_576463, 47, 1 @ word 47
	easy_chat_word_info gText_Rom_576468, 48, 1 @ word 48
	easy_chat_word_info gText_Rom_57646D, 49, 1 @ word 49
	easy_chat_word_info gEasyChatWord_Endings_Ne, 50, 1 @ word 50
	easy_chat_word_info gEasyChatWord_Endings_Nee, 51, 1 @ word 51
	easy_chat_word_info gEasyChatWord_Endings_No, 52, 1 @ word 52
	easy_chat_word_info gEasyChatWord_Endings_NoQuestion, 53, 1 @ word 53
	easy_chat_word_info gText_Rom_57647C, 54, 1 @ word 54
	easy_chat_word_info gText_Rom_576481, 55, 1 @ word 55
	easy_chat_word_info 0x08576486, 56, 1 @ word 56
	easy_chat_word_info gText_Rom_576489, 57, 1 @ word 57
	easy_chat_word_info gText_Rom_57648D, 58, 1 @ word 58
	easy_chat_word_info gText_Rom_576491, 59, 1 @ word 59
	easy_chat_word_info 0x08576496, 60, 1 @ word 60
	easy_chat_word_info 0x08576499, 61, 1 @ word 61
	easy_chat_word_info 0x0857649C, 62, 1 @ word 62
	easy_chat_word_info 0x0857649F, 63, 1 @ word 63
	easy_chat_word_info gText_Rom_5764A2, 64, 1 @ word 64
	easy_chat_word_info 0x085764A6, 65, 1 @ word 65
	easy_chat_word_info 0x085764A9, 66, 1 @ word 66
	easy_chat_word_info 0x085764AC, 67, 1 @ word 67
	easy_chat_word_info gText_Rom_5764AF, 68, 1 @ word 68
.elseif .L__inc_fragment_select_bbed4fda48c1 == 4
	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A985E
gText_Rom_5A985E: @ 0x085A985E
	.string "ている{EOS}"
	.if (. - gText_Rom_5A985E) > 0x4
	.error "gText_Rom_5A985E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A985E) < 0x4
	.space 0x4 - (. - gText_Rom_5A985E)
	.endif
	@ analyzed canonical ROM range 0x085A9862-0x085A986C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x18, 0x21, 0x50
	.globl gText_Rom_5A986D
gText_Rom_5A986D: @ 0x085A986D
	.string "ている{EOS}"
	.if (. - gText_Rom_5A986D) > 0x4
	.error "gText_Rom_5A986D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A986D) < 0x4
	.space 0x4 - (. - gText_Rom_5A986D)
	.endif
	@ analyzed canonical ROM range 0x085A9871-0x085A987C
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x060C, 0x000C, 0x10FD, 0x1A16, 0x07FE, 0x1506
.elseif .L__inc_fragment_select_bbed4fda48c1 == 5
	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_5CD1E2
gText_Rom_5CD1E2: @ 0x085CD1E2
	.string "でした{EOS}"
	.if (. - gText_Rom_5CD1E2) > 0x4
	.error "gText_Rom_5CD1E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD1E2) < 0x4
	.space 0x4 - (. - gText_Rom_5CD1E2)
	.endif

	.globl gText_MysteryEventSaveSucceeded
gText_MysteryEventSaveSucceeded: @ 0x085CD1E6
	.string "セーブできました{EOS}"
	.if (. - gText_MysteryEventSaveSucceeded) != 0x9
	.error "gText_MysteryEventSaveSucceeded must retain its original byte length"
	.endif

	@ The final "でした$" suffix is emitted at 0x085CD1F7 below.
	.globl gText_MysteryEventLoadFailed
gText_MysteryEventLoadFailed: @ 0x085CD1EF
	.string "ロードできません"
	.if (. - gText_MysteryEventLoadFailed) != 0x8
	.error "gText_MysteryEventLoadFailed prefix must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_5CD1F7
gText_Rom_5CD1F7: @ 0x085CD1F7
	.string "でした{EOS}"
	.if (. - gText_Rom_5CD1F7) > 0x4
	.error "gText_Rom_5CD1F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD1F7) < 0x4
	.space 0x4 - (. - gText_Rom_5CD1F7)
	.endif
.endif
