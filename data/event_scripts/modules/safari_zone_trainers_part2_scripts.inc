	@ data/text/trainers.inc:2714 Route125_Text_NolenPostBattle
	.globl Route125_Text_NolenPostBattle
Route125_Text_NolenPostBattle: @ 0x0826074D
	.string "くうきちゅう よりも\nすいちゅうの ほうが おとの つたわる\lスピードが はやいんだよ!{EOS}"
	.if (. - Route125_Text_NolenPostBattle) > 0x2d
	.error "Route125_Text_NolenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_NolenPostBattle) < 0x2d
	.space 0x2d - (. - Route125_Text_NolenPostBattle)
	.endif
	@ data/text/trainers.inc:2717 Route125_Text_StanIntro (+1 aliases)
	.globl Route125_Text_StanIntro
Route125_Text_StanIntro: @ 0x0826077A
	.string "おらーっ!!\nおれの かわいい ポケモンだー!!{EOS}"
	.if (. - Route125_Text_StanIntro) > 0x19
	.error "Route125_Text_StanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_StanIntro) < 0x19
	.space 0x19 - (. - Route125_Text_StanIntro)
	.endif
	@ data/text/trainers.inc:2720 Route125_Text_StanDefeat (+1 aliases)
	.globl Route125_Text_StanDefeat
Route125_Text_StanDefeat: @ 0x08260793
	.string "まいったぜ……!{EOS}"
	.if (. - Route125_Text_StanDefeat) > 0x9
	.error "Route125_Text_StanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_StanDefeat) < 0x9
	.space 0x9 - (. - Route125_Text_StanDefeat)
	.endif
	@ data/text/trainers.inc:2723 Route125_Text_StanPostBattle
	.globl Route125_Text_StanPostBattle
Route125_Text_StanPostBattle: @ 0x0826079C
	.string "タッツーの みりょくに まいって\nおれも およぐように なったんだー!{EOS}"
	.if (. - Route125_Text_StanPostBattle) > 0x24
	.error "Route125_Text_StanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_StanPostBattle) < 0x24
	.space 0x24 - (. - Route125_Text_StanPostBattle)
	.endif
	@ data/text/trainers.inc:2726 Route125_Text_TanyaIntro (+1 aliases)
	.globl Route125_Text_TanyaIntro
Route125_Text_TanyaIntro: @ 0x082607C0
	.string "およぎ つかれちゃった!\nわたしと ひとしょうぶ どう?{EOS}"
	.if (. - Route125_Text_TanyaIntro) > 0x1d
	.error "Route125_Text_TanyaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_TanyaIntro) < 0x1d
	.space 0x1d - (. - Route125_Text_TanyaIntro)
	.endif
	@ data/text/trainers.inc:2729 Route125_Text_TanyaDefeat (+1 aliases)
	.globl Route125_Text_TanyaDefeat
Route125_Text_TanyaDefeat: @ 0x082607DD
	.string "あんた つよすぎ!{EOS}"
	.if (. - Route125_Text_TanyaDefeat) > 0xa
	.error "Route125_Text_TanyaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_TanyaDefeat) < 0xa
	.space 0xa - (. - Route125_Text_TanyaDefeat)
	.endif
	@ data/text/trainers.inc:2732 Route125_Text_TanyaPostBattle
	.globl Route125_Text_TanyaPostBattle
Route125_Text_TanyaPostBattle: @ 0x082607E7
	.string "ふう ふう……\nトクサネシティは どっち だったっけ?{EOS}"
	.if (. - Route125_Text_TanyaPostBattle) > 0x1c
	.error "Route125_Text_TanyaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_TanyaPostBattle) < 0x1c
	.space 0x1c - (. - Route125_Text_TanyaPostBattle)
	.endif
	@ data/text/trainers.inc:2735 Route125_Text_SharonIntro (+1 aliases)
	.globl Route125_Text_SharonIntro
Route125_Text_SharonIntro: @ 0x08260803
	.string "わたしの そだてた みずポケモンと\nたたかって みない?{EOS}"
	.if (. - Route125_Text_SharonIntro) > 0x1d
	.error "Route125_Text_SharonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_SharonIntro) < 0x1d
	.space 0x1d - (. - Route125_Text_SharonIntro)
	.endif
	@ data/text/trainers.inc:2738 Route125_Text_SharonDefeat (+1 aliases)
	.globl Route125_Text_SharonDefeat
Route125_Text_SharonDefeat: @ 0x08260820
	.string "まけた……{EOS}"
	.if (. - Route125_Text_SharonDefeat) > 0x6
	.error "Route125_Text_SharonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_SharonDefeat) < 0x6
	.space 0x6 - (. - Route125_Text_SharonDefeat)
	.endif
	@ data/text/trainers.inc:2741 Route125_Text_SharonPostBattle
	.globl Route125_Text_SharonPostBattle
Route125_Text_SharonPostBattle: @ 0x08260826
	.string "あなたの つよさは ホンモノね!\nおどろいたわ!{EOS}"
	.if (. - Route125_Text_SharonPostBattle) > 0x19
	.error "Route125_Text_SharonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_SharonPostBattle) < 0x19
	.space 0x19 - (. - Route125_Text_SharonPostBattle)
	.endif
	@ data/text/trainers.inc:2744 Route125_Text_ErnestIntro (+1 aliases)
	.globl Route125_Text_ErnestIntro
Route125_Text_ErnestIntro: @ 0x0826083F
	.string "オレさまは たくましい ふなのり!\nせかいの うみを わたりあるく おとこ!{EOS}"
	.if (. - Route125_Text_ErnestIntro) > 0x27
	.error "Route125_Text_ErnestIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestIntro) < 0x27
	.space 0x27 - (. - Route125_Text_ErnestIntro)
	.endif
	@ data/text/trainers.inc:2747 Route125_Text_ErnestDefeat (+1 aliases)
	.globl Route125_Text_ErnestDefeat
Route125_Text_ErnestDefeat: @ 0x08260866
	.string "ぐおおおーっ!\nかてねえ……!{EOS}"
	.if (. - Route125_Text_ErnestDefeat) > 0x10
	.error "Route125_Text_ErnestDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestDefeat) < 0x10
	.space 0x10 - (. - Route125_Text_ErnestDefeat)
	.endif
	@ data/text/trainers.inc:2750 Route125_Text_ErnestPostBattle
	.globl Route125_Text_ErnestPostBattle
Route125_Text_ErnestPostBattle: @ 0x08260876
	.string "あさせのほらあな は じかんによって\nしおが みちたり ひいたり するんだ!\pちなみに みちしお から ひきしお まで\nおよそ 6じかんだぞ! しっていたか?{EOS}"
	.if (. - Route125_Text_ErnestPostBattle) > 0x50
	.error "Route125_Text_ErnestPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestPostBattle) < 0x50
	.space 0x50 - (. - Route125_Text_ErnestPostBattle)
	.endif
	@ data/text/trainers.inc:2753 Route125_Text_ErnestRegister
	.globl Route125_Text_ErnestRegister
Route125_Text_ErnestRegister: @ 0x082608C6
	.string "ポケナビ とうろく して くれたら\nいいことを おしえて やるよ!{EOS}"
	.if (. - Route125_Text_ErnestRegister) > 0x22
	.error "Route125_Text_ErnestRegister may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestRegister) < 0x22
	.space 0x22 - (. - Route125_Text_ErnestRegister)
	.endif
	@ data/text/trainers.inc:2756 Route125_Text_ErnestRematchIntro (+1 aliases)
	.globl Route125_Text_ErnestRematchIntro
Route125_Text_ErnestRematchIntro: @ 0x082608E8
	.string "おっと ここで あったが 100ねんめ!\nとにかく ポケモンしょうぶ だっ!{EOS}"
	.if (. - Route125_Text_ErnestRematchIntro) > 0x27
	.error "Route125_Text_ErnestRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestRematchIntro) < 0x27
	.space 0x27 - (. - Route125_Text_ErnestRematchIntro)
	.endif
	@ data/text/trainers.inc:2759 Route125_Text_ErnestRematchDefeat (+1 aliases)
	.globl Route125_Text_ErnestRematchDefeat
Route125_Text_ErnestRematchDefeat: @ 0x0826090F
	.string "かてねえ\nちっとも かてねえよ!{EOS}"
	.if (. - Route125_Text_ErnestRematchDefeat) > 0x11
	.error "Route125_Text_ErnestRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestRematchDefeat) < 0x11
	.space 0x11 - (. - Route125_Text_ErnestRematchDefeat)
	.endif
	@ data/text/trainers.inc:2762 Route125_Text_ErnestRematchPostBattle
	.globl Route125_Text_ErnestRematchPostBattle
Route125_Text_ErnestRematchPostBattle: @ 0x08260920
	.string "あさせのほらあな……\pしおの みちひきに よって\nいけたり いけなかったり する\lばしょが あるんだよな\pちなみに みちしお から ひきしお まで\nおよそ 6じかんだぞ! おぼえておけよ!{EOS}"
	.if (. - Route125_Text_ErnestRematchPostBattle) > 0x5f
	.error "Route125_Text_ErnestRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_ErnestRematchPostBattle) < 0x5f
	.space 0x5f - (. - Route125_Text_ErnestRematchPostBattle)
	.endif
	@ data/text/trainers.inc:2765 Route125_Text_KimIntro (+1 aliases)
	.globl Route125_Text_KimIntro
Route125_Text_KimIntro: @ 0x0826097F
	.string "マホ『あさせのほらあなに\nへんな じいさんが いるんだって!\lあなたも あいにいく とちゅう?{EOS}"
	.if (. - Route125_Text_KimIntro) > 0x30
	.error "Route125_Text_KimIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_KimIntro) < 0x30
	.space 0x30 - (. - Route125_Text_KimIntro)
	.endif
	@ data/text/trainers.inc:2768 Route125_Text_KimDefeat (+1 aliases)
	.globl Route125_Text_KimDefeat
Route125_Text_KimDefeat: @ 0x082609AF
	.string "マホ『かてると おもったのに{EOS}"
	.if (. - Route125_Text_KimDefeat) > 0xf
	.error "Route125_Text_KimDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_KimDefeat) < 0xf
	.space 0xf - (. - Route125_Text_KimDefeat)
	.endif
	@ data/text/trainers.inc:2771 Route125_Text_KimPostBattle
	.globl Route125_Text_KimPostBattle
Route125_Text_KimPostBattle: @ 0x082609BE
	.string "マホ『あさせのほらあなに\nへんな じいさんが いるんでしょ?\pさっ ナホちゃん あいに いくよ!{EOS}"
	.if (. - Route125_Text_KimPostBattle) > 0x31
	.error "Route125_Text_KimPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_KimPostBattle) < 0x31
	.space 0x31 - (. - Route125_Text_KimPostBattle)
	.endif
	@ data/text/trainers.inc:2774 Route125_Text_KimNotEnoughMons (+1 aliases)
	.globl Route125_Text_KimNotEnoughMons
