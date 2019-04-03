struct address
    {
        char *present;
        char *permanent;
    };
    struct patient_data
    {
        int id;
        int age;
        char *blood_group;
        char *name;
        char *gender;
        char *mobile_no;
        struct address give;
        char *doctorr;
        char *diseasess;
    };
    struct doctor
    {
        int age;
        int id;
        char nam[30];
        char department[20];
        char time[30];
        char mob[30];
    };
    struct staff
    {
        int id;
        int age;
        char namel[34];
        char mobil[35];
    };
