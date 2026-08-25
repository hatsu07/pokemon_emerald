	@ src/fame_checker.c:517 sText_FameCheckerName_Scott (+1 aliases)
	.globl sText_FameCheckerName_Scott
sText_FameCheckerName_Scott: @ 0x085F73CA
	.string "エニシダ{EOS}"
	.if (. - sText_FameCheckerName_Scott) > 0x5
	.error "sText_FameCheckerName_Scott may not grow beyond its original slot"
	.endif
	.if (. - sText_FameCheckerName_Scott) < 0x5
	.space 0x5 - (. - sText_FameCheckerName_Scott)
	.endif
	@ src/pokenav_match_call_data.c:380 pokenav_match_call_data_line_380
	.globl gText_Rom_5F73CF
gText_Rom_5F73CF: @ 0x085F73CF
	.string "いわのゆうとうせい{EOS}"
	.if (. - gText_Rom_5F73CF) > 0xa
	.error "gText_Rom_5F73CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73CF) < 0xa
	.space 0xa - (. - gText_Rom_5F73CF)
	.endif

	@ src/pokenav_match_call_data.c:397 pokenav_match_call_data_line_397
	.globl gText_Rom_5F73D9
gText_Rom_5F73D9: @ 0x085F73D9
	.string "ビッグなウェーブ{EOS}"
	.if (. - gText_Rom_5F73D9) > 0x9
	.error "gText_Rom_5F73D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73D9) < 0x9
	.space 0x9 - (. - gText_Rom_5F73D9)
	.endif

	@ src/pokenav_match_call_data.c:414 pokenav_match_call_data_line_414
	.globl gText_Rom_5F73E2
gText_Rom_5F73E2: @ 0x085F73E2
	.string "でんげきおやじ{EOS}"
	.if (. - gText_Rom_5F73E2) > 0x8
	.error "gText_Rom_5F73E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73E2) < 0x8
	.space 0x8 - (. - gText_Rom_5F73E2)
	.endif

	@ src/pokenav_match_call_data.c:431 pokenav_match_call_data_line_431
	.globl gText_Rom_5F73EA
gText_Rom_5F73EA: @ 0x085F73EA
	.string "じょうねつのひと{EOS}"
	.if (. - gText_Rom_5F73EA) > 0x9
	.error "gText_Rom_5F73EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73EA) < 0x9
	.space 0x9 - (. - gText_Rom_5F73EA)
	.endif

	@ src/pokenav_match_call_data.c:448 pokenav_match_call_data_line_448
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F73F3
gText_Rom_5F73F3: @ 0x085F73F3
	.string "せかいのとりつかい{EOS}"
	.if (. - gText_Rom_5F73F3) != 0xa
	.error "gText_Rom_5F73F3 must retain its original byte length"
	.endif

	@ src/pokenav_match_call_data.c:465 pokenav_match_call_data_line_465
	.globl gText_Rom_5F73FD
gText_Rom_5F73FD: @ 0x085F73FD
	.string "しんぴてきなコンビ{EOS}"
	.if (. - gText_Rom_5F73FD) > 0xa
	.error "gText_Rom_5F73FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73FD) < 0xa
	.space 0xa - (. - gText_Rom_5F73FD)
	.endif

	@ src/pokenav_match_call_data.c:482 pokenav_match_call_data_line_482
	.globl gText_Rom_5F7407
gText_Rom_5F7407: @ 0x085F7407
	.string "みわくのダンディ{EOS}"
	.if (. - gText_Rom_5F7407) > 0x9
	.error "gText_Rom_5F7407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7407) < 0x9
	.space 0x9 - (. - gText_Rom_5F7407)
	.endif