Route125_Text_KimNotEnoughMons: @ 0x082609EF
	.string "マホ『ダメだって!\nポケモン 2ひき いないと ダメだって!{EOS}"
	.if (. - Route125_Text_KimNotEnoughMons) > 0x1f
	.error "Route125_Text_KimNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_KimNotEnoughMons) < 0x1f
	.space 0x1f - (. - Route125_Text_KimNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2777 Route125_Text_IrisIntro (+1 aliases)
	.globl Route125_Text_IrisIntro
Route125_Text_IrisIntro: @ 0x08260A0E
	.string "ナホ『センパイ\nこんな ところに なにが あるんですかぁ?{EOS}"
	.if (. - Route125_Text_IrisIntro) > 0x1e
	.error "Route125_Text_IrisIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_IrisIntro) < 0x1e
	.space 0x1e - (. - Route125_Text_IrisIntro)
	.endif
	@ data/text/trainers.inc:2780 Route125_Text_IrisDefeat (+1 aliases)
	.globl Route125_Text_IrisDefeat
Route125_Text_IrisDefeat: @ 0x08260A2C
	.string "ナホ『とちゅう おしいところ あったのに{EOS}"
	.if (. - Route125_Text_IrisDefeat) > 0x15
	.error "Route125_Text_IrisDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_IrisDefeat) < 0x15
	.space 0x15 - (. - Route125_Text_IrisDefeat)
	.endif
	@ data/text/trainers.inc:2783 Route125_Text_IrisPostBattle
	.globl Route125_Text_IrisPostBattle
Route125_Text_IrisPostBattle: @ 0x08260A41
	.string "ナホ『センパイ…… ほんとに\nあさせのほらあなに はいりますぅ?\lぬれちゃいますよぉ?{EOS}"
	.if (. - Route125_Text_IrisPostBattle) > 0x2c
	.error "Route125_Text_IrisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_IrisPostBattle) < 0x2c
	.space 0x2c - (. - Route125_Text_IrisPostBattle)
	.endif
	@ data/text/trainers.inc:2786 Route125_Text_IrisNotEnoughMons (+1 aliases)
	.globl Route125_Text_IrisNotEnoughMons
Route125_Text_IrisNotEnoughMons: @ 0x08260A6D
	.string "ナホ『2たい1で しょうぶ なんて\nそんな まね あたしたちに できないわ{EOS}"
	.if (. - Route125_Text_IrisNotEnoughMons) > 0x26
	.error "Route125_Text_IrisNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_IrisNotEnoughMons) < 0x26
	.space 0x26 - (. - Route125_Text_IrisNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2789 Route125_Text_PresleyIntro (+1 aliases)
	.globl Route125_Text_PresleyIntro
Route125_Text_PresleyIntro: @ 0x08260A93
	.string "とりつかいの ボクが\nなぜ うみにまで きているかと いうと……{EOS}"
	.if (. - Route125_Text_PresleyIntro) > 0x21
	.error "Route125_Text_PresleyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_PresleyIntro) < 0x21
	.space 0x21 - (. - Route125_Text_PresleyIntro)
	.endif
	@ data/text/trainers.inc:2792 Route125_Text_PresleyDefeat (+1 aliases)
	.globl Route125_Text_PresleyDefeat
Route125_Text_PresleyDefeat: @ 0x08260AB4
	.string "わかった\nなんで ここに いるか おしえてやるよ{EOS}"
	.if (. - Route125_Text_PresleyDefeat) > 0x19
	.error "Route125_Text_PresleyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_PresleyDefeat) < 0x19
	.space 0x19 - (. - Route125_Text_PresleyDefeat)
	.endif
	@ data/text/trainers.inc:2795 Route125_Text_PresleyPostBattle
	.globl Route125_Text_PresleyPostBattle
Route125_Text_PresleyPostBattle: @ 0x08260ACD
	.string "あきビンに メールを いれて\nさっき うみに ながしたんだ!\pきっと かわいい ビキニの おんなのコが\nひろって くれるぜ!{EOS}"
	.if (. - Route125_Text_PresleyPostBattle) > 0x3f
	.error "Route125_Text_PresleyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_PresleyPostBattle) < 0x3f
	.space 0x3f - (. - Route125_Text_PresleyPostBattle)
	.endif
	@ data/text/trainers.inc:2798 Route125_Text_AuronIntro (+1 aliases)
	.globl Route125_Text_AuronIntro
Route125_Text_AuronIntro: @ 0x08260B0C
	.string "こらーッ! おぬしかッ\nうみに ゴミを すてたのは!{EOS}"
	.if (. - Route125_Text_AuronIntro) > 0x1b
	.error "Route125_Text_AuronIntro may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_AuronIntro) < 0x1b
	.space 0x1b - (. - Route125_Text_AuronIntro)
	.endif
	@ data/text/trainers.inc:2801 Route125_Text_AuronDefeat (+1 aliases)
	.globl Route125_Text_AuronDefeat
Route125_Text_AuronDefeat: @ 0x08260B27
	.string "おぬしでは なかったか{EOS}"
	.if (. - Route125_Text_AuronDefeat) > 0xc
	.error "Route125_Text_AuronDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_AuronDefeat) < 0xc
	.space 0xc - (. - Route125_Text_AuronDefeat)
	.endif
	@ data/text/trainers.inc:2804 Route125_Text_AuronPostBattle
	.globl Route125_Text_AuronPostBattle
Route125_Text_AuronPostBattle: @ 0x08260B33
	.string "さっき この あたりで\nこきたない ビンを ひろったんじゃ!\lうみに ゴミを すてるとは なっとらん!{EOS}"
	.if (. - Route125_Text_AuronPostBattle) > 0x34
	.error "Route125_Text_AuronPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route125_Text_AuronPostBattle) < 0x34
	.space 0x34 - (. - Route125_Text_AuronPostBattle)
	.endif
	@ data/text/trainers.inc:2807 Route126_Text_BarryIntro (+1 aliases)
	.globl Route126_Text_BarryIntro
Route126_Text_BarryIntro: @ 0x08260B67
	.string "すいえいは ぜんしん うんどう!\nたいりょくが つくぞー!{EOS}"
	.if (. - Route126_Text_BarryIntro) > 0x1e
	.error "Route126_Text_BarryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BarryIntro) < 0x1e
	.space 0x1e - (. - Route126_Text_BarryIntro)
	.endif
	@ data/text/trainers.inc:2810 Route126_Text_BarryDefeat (+1 aliases)
	.globl Route126_Text_BarryDefeat
Route126_Text_BarryDefeat: @ 0x08260B85
	.string "まけましたーっ!{EOS}"
	.if (. - Route126_Text_BarryDefeat) > 0x9
	.error "Route126_Text_BarryDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BarryDefeat) < 0x9
	.space 0x9 - (. - Route126_Text_BarryDefeat)
	.endif
	@ data/text/trainers.inc:2813 Route126_Text_BarryPostBattle
	.globl Route126_Text_BarryPostBattle
Route126_Text_BarryPostBattle: @ 0x08260B8E
	.string "まいにち およいでる おかげで\nみよ! この きんにくっ!!{EOS}"
	.if (. - Route126_Text_BarryPostBattle) > 0x1f
	.error "Route126_Text_BarryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BarryPostBattle) < 0x1f
	.space 0x1f - (. - Route126_Text_BarryPostBattle)
	.endif
	@ data/text/trainers.inc:2816 Route126_Text_DeanIntro (+1 aliases)
	.globl Route126_Text_DeanIntro
Route126_Text_DeanIntro: @ 0x08260BAD
	.string "この しろく そびえる いわやまが\nルネシティ なんだぜー!{EOS}"
	.if (. - Route126_Text_DeanIntro) > 0x1f
	.error "Route126_Text_DeanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_DeanIntro) < 0x1f
	.space 0x1f - (. - Route126_Text_DeanIntro)
	.endif
	@ data/text/trainers.inc:2819 Route126_Text_DeanDefeat (+1 aliases)
	.globl Route126_Text_DeanDefeat
Route126_Text_DeanDefeat: @ 0x08260BCC
	.string "やられたか!?{EOS}"
	.if (. - Route126_Text_DeanDefeat) > 0x8
	.error "Route126_Text_DeanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_DeanDefeat) < 0x8
	.space 0x8 - (. - Route126_Text_DeanDefeat)
	.endif
	@ data/text/trainers.inc:2822 Route126_Text_DeanPostBattle
	.globl Route126_Text_DeanPostBattle
Route126_Text_DeanPostBattle: @ 0x08260BD4
	.string "ルネシティの いりぐちが みつからん!\nどこに あるんだ?{EOS}"
	.if (. - Route126_Text_DeanPostBattle) > 0x1e
	.error "Route126_Text_DeanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_DeanPostBattle) < 0x1e
	.space 0x1e - (. - Route126_Text_DeanPostBattle)
	.endif
	@ data/text/trainers.inc:2825 Route126_Text_NikkiIntro (+1 aliases)
	.globl Route126_Text_NikkiIntro
Route126_Text_NikkiIntro: @ 0x08260BF2
	.string "おほほほっ\nわたしは にんぎょ!{EOS}"
	.if (. - Route126_Text_NikkiIntro) > 0x11
	.error "Route126_Text_NikkiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_NikkiIntro) < 0x11
	.space 0x11 - (. - Route126_Text_NikkiIntro)
	.endif
	@ data/text/trainers.inc:2828 Route126_Text_NikkiDefeat (+1 aliases)
	.globl Route126_Text_NikkiDefeat
Route126_Text_NikkiDefeat: @ 0x08260C03
	.string "アワと なって きえていく……\nぶくぶくぶく……{EOS}"
	.if (. - Route126_Text_NikkiDefeat) > 0x19
	.error "Route126_Text_NikkiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_NikkiDefeat) < 0x19
	.space 0x19 - (. - Route126_Text_NikkiDefeat)
	.endif
	@ data/text/trainers.inc:2831 Route126_Text_NikkiPostBattle
	.globl Route126_Text_NikkiPostBattle
Route126_Text_NikkiPostBattle: @ 0x08260C1C
	.string "こっぴどく やられちゃったわ……\nアワくって にげだしたい きぶん……{EOS}"
	.if (. - Route126_Text_NikkiPostBattle) > 0x24
	.error "Route126_Text_NikkiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_NikkiPostBattle) < 0x24
	.space 0x24 - (. - Route126_Text_NikkiPostBattle)
	.endif
	@ data/text/trainers.inc:2834 Route126_Text_BrendaIntro (+1 aliases)
	.globl Route126_Text_BrendaIntro
Route126_Text_BrendaIntro: @ 0x08260C40
	.string "ねえ ねえ\nおねえさんと しょうぶ しない?{EOS}"
	.if (. - Route126_Text_BrendaIntro) > 0x17
	.error "Route126_Text_BrendaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BrendaIntro) < 0x17
	.space 0x17 - (. - Route126_Text_BrendaIntro)
	.endif
	@ data/text/trainers.inc:2837 Route126_Text_BrendaDefeat (+1 aliases)
	.globl Route126_Text_BrendaDefeat
Route126_Text_BrendaDefeat: @ 0x08260C57
	.string "いやーんっ!{EOS}"
	.if (. - Route126_Text_BrendaDefeat) > 0x7
	.error "Route126_Text_BrendaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BrendaDefeat) < 0x7
	.space 0x7 - (. - Route126_Text_BrendaDefeat)
	.endif
	@ data/text/trainers.inc:2840 Route126_Text_BrendaPostBattle
	.globl Route126_Text_BrendaPostBattle
Route126_Text_BrendaPostBattle: @ 0x08260C5E
	.string "こうして ポケモンと\nうみで あそぶのが だいすきなの!{EOS}"
	.if (. - Route126_Text_BrendaPostBattle) > 0x1d
	.error "Route126_Text_BrendaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_BrendaPostBattle) < 0x1d
	.space 0x1d - (. - Route126_Text_BrendaPostBattle)
	.endif
	@ data/text/trainers.inc:2843 Route126_Text_PabloIntro (+1 aliases)
	.globl Route126_Text_PabloIntro
Route126_Text_PabloIntro: @ 0x08260C7B
	.string "からておう より たくましい\nこの にくたいびを みよ!{EOS}"
	.if (. - Route126_Text_PabloIntro) > 0x1d
	.error "Route126_Text_PabloIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloIntro) < 0x1d
	.space 0x1d - (. - Route126_Text_PabloIntro)
	.endif
	@ data/text/trainers.inc:2846 Route126_Text_PabloDefeat (+1 aliases)
	.globl Route126_Text_PabloDefeat
Route126_Text_PabloDefeat: @ 0x08260C98
	.string "おわっ つよいな\nいいね! いいね!{EOS}"
	.if (. - Route126_Text_PabloDefeat) > 0x13
	.error "Route126_Text_PabloDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloDefeat) < 0x13
	.space 0x13 - (. - Route126_Text_PabloDefeat)
	.endif
	@ data/text/trainers.inc:2849 Route126_Text_PabloPostBattle
	.globl Route126_Text_PabloPostBattle
Route126_Text_PabloPostBattle: @ 0x08260CAB
	.string "まけて いい しげきに なったよ!\nからだも ポケモンも もっと きたえるぜ{EOS}"
	.if (. - Route126_Text_PabloPostBattle) > 0x27
	.error "Route126_Text_PabloPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloPostBattle) < 0x27
	.space 0x27 - (. - Route126_Text_PabloPostBattle)
	.endif
	@ data/text/trainers.inc:2852 Route126_Text_PabloRegister
	.globl Route126_Text_PabloRegister
Route126_Text_PabloRegister: @ 0x08260CD2
	.string "いやー いいね!\nぜひとも おちかづきに なっておきたいね!{EOS}"
	.if (. - Route126_Text_PabloRegister) > 0x1f
	.error "Route126_Text_PabloRegister may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloRegister) < 0x1f
	.space 0x1f - (. - Route126_Text_PabloRegister)
	.endif
	@ data/text/trainers.inc:2855 Route126_Text_PabloRematchIntro (+1 aliases)
	.globl Route126_Text_PabloRematchIntro
Route126_Text_PabloRematchIntro: @ 0x08260CF1
	.string "ビキニのおねえさん より うつくしい\nこの にくたいびを みよ!{EOS}"
	.if (. - Route126_Text_PabloRematchIntro) > 0x21
	.error "Route126_Text_PabloRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloRematchIntro) < 0x21
	.space 0x21 - (. - Route126_Text_PabloRematchIntro)
	.endif
	@ data/text/trainers.inc:2858 Route126_Text_PabloRematchDefeat (+1 aliases)
	.globl Route126_Text_PabloRematchDefeat
Route126_Text_PabloRematchDefeat: @ 0x08260D12
	.string "おわっ ほんと つよいな\nいいね! いいね!{EOS}"
	.if (. - Route126_Text_PabloRematchDefeat) > 0x17
	.error "Route126_Text_PabloRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloRematchDefeat) < 0x17
	.space 0x17 - (. - Route126_Text_PabloRematchDefeat)
	.endif
	@ data/text/trainers.inc:2861 Route126_Text_PabloPostRematch
	.globl Route126_Text_PabloPostRematch
Route126_Text_PabloPostRematch: @ 0x08260D29
	.string "よし もっともっと きたえるぜ!\nきみは いい しげきに なるから\lまた きてくれよ!{EOS}"
	.if (. - Route126_Text_PabloPostRematch) > 0x2c
	.error "Route126_Text_PabloPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_PabloPostRematch) < 0x2c
	.space 0x2c - (. - Route126_Text_PabloPostRematch)
	.endif
	@ data/text/trainers.inc:2864 Route126_Text_LeonardoIntro (+1 aliases)
	.globl Route126_Text_LeonardoIntro
Route126_Text_LeonardoIntro: @ 0x08260D55
	.string "きょねん まで およげなかった オレも\nかいパンやろうに なれたんだ\lいまなら なんでも できる きがする!{EOS}"
	.if (. - Route126_Text_LeonardoIntro) > 0x37
	.error "Route126_Text_LeonardoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_LeonardoIntro) < 0x37
	.space 0x37 - (. - Route126_Text_LeonardoIntro)
	.endif
	@ data/text/trainers.inc:2867 Route126_Text_LeonardoDefeat (+1 aliases)
	.globl Route126_Text_LeonardoDefeat
Route126_Text_LeonardoDefeat: @ 0x08260D8C
	.string "てへっ よくばりすぎちゃ ダメだよな{EOS}"
	.if (. - Route126_Text_LeonardoDefeat) > 0x13
	.error "Route126_Text_LeonardoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_LeonardoDefeat) < 0x13
	.space 0x13 - (. - Route126_Text_LeonardoDefeat)
	.endif
	@ data/text/trainers.inc:2870 Route126_Text_LeonardoPostBattle
	.globl Route126_Text_LeonardoPostBattle
Route126_Text_LeonardoPostBattle: @ 0x08260D9F
	.string "なんでも れんしゅう すれば\nうまく なるんだ!\pキミも わかい うちから\nいろいろ やっておけよ!{EOS}"
	.if (. - Route126_Text_LeonardoPostBattle) > 0x33
	.error "Route126_Text_LeonardoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_LeonardoPostBattle) < 0x33
	.space 0x33 - (. - Route126_Text_LeonardoPostBattle)
	.endif
	@ data/text/trainers.inc:2873 Route126_Text_IsobelIntro (+1 aliases)
	.globl Route126_Text_IsobelIntro
Route126_Text_IsobelIntro: @ 0x08260DD2
	.string "はなに かいすいが はいると\nすっごく つらいよね?{EOS}"
	.if (. - Route126_Text_IsobelIntro) > 0x1b
	.error "Route126_Text_IsobelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_IsobelIntro) < 0x1b
	.space 0x1b - (. - Route126_Text_IsobelIntro)
	.endif
	@ data/text/trainers.inc:2876 Route126_Text_IsobelDefeat (+1 aliases)
	.globl Route126_Text_IsobelDefeat
Route126_Text_IsobelDefeat: @ 0x08260DED
	.string "ああっ!\nく くやし……ごほッ!{EOS}"
	.if (. - Route126_Text_IsobelDefeat) > 0x11
	.error "Route126_Text_IsobelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_IsobelDefeat) < 0x11
	.space 0x11 - (. - Route126_Text_IsobelDefeat)
	.endif
	@ data/text/trainers.inc:2879 Route126_Text_IsobelPostBattle
	.globl Route126_Text_IsobelPostBattle
Route126_Text_IsobelPostBattle: @ 0x08260DFE
	.string "かいすいを ちょっと のんじゃった……!\nからいーッ にがいーッ!{EOS}"
	.if (. - Route126_Text_IsobelPostBattle) > 0x22
	.error "Route126_Text_IsobelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_IsobelPostBattle) < 0x22
	.space 0x22 - (. - Route126_Text_IsobelPostBattle)
	.endif
	@ data/text/trainers.inc:2882 Route126_Text_SiennaIntro (+1 aliases)
	.globl Route126_Text_SiennaIntro
Route126_Text_SiennaIntro: @ 0x08260E20
	.string "わたしの ハートを ぶつけるわ!{EOS}"
	.if (. - Route126_Text_SiennaIntro) > 0x11
	.error "Route126_Text_SiennaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_SiennaIntro) < 0x11
	.space 0x11 - (. - Route126_Text_SiennaIntro)
	.endif
	@ data/text/trainers.inc:2885 Route126_Text_SiennaDefeat (+1 aliases)
	.globl Route126_Text_SiennaDefeat
Route126_Text_SiennaDefeat: @ 0x08260E31
	.string "ハートで まけたわ!{EOS}"
	.if (. - Route126_Text_SiennaDefeat) > 0xb
	.error "Route126_Text_SiennaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_SiennaDefeat) < 0xb
	.space 0xb - (. - Route126_Text_SiennaDefeat)
	.endif
	@ data/text/trainers.inc:2888 Route126_Text_SiennaPostBattle
	.globl Route126_Text_SiennaPostBattle
Route126_Text_SiennaPostBattle: @ 0x08260E3C
	.string "あつく なっちゃった\nちょっと もぐって こようかな{EOS}"
	.if (. - Route126_Text_SiennaPostBattle) > 0x1b
	.error "Route126_Text_SiennaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route126_Text_SiennaPostBattle) < 0x1b
	.space 0x1b - (. - Route126_Text_SiennaPostBattle)
	.endif
	@ data/text/trainers.inc:2891 Route127_Text_CamdenIntro (+1 aliases)
	.globl Route127_Text_CamdenIntro
Route127_Text_CamdenIntro: @ 0x08260E57
	.string "オレと しょうぶ したいって\nかおに かいてあるぜ!{EOS}"
	.if (. - Route127_Text_CamdenIntro) > 0x1b
	.error "Route127_Text_CamdenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_CamdenIntro) < 0x1b
	.space 0x1b - (. - Route127_Text_CamdenIntro)
	.endif
	@ data/text/trainers.inc:2894 Route127_Text_CamdenDefeat (+1 aliases)
	.globl Route127_Text_CamdenDefeat
Route127_Text_CamdenDefeat: @ 0x08260E72
	.string "あわわわわ……{EOS}"
	.if (. - Route127_Text_CamdenDefeat) > 0x8
	.error "Route127_Text_CamdenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_CamdenDefeat) < 0x8
	.space 0x8 - (. - Route127_Text_CamdenDefeat)
	.endif
	@ data/text/trainers.inc:2897 Route127_Text_CamdenPostBattle
	.globl Route127_Text_CamdenPostBattle
Route127_Text_CamdenPostBattle: @ 0x08260E7A
	.string "いい しょうぶを した あとは\nすがすがしい きもちに なるなー{EOS}"
	.if (. - Route127_Text_CamdenPostBattle) > 0x21
	.error "Route127_Text_CamdenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_CamdenPostBattle) < 0x21
	.space 0x21 - (. - Route127_Text_CamdenPostBattle)
	.endif
	@ data/text/trainers.inc:2900 Route127_Text_DonnyIntro (+1 aliases)
	.globl Route127_Text_DonnyIntro
Route127_Text_DonnyIntro: @ 0x08260E9B
	.string "あいつには まけたくない って\nライバル きみには いるの?{EOS}"
	.if (. - Route127_Text_DonnyIntro) > 0x1f
	.error "Route127_Text_DonnyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_DonnyIntro) < 0x1f
	.space 0x1f - (. - Route127_Text_DonnyIntro)
	.endif
	@ data/text/trainers.inc:2903 Route127_Text_DonnyDefeat (+1 aliases)
	.globl Route127_Text_DonnyDefeat
Route127_Text_DonnyDefeat: @ 0x08260EBA
	.string "あぁ すっごく くやしい!{EOS}"
	.if (. - Route127_Text_DonnyDefeat) > 0xe
	.error "Route127_Text_DonnyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_DonnyDefeat) < 0xe
	.space 0xe - (. - Route127_Text_DonnyDefeat)
	.endif
	@ data/text/trainers.inc:2906 Route127_Text_DonnyPostBattle
	.globl Route127_Text_DonnyPostBattle
Route127_Text_DonnyPostBattle: @ 0x08260EC8
	.string "ライバルが いると\nつよくなりたい って きもちが\lどんどん あふれて くるよね{EOS}"
	.if (. - Route127_Text_DonnyPostBattle) > 0x29
	.error "Route127_Text_DonnyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_DonnyPostBattle) < 0x29
	.space 0x29 - (. - Route127_Text_DonnyPostBattle)
	.endif
	@ data/text/trainers.inc:2909 Route127_Text_JonahIntro (+1 aliases)
	.globl Route127_Text_JonahIntro
Route127_Text_JonahIntro: @ 0x08260EF1
	.string "つりを することで てにいれた\nおだやかな こころ……\lそれを みせて あげましょう……{EOS}"
	.if (. - Route127_Text_JonahIntro) > 0x2d
	.error "Route127_Text_JonahIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_JonahIntro) < 0x2d
	.space 0x2d - (. - Route127_Text_JonahIntro)
	.endif
	@ data/text/trainers.inc:2912 Route127_Text_JonahDefeat (+1 aliases)
	.globl Route127_Text_JonahDefeat
Route127_Text_JonahDefeat: @ 0x08260F1E
	.string "…… まけても\nこころは おだやかです{EOS}"
	.if (. - Route127_Text_JonahDefeat) > 0x14
	.error "Route127_Text_JonahDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_JonahDefeat) < 0x14
	.space 0x14 - (. - Route127_Text_JonahDefeat)
	.endif
	@ data/text/trainers.inc:2915 Route127_Text_JonahPostBattle
	.globl Route127_Text_JonahPostBattle
Route127_Text_JonahPostBattle: @ 0x08260F32
	.string "つれなくても かまいません\nずっと いとを たらしているのです……{EOS}"
	.if (. - Route127_Text_JonahPostBattle) > 0x22
	.error "Route127_Text_JonahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_JonahPostBattle) < 0x22
	.space 0x22 - (. - Route127_Text_JonahPostBattle)
	.endif
	@ data/text/trainers.inc:2918 Route127_Text_HenryIntro (+1 aliases)
	.globl Route127_Text_HenryIntro
Route127_Text_HenryIntro: @ 0x08260F54
	.string "おっと!? なみのり している\nポケモンを つりあげて しまったか?{EOS}"
	.if (. - Route127_Text_HenryIntro) > 0x23
	.error "Route127_Text_HenryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_HenryIntro) < 0x23
	.space 0x23 - (. - Route127_Text_HenryIntro)
	.endif
	@ data/text/trainers.inc:2921 Route127_Text_HenryDefeat (+1 aliases)
	.globl Route127_Text_HenryDefeat
Route127_Text_HenryDefeat: @ 0x08260F77
	.string "かなわん!{EOS}"
	.if (. - Route127_Text_HenryDefeat) > 0x6
	.error "Route127_Text_HenryDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_HenryDefeat) < 0x6
	.space 0x6 - (. - Route127_Text_HenryDefeat)
	.endif
	@ data/text/trainers.inc:2924 Route127_Text_HenryPostBattle
	.globl Route127_Text_HenryPostBattle
Route127_Text_HenryPostBattle: @ 0x08260F7D
	.string "きみの ポケモン つよそうだから\nつりあげたら かなりの てごたえ だろうな!{EOS}"
	.if (. - Route127_Text_HenryPostBattle) > 0x28
	.error "Route127_Text_HenryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_HenryPostBattle) < 0x28
	.space 0x28 - (. - Route127_Text_HenryPostBattle)
	.endif
	@ data/text/trainers.inc:2927 Route127_Text_RogerIntro (+1 aliases)
	.globl Route127_Text_RogerIntro
Route127_Text_RogerIntro: @ 0x08260FA5
	.string "よーし!\nポケモンずきと つりずきの たいけつだ!{EOS}"
	.if (. - Route127_Text_RogerIntro) > 0x1a
	.error "Route127_Text_RogerIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_RogerIntro) < 0x1a
	.space 0x1a - (. - Route127_Text_RogerIntro)
	.endif
	@ data/text/trainers.inc:2930 Route127_Text_RogerDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route127_Text_RogerDefeat
Route127_Text_RogerDefeat: @ 0x08260FBF
	.string "わあ! いとが からまった!\nまさに あとの まつり{EOS}"
	.if (. - Route127_Text_RogerDefeat) != 0x1b
	.error "Route127_Text_RogerDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:2933 Route127_Text_RogerPostBattle
	.globl Route127_Text_RogerPostBattle
Route127_Text_RogerPostBattle: @ 0x08260FDA
	.string "つりでは いとが からまることを\nマツリ と いうんだよ{EOS}"
	.if (. - Route127_Text_RogerPostBattle) > 0x1d
	.error "Route127_Text_RogerPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_RogerPostBattle) < 0x1d
	.space 0x1d - (. - Route127_Text_RogerPostBattle)
	.endif
	@ data/text/trainers.inc:2936 Route127_Text_AidanIntro (+1 aliases)
	.globl Route127_Text_AidanIntro
Route127_Text_AidanIntro: @ 0x08260FF7
	.string "とりポケモンは すごく めが いい!\nおおぞら たかくから えものを みつけるぜ!{EOS}"
	.if (. - Route127_Text_AidanIntro) > 0x2a
	.error "Route127_Text_AidanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AidanIntro) < 0x2a
	.space 0x2a - (. - Route127_Text_AidanIntro)
	.endif
	@ data/text/trainers.inc:2939 Route127_Text_AidanDefeat (+1 aliases)
	.globl Route127_Text_AidanDefeat
Route127_Text_AidanDefeat: @ 0x08261021
	.string "ふぅ…… まいったぜ{EOS}"
	.if (. - Route127_Text_AidanDefeat) > 0xb
	.error "Route127_Text_AidanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AidanDefeat) < 0xb
	.space 0xb - (. - Route127_Text_AidanDefeat)
	.endif
	@ data/text/trainers.inc:2942 Route127_Text_AidanPostBattle
	.globl Route127_Text_AidanPostBattle
Route127_Text_AidanPostBattle: @ 0x0826102C
	.string "この ちかくには いっぱい\nもぐれそうな ところが あるな!\pそらから みてると\nうみの いろが ちがうから よくわかる!{EOS}"
	.if (. - Route127_Text_AidanPostBattle) > 0x3e
	.error "Route127_Text_AidanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AidanPostBattle) < 0x3e
	.space 0x3e - (. - Route127_Text_AidanPostBattle)
	.endif
	@ data/text/trainers.inc:2945 Route127_Text_KojiIntro (+1 aliases)
	.globl Route127_Text_KojiIntro
Route127_Text_KojiIntro: @ 0x0826106A
	.string "はだしで かけまわると\nあしの うらが きたえられるぞ!{EOS}"
	.if (. - Route127_Text_KojiIntro) > 0x1d
	.error "Route127_Text_KojiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiIntro) < 0x1d
	.space 0x1d - (. - Route127_Text_KojiIntro)
	.endif
	@ data/text/trainers.inc:2948 Route127_Text_KojiDefeat (+1 aliases)
	.globl Route127_Text_KojiDefeat
Route127_Text_KojiDefeat: @ 0x08261087
	.string "いってェ!\nツメの あいだに こいしが……{EOS}"
	.if (. - Route127_Text_KojiDefeat) > 0x16
	.error "Route127_Text_KojiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiDefeat) < 0x16
	.space 0x16 - (. - Route127_Text_KojiDefeat)
	.endif
	@ data/text/trainers.inc:2951 Route127_Text_KojiPostBattle
	.globl Route127_Text_KojiPostBattle
Route127_Text_KojiPostBattle: @ 0x0826109D
	.string "はだし さいこう!\nだが おまえの その ズックも いいな!{EOS}"
	.if (. - Route127_Text_KojiPostBattle) > 0x1f
	.error "Route127_Text_KojiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiPostBattle) < 0x1f
	.space 0x1f - (. - Route127_Text_KojiPostBattle)
	.endif
	@ data/text/trainers.inc:2954 Route127_Text_KojiRegister
	.globl Route127_Text_KojiRegister
Route127_Text_KojiRegister: @ 0x082610BC
	.string "おれに かったり するやつは こうだーっ!\nまた よろしくおねがいします!{EOS}"
	.if (. - Route127_Text_KojiRegister) > 0x26
	.error "Route127_Text_KojiRegister may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiRegister) < 0x26
	.space 0x26 - (. - Route127_Text_KojiRegister)
	.endif
	@ data/text/trainers.inc:2957 Route127_Text_KojiRematchIntro (+1 aliases)
	.globl Route127_Text_KojiRematchIntro
Route127_Text_KojiRematchIntro: @ 0x082610E2
	.string "きょうも はだしで かけまわって\nあしの うらを きたえまくりだ!{EOS}"
	.if (. - Route127_Text_KojiRematchIntro) > 0x22
	.error "Route127_Text_KojiRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiRematchIntro) < 0x22
	.space 0x22 - (. - Route127_Text_KojiRematchIntro)
	.endif
	@ data/text/trainers.inc:2960 Route127_Text_KojiRematchDefeat (+1 aliases)
	.globl Route127_Text_KojiRematchDefeat
Route127_Text_KojiRematchDefeat: @ 0x08261104
	.string "いってェ!\nつちふまずに ジャリが……{EOS}"
	.if (. - Route127_Text_KojiRematchDefeat) > 0x14
	.error "Route127_Text_KojiRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiRematchDefeat) < 0x14
	.space 0x14 - (. - Route127_Text_KojiRematchDefeat)
	.endif
	@ data/text/trainers.inc:2963 Route127_Text_KojiPostRematch
	.globl Route127_Text_KojiPostRematch
Route127_Text_KojiPostRematch: @ 0x08261118
	.string "しばらく おまえの ズックと\nおれの はだし こうかん してみないか?{EOS}"
	.if (. - Route127_Text_KojiPostRematch) > 0x24
	.error "Route127_Text_KojiPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_KojiPostRematch) < 0x24
	.space 0x24 - (. - Route127_Text_KojiPostRematch)
	.endif
	@ data/text/trainers.inc:2966 Route127_Text_AthenaIntro (+1 aliases)
	.globl Route127_Text_AthenaIntro
Route127_Text_AthenaIntro: @ 0x0826113C
	.string "じっくり ゆっくり しょうぶしましょう\nよろしくね!{EOS}"
	.if (. - Route127_Text_AthenaIntro) > 0x1b
	.error "Route127_Text_AthenaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AthenaIntro) < 0x1b
	.space 0x1b - (. - Route127_Text_AthenaIntro)
	.endif
	@ data/text/trainers.inc:2969 Route127_Text_AthenaDefeat (+1 aliases)
	.globl Route127_Text_AthenaDefeat
Route127_Text_AthenaDefeat: @ 0x08261157
	.string "せんりゃくを ねる ひまも なかったわ{EOS}"
	.if (. - Route127_Text_AthenaDefeat) > 0x14
	.error "Route127_Text_AthenaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AthenaDefeat) < 0x14
	.space 0x14 - (. - Route127_Text_AthenaDefeat)
	.endif
	@ data/text/trainers.inc:2972 Route127_Text_AthenaPostBattle
	.globl Route127_Text_AthenaPostBattle
Route127_Text_AthenaPostBattle: @ 0x0826116B
	.string "あおい いろに かこまれていると\nじかんが すぎるのが\lゆっくりに かんじられる のよ{EOS}"
	.if (. - Route127_Text_AthenaPostBattle) > 0x2c
	.error "Route127_Text_AthenaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route127_Text_AthenaPostBattle) < 0x2c
	.space 0x2c - (. - Route127_Text_AthenaPostBattle)
	.endif
	@ data/text/trainers.inc:2975 Route128_Text_IsaiahIntro (+1 aliases)
	.globl Route128_Text_IsaiahIntro
Route128_Text_IsaiahIntro: @ 0x08261197
	.string "サイユウシティは まだ とおい……{EOS}"
	.if (. - Route128_Text_IsaiahIntro) > 0x12
	.error "Route128_Text_IsaiahIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahIntro) < 0x12
	.space 0x12 - (. - Route128_Text_IsaiahIntro)
	.endif
	@ data/text/trainers.inc:2978 Route128_Text_IsaiahDefeat (+1 aliases)
	.globl Route128_Text_IsaiahDefeat
Route128_Text_IsaiahDefeat: @ 0x082611A9
	.string "ボクの はつしょうりも とおい……{EOS}"
	.if (. - Route128_Text_IsaiahDefeat) > 0x12
	.error "Route128_Text_IsaiahDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahDefeat) < 0x12
	.space 0x12 - (. - Route128_Text_IsaiahDefeat)
	.endif
	@ data/text/trainers.inc:2981 Route128_Text_IsaiahPostBattle
	.globl Route128_Text_IsaiahPostBattle
Route128_Text_IsaiahPostBattle: @ 0x082611BB
	.string "まけつづけている じんせい ですが\nけっして あきらめませんよ……!{EOS}"
	.if (. - Route128_Text_IsaiahPostBattle) > 0x23
	.error "Route128_Text_IsaiahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahPostBattle) < 0x23
	.space 0x23 - (. - Route128_Text_IsaiahPostBattle)
	.endif
	@ data/text/trainers.inc:2984 Route128_Text_IsaiahRegister
	.globl Route128_Text_IsaiahRegister
Route128_Text_IsaiahRegister: @ 0x082611DE
	.string "こんな ボク ですけど\nいつかは かてると おもうんです\lポケナビの とうろくを してください……!{EOS}"
	.if (. - Route128_Text_IsaiahRegister) > 0x33
	.error "Route128_Text_IsaiahRegister may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahRegister) < 0x33
	.space 0x33 - (. - Route128_Text_IsaiahRegister)
	.endif
	@ data/text/trainers.inc:2987 Route128_Text_IsaiahRematchIntro (+1 aliases)
	.globl Route128_Text_IsaiahRematchIntro
Route128_Text_IsaiahRematchIntro: @ 0x08261211
	.string "まだまだ げんき ですからね\nサイユウシティ めざして およぎますよ!{EOS}"
	.if (. - Route128_Text_IsaiahRematchIntro) > 0x24
	.error "Route128_Text_IsaiahRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahRematchIntro) < 0x24
	.space 0x24 - (. - Route128_Text_IsaiahRematchIntro)
	.endif
	@ data/text/trainers.inc:2990 Route128_Text_IsaiahRematchDefeat (+1 aliases)
	.globl Route128_Text_IsaiahRematchDefeat
Route128_Text_IsaiahRematchDefeat: @ 0x08261235
	.string "また はつしょうり ならず……{EOS}"
	.if (. - Route128_Text_IsaiahRematchDefeat) > 0x10
	.error "Route128_Text_IsaiahRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahRematchDefeat) < 0x10
	.space 0x10 - (. - Route128_Text_IsaiahRematchDefeat)
	.endif
	@ data/text/trainers.inc:2993 Route128_Text_IsaiahPostRematch
	.globl Route128_Text_IsaiahPostRematch
Route128_Text_IsaiahPostRematch: @ 0x08261245
	.string "あきらめなきゃ いつかは かてる\nサイユウシティにも たどりつく……!{EOS}"
	.if (. - Route128_Text_IsaiahPostRematch) > 0x24
	.error "Route128_Text_IsaiahPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_IsaiahPostRematch) < 0x24
	.space 0x24 - (. - Route128_Text_IsaiahPostRematch)
	.endif
	@ data/text/trainers.inc:2996 Route128_Text_KatelynIntro (+1 aliases)
	.globl Route128_Text_KatelynIntro
Route128_Text_KatelynIntro: @ 0x08261269
	.string "トライアスロンは\nすいえい じてんしゃ マラソン\p3つの しゅもくを つづけて こなす\nかこくな レースなの!{EOS}"
	.if (. - Route128_Text_KatelynIntro) > 0x38
	.error "Route128_Text_KatelynIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynIntro) < 0x38
	.space 0x38 - (. - Route128_Text_KatelynIntro)
	.endif
	@ data/text/trainers.inc:2999 Route128_Text_KatelynDefeat (+1 aliases)
	.globl Route128_Text_KatelynDefeat
Route128_Text_KatelynDefeat: @ 0x082612A1
	.string "ポケモンしょうぶも かこく よね……{EOS}"
	.if (. - Route128_Text_KatelynDefeat) > 0x13
	.error "Route128_Text_KatelynDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynDefeat) < 0x13
	.space 0x13 - (. - Route128_Text_KatelynDefeat)
	.endif
	@ data/text/trainers.inc:3002 Route128_Text_KatelynPostBattle
	.globl Route128_Text_KatelynPostBattle
Route128_Text_KatelynPostBattle: @ 0x082612B4
	.string "つぎは じてんしゃ だけど……\nくじけそうだわ……{EOS}"
	.if (. - Route128_Text_KatelynPostBattle) > 0x1a
	.error "Route128_Text_KatelynPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynPostBattle) < 0x1a
	.space 0x1a - (. - Route128_Text_KatelynPostBattle)
	.endif
	@ data/text/trainers.inc:3005 Route128_Text_KatelynRegister
	.globl Route128_Text_KatelynRegister
Route128_Text_KatelynRegister: @ 0x082612CE
	.string "まあ せっかく だし\nまたいつか しょうぶを しましょうよ!{EOS}"
	.if (. - Route128_Text_KatelynRegister) > 0x1f
	.error "Route128_Text_KatelynRegister may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynRegister) < 0x1f
	.space 0x1f - (. - Route128_Text_KatelynRegister)
	.endif
	@ data/text/trainers.inc:3008 Route128_Text_KatelynRematchIntro (+1 aliases)
	.globl Route128_Text_KatelynRematchIntro
Route128_Text_KatelynRematchIntro: @ 0x082612ED
	.string "トライアスロンも ながいけど\nポケモン チャンピオンを めざすのも\lながい みちのり なのね!{EOS}"
	.if (. - Route128_Text_KatelynRematchIntro) > 0x30
	.error "Route128_Text_KatelynRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynRematchIntro) < 0x30
	.space 0x30 - (. - Route128_Text_KatelynRematchIntro)
	.endif
	@ data/text/trainers.inc:3011 Route128_Text_KatelynRematchDefeat (+1 aliases)
	.globl Route128_Text_KatelynRematchDefeat
Route128_Text_KatelynRematchDefeat: @ 0x0826131D
	.string "ほんとっ\nポケモンしょうぶ って きびしい……{EOS}"
	.if (. - Route128_Text_KatelynRematchDefeat) > 0x18
	.error "Route128_Text_KatelynRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynRematchDefeat) < 0x18
	.space 0x18 - (. - Route128_Text_KatelynRematchDefeat)
	.endif
	@ data/text/trainers.inc:3014 Route128_Text_KatelynPostRematch
	.globl Route128_Text_KatelynPostRematch
Route128_Text_KatelynPostRematch: @ 0x08261335
	.string "そろそろ チャンピオンロードに\nちょうせん してみるのも あり かな?{EOS}"
	.if (. - Route128_Text_KatelynPostRematch) > 0x24
	.error "Route128_Text_KatelynPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_KatelynPostRematch) < 0x24
	.space 0x24 - (. - Route128_Text_KatelynPostRematch)
	.endif
	@ data/text/trainers.inc:3017 Route128_Text_AlexaIntro (+1 aliases)
	.globl Route128_Text_AlexaIntro
Route128_Text_AlexaIntro: @ 0x08261359
	.string "ポケモンリーグに ちょうせん するため\nいままで がんばって きた……\pここで まけるわけには いかないわ!{EOS}"
	.if (. - Route128_Text_AlexaIntro) > 0x37
	.error "Route128_Text_AlexaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_AlexaIntro) < 0x37
	.space 0x37 - (. - Route128_Text_AlexaIntro)
	.endif
	@ data/text/trainers.inc:3020 Route128_Text_AlexaDefeat (+1 aliases)
	.globl Route128_Text_AlexaDefeat
Route128_Text_AlexaDefeat: @ 0x08261390
	.string "ああっ!\nなんてこと{EOS}"
	.if (. - Route128_Text_AlexaDefeat) > 0xb
	.error "Route128_Text_AlexaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_AlexaDefeat) < 0xb
	.space 0xb - (. - Route128_Text_AlexaDefeat)
	.endif
	@ data/text/trainers.inc:3023 Route128_Text_AlexaPostBattle
	.globl Route128_Text_AlexaPostBattle
Route128_Text_AlexaPostBattle: @ 0x0826139B
	.string "ここまで きたんですもの\nいちど まけたからって あきらめない{EOS}"
	.if (. - Route128_Text_AlexaPostBattle) > 0x20
	.error "Route128_Text_AlexaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_AlexaPostBattle) < 0x20
	.space 0x20 - (. - Route128_Text_AlexaPostBattle)
	.endif
	@ data/text/trainers.inc:3026 Route128_Text_RubenIntro (+1 aliases)
	.globl Route128_Text_RubenIntro
Route128_Text_RubenIntro: @ 0x082613BB
	.string "わたしの ように つよい\nポケモントレーナーは ほかに いない!{EOS}"
	.if (. - Route128_Text_RubenIntro) > 0x21
	.error "Route128_Text_RubenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_RubenIntro) < 0x21
	.space 0x21 - (. - Route128_Text_RubenIntro)
	.endif
	@ data/text/trainers.inc:3029 Route128_Text_RubenDefeat (+1 aliases)
	.globl Route128_Text_RubenDefeat
Route128_Text_RubenDefeat: @ 0x082613DC
	.string "なんて ことだ……!{EOS}"
	.if (. - Route128_Text_RubenDefeat) > 0xb
	.error "Route128_Text_RubenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_RubenDefeat) < 0xb
	.space 0xb - (. - Route128_Text_RubenDefeat)
	.endif
	@ data/text/trainers.inc:3032 Route128_Text_RubenPostBattle
	.globl Route128_Text_RubenPostBattle
Route128_Text_RubenPostBattle: @ 0x082613E7
	.string "きみの ように つよい\nポケモントレーナーは ほかに いないだろう!{EOS}"
	.if (. - Route128_Text_RubenPostBattle) > 0x23
	.error "Route128_Text_RubenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_RubenPostBattle) < 0x23
	.space 0x23 - (. - Route128_Text_RubenPostBattle)
	.endif
	@ data/text/trainers.inc:3035 Route128_Text_WayneIntro (+1 aliases)
	.globl Route128_Text_WayneIntro
Route128_Text_WayneIntro: @ 0x0826140A
	.string "サイユウに いってみたいから\nたきのぼりを おぼえた\lポケモンを つりあげたんだよ!{EOS}"
	.if (. - Route128_Text_WayneIntro) > 0x2b
	.error "Route128_Text_WayneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_WayneIntro) < 0x2b
	.space 0x2b - (. - Route128_Text_WayneIntro)
	.endif
	@ data/text/trainers.inc:3038 Route128_Text_WayneDefeat (+1 aliases)
	.globl Route128_Text_WayneDefeat
Route128_Text_WayneDefeat: @ 0x08261435
	.string "その いきおい\nまさに たきのぼり!{EOS}"
	.if (. - Route128_Text_WayneDefeat) > 0x13
	.error "Route128_Text_WayneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_WayneDefeat) < 0x13
	.space 0x13 - (. - Route128_Text_WayneDefeat)
	.endif
	@ data/text/trainers.inc:3041 Route128_Text_WaynePostBattle
	.globl Route128_Text_WaynePostBattle
Route128_Text_WaynePostBattle: @ 0x08261448
	.string "しまった!\pたきのぼりを おぼえた ポケモン つっても\nルネの ジムバッジ もってない!{EOS}"
	.if (. - Route128_Text_WaynePostBattle) > 0x2d
	.error "Route128_Text_WaynePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_WaynePostBattle) < 0x2d
	.space 0x2d - (. - Route128_Text_WaynePostBattle)
	.endif
	@ data/text/trainers.inc:3044 Route128_Text_HarrisonIntro (+1 aliases)
	.globl Route128_Text_HarrisonIntro
Route128_Text_HarrisonIntro: @ 0x08261475
	.string "きみが また つよそーだもんね!\nオレ かてっかな?{EOS}"
	.if (. - Route128_Text_HarrisonIntro) > 0x1b
	.error "Route128_Text_HarrisonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_HarrisonIntro) < 0x1b
	.space 0x1b - (. - Route128_Text_HarrisonIntro)
	.endif
	@ data/text/trainers.inc:3047 Route128_Text_HarrisonDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route128_Text_HarrisonDefeat
Route128_Text_HarrisonDefeat: @ 0x08261490
	.string "あっひゃ\nやっぱ かてんわな{EOS}"
	.if (. - Route128_Text_HarrisonDefeat) != 0xf
	.error "Route128_Text_HarrisonDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3050 Route128_Text_HarrisonPostBattle
	.globl Route128_Text_HarrisonPostBattle
Route128_Text_HarrisonPostBattle: @ 0x0826149F
	.string "サイユウシティの まわりは\nつよそーな トレーナーが いっぱいだぜ!\lオレ ばちがいじゃ ないよな?{EOS}"
	.if (. - Route128_Text_HarrisonPostBattle) > 0x33
	.error "Route128_Text_HarrisonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_HarrisonPostBattle) < 0x33
	.space 0x33 - (. - Route128_Text_HarrisonPostBattle)
	.endif
	@ data/text/trainers.inc:3053 Route128_Text_CarleeIntro (+1 aliases)
	.globl Route128_Text_CarleeIntro
Route128_Text_CarleeIntro: @ 0x082614D2
	.string "この へんは ひざしが\nいちだんと つよいわねえ!{EOS}"
	.if (. - Route128_Text_CarleeIntro) > 0x1a
	.error "Route128_Text_CarleeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_CarleeIntro) < 0x1a
	.space 0x1a - (. - Route128_Text_CarleeIntro)
	.endif
	@ data/text/trainers.inc:3056 Route128_Text_CarleeDefeat (+1 aliases)
	.globl Route128_Text_CarleeDefeat
Route128_Text_CarleeDefeat: @ 0x082614EC
	.string "まぶしくて よく みえなかったの!{EOS}"
	.if (. - Route128_Text_CarleeDefeat) > 0x12
	.error "Route128_Text_CarleeDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_CarleeDefeat) < 0x12
	.space 0x12 - (. - Route128_Text_CarleeDefeat)
	.endif
	@ data/text/trainers.inc:3059 Route128_Text_CarleePostBattle
	.globl Route128_Text_CarleePostBattle
Route128_Text_CarleePostBattle: @ 0x082614FE
	.string "そろそろ もどって\nひやけどめ ぬりなおさなきゃ{EOS}"
	.if (. - Route128_Text_CarleePostBattle) > 0x19
	.error "Route128_Text_CarleePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route128_Text_CarleePostBattle) < 0x19
	.space 0x19 - (. - Route128_Text_CarleePostBattle)
	.endif
	@ data/text/trainers.inc:3062 Route129_Text_ChaseIntro (+1 aliases)
	.globl Route129_Text_ChaseIntro
Route129_Text_ChaseIntro: @ 0x08261517
	.string "オレは しょしんしゃ トライアスリート\nはじめての レースで きんちょう!{EOS}"
	.if (. - Route129_Text_ChaseIntro) > 0x26
	.error "Route129_Text_ChaseIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ChaseIntro) < 0x26
	.space 0x26 - (. - Route129_Text_ChaseIntro)
	.endif
	@ data/text/trainers.inc:3065 Route129_Text_ChaseDefeat (+1 aliases)
	.globl Route129_Text_ChaseDefeat
Route129_Text_ChaseDefeat: @ 0x0826153D
	.string "うおー!\nまけてしまったーっ!{EOS}"
	.if (. - Route129_Text_ChaseDefeat) > 0x10
	.error "Route129_Text_ChaseDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ChaseDefeat) < 0x10
	.space 0x10 - (. - Route129_Text_ChaseDefeat)
	.endif
	@ data/text/trainers.inc:3068 Route129_Text_ChasePostBattle
	.globl Route129_Text_ChasePostBattle
Route129_Text_ChasePostBattle: @ 0x0826154D
	.string "きんちょう していたら\nじつりょくが だせないよな!{EOS}"
	.if (. - Route129_Text_ChasePostBattle) > 0x1b
	.error "Route129_Text_ChasePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ChasePostBattle) < 0x1b
	.space 0x1b - (. - Route129_Text_ChasePostBattle)
	.endif
	@ data/text/trainers.inc:3071 Route129_Text_AllisonIntro (+1 aliases)
	.globl Route129_Text_AllisonIntro
Route129_Text_AllisonIntro: @ 0x08261568
	.string "トライアスロンの とちゅう だけど……\nポケモンしょうぶを しようよ!{EOS}"
	.if (. - Route129_Text_AllisonIntro) > 0x24
	.error "Route129_Text_AllisonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_AllisonIntro) < 0x24
	.space 0x24 - (. - Route129_Text_AllisonIntro)
	.endif
	@ data/text/trainers.inc:3074 Route129_Text_AllisonDefeat (+1 aliases)
	.globl Route129_Text_AllisonDefeat
Route129_Text_AllisonDefeat: @ 0x0826158C
	.string "かてると おもったのにーっ!{EOS}"
	.if (. - Route129_Text_AllisonDefeat) > 0xf
	.error "Route129_Text_AllisonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_AllisonDefeat) < 0xf
	.space 0xf - (. - Route129_Text_AllisonDefeat)
	.endif
	@ data/text/trainers.inc:3077 Route129_Text_AllisonPostBattle
	.globl Route129_Text_AllisonPostBattle
Route129_Text_AllisonPostBattle: @ 0x0826159B
	.string "だいしぜんを あいてに\nじぶんの ちからを ためす ことも\lトライアスロンの だいごみ!{EOS}"
	.if (. - Route129_Text_AllisonPostBattle) > 0x2d
	.error "Route129_Text_AllisonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_AllisonPostBattle) < 0x2d
	.space 0x2d - (. - Route129_Text_AllisonPostBattle)
	.endif
	@ data/text/trainers.inc:3080 Route129_Text_ReedIntro (+1 aliases)
	.globl Route129_Text_ReedIntro
Route129_Text_ReedIntro: @ 0x082615C8
	.string "ホラホラ!\nとっとと しょうぶ しようぜ!{EOS}"
	.if (. - Route129_Text_ReedIntro) > 0x16
	.error "Route129_Text_ReedIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ReedIntro) < 0x16
	.space 0x16 - (. - Route129_Text_ReedIntro)
	.endif
	@ data/text/trainers.inc:3083 Route129_Text_ReedDefeat (+1 aliases)
	.globl Route129_Text_ReedDefeat
Route129_Text_ReedDefeat: @ 0x082615DE
	.string "まけた まけたよ\nとっとと おわろうぜ!{EOS}"
	.if (. - Route129_Text_ReedDefeat) > 0x15
	.error "Route129_Text_ReedDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ReedDefeat) < 0x15
	.space 0x15 - (. - Route129_Text_ReedDefeat)
	.endif
	@ data/text/trainers.inc:3086 Route129_Text_ReedPostBattle
	.globl Route129_Text_ReedPostBattle
Route129_Text_ReedPostBattle: @ 0x082615F3
	.string "まけたら なにも ないさ\nとっとと かえると するか!{EOS}"
	.if (. - Route129_Text_ReedPostBattle) > 0x1c
	.error "Route129_Text_ReedPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ReedPostBattle) < 0x1c
	.space 0x1c - (. - Route129_Text_ReedPostBattle)
	.endif
	@ data/text/trainers.inc:3089 Route129_Text_TishaIntro (+1 aliases)
	.globl Route129_Text_TishaIntro
Route129_Text_TishaIntro: @ 0x0826160F
	.string "のーんびり のーんびり やりましょうか?{EOS}"
	.if (. - Route129_Text_TishaIntro) > 0x15
	.error "Route129_Text_TishaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_TishaIntro) < 0x15
	.space 0x15 - (. - Route129_Text_TishaIntro)
	.endif
	@ data/text/trainers.inc:3092 Route129_Text_TishaDefeat (+1 aliases)
	.globl Route129_Text_TishaDefeat
Route129_Text_TishaDefeat: @ 0x08261624
	.string "あらら\nもっと のんびり したかったなあ{EOS}"
	.if (. - Route129_Text_TishaDefeat) > 0x15
	.error "Route129_Text_TishaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_TishaDefeat) < 0x15
	.space 0x15 - (. - Route129_Text_TishaDefeat)
	.endif
	@ data/text/trainers.inc:3095 Route129_Text_TishaPostBattle
	.globl Route129_Text_TishaPostBattle
Route129_Text_TishaPostBattle: @ 0x08261639
	.string "あせって ミスを するのって イヤでしょ?\nのんびり やることに してるのよ{EOS}"
	.if (. - Route129_Text_TishaPostBattle) > 0x27
	.error "Route129_Text_TishaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_TishaPostBattle) < 0x27
	.space 0x27 - (. - Route129_Text_TishaPostBattle)
	.endif
	@ data/text/trainers.inc:3098 Route129_Text_ClarenceIntro (+1 aliases)
	.globl Route129_Text_ClarenceIntro
Route129_Text_ClarenceIntro: @ 0x08261660
	.string "なみのりも けっこう たいへんだろ?{EOS}"
	.if (. - Route129_Text_ClarenceIntro) > 0x13
	.error "Route129_Text_ClarenceIntro may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ClarenceIntro) < 0x13
	.space 0x13 - (. - Route129_Text_ClarenceIntro)
	.endif
	@ data/text/trainers.inc:3101 Route129_Text_ClarenceDefeat (+1 aliases)
	.globl Route129_Text_ClarenceDefeat
Route129_Text_ClarenceDefeat: @ 0x08261673
	.string "かつのって むずかしいなあ{EOS}"
	.if (. - Route129_Text_ClarenceDefeat) > 0xe
	.error "Route129_Text_ClarenceDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ClarenceDefeat) < 0xe
	.space 0xe - (. - Route129_Text_ClarenceDefeat)
	.endif
	@ data/text/trainers.inc:3104 Route129_Text_ClarencePostBattle
	.globl Route129_Text_ClarencePostBattle
Route129_Text_ClarencePostBattle: @ 0x08261681
	.string "ポケモンリーグを めざしてるのか?\nがんばれ がんばれよ!{EOS}"
	.if (. - Route129_Text_ClarencePostBattle) > 0x1e
	.error "Route129_Text_ClarencePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route129_Text_ClarencePostBattle) < 0x1e
	.space 0x1e - (. - Route129_Text_ClarencePostBattle)
	.endif
	@ data/text/trainers.inc:3107 Route130_Text_RodneyIntro (+1 aliases)
	.globl Route130_Text_RodneyIntro
Route130_Text_RodneyIntro: @ 0x0826169F
	.string "うみの ドまんなかで\nトレーナーに であうとは めずらしいな\lイッパツ しょうぶ するか!?{EOS}"
	.if (. - Route130_Text_RodneyIntro) > 0x2f
	.error "Route130_Text_RodneyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_RodneyIntro) < 0x2f
	.space 0x2f - (. - Route130_Text_RodneyIntro)
	.endif
	@ data/text/trainers.inc:3110 Route130_Text_RodneyDefeat (+1 aliases)
	.globl Route130_Text_RodneyDefeat
Route130_Text_RodneyDefeat: @ 0x082616CE
	.string "なんて つよい こどもだ……{EOS}"
	.if (. - Route130_Text_RodneyDefeat) > 0xf
	.error "Route130_Text_RodneyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_RodneyDefeat) < 0xf
	.space 0xf - (. - Route130_Text_RodneyDefeat)
	.endif
	@ data/text/trainers.inc:3113 Route130_Text_RodneyPostBattle
	.globl Route130_Text_RodneyPostBattle
Route130_Text_RodneyPostBattle: @ 0x082616DD
	.string "きびしい たたかいを くぐりぬけてきた\nいい めを しているぜ!{EOS}"
	.if (. - Route130_Text_RodneyPostBattle) > 0x21
	.error "Route130_Text_RodneyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_RodneyPostBattle) < 0x21
	.space 0x21 - (. - Route130_Text_RodneyPostBattle)
	.endif
	@ data/text/trainers.inc:3116 Route130_Text_KatieIntro (+1 aliases)
	.globl Route130_Text_KatieIntro
Route130_Text_KatieIntro: @ 0x082616FE
	.string "あおい うみ\nブルーな こころ\lいやされる……{EOS}"
	.if (. - Route130_Text_KatieIntro) > 0x18
	.error "Route130_Text_KatieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_KatieIntro) < 0x18
	.space 0x18 - (. - Route130_Text_KatieIntro)
	.endif
	@ data/text/trainers.inc:3119 Route130_Text_KatieDefeat (+1 aliases)
	.globl Route130_Text_KatieDefeat
Route130_Text_KatieDefeat: @ 0x08261716
	.string "うみ ひろく\nポケモン せかい\lまた ひろし……{EOS}"
	.if (. - Route130_Text_KatieDefeat) > 0x19
	.error "Route130_Text_KatieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_KatieDefeat) < 0x19
	.space 0x19 - (. - Route130_Text_KatieDefeat)
	.endif
	@ data/text/trainers.inc:3122 Route130_Text_KatiePostBattle
	.globl Route130_Text_KatiePostBattle
Route130_Text_KatiePostBattle: @ 0x0826172F
	.string "こどもたち\nポケモン チャンプ\lめざしてる……{EOS}"
	.if (. - Route130_Text_KatiePostBattle) > 0x18
	.error "Route130_Text_KatiePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_KatiePostBattle) < 0x18
	.space 0x18 - (. - Route130_Text_KatiePostBattle)
	.endif
	@ data/text/trainers.inc:3125 Route130_Text_SantiagoIntro (+1 aliases)
	.globl Route130_Text_SantiagoIntro
Route130_Text_SantiagoIntro: @ 0x08261747
	.string "なにも ない うみに うかんでると……\nへいわだなあー……{EOS}"
	.if (. - Route130_Text_SantiagoIntro) > 0x1e
	.error "Route130_Text_SantiagoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_SantiagoIntro) < 0x1e
	.space 0x1e - (. - Route130_Text_SantiagoIntro)
	.endif
	@ data/text/trainers.inc:3128 Route130_Text_SantiagoDefeat (+1 aliases)
	.globl Route130_Text_SantiagoDefeat
Route130_Text_SantiagoDefeat: @ 0x08261765
	.string "へいわボケ してて まけました!{EOS}"
	.if (. - Route130_Text_SantiagoDefeat) > 0x11
	.error "Route130_Text_SantiagoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_SantiagoDefeat) < 0x11
	.space 0x11 - (. - Route130_Text_SantiagoDefeat)
	.endif
	@ data/text/trainers.inc:3131 Route130_Text_SantiagoPostBattle
	.globl Route130_Text_SantiagoPostBattle
Route130_Text_SantiagoPostBattle: @ 0x08261776
	.string "こうして およいだり しょうぶしたり……\nオレ しあわせだなあー……{EOS}"
	.if (. - Route130_Text_SantiagoPostBattle) > 0x23
	.error "Route130_Text_SantiagoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route130_Text_SantiagoPostBattle) < 0x23
	.space 0x23 - (. - Route130_Text_SantiagoPostBattle)
	.endif
	@ data/text/trainers.inc:3134 Route131_Text_RichardIntro (+1 aliases)
	.globl Route131_Text_RichardIntro
Route131_Text_RichardIntro: @ 0x08261799
	.string "うみには ポケモンが たくさん いるからね\nおよいで わたるのも くろう するよ!{EOS}"
	.if (. - Route131_Text_RichardIntro) > 0x2a
	.error "Route131_Text_RichardIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_RichardIntro) < 0x2a
	.space 0x2a - (. - Route131_Text_RichardIntro)
	.endif
	@ data/text/trainers.inc:3137 Route131_Text_RichardDefeat (+1 aliases)
	.globl Route131_Text_RichardDefeat
Route131_Text_RichardDefeat: @ 0x082617C3
	.string "トレーナーの そだてた ポケモンは\nホントに つよいなぁ……{EOS}"
	.if (. - Route131_Text_RichardDefeat) > 0x1f
	.error "Route131_Text_RichardDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_RichardDefeat) < 0x1f
	.space 0x1f - (. - Route131_Text_RichardDefeat)
	.endif
	@ data/text/trainers.inc:3140 Route131_Text_RichardPostBattle
	.globl Route131_Text_RichardPostBattle
Route131_Text_RichardPostBattle: @ 0x082617E2
	.string "ひいひい…… つかれた……\nいきは よいよい かえりは こわい……\lかえりの たいりょく のこってるかなあ……{EOS}"
	.if (. - Route131_Text_RichardPostBattle) > 0x38
	.error "Route131_Text_RichardPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_RichardPostBattle) < 0x38
	.space 0x38 - (. - Route131_Text_RichardPostBattle)
	.endif
	@ data/text/trainers.inc:3143 Route131_Text_HermanIntro (+1 aliases)
	.globl Route131_Text_HermanIntro
Route131_Text_HermanIntro: @ 0x0826181A
	.string "うみ うみ うみ……\nみわたす かぎり うみ……\lうみは もう あきたぞーっ!{EOS}"
	.if (. - Route131_Text_HermanIntro) > 0x28
	.error "Route131_Text_HermanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_HermanIntro) < 0x28
	.space 0x28 - (. - Route131_Text_HermanIntro)
	.endif
	@ data/text/trainers.inc:3146 Route131_Text_HermanDefeat (+1 aliases)
	.globl Route131_Text_HermanDefeat
Route131_Text_HermanDefeat: @ 0x08261842
	.string "ひょえええええっ!{EOS}"
	.if (. - Route131_Text_HermanDefeat) > 0xa
	.error "Route131_Text_HermanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_HermanDefeat) < 0xa
	.space 0xa - (. - Route131_Text_HermanDefeat)
	.endif
	@ data/text/trainers.inc:3149 Route131_Text_HermanPostBattle
	.globl Route131_Text_HermanPostBattle
Route131_Text_HermanPostBattle: @ 0x0826184C
	.string "うみに あきても\nおよぎ つづけるしか ないのか\pそんな オレは\nねっからの スイマー……{EOS}"
	.if (. - Route131_Text_HermanPostBattle) > 0x2e
	.error "Route131_Text_HermanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_HermanPostBattle) < 0x2e
	.space 0x2e - (. - Route131_Text_HermanPostBattle)
	.endif
	@ data/text/trainers.inc:3152 Route131_Text_SusieIntro (+1 aliases)
	.globl Route131_Text_SusieIntro
Route131_Text_SusieIntro: @ 0x0826187A
	.string "ちょっと あんた\nわたしと しょうぶ しましょ!{EOS}"
	.if (. - Route131_Text_SusieIntro) > 0x19
	.error "Route131_Text_SusieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_SusieIntro) < 0x19
	.space 0x19 - (. - Route131_Text_SusieIntro)
	.endif
	@ data/text/trainers.inc:3155 Route131_Text_SusieDefeat (+1 aliases)
	.globl Route131_Text_SusieDefeat
Route131_Text_SusieDefeat: @ 0x08261893
	.string "みかけに よらず\nつよいわねーっ!{EOS}"
	.if (. - Route131_Text_SusieDefeat) > 0x12
	.error "Route131_Text_SusieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_SusieDefeat) < 0x12
	.space 0x12 - (. - Route131_Text_SusieDefeat)
	.endif
	@ data/text/trainers.inc:3158 Route131_Text_SusiePostBattle
	.globl Route131_Text_SusiePostBattle
Route131_Text_SusiePostBattle: @ 0x082618A5
	.string "あっちで うみは あきた とか いってる\nおとこが いるでしょ?\pアレ くちだけ なのよ\nホントは うみが すきで しょうがないの!{EOS}"
	.if (. - Route131_Text_SusiePostBattle) > 0x43
	.error "Route131_Text_SusiePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_SusiePostBattle) < 0x43
	.space 0x43 - (. - Route131_Text_SusiePostBattle)
	.endif
	@ data/text/trainers.inc:3161 Route131_Text_KaraIntro (+1 aliases)
	.globl Route131_Text_KaraIntro
Route131_Text_KaraIntro: @ 0x082618E8
	.string "なんで オトコって\nビキニが すき なのかしらね!\pみんな わたしの こと\nジロジロ みるのよ!{EOS}"
	.if (. - Route131_Text_KaraIntro) > 0x31
	.error "Route131_Text_KaraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KaraIntro) < 0x31
	.space 0x31 - (. - Route131_Text_KaraIntro)
	.endif
	@ data/text/trainers.inc:3164 Route131_Text_KaraDefeat (+1 aliases)
	.globl Route131_Text_KaraDefeat
Route131_Text_KaraDefeat: @ 0x08261919
	.string "じつりょくが ちがい すぎるわ……!{EOS}"
	.if (. - Route131_Text_KaraDefeat) > 0x13
	.error "Route131_Text_KaraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KaraDefeat) < 0x13
	.space 0x13 - (. - Route131_Text_KaraDefeat)
	.endif
	@ data/text/trainers.inc:3167 Route131_Text_KaraPostBattle
	.globl Route131_Text_KaraPostBattle
Route131_Text_KaraPostBattle: @ 0x0826192C
	.string "みんな ビキニを みてるんじゃなくて\nわたしの びぼうが げんいん かしら……?{EOS}"
	.if (. - Route131_Text_KaraPostBattle) > 0x29
	.error "Route131_Text_KaraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KaraPostBattle) < 0x29
	.space 0x29 - (. - Route131_Text_KaraPostBattle)
	.endif
	@ data/text/trainers.inc:3170 Route131_Text_ReliIntro (+1 aliases)
	.globl Route131_Text_ReliIntro
Route131_Text_ReliIntro: @ 0x08261955
	.string "アミ『きょうだい ちからを あわせて\nがんばっちゃおうかな!?{EOS}"
	.if (. - Route131_Text_ReliIntro) > 0x20
	.error "Route131_Text_ReliIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_ReliIntro) < 0x20
	.space 0x20 - (. - Route131_Text_ReliIntro)
	.endif
	@ data/text/trainers.inc:3173 Route131_Text_ReliDefeat (+1 aliases)
	.globl Route131_Text_ReliDefeat
Route131_Text_ReliDefeat: @ 0x08261975
	.string "アミ『きょうだいで ちからを あわせても\nかてなかったわ{EOS}"
	.if (. - Route131_Text_ReliDefeat) > 0x1d
	.error "Route131_Text_ReliDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_ReliDefeat) < 0x1d
	.space 0x1d - (. - Route131_Text_ReliDefeat)
	.endif
	@ data/text/trainers.inc:3176 Route131_Text_ReliPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route131_Text_ReliPostBattle
Route131_Text_ReliPostBattle: @ 0x08261992
	.string "アミ『キナギの にんげんは\nうまれた ときから\lうみと ポケモンと いっしょ なんだ{EOS}"
	.if (. - Route131_Text_ReliPostBattle) != 0x2b
	.error "Route131_Text_ReliPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3179 Route131_Text_ReliNotEnoughMons (+1 aliases)
	.globl Route131_Text_ReliNotEnoughMons
Route131_Text_ReliNotEnoughMons: @ 0x082619BD
	.string "アミ『ポケモン 2ひき いないの?\nポケモンしょうぶ たのしめないわね{EOS}"
	.if (. - Route131_Text_ReliNotEnoughMons) > 0x24
	.error "Route131_Text_ReliNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_ReliNotEnoughMons) < 0x24
	.space 0x24 - (. - Route131_Text_ReliNotEnoughMons)
	.endif
	@ data/text/trainers.inc:3182 Route131_Text_IanIntro (+1 aliases)
	.globl Route131_Text_IanIntro
Route131_Text_IanIntro: @ 0x082619E1
	.string "カツ『きょうだい ちからを あわせて\nがんばりまーす!!{EOS}"
	.if (. - Route131_Text_IanIntro) > 0x1d
	.error "Route131_Text_IanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_IanIntro) < 0x1d
	.space 0x1d - (. - Route131_Text_IanIntro)
	.endif
	@ data/text/trainers.inc:3185 Route131_Text_IanDefeat (+1 aliases)
	.globl Route131_Text_IanDefeat
Route131_Text_IanDefeat: @ 0x082619FE
	.string "カツ『あねきと がんばったのに\nかてなかったよ……{EOS}"
	.if (. - Route131_Text_IanDefeat) > 0x1a
	.error "Route131_Text_IanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_IanDefeat) < 0x1a
	.space 0x1a - (. - Route131_Text_IanDefeat)
	.endif
	@ data/text/trainers.inc:3188 Route131_Text_IanPostBattle
	.globl Route131_Text_IanPostBattle
Route131_Text_IanPostBattle: @ 0x08261A18
	.string "カツ『キナギって うみの うえに\nうかんでる まち だろ?\pだから うみが つづくかぎり\nそこは キナギ なんだよ!{EOS}"
	.if (. - Route131_Text_IanPostBattle) > 0x3b
	.error "Route131_Text_IanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_IanPostBattle) < 0x3b
	.space 0x3b - (. - Route131_Text_IanPostBattle)
	.endif
	@ data/text/trainers.inc:3191 Route131_Text_IanNotEnoughMons (+1 aliases)
	.globl Route131_Text_IanNotEnoughMons
Route131_Text_IanNotEnoughMons: @ 0x08261A53
	.string "カツ『ポケモン 2ひき いたら\nポケモンしょうぶ してやるよ!{EOS}"
	.if (. - Route131_Text_IanNotEnoughMons) > 0x20
	.error "Route131_Text_IanNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_IanNotEnoughMons) < 0x20
	.space 0x20 - (. - Route131_Text_IanNotEnoughMons)
	.endif
	@ data/text/trainers.inc:3194 Route131_Text_TaliaIntro (+1 aliases)
	.globl Route131_Text_TaliaIntro
Route131_Text_TaliaIntro: @ 0x08261A73
	.string "わたしに かてたら\nすごい じょうほう おしえてあげる!{EOS}"
	.if (. - Route131_Text_TaliaIntro) > 0x1d
	.error "Route131_Text_TaliaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_TaliaIntro) < 0x1d
	.space 0x1d - (. - Route131_Text_TaliaIntro)
	.endif
	@ data/text/trainers.inc:3197 Route131_Text_TaliaDefeat (+1 aliases)
	.globl Route131_Text_TaliaDefeat
Route131_Text_TaliaDefeat: @ 0x08261A90
	.string "あら まけちゃったのね{EOS}"
	.if (. - Route131_Text_TaliaDefeat) > 0xc
	.error "Route131_Text_TaliaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_TaliaDefeat) < 0xc
	.space 0xc - (. - Route131_Text_TaliaDefeat)
	.endif
	@ data/text/trainers.inc:3200 Route131_Text_TaliaPostBattle
	.globl Route131_Text_TaliaPostBattle
Route131_Text_TaliaPostBattle: @ 0x08261A9C
	.string "この そばに ふしぎな ばしょが あるわよ\nたかい とうが そびえているの!\lみてきたら どうかしら?{EOS}"
	.if (. - Route131_Text_TaliaPostBattle) > 0x34
	.error "Route131_Text_TaliaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_TaliaPostBattle) < 0x34
	.space 0x34 - (. - Route131_Text_TaliaPostBattle)
	.endif
	@ data/text/trainers.inc:3203 Route131_Text_KevinIntro (+1 aliases)
	.globl Route131_Text_KevinIntro
Route131_Text_KevinIntro: @ 0x08261AD0
	.string "キナギには おおらかな やつ ばかりだぜ!\nぜったい おこったり しないんだ\lもちろん オレもな{EOS}"
	.if (. - Route131_Text_KevinIntro) > 0x31
	.error "Route131_Text_KevinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KevinIntro) < 0x31
	.space 0x31 - (. - Route131_Text_KevinIntro)
	.endif
	@ data/text/trainers.inc:3206 Route131_Text_KevinDefeat (+1 aliases)
	.globl Route131_Text_KevinDefeat
Route131_Text_KevinDefeat: @ 0x08261B01
	.string "あ……っ{EOS}"
	.if (. - Route131_Text_KevinDefeat) > 0x5
	.error "Route131_Text_KevinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KevinDefeat) < 0x5
	.space 0x5 - (. - Route131_Text_KevinDefeat)
	.endif
	@ data/text/trainers.inc:3209 Route131_Text_KevinPostBattle
	.globl Route131_Text_KevinPostBattle
Route131_Text_KevinPostBattle: @ 0x08261B06
	.string "ちっ! ……じゃ なかった\nお おこってない おこってないよ!\p……ハハ つよいね きみは!\nはっハッは!{EOS}"
	.if (. - Route131_Text_KevinPostBattle) > 0x36
	.error "Route131_Text_KevinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route131_Text_KevinPostBattle) < 0x36
	.space 0x36 - (. - Route131_Text_KevinPostBattle)
	.endif
	@ data/text/trainers.inc:3212 Route132_Text_GilbertIntro (+1 aliases)
	.globl Route132_Text_GilbertIntro
Route132_Text_GilbertIntro: @ 0x08261B3C
	.string "ちいさい ころは よく カゼを ひいたけど\nすいえいを はじめて こんなに じょうぶ!{EOS}"
	.if (. - Route132_Text_GilbertIntro) > 0x2c
	.error "Route132_Text_GilbertIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_GilbertIntro) < 0x2c
	.space 0x2c - (. - Route132_Text_GilbertIntro)
	.endif
	@ data/text/trainers.inc:3215 Route132_Text_GilbertDefeat (+1 aliases)
	.globl Route132_Text_GilbertDefeat
Route132_Text_GilbertDefeat: @ 0x08261B68
	.string "もっと つよくなりたい……!{EOS}"
	.if (. - Route132_Text_GilbertDefeat) > 0xf
	.error "Route132_Text_GilbertDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_GilbertDefeat) < 0xf
	.space 0xf - (. - Route132_Text_GilbertDefeat)
	.endif
	@ data/text/trainers.inc:3218 Route132_Text_GilbertPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route132_Text_GilbertPostBattle
Route132_Text_GilbertPostBattle: @ 0x08261B77
	.string "ポケモン トレーナーも\nのやまを あるき まわるから\lとっても けんこうてき だよねー!{EOS}"
	.if (. - Route132_Text_GilbertPostBattle) != 0x2d
	.error "Route132_Text_GilbertPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3221 Route132_Text_DanaIntro (+1 aliases)
	.globl Route132_Text_DanaIntro
Route132_Text_DanaIntro: @ 0x08261BA4
	.string "ながれの つよい ところでは\nおよがないように しているのよ{EOS}"
	.if (. - Route132_Text_DanaIntro) > 0x1f
	.error "Route132_Text_DanaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DanaIntro) < 0x1f
	.space 0x1f - (. - Route132_Text_DanaIntro)
	.endif
	@ data/text/trainers.inc:3224 Route132_Text_DanaDefeat (+1 aliases)
	.globl Route132_Text_DanaDefeat
Route132_Text_DanaDefeat: @ 0x08261BC3
	.string "いやああああんっ!{EOS}"
	.if (. - Route132_Text_DanaDefeat) > 0xa
	.error "Route132_Text_DanaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DanaDefeat) < 0xa
	.space 0xa - (. - Route132_Text_DanaDefeat)
	.endif
	@ data/text/trainers.inc:3227 Route132_Text_DanaPostBattle
	.globl Route132_Text_DanaPostBattle
Route132_Text_DanaPostBattle: @ 0x08261BCD
	.string "ながされると じぶんが どこに いるのか\nわからなく なっちゃうの……{EOS}"
	.if (. - Route132_Text_DanaPostBattle) > 0x24
	.error "Route132_Text_DanaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DanaPostBattle) < 0x24
	.space 0x24 - (. - Route132_Text_DanaPostBattle)
	.endif
	@ data/text/trainers.inc:3230 Route132_Text_RonaldIntro (+1 aliases)
	.globl Route132_Text_RonaldIntro
Route132_Text_RonaldIntro: @ 0x08261BF1
	.string "かつか まけるか\nやれば わかることだろ!{EOS}"
	.if (. - Route132_Text_RonaldIntro) > 0x16
	.error "Route132_Text_RonaldIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_RonaldIntro) < 0x16
	.space 0x16 - (. - Route132_Text_RonaldIntro)
	.endif
	@ data/text/trainers.inc:3233 Route132_Text_RonaldDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route132_Text_RonaldDefeat
Route132_Text_RonaldDefeat: @ 0x08261C07
	.string "わーん\nまけて しまった{EOS}"
	.if (. - Route132_Text_RonaldDefeat) != 0xd
	.error "Route132_Text_RonaldDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:3236 Route132_Text_RonaldPostBattle
	.globl Route132_Text_RonaldPostBattle
Route132_Text_RonaldPostBattle: @ 0x08261C14
	.string "かてると わかる しょうぶは しない!\nかつか まけるか\lその ギリギリの かんじが いいんだ!{EOS}"
	.if (. - Route132_Text_RonaldPostBattle) > 0x31
	.error "Route132_Text_RonaldPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_RonaldPostBattle) < 0x31
	.space 0x31 - (. - Route132_Text_RonaldPostBattle)
	.endif
	@ data/text/trainers.inc:3239 Route132_Text_KiyoIntro (+1 aliases)
	.globl Route132_Text_KiyoIntro
Route132_Text_KiyoIntro: @ 0x08261C45
	.string "24じかん ポケモンのこと かんがえてる\nそんな おれに かてると おもうか!?{EOS}"
	.if (. - Route132_Text_KiyoIntro) > 0x29
	.error "Route132_Text_KiyoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_KiyoIntro) < 0x29
	.space 0x29 - (. - Route132_Text_KiyoIntro)
	.endif
	@ data/text/trainers.inc:3242 Route132_Text_KiyoDefeat (+1 aliases)
	.globl Route132_Text_KiyoDefeat
Route132_Text_KiyoDefeat: @ 0x08261C6E
	.string "まけた\nおまえさんには まけたわ{EOS}"
	.if (. - Route132_Text_KiyoDefeat) > 0x11
	.error "Route132_Text_KiyoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_KiyoDefeat) < 0x11
	.space 0x11 - (. - Route132_Text_KiyoDefeat)
	.endif
	@ data/text/trainers.inc:3245 Route132_Text_KiyoPostBattle
	.globl Route132_Text_KiyoPostBattle
Route132_Text_KiyoPostBattle: @ 0x08261C7F
	.string "くう……\nおまえも ポケモンばか だな!\p24じかん ポケモンのこと ばかり\nかんがえて いるんだろ!{EOS}"
	.if (. - Route132_Text_KiyoPostBattle) > 0x34
	.error "Route132_Text_KiyoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_KiyoPostBattle) < 0x34
	.space 0x34 - (. - Route132_Text_KiyoPostBattle)
	.endif
	@ data/text/trainers.inc:3248 Route132_Text_MakaylaIntro (+1 aliases)
	.globl Route132_Text_MakaylaIntro
Route132_Text_MakaylaIntro: @ 0x08261CB3
	.string "いつも いっしょの じいさんが\nいなくても かてるわい!{EOS}"
	.if (. - Route132_Text_MakaylaIntro) > 0x1d
	.error "Route132_Text_MakaylaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_MakaylaIntro) < 0x1d
	.space 0x1d - (. - Route132_Text_MakaylaIntro)
	.endif
	@ data/text/trainers.inc:3251 Route132_Text_MakaylaDefeat (+1 aliases)
	.globl Route132_Text_MakaylaDefeat
Route132_Text_MakaylaDefeat: @ 0x08261CD0
	.string "あら やっぱり ダメかね{EOS}"
	.if (. - Route132_Text_MakaylaDefeat) > 0xd
	.error "Route132_Text_MakaylaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_MakaylaDefeat) < 0xd
	.space 0xd - (. - Route132_Text_MakaylaDefeat)
	.endif
	@ data/text/trainers.inc:3254 Route132_Text_MakaylaPostBattle
	.globl Route132_Text_MakaylaPostBattle
Route132_Text_MakaylaPostBattle: @ 0x08261CDD
	.string "あの わかい おとこのこ\nじいさんの わかい ころに そっくりじゃ\lポッ……{EOS}"
	.if (. - Route132_Text_MakaylaPostBattle) > 0x27
	.error "Route132_Text_MakaylaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_MakaylaPostBattle) < 0x27
	.space 0x27 - (. - Route132_Text_MakaylaPostBattle)
	.endif
	@ data/text/trainers.inc:3257 Route132_Text_JonathanIntro (+1 aliases)
	.globl Route132_Text_JonathanIntro
Route132_Text_JonathanIntro: @ 0x08261D04
	.string "さっき から へんな しせんを\nかんじると おもったら キミか?{EOS}"
	.if (. - Route132_Text_JonathanIntro) > 0x21
	.error "Route132_Text_JonathanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_JonathanIntro) < 0x21
	.space 0x21 - (. - Route132_Text_JonathanIntro)
	.endif
	@ data/text/trainers.inc:3260 Route132_Text_JonathanDefeat (+1 aliases)
	.globl Route132_Text_JonathanDefeat
Route132_Text_JonathanDefeat: @ 0x08261D25
	.string "へえ! つよいね!{EOS}"
	.if (. - Route132_Text_JonathanDefeat) > 0xa
	.error "Route132_Text_JonathanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_JonathanDefeat) < 0xa
	.space 0xa - (. - Route132_Text_JonathanDefeat)
	.endif
	@ data/text/trainers.inc:3263 Route132_Text_JonathanPostBattle
	.globl Route132_Text_JonathanPostBattle
Route132_Text_JonathanPostBattle: @ 0x08261D2F
	.string "だれかが ぼくの ことを\nみているきが して おちつかないっ!{EOS}"
	.if (. - Route132_Text_JonathanPostBattle) > 0x20
	.error "Route132_Text_JonathanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_JonathanPostBattle) < 0x20
	.space 0x20 - (. - Route132_Text_JonathanPostBattle)
	.endif
	@ data/text/trainers.inc:3266 Route132_Text_PaxtonIntro (+1 aliases)
	.globl Route132_Text_PaxtonIntro
Route132_Text_PaxtonIntro: @ 0x08261D4F
	.string "いつも いっしょの ばあさんは どこかな?\nひとりで かてるじゃろか{EOS}"
	.if (. - Route132_Text_PaxtonIntro) > 0x23
	.error "Route132_Text_PaxtonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_PaxtonIntro) < 0x23
	.space 0x23 - (. - Route132_Text_PaxtonIntro)
	.endif
	@ data/text/trainers.inc:3269 Route132_Text_PaxtonDefeat (+1 aliases)
	.globl Route132_Text_PaxtonDefeat
Route132_Text_PaxtonDefeat: @ 0x08261D72
	.string "ああ やっぱり ダメかね{EOS}"
	.if (. - Route132_Text_PaxtonDefeat) > 0xd
	.error "Route132_Text_PaxtonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_PaxtonDefeat) < 0xd
	.space 0xd - (. - Route132_Text_PaxtonDefeat)
	.endif
	@ data/text/trainers.inc:3272 Route132_Text_PaxtonPostBattle
	.globl Route132_Text_PaxtonPostBattle
Route132_Text_PaxtonPostBattle: @ 0x08261D7F
	.string "ばあさんも わしを さがしてるじゃろ\nはよう みつけて やらんと{EOS}"
	.if (. - Route132_Text_PaxtonPostBattle) > 0x21
	.error "Route132_Text_PaxtonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_PaxtonPostBattle) < 0x21
	.space 0x21 - (. - Route132_Text_PaxtonPostBattle)
	.endif
	@ data/text/trainers.inc:3275 Route132_Text_DarcyIntro (+1 aliases)
	.globl Route132_Text_DarcyIntro
Route132_Text_DarcyIntro: @ 0x08261DA0
	.string "ひとりで この ばしょで\nしゅぎょう するのが すきだったのに!\lおおぜい やって くるんだもの ひどい!{EOS}"
	.if (. - Route132_Text_DarcyIntro) > 0x36
	.error "Route132_Text_DarcyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DarcyIntro) < 0x36
	.space 0x36 - (. - Route132_Text_DarcyIntro)
	.endif
	@ data/text/trainers.inc:3278 Route132_Text_DarcyDefeat (+1 aliases)
	.globl Route132_Text_DarcyDefeat
Route132_Text_DarcyDefeat: @ 0x08261DD6
	.string "わかったわよ\nみんなで つかえば いいんでしょ{EOS}"
	.if (. - Route132_Text_DarcyDefeat) > 0x18
	.error "Route132_Text_DarcyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DarcyDefeat) < 0x18
	.space 0x18 - (. - Route132_Text_DarcyDefeat)
	.endif
	@ data/text/trainers.inc:3281 Route132_Text_DarcyPostBattle
	.globl Route132_Text_DarcyPostBattle
Route132_Text_DarcyPostBattle: @ 0x08261DEE
	.string "とりあえず そこの おじいさんと くんで\nむこうの チームに いどんで みようかな?{EOS}"
	.if (. - Route132_Text_DarcyPostBattle) > 0x2b
	.error "Route132_Text_DarcyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route132_Text_DarcyPostBattle) < 0x2b
	.space 0x2b - (. - Route132_Text_DarcyPostBattle)
	.endif
	@ data/text/trainers.inc:3284 Route133_Text_FranklinIntro (+1 aliases)
	.globl Route133_Text_FranklinIntro
Route133_Text_FranklinIntro: @ 0x08261E19
	.string "キミも しおに ながされて きたの?\nこれも なにかの えんだね\lしょうぶ しようよ!{EOS}"
	.if (. - Route133_Text_FranklinIntro) > 0x2c
	.error "Route133_Text_FranklinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_FranklinIntro) < 0x2c
	.space 0x2c - (. - Route133_Text_FranklinIntro)
	.endif
	@ data/text/trainers.inc:3287 Route133_Text_FranklinDefeat (+1 aliases)
	.globl Route133_Text_FranklinDefeat
Route133_Text_FranklinDefeat: @ 0x08261E45
	.string "つよい!\nつよすぎっ!{EOS}"
	.if (. - Route133_Text_FranklinDefeat) > 0xc
	.error "Route133_Text_FranklinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_FranklinDefeat) < 0xc
	.space 0xc - (. - Route133_Text_FranklinDefeat)
	.endif
	@ data/text/trainers.inc:3290 Route133_Text_FranklinPostBattle
	.globl Route133_Text_FranklinPostBattle
Route133_Text_FranklinPostBattle: @ 0x08261E51
	.string "キミみたいな つよい トレーナーが\nながされて くるなんて……\lオレも ツキが ないなぁ……{EOS}"
	.if (. - Route133_Text_FranklinPostBattle) > 0x2f
	.error "Route133_Text_FranklinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_FranklinPostBattle) < 0x2f
	.space 0x2f - (. - Route133_Text_FranklinPostBattle)
	.endif
	@ data/text/trainers.inc:3293 Route133_Text_DebraIntro (+1 aliases)
	.globl Route133_Text_DebraIntro
Route133_Text_DebraIntro: @ 0x08261E80
	.string "わたしは かなしい おんな……\nながれ ながれて ここまで きたの……{EOS}"
	.if (. - Route133_Text_DebraIntro) > 0x24
	.error "Route133_Text_DebraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_DebraIntro) < 0x24
	.space 0x24 - (. - Route133_Text_DebraIntro)
	.endif
	@ data/text/trainers.inc:3296 Route133_Text_DebraDefeat (+1 aliases)
	.globl Route133_Text_DebraDefeat
Route133_Text_DebraDefeat: @ 0x08261EA4
	.string "まけたぁ……{EOS}"
	.if (. - Route133_Text_DebraDefeat) > 0x7
	.error "Route133_Text_DebraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_DebraDefeat) < 0x7
	.space 0x7 - (. - Route133_Text_DebraDefeat)
	.endif
	@ data/text/trainers.inc:3299 Route133_Text_DebraPostBattle
	.globl Route133_Text_DebraPostBattle
Route133_Text_DebraPostBattle: @ 0x08261EAB
	.string "ながされる だけの じんせい なんて……\nもう イヤっ!{EOS}"
	.if (. - Route133_Text_DebraPostBattle) > 0x1d
	.error "Route133_Text_DebraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_DebraPostBattle) < 0x1d
	.space 0x1d - (. - Route133_Text_DebraPostBattle)
	.endif
	@ data/text/trainers.inc:3302 Route133_Text_LindaIntro (+1 aliases)
	.globl Route133_Text_LindaIntro
Route133_Text_LindaIntro: @ 0x08261EC8
	.string "いらっしゃーい!\nおまち してましたわ!{EOS}"
	.if (. - Route133_Text_LindaIntro) > 0x15
	.error "Route133_Text_LindaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_LindaIntro) < 0x15
	.space 0x15 - (. - Route133_Text_LindaIntro)
	.endif
	@ data/text/trainers.inc:3305 Route133_Text_LindaDefeat (+1 aliases)
	.globl Route133_Text_LindaDefeat
Route133_Text_LindaDefeat: @ 0x08261EDD
	.string "いやーん!{EOS}"
	.if (. - Route133_Text_LindaDefeat) > 0x6
	.error "Route133_Text_LindaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_LindaDefeat) < 0x6
	.space 0x6 - (. - Route133_Text_LindaDefeat)
	.endif
	@ data/text/trainers.inc:3308 Route133_Text_LindaPostBattle
	.globl Route133_Text_LindaPostBattle
Route133_Text_LindaPostBattle: @ 0x08261EE3
	.string "つよい こどもの トレーナーなんて……\nおねえさん こまっちゃうぅ!{EOS}"
	.if (. - Route133_Text_LindaPostBattle) > 0x23
	.error "Route133_Text_LindaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_LindaPostBattle) < 0x23
	.space 0x23 - (. - Route133_Text_LindaPostBattle)
	.endif
	@ data/text/trainers.inc:3311 Route133_Text_WarrenIntro (+1 aliases)
	.globl Route133_Text_WarrenIntro
Route133_Text_WarrenIntro: @ 0x08261F06
	.string "かちたいから って\nひとと おなじように そだては しないぜ!{EOS}"
	.if (. - Route133_Text_WarrenIntro) > 0x20
	.error "Route133_Text_WarrenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_WarrenIntro) < 0x20
	.space 0x20 - (. - Route133_Text_WarrenIntro)
	.endif
	@ data/text/trainers.inc:3314 Route133_Text_WarrenDefeat (+1 aliases)
	.globl Route133_Text_WarrenDefeat
Route133_Text_WarrenDefeat: @ 0x08261F26
	.string "くそー!\nおれの やりかたは まだまだ あまい!{EOS}"
	.if (. - Route133_Text_WarrenDefeat) > 0x19
	.error "Route133_Text_WarrenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_WarrenDefeat) < 0x19
	.space 0x19 - (. - Route133_Text_WarrenDefeat)
	.endif
	@ data/text/trainers.inc:3317 Route133_Text_WarrenPostBattle
	.globl Route133_Text_WarrenPostBattle
Route133_Text_WarrenPostBattle: @ 0x08261F3F
	.string "ひとと おなじこと するより\nじぶんの したいこと したほうが\lたのしいに きまってるだろ!{EOS}"
	.if (. - Route133_Text_WarrenPostBattle) > 0x2f
	.error "Route133_Text_WarrenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_WarrenPostBattle) < 0x2f
	.space 0x2f - (. - Route133_Text_WarrenPostBattle)
	.endif
	@ data/text/trainers.inc:3320 Route133_Text_BeckIntro (+1 aliases)
	.globl Route133_Text_BeckIntro
Route133_Text_BeckIntro: @ 0x08261F6E
	.string "とりポケモンと いっしょに\nこんな ところまで きました{EOS}"
	.if (. - Route133_Text_BeckIntro) > 0x1d
	.error "Route133_Text_BeckIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_BeckIntro) < 0x1d
	.space 0x1d - (. - Route133_Text_BeckIntro)
	.endif
	@ data/text/trainers.inc:3323 Route133_Text_BeckDefeat (+1 aliases)
	.globl Route133_Text_BeckDefeat
Route133_Text_BeckDefeat: @ 0x08261F8B
	.string "きみ……\nなんて かっこいいんだ!{EOS}"
	.if (. - Route133_Text_BeckDefeat) > 0x12
	.error "Route133_Text_BeckDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_BeckDefeat) < 0x12
	.space 0x12 - (. - Route133_Text_BeckDefeat)
	.endif
	@ data/text/trainers.inc:3326 Route133_Text_BeckPostBattle
	.globl Route133_Text_BeckPostBattle
Route133_Text_BeckPostBattle: @ 0x08261F9D
	.string "そろそろ ヒワマキに かえりたいけど\nなんとなく ここ すきに なっちゃったぞ!?{EOS}"
	.if (. - Route133_Text_BeckPostBattle) > 0x2a
	.error "Route133_Text_BeckPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_BeckPostBattle) < 0x2a
	.space 0x2a - (. - Route133_Text_BeckPostBattle)
	.endif
	@ data/text/trainers.inc:3329 Route133_Text_MollieIntro (+1 aliases)
	.globl Route133_Text_MollieIntro
Route133_Text_MollieIntro: @ 0x08261FC7
	.string "いままでに なんぜんかい\nポケモン しょうぶを したかねえ{EOS}"
	.if (. - Route133_Text_MollieIntro) > 0x1e
	.error "Route133_Text_MollieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_MollieIntro) < 0x1e
	.space 0x1e - (. - Route133_Text_MollieIntro)
	.endif
	@ data/text/trainers.inc:3332 Route133_Text_MollieDefeat (+1 aliases)
	.globl Route133_Text_MollieDefeat
Route133_Text_MollieDefeat: @ 0x08261FE5
	.string "なんぜんかい まけても\nくやしい もんは くやしいでね{EOS}"
	.if (. - Route133_Text_MollieDefeat) > 0x1c
	.error "Route133_Text_MollieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_MollieDefeat) < 0x1c
	.space 0x1c - (. - Route133_Text_MollieDefeat)
	.endif
	@ data/text/trainers.inc:3335 Route133_Text_MolliePostBattle
	.globl Route133_Text_MolliePostBattle
Route133_Text_MolliePostBattle: @ 0x08262001
	.string "わたいや じいさんのような\nたつじんを めざして がんばんなせえ{EOS}"
	.if (. - Route133_Text_MolliePostBattle) > 0x21
	.error "Route133_Text_MolliePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_MolliePostBattle) < 0x21
	.space 0x21 - (. - Route133_Text_MolliePostBattle)
	.endif
	@ data/text/trainers.inc:3338 Route133_Text_ConorIntro (+1 aliases)
	.globl Route133_Text_ConorIntro
Route133_Text_ConorIntro: @ 0x08262022
	.string "わかい やつらは\nながされて ばっかりで なさけねぇ!{EOS}"
	.if (. - Route133_Text_ConorIntro) > 0x1c
	.error "Route133_Text_ConorIntro may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_ConorIntro) < 0x1c
	.space 0x1c - (. - Route133_Text_ConorIntro)
	.endif
	@ data/text/trainers.inc:3341 Route133_Text_ConorDefeat (+1 aliases)
	.globl Route133_Text_ConorDefeat
Route133_Text_ConorDefeat: @ 0x0826203E
	.string "きみは しっかりしとるな{EOS}"
	.if (. - Route133_Text_ConorDefeat) > 0xd
	.error "Route133_Text_ConorDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_ConorDefeat) < 0xd
	.space 0xd - (. - Route133_Text_ConorDefeat)
	.endif
	@ data/text/trainers.inc:3344 Route133_Text_ConorPostBattle
	.globl Route133_Text_ConorPostBattle
Route133_Text_ConorPostBattle: @ 0x0826204B
	.string "まわりに ながされず\nしっかりした おとなに なんなさい!{EOS}"
	.if (. - Route133_Text_ConorPostBattle) > 0x1e
	.error "Route133_Text_ConorPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route133_Text_ConorPostBattle) < 0x1e
	.space 0x1e - (. - Route133_Text_ConorPostBattle)
	.endif
	@ data/text/trainers.inc:3347 Route134_Text_JackIntro (+1 aliases)
	.globl Route134_Text_JackIntro
Route134_Text_JackIntro: @ 0x08262069
	.string "およぎの とくいな ポケモンだって\nながされる しおの ながれだ!{EOS}"
	.if (. - Route134_Text_JackIntro) > 0x22
	.error "Route134_Text_JackIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_JackIntro) < 0x22
	.space 0x22 - (. - Route134_Text_JackIntro)
	.endif
	@ data/text/trainers.inc:3350 Route134_Text_JackDefeat (+1 aliases)
	.globl Route134_Text_JackDefeat
Route134_Text_JackDefeat: @ 0x0826208B
	.string "ひえーっ!{EOS}"
	.if (. - Route134_Text_JackDefeat) > 0x6
	.error "Route134_Text_JackDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_JackDefeat) < 0x6
	.space 0x6 - (. - Route134_Text_JackDefeat)
	.endif
	@ data/text/trainers.inc:3353 Route134_Text_JackPostBattle
	.globl Route134_Text_JackPostBattle
Route134_Text_JackPostBattle: @ 0x08262091
	.string "ポケモンたちは この ながれを\nたのしんでる みたいだよ!{EOS}"
	.if (. - Route134_Text_JackPostBattle) > 0x1e
	.error "Route134_Text_JackPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_JackPostBattle) < 0x1e
	.space 0x1e - (. - Route134_Text_JackPostBattle)
	.endif
	@ data/text/trainers.inc:3356 Route134_Text_LaurelIntro (+1 aliases)
	.globl Route134_Text_LaurelIntro
Route134_Text_LaurelIntro: @ 0x082620AF
	.string "わたしの ラブカスたちと\nたのしく しょうぶ しましょうよ!{EOS}"
	.if (. - Route134_Text_LaurelIntro) > 0x1f
	.error "Route134_Text_LaurelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_LaurelIntro) < 0x1f
	.space 0x1f - (. - Route134_Text_LaurelIntro)
	.endif
	@ data/text/trainers.inc:3359 Route134_Text_LaurelDefeat (+1 aliases)
	.globl Route134_Text_LaurelDefeat
Route134_Text_LaurelDefeat: @ 0x082620CE
	.string "あらららららっ!{EOS}"
	.if (. - Route134_Text_LaurelDefeat) > 0x9
	.error "Route134_Text_LaurelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_LaurelDefeat) < 0x9
	.space 0x9 - (. - Route134_Text_LaurelDefeat)
	.endif
	@ data/text/trainers.inc:3362 Route134_Text_LaurelPostBattle
	.globl Route134_Text_LaurelPostBattle
Route134_Text_LaurelPostBattle: @ 0x082620D7
	.string "どこかの マニアが\nラブカスの ウロコを あつめてるのよねー{EOS}"
	.if (. - Route134_Text_LaurelPostBattle) > 0x1f
	.error "Route134_Text_LaurelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_LaurelPostBattle) < 0x1f
	.space 0x1f - (. - Route134_Text_LaurelPostBattle)
	.endif
	@ data/text/trainers.inc:3365 Route134_Text_AlexIntro (+1 aliases)
	.globl Route134_Text_AlexIntro
Route134_Text_AlexIntro: @ 0x082620F6
	.string "よーしっ! きゅうけい おわり!\nポケモンしょうぶ しようぜ!{EOS}"
	.if (. - Route134_Text_AlexIntro) > 0x20
	.error "Route134_Text_AlexIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AlexIntro) < 0x20
	.space 0x20 - (. - Route134_Text_AlexIntro)
	.endif
	@ data/text/trainers.inc:3368 Route134_Text_AlexDefeat (+1 aliases)
	.globl Route134_Text_AlexDefeat
Route134_Text_AlexDefeat: @ 0x08262116
	.string "また バテた……{EOS}"
	.if (. - Route134_Text_AlexDefeat) > 0x9
	.error "Route134_Text_AlexDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AlexDefeat) < 0x9
	.space 0x9 - (. - Route134_Text_AlexDefeat)
	.endif
	@ data/text/trainers.inc:3371 Route134_Text_AlexPostBattle
	.globl Route134_Text_AlexPostBattle
Route134_Text_AlexPostBattle: @ 0x0826211F
	.string "オレの とりポケモンたち……\nながいあいだ とぶと すぐに バテるんだ{EOS}"
	.if (. - Route134_Text_AlexPostBattle) > 0x24
	.error "Route134_Text_AlexPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_AlexPostBattle) < 0x24
	.space 0x24 - (. - Route134_Text_AlexPostBattle)
	.endif
	@ data/text/trainers.inc:3374 Route134_Text_HitoshiIntro (+1 aliases)
	.globl Route134_Text_HitoshiIntro
Route134_Text_HitoshiIntro: @ 0x08262143
	.string "ポケモントレーナーなら\nだまって ポケモンしょうぶ!{EOS}"
	.if (. - Route134_Text_HitoshiIntro) > 0x1b
	.error "Route134_Text_HitoshiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route134_Text_HitoshiIntro) < 0x1b
	.space 0x1b - (. - Route134_Text_HitoshiIntro)
	.endif
