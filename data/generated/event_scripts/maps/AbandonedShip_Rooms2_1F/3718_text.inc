	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:52 AbandonedShip_Rooms2_1F_Text_DanIntro (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_DanIntro
AbandonedShip_Rooms2_1F_Text_DanIntro: @ 0x0821AF11
	.string "フミ『おたから さがしていたら\nトレーナー はっけん!"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_DanIntro) > 0x1c
	.error "AbandonedShip_Rooms2_1F_Text_DanIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_DanIntro) < 0x1c
	.space 0x1c - (. - AbandonedShip_Rooms2_1F_Text_DanIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:55 AbandonedShip_Rooms2_1F_Text_DanDefeat (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_DanDefeat
AbandonedShip_Rooms2_1F_Text_DanDefeat: @ 0x0821AF2D
	.string "フミ『ぼくたち ふたりの ちからでも\nかてなかったのか……"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_DanDefeat) > 0x1e
	.error "AbandonedShip_Rooms2_1F_Text_DanDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_DanDefeat) < 0x1e
	.space 0x1e - (. - AbandonedShip_Rooms2_1F_Text_DanDefeat)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:58 AbandonedShip_Rooms2_1F_Text_DanPostBattle
	.globl gText_Rom_21AF4B
gText_Rom_21AF4B: @ 0x0821AF4B
	.string "フミ『おたから みつからないんだよね……\nもう だれかが もっていったのかな?"
	.byte EOS
	.if (. - gText_Rom_21AF4B) > 0x28
	.error "gText_Rom_21AF4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF4B) < 0x28
	.space 0x28 - (. - gText_Rom_21AF4B)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:61 AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons (+2 aliases)
	.globl gText_Rom_21AF73
gText_Rom_21AF73: @ 0x0821AF73
	.string "フミ『ポケモン 2ひき いないんだね\nそれだと ぼくたちには かてないよ!"
	.byte EOS
	.if (. - gText_Rom_21AF73) > 0x26
	.error "gText_Rom_21AF73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF73) < 0x26
	.space 0x26 - (. - gText_Rom_21AF73)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:64 AbandonedShip_Rooms2_1F_Text_KiraIntro (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_KiraIntro
AbandonedShip_Rooms2_1F_Text_KiraIntro: @ 0x0821AF99
	.string "ナツ『あら? おたから さがしていたのに\nトレーナー はっけん しちゃった!"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraIntro) > 0x27
	.error "AbandonedShip_Rooms2_1F_Text_KiraIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraIntro) < 0x27
	.space 0x27 - (. - AbandonedShip_Rooms2_1F_Text_KiraIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:67 AbandonedShip_Rooms2_1F_Text_KiraDefeat (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_KiraDefeat
AbandonedShip_Rooms2_1F_Text_KiraDefeat: @ 0x0821AFC0
	.string "ナツ『つよいんだ!"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraDefeat) > 0xa
	.error "AbandonedShip_Rooms2_1F_Text_KiraDefeat may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraDefeat) < 0xa
	.space 0xa - (. - AbandonedShip_Rooms2_1F_Text_KiraDefeat)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:70 AbandonedShip_Rooms2_1F_Text_KiraPostBattle
	.globl gText_Rom_21AFCA
gText_Rom_21AFCA: @ 0x0821AFCA
	.string "ナツ『おたから どこかな?\nみつかったら なに かおうか きめてるのよ!"
	.byte EOS
	.if (. - gText_Rom_21AFCA) > 0x25
	.error "gText_Rom_21AFCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AFCA) < 0x25
	.space 0x25 - (. - gText_Rom_21AFCA)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:73 AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons (+2 aliases)
	.globl gText_Rom_21AFEF
gText_Rom_21AFEF: @ 0x0821AFEF
	.string "ナツ『あら ポケモン 2ひき いないの?\nじゃあ しょうぶは おあずけね!"
	.byte EOS
	.if (. - gText_Rom_21AFEF) > 0x26
	.error "gText_Rom_21AFEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AFEF) < 0x26
	.space 0x26 - (. - gText_Rom_21AFEF)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:76 AbandonedShip_Rooms2_1F_Text_KiraRegister
	.globl AbandonedShip_Rooms2_1F_Text_KiraRegister
AbandonedShip_Rooms2_1F_Text_KiraRegister: @ 0x0821B015
	.string "ナツ『もう くやしいな!\nあなたなんて とうろく しちゃうんだから!"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraRegister) > 0x23
	.error "AbandonedShip_Rooms2_1F_Text_KiraRegister may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_KiraRegister) < 0x23
	.space 0x23 - (. - AbandonedShip_Rooms2_1F_Text_KiraRegister)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:79 AbandonedShip_Rooms2_1F_Text_DanRematchIntro (+1 aliases)
	.globl AbandonedShip_Rooms2_1F_Text_DanRematchIntro
AbandonedShip_Rooms2_1F_Text_DanRematchIntro: @ 0x0821B038
	.string "フミ『ずっと おたから さがしていて\nポケモンも つよく なったんだよねー!\lちょっと あいて してみてよ"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_DanRematchIntro) > 0x36
	.error "AbandonedShip_Rooms2_1F_Text_DanRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_DanRematchIntro) < 0x36
	.space 0x36 - (. - AbandonedShip_Rooms2_1F_Text_DanRematchIntro)
	.endif
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:82 AbandonedShip_Rooms2_1F_Text_DanRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl AbandonedShip_Rooms2_1F_Text_DanRematchDefeat
AbandonedShip_Rooms2_1F_Text_DanRematchDefeat: @ 0x0821B06E
	.string "フミ『あいかわらず つよいな!"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_DanRematchDefeat) != 0x10
	.error "AbandonedShip_Rooms2_1F_Text_DanRematchDefeat must retain its original byte length"
	.endif
	.globl gText_Rom_21B071
	.set gText_Rom_21B071, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat + 0x3
	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:85 AbandonedShip_Rooms2_1F_Text_DanPostRematch
	.globl AbandonedShip_Rooms2_1F_Text_DanPostRematch
AbandonedShip_Rooms2_1F_Text_DanPostRematch: @ 0x0821B07E
	.string "フミ『おたからは みつからないし\nポケモンは まけるし いえに かえりたいよ\pでも そんなこと いうと\nかのじょ おこりだすからな……"
	.byte EOS
	.if (. - AbandonedShip_Rooms2_1F_Text_DanPostRematch) > 0x44
	.error "AbandonedShip_Rooms2_1F_Text_DanPostRematch may not grow beyond its original slot"
	.endif
	.if (. - AbandonedShip_Rooms2_1F_Text_DanPostRematch) < 0x44
	.space 0x44 - (. - AbandonedShip_Rooms2_1F_Text_DanPostRematch)
	.endif
