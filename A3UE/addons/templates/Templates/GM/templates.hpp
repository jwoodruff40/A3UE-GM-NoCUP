    // ***************************** Global Mobilization with SOG:PF instead of CUP *****************************

    class GM_Base;
    class GM_NoCUP_Base : GM_Base
    {
        requiredAddons[] = {"gm_weapons_items", "vn_weapons"};
        logo = "\dmo_dcx_vn\_core\data\logos\dcx_vn_logo_ca.paa";
        basepath = QPATHTOFOLDER(Templates\GM);
        equipFlags[] = {"specialGM", "lowTech","replaceCompass","replaceWatch"};
        forceDLC[] = {"gm", "vn"};
    };

    class GM_NoCUP_NVA : GM_NoCUP_Base
    {
        side = "Inv";
        flagTexture = "\gm\gm_core\data\flags\gm_flag_gc_co";
        name = "GM Nationale Volksarmee Temperate";
        file = "GM_AI_NVA";
        climate[] = {"temperate","tropical","arid"};
        description = "GM NVA with SOG:PF content substituted for CUP.";
    };

    class GM_NVA_Arctic : GM_NoCUP_NVA
    {
        name = "GM Nationale Volksarmee Arctic";
        file = "GM_AI_NVA_arctic";
        climate[] = {"arctic"};
        description = "GM NVA Arctic with SOG:PF content substituted for CUP.";
    };

    class GM_NoCUP_BW : GM_NoCUP_Base
    {
        side = "Occ";
        flagTexture = "\gm\gm_core\data\flags\gm_flag_ge_co";
        name = "GM Bundeswehr Temperate";
        file = "GM_AI_BW";
        climate[] = {"temperate","tropical","arid"};
        description = "GM Bundeswehr with SOG:PF content substituted for CUP.";
    };

    class GM_BW_Arctic : GM_NoCUP_BW
    {
        name = "GM Bundeswehr Arctic";
        file = "GM_AI_BW_arctic";
        climate[] = {"arctic"};
        description = "GM Bundeswehr Arctic with SOG:PF content substituted for CUP.";
    };

    class GM_NoCUP_Reb : GM_NoCUP_Base
    {
        side = "Reb";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "GM FIA";
        file = "GM_Reb";
        description = "GM FIA with SOG:PF content substituted for CUP.";
    };

    class GM_NoCUP_Civ : GM_NoCUP_Base
    {
        side = "Civ";
        flagTexture = "a3\data_f\flags\flag_fia_co.paa";
        name = "GM civs";
        file = "GM_Civ";
        description = "GM Civs with SOG:PF content substituted for CUP.";
    };
    class GM_NoCUP_VSBD : GM_NoCUP_Base
    {
        side = "Riv";
        flagTexture = "\x\A3A\addons\core\Templates\Templates\GM\flag_VSBD.paa";
        name = "GM VSBD";
        file = "GM_Riv_VSBD";
        description = "GM VSBD with SOG:PF content substituted for CUP.";
    };
